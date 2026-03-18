/*
 * XREFs of PoEnergyContextStart @ 0x1405597BC
 * Callers:
 *     PspInsertThread @ 0x1404B7C74 (PspInsertThread.c)
 *     PopEtInit @ 0x1408C3458 (PopEtInit.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection @ 0x140105490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1401054C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x140559898 (PopEtGetProcessAppId.c)
 */

__int64 __fastcall PoEnergyContextStart(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rbp
  char v2; // si
  struct _EX_RUNDOWN_REF *v4; // rbx
  int ProcessAppId; // edi
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 1856);
  v2 = 0;
  if ( PopEtGlobals )
  {
    v4 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
        return (unsigned int)-1073741558;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v7);
      v2 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId(BugCheckParameter1, v1 + 448);
    if ( ProcessAppId >= 0 )
      ProcessAppId = 0;
    if ( v2 )
    {
      KiUnstackDetachProcess((__int64)v7, 0LL);
      ExReleaseRundownProtection(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
