/*
 * XREFs of LoadTable @ 0x1C00615E0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C000C6D0 (ValidateArgTypes.c)
 *     LoadDDB @ 0x1C001524C (LoadDDB.c)
 *     PushPost @ 0x1C0018BF8 (PushPost.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall LoadTable(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r15
  unsigned int DDB; // ebx
  __int64 v7; // rbx
  PVOID PoolWithTag; // r13
  unsigned int v9; // r12d
  const void *v10; // rcx
  unsigned int v11; // edi
  int v12; // eax
  unsigned __int64 v13; // rdx
  int v14; // ecx
  unsigned int v15; // r12d
  int v16; // eax
  int v17; // ecx
  char *v18; // r12
  int v19; // eax
  int v20; // ecx
  int NameSpaceObject; // eax
  int v22; // eax
  __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  const void *v25; // [rsp+40h] [rbp-20h]
  const void *v26; // [rsp+48h] [rbp-18h]
  const void *v27; // [rsp+50h] [rbp-10h]
  SIZE_T NumberOfBytes; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v29; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+58h]

  v3 = *(_QWORD *)(a2 + 80);
  v4 = 0LL;
  v24 = 0LL;
  DDB = ValidateArgTypes((__int64)a1, v3, 0, "ZZZ");
  if ( DDB )
    return DDB;
  LODWORD(NumberOfBytes) = 0;
  v7 = *(_QWORD *)(a2 + 80);
  PoolWithTag = 0LL;
  v9 = *(_DWORD *)(v7 + 24) - 1;
  v10 = *(const void **)(v7 + 32);
  v11 = *(_DWORD *)(v7 + 104) - 1;
  v26 = *(const void **)(v7 + 72);
  v25 = *(const void **)(v7 + 112);
  v12 = *(_DWORD *)(v7 + 64) - 1;
  v27 = v10;
  v30 = v12;
  if ( v9 > 4 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v13 = v9;
    v14 = 100;
LABEL_4:
    PrintDebugMessage(v14, (const void *)v13, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431098;
  }
  v29 = 0;
  memmove(&v29, v10, v9);
  v15 = v30;
  if ( v30 > 6 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v13 = v15;
    v14 = 96;
    goto LABEL_4;
  }
  if ( v11 > 8 )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v13 = v11;
LABEL_9:
    v14 = 101;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(a2 + 76) < 4u )
  {
    v18 = "\\";
  }
  else
  {
    v16 = ValidateArgTypes((__int64)a1, v7 + 120, 0, "Z");
    DDB = v16;
    if ( v16 )
    {
      LogError(v16);
      AcpiDiagTraceAmlError((__int64)a1, DDB);
      v17 = 99;
LABEL_13:
      PrintDebugMessage(v17, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_42;
    }
    v18 = *(char **)(*(_QWORD *)(a2 + 80) + 152LL);
  }
  if ( *(_DWORD *)(a2 + 76) >= 5u )
  {
    v19 = ValidateArgTypes((__int64)a1, *(_QWORD *)(a2 + 80) + 160LL, 0, "Z");
    DDB = v19;
    if ( v19 )
    {
      LogError(v19);
      AcpiDiagTraceAmlError((__int64)a1, DDB);
      v17 = 98;
      goto LABEL_13;
    }
    if ( *(_DWORD *)(a2 + 76) < 6u )
    {
      LogError(-1072431098);
      AcpiDiagTraceAmlError((__int64)a1, -1072431098);
      v13 = 0LL;
      goto LABEL_9;
    }
  }
  if ( ghMapTable )
  {
    DDB = ghMapTable(v29, v26, v25, 0LL, &NumberOfBytes);
  }
  else
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    PrintDebugMessage(94, 0LL, 0LL, 0LL, 0LL);
    DDB = -1072431098;
  }
  if ( DDB != -1073741789 )
  {
    if ( DDB == -1073741275 )
      DDB = -1073741772;
    goto LABEL_41;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x426C6D41u);
  if ( !PoolWithTag )
  {
    LogError(-1073741670);
    AcpiDiagTraceAmlError((__int64)a1, -1073741670);
    v20 = 87;
LABEL_27:
    PrintDebugMessage(v20, 0LL, 0LL, 0LL, 0LL);
LABEL_41:
    LogError(DDB);
    AcpiDiagTraceAmlError((__int64)a1, DDB);
    PrintDebugMessage(89, v27, v26, v25, 0LL);
    *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 1;
    *(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) = 0LL;
    goto LABEL_42;
  }
  if ( ghMapTable )
    DDB = ghMapTable(v29, v26, v25, PoolWithTag, &NumberOfBytes);
  else
    DDB = -1072431098;
  if ( DDB )
  {
    LogError(-1072431098);
    AcpiDiagTraceAmlError((__int64)a1, -1072431098);
    v20 = 91;
    goto LABEL_27;
  }
  NameSpaceObject = GetNameSpaceObject(v18, a1[10], (__int64)&v24, 0x80000000);
  DDB = NameSpaceObject;
  if ( NameSpaceObject )
  {
    LogError(NameSpaceObject);
    AcpiDiagTraceAmlError((__int64)a1, DDB);
    PrintDebugMessage(93, v18, 0LL, 0LL, 0LL);
  }
  else
  {
    v22 = PushPost((__int64)a1, (__int64)ProcessLoadTable, (__int64)PoolWithTag, a2, *(_QWORD *)(a2 + 88));
    DDB = v22;
    if ( !v22 )
    {
      DDB = LoadDDB(a1, (__int64)PoolWithTag, v24, *(_QWORD *)(a2 + 88));
      DereferenceObjectEx(v24);
      goto LABEL_42;
    }
    LogError(v22);
    AcpiDiagTraceAmlError((__int64)a1, DDB);
    PrintDebugMessage(90, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = v24;
LABEL_42:
  if ( DDB && PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v4 )
    DereferenceObjectEx(v4);
  return DDB;
}
