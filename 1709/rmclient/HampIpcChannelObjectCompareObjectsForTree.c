/*
 * XREFs of HampIpcChannelObjectCompareObjectsForTree @ 0x180006000
 * Callers:
 *     HamIpcChannelAddCallback @ 0x18000D844 (HamIpcChannelAddCallback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampIpcChannelObjectCompareObjectsForTree(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  v2 = *(__int64 (**)(void))(*(_QWORD *)(a1 + 40) + 64LL);
  if ( (char *)v2 != (char *)RmpClientCallbackCompareToCallback )
    return v2();
  v3 = *(_QWORD *)(a2 + 48);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v4 > v3;
}
