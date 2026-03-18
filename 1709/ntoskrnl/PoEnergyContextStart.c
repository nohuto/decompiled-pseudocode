/*
 * XREFs of PoEnergyContextStart @ 0x1404589DC
 * Callers:
 *     PspInsertThread @ 0x1404D54CC (PspInsertThread.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x140081770 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x1400817A0 (ExReleaseRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x140458AB8 (PopEtGetProcessAppId.c)
 */

__int64 __fastcall PoEnergyContextStart(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rdi
  char v3; // si
  int ProcessAppId; // edi
  $709EDFC2F9E0D4565D6AA3C4377BC643 v6; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 1856);
  v3 = 0;
  if ( PopEtGlobals )
  {
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
        return (unsigned int)-1073741558;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v6);
      v3 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId(BugCheckParameter1, v1 + 448);
    if ( ProcessAppId >= 0 )
      ProcessAppId = 0;
    if ( v3 )
    {
      KiUnstackDetachProcess(&v6, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
