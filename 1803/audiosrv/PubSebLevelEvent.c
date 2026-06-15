/*
 * XREFs of PubSebLevelEvent @ 0x180017CE0
 * Callers:
 *     ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180029990 (-AcquireSebReference@CSebNotifier@@QEAA-AV-$shared_ptr@VCSebReference@@@std@@XZ.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180049554 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180065740 (_alloca_probe.c)
 */

__int64 __fastcall PubSebLevelEvent(__int64 a1, unsigned __int8 a2)
{
  _DWORD v3[1024]; // [rsp+30h] [rbp-1018h] BYREF

  v3[1] = -1;
  if ( a2 > 1u )
    v3[0] = (a2 != 0 ? 3 : 1) | (a2 << 14);
  else
    v3[0] = a2 != 0 ? 3 : 1;
  return RtlPublishWnfStateData(a1, 0LL, v3, 8LL, 0LL);
}
