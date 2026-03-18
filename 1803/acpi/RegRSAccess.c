/*
 * XREFs of RegRSAccess @ 0x1C0047BD4
 * Callers:
 *     AMLIRegEventHandler @ 0x1C0044038 (AMLIRegEventHandler.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     FindRSAccess @ 0x1C00467E8 (FindRSAccess.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall RegRSAccess(unsigned int a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 RSAccess; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v11; // edi
  unsigned int v12; // edx
  int v13; // ecx

  v4 = 0;
  if ( a1 < 2 )
  {
    v11 = -1072431088;
    LogError(3222536208LL);
    AcpiDiagTraceAmlError(0LL, -1072431088);
    v13 = 170;
    goto LABEL_16;
  }
  RSAccess = FindRSAccess(a1);
  if ( !RSAccess )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x526C6D41u);
    RSAccess = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v11 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(0LL, -1073741670);
      v12 = 0;
      v13 = 169;
LABEL_17:
      PrintDebugMessage(v13, v12, 0, 0, 0LL);
      return v11;
    }
    memset(PoolWithTag, 0, 0x30uLL);
    *(_QWORD *)RSAccess = gpRSAccessHead;
    *(_DWORD *)(RSAccess + 8) = a1;
    gpRSAccessHead = RSAccess;
  }
  if ( a4 )
  {
    if ( *(_QWORD *)(RSAccess + 32) && a2 )
    {
      v11 = -1072431090;
      LogError(3222536206LL);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      v13 = 171;
LABEL_16:
      v12 = a1;
      goto LABEL_17;
    }
    *(_QWORD *)(RSAccess + 32) = a2;
    *(_QWORD *)(RSAccess + 40) = a3;
  }
  else
  {
    if ( *(_QWORD *)(RSAccess + 16) && a2 )
    {
      v11 = -1072431090;
      LogError(3222536206LL);
      AcpiDiagTraceAmlError(0LL, -1072431090);
      v13 = 168;
      goto LABEL_16;
    }
    *(_QWORD *)(RSAccess + 16) = a2;
    *(_QWORD *)(RSAccess + 24) = a3;
  }
  return v4;
}
