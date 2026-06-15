/*
 * XREFs of PubSebLevelEvent @ 0x1800284C0
 * Callers:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180026DA4 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180057F30 (_alloca_probe.c)
 */

__int64 __fastcall PubSebLevelEvent(__int64 a1, unsigned __int8 a2)
{
  _DWORD v3[1024]; // [rsp+30h] [rbp-1018h] BYREF

  v3[1] = -1;
  if ( a2 > 1u )
    v3[0] = v3[0] & 0xFE000000 | 1 | (a2 != 0 ? 2 : 0) | (a2 << 14);
  else
    v3[0] = v3[0] & 0xFE000000 | 1 | (a2 != 0 ? 2 : 0);
  return RtlPublishWnfStateData(a1, 0LL, v3, 8LL, 0LL);
}
