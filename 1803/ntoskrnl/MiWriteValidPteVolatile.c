/*
 * XREFs of MiWriteValidPteVolatile @ 0x1401259B0
 * Callers:
 *     MiAgePteWorker @ 0x140013050 (MiAgePteWorker.c)
 *     MiDispatchFault @ 0x14001D2A0 (MiDispatchFault.c)
 *     MiCheckProtoPtePageState @ 0x140031B60 (MiCheckProtoPtePageState.c)
 *     MiLockOwnedProtoPage @ 0x1400322A0 (MiLockOwnedProtoPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14004FA88 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiMakePageAvoidRead @ 0x140110E10 (MiMakePageAvoidRead.c)
 *     MmCheckCachedPageStates @ 0x14011E3C0 (MmCheckCachedPageStates.c)
 *     MiSetReadOnlyOnSectionView @ 0x140124DF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetVaAge @ 0x140125600 (MiSetVaAge.c)
 *     MiLockCode @ 0x14013AB00 (MiLockCode.c)
 *     MiWriteWsle @ 0x14013FAB0 (MiWriteWsle.c)
 *     MiLockPagedAddress @ 0x14014B3DC (MiLockPagedAddress.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiWriteValidPteVolatile(volatile signed __int64 *a1, int a2, unsigned __int8 a3)
{
  signed __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rdi
  __int64 v7; // r11
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  signed __int64 v10; // rcx
  bool v11; // zf
  signed __int64 result; // rax

  v3 = *a1;
  v4 = a2 & 0x80000000;
  v5 = a2 & 1;
  v7 = a2 & 2;
  do
  {
    v8 = v3;
    if ( v4 )
      v8 = v3 ^ (v3 ^ ((unsigned __int64)a3 << 56)) & 0x7F00000000000000LL;
    v9 = v8 | 0x20;
    if ( !v5 )
      v9 = v8;
    v10 = v9 | 0x42;
    if ( !v7 )
      v10 = v9;
    result = _InterlockedCompareExchange64(a1, v10, v3);
    v11 = v3 == result;
    v3 = result;
  }
  while ( !v11 );
  return result;
}
