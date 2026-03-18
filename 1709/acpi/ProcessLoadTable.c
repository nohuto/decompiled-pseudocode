/*
 * XREFs of ProcessLoadTable @ 0x1C0062100
 * Callers:
 *     <none>
 * Callees:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     ValidateArgTypes @ 0x1C000C6D0 (ValidateArgTypes.c)
 *     FreeObjData @ 0x1C000CD80 (FreeObjData.c)
 *     HeapFree @ 0x1C000D8A0 (HeapFree.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     RtlStringCchCopyNA @ 0x1C0027174 (RtlStringCchCopyNA.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 */

__int64 __fastcall ProcessLoadTable(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3)
{
  const char *v3; // r12
  void *v4; // r14
  int v5; // ebx
  __int64 v6; // r13
  ULONG_PTR v9; // rdi
  int v10; // eax
  const char *v11; // rbp
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // r14
  char *PoolWithTag; // rax
  char *v17; // rbp
  int v18; // ecx
  char *v19; // rax
  int NameSpaceObject; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v26; // rbx
  int v27; // eax
  void *v28; // [rsp+40h] [rbp-48h]
  const char *pszSrc; // [rsp+98h] [rbp+10h]
  unsigned int v30; // [rsp+A0h] [rbp+18h]
  __int64 v31; // [rsp+A8h] [rbp+20h] BYREF

  v31 = 0LL;
  v3 = 0LL;
  v4 = (void *)a2[4];
  v5 = a3;
  v6 = a2[5];
  v28 = v4;
  if ( a3 )
  {
    v9 = 1LL;
    goto LABEL_44;
  }
  if ( (gdwfAMLIInit & 2) != 0 )
  {
    PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
    AMLIDebugger();
  }
  if ( *(_DWORD *)(v6 + 76) < 4u )
  {
    v11 = "\\";
  }
  else
  {
    v10 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v6 + 80) + 120LL, 0, "Z");
    v5 = v10;
    if ( v10 )
    {
      LogError(v10);
      AcpiDiagTraceAmlError(BugCheckParameter2, v5);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v9 = 5LL;
      goto LABEL_44;
    }
    v11 = *(const char **)(*(_QWORD *)(v6 + 80) + 152LL);
  }
  pszSrc = v11;
  if ( *(_DWORD *)(v6 + 76) >= 5u )
  {
    v12 = ValidateArgTypes(BugCheckParameter2, *(_QWORD *)(v6 + 80) + 160LL, 0, "Z");
    v5 = v12;
    if ( v12 )
    {
      LogError(v12);
      AcpiDiagTraceAmlError(BugCheckParameter2, v5);
      PrintDebugMessage(148, 0LL, 0LL, 0LL, 0LL);
      v9 = 6LL;
      goto LABEL_44;
    }
    v3 = *(const char **)(*(_QWORD *)(v6 + 80) + 192LL);
  }
  v13 = *(_DWORD *)(v6 + 76);
  if ( v13 >= 5 && v3 && *v3 )
  {
    if ( v13 < 6 )
    {
      v5 = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(BugCheckParameter2, -1072431098);
      PrintDebugMessage(150, 0LL, 0LL, 0LL, 0LL);
      v9 = 7LL;
      goto LABEL_44;
    }
    v14 = -1LL;
    if ( ((*v3 - 92) & 0xFD) != 0 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v11[v15] );
      do
        ++v14;
      while ( v3[v14] );
      v30 = v14 + v15 + 2;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v30, 0x496C6D41u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
        v18 = 86;
LABEL_25:
        PrintDebugMessage(v18, 0LL, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        v9 = 4LL;
        *(_QWORD *)(a2[6] + 16LL) = 0LL;
        goto LABEL_44;
      }
      RtlStringCchCopyNA(PoolWithTag, (unsigned int)(v14 + v15 + 2), pszSrc, (unsigned int)v15);
      if ( pszSrc[(unsigned int)v15 - 1] != 92 )
      {
        v17[(unsigned int)v15] = 46;
        LODWORD(v15) = v15 + 1;
      }
      RtlStringCchCopyNA(&v17[(unsigned int)v15], v30 - (unsigned int)v15, v3, (unsigned int)v14);
      v17[(unsigned int)(v14 + v15)] = 0;
    }
    else
    {
      do
        ++v14;
      while ( v3[v14] );
      v19 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v14 + 1), 0x496C6D41u);
      v17 = v19;
      if ( !v19 )
      {
        v5 = -1073741670;
        LogError(-1073741670);
        AcpiDiagTraceAmlError(BugCheckParameter2, -1073741670);
        v18 = 92;
        goto LABEL_25;
      }
      RtlStringCchCopyNA(v19, (unsigned int)(v14 + 1), v3, (unsigned int)v14);
    }
    NameSpaceObject = GetNameSpaceObject(v17, *(_QWORD *)(BugCheckParameter2 + 80), (__int64)&v31, 0x80000000);
    v5 = NameSpaceObject;
    if ( NameSpaceObject )
    {
      LogError(NameSpaceObject);
      AcpiDiagTraceAmlError(BugCheckParameter2, v5);
      PrintDebugMessage(92, v17, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      v9 = 2LL;
LABEL_43:
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
LABEL_44:
      KeBugCheckEx(0xA5u, 0x15uLL, BugCheckParameter2, v9, v5);
    }
    if ( v31 == gpnsNameSpaceRoot )
    {
      LogError(0);
      AcpiDiagTraceAmlError(BugCheckParameter2, 0);
      PrintDebugMessage(97, 0LL, 0LL, 0LL, 0LL);
      *(_WORD *)(a2[6] + 2LL) = 1;
      *(_QWORD *)(a2[6] + 16LL) = 0LL;
    }
    else
    {
      v26 = v31 + 64;
      FreeObjData(v31 + 64, v21, v22, v23);
      v27 = DupObjData(gpheapGlobal, v26, *(_QWORD *)(v6 + 80) + 200LL);
      v5 = v27;
      if ( v27 )
      {
        LogError(v27);
        AcpiDiagTraceAmlError(BugCheckParameter2, v5);
        PrintDebugMessage(88, 0LL, 0LL, 0LL, 0LL);
        *(_WORD *)(a2[6] + 2LL) = 1;
        v9 = 3LL;
        goto LABEL_43;
      }
    }
    ExFreePoolWithTag(v17, 0);
    v4 = v28;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v24 = *(_QWORD *)(BugCheckParameter2 + 416);
  *(_QWORD *)(BugCheckParameter2 + 416) = *(_QWORD *)(v24 + 8);
  HeapFree(v24);
  return (unsigned int)v5;
}
