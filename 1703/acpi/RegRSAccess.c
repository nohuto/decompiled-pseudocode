/*
 * XREFs of RegRSAccess @ 0x1C00271C8
 * Callers:
 *     AMLIRegEventHandler @ 0x1C0026FB4 (AMLIRegEventHandler.c)
 * Callees:
 *     FindRSAccess @ 0x1C0017018 (FindRSAccess.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall RegRSAccess(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  const void *v5; // rbp
  __int64 RSAccess; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v12; // edi
  const void *v13; // rdx
  int v14; // ecx

  v4 = 0;
  v5 = (const void *)a1;
  if ( a1 < 2 )
  {
    v12 = -1072431088;
    LogError(-1072431088);
    AcpiDiagTraceAmlError(0LL, -1072431088);
    v14 = 170;
    goto LABEL_17;
  }
  RSAccess = FindRSAccess(a1);
  if ( !RSAccess )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x526C6D41u);
    RSAccess = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v13 = 0LL;
      v14 = 169;
LABEL_18:
      PrintDebugMessage(v14, v13, 0LL, 0LL, 0LL);
      return v12;
    }
    memset(PoolWithTag, 0, 0x30uLL);
    *(_QWORD *)RSAccess = gpRSAccessHead;
    *(_DWORD *)(RSAccess + 8) = (_DWORD)v5;
    gpRSAccessHead = RSAccess;
  }
  if ( a4 )
  {
    if ( *(_QWORD *)(RSAccess + 32) && a2 )
    {
      v12 = -1072431090;
      LogError(-1072431090);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      v14 = 171;
LABEL_17:
      v13 = v5;
      goto LABEL_18;
    }
    *(_QWORD *)(RSAccess + 32) = a2;
    *(_QWORD *)(RSAccess + 40) = a3;
  }
  else
  {
    if ( *(_QWORD *)(RSAccess + 16) && a2 )
    {
      v12 = -1072431090;
      LogError(-1072431090);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      v14 = 168;
      goto LABEL_17;
    }
    *(_QWORD *)(RSAccess + 16) = a2;
    *(_QWORD *)(RSAccess + 24) = a3;
  }
  return v4;
}
