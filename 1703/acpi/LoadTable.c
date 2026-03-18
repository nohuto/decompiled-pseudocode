/*
 * XREFs of LoadTable @ 0x1C00603E0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     PushPost @ 0x1C001CC98 (PushPost.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     LoadDDB @ 0x1C001D980 (LoadDDB.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall LoadTable(__int64 a1, __int64 a2)
{
  unsigned int DDB; // ebx
  __int64 v5; // rbx
  char *PoolWithTag; // r13
  unsigned int v7; // r12d
  const void *v8; // rcx
  unsigned int v9; // edi
  unsigned __int64 v10; // rdx
  int v11; // ecx
  unsigned int v12; // r12d
  int v13; // eax
  int v14; // ecx
  char *v15; // r12
  int v16; // eax
  int v17; // ecx
  int NameSpaceObject; // eax
  int v19; // eax
  const void *v21; // [rsp+40h] [rbp-20h]
  const void *v22; // [rsp+48h] [rbp-18h]
  const void *v23; // [rsp+50h] [rbp-10h]
  SIZE_T NumberOfBytes; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+58h]

  DDB = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"ZZZ");
  if ( DDB )
    return DDB;
  LODWORD(NumberOfBytes) = 0;
  v5 = *(_QWORD *)(a2 + 80);
  PoolWithTag = 0LL;
  v7 = *(_DWORD *)(v5 + 24) - 1;
  v8 = *(const void **)(v5 + 32);
  v9 = *(_DWORD *)(v5 + 104) - 1;
  v22 = *(const void **)(v5 + 72);
  v21 = *(const void **)(v5 + 112);
  v23 = v8;
  v26 = *(_DWORD *)(v5 + 64) - 1;
  if ( v7 > 4 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v10 = v7;
    v11 = 100;
LABEL_4:
    PrintDebugMessage(v11, (const void *)v10, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431098;
  }
  v25 = 0;
  memmove(&v25, v8, v7);
  v12 = v26;
  if ( v26 > 6 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v10 = v12;
    v11 = 96;
    goto LABEL_4;
  }
  if ( v9 > 8 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v10 = v9;
LABEL_9:
    v11 = 101;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 76) < 4u )
  {
    v15 = "\\";
  }
  else
  {
    v13 = ValidateArgTypes(a1, v5 + 120, 0, (__int64)"Z");
    DDB = v13;
    if ( v13 )
    {
      LogError(v13);
      AcpiDiagTraceAmlError(a1, DDB);
      v14 = 99;
LABEL_13:
      PrintDebugMessage(v14, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_41;
    }
    v15 = *(char **)(*(_QWORD *)(a2 + 80) + 152LL);
  }
  if ( *(_DWORD *)(a2 + 76) >= 5u )
  {
    v16 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80) + 160LL, 0, (__int64)"Z");
    DDB = v16;
    if ( v16 )
    {
      LogError(v16);
      AcpiDiagTraceAmlError(a1, DDB);
      v14 = 98;
      goto LABEL_13;
    }
    if ( *(_DWORD *)(a2 + 76) < 6u )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      v10 = 0LL;
      goto LABEL_9;
    }
  }
  if ( ghMapTable )
  {
    DDB = ghMapTable(v25, v22, v21, 0LL, &NumberOfBytes);
  }
  else
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    PrintDebugMessage(94, 0LL, 0LL, 0LL, 0LL);
    DDB = -1072431098;
  }
  if ( DDB != -1073741789 )
  {
    if ( DDB == -1073741275 )
      DDB = -1073741772;
    goto LABEL_40;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x426C6D41u);
  if ( !PoolWithTag )
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError(a1, -1073741670);
    v17 = 87;
LABEL_27:
    PrintDebugMessage(v17, 0LL, 0LL, 0LL, 0LL);
LABEL_40:
    LogError(DDB);
    AcpiDiagTraceAmlError(a1, DDB);
    PrintDebugMessage(89, v23, v22, v21, 0LL);
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    goto LABEL_41;
  }
  if ( ghMapTable )
    DDB = ghMapTable(v25, v22, v21, PoolWithTag, &NumberOfBytes);
  else
    DDB = -1072431098;
  if ( DDB )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError(a1, -1072431098);
    v17 = 91;
    goto LABEL_27;
  }
  NameSpaceObject = GetNameSpaceObject(v15);
  DDB = NameSpaceObject;
  if ( NameSpaceObject )
  {
    LogError(NameSpaceObject);
    AcpiDiagTraceAmlError(a1, DDB);
    PrintDebugMessage(93, v15, 0LL, 0LL, 0LL);
  }
  else
  {
    v19 = PushPost(a1, (int)ProcessLoadTable, (__int64)PoolWithTag, a2, *(_QWORD *)(a2 + 88));
    DDB = v19;
    if ( v19 )
    {
      LogError(v19);
      AcpiDiagTraceAmlError(a1, DDB);
      PrintDebugMessage(90, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      DDB = LoadDDB(a1, PoolWithTag, 0LL, *(_QWORD *)(a2 + 88));
      DereferenceObjectEx(0LL);
    }
  }
LABEL_41:
  if ( DDB && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return DDB;
}
