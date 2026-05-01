/*
 * XREFs of HampIpcChannelObjectCompareObjectsForTree @ 0x1800060F0
 * Callers:
 *     HamCreateActivityEx @ 0x180005B10 (HamCreateActivityEx.c)
 *     HamIpcChannelAddCallback @ 0x180005D80 (HamIpcChannelAddCallback.c)
 *     RmpClientAcquireResourceSet @ 0x180005E60 (RmpClientAcquireResourceSet.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180007B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampIpcChannelObjectCompareObjectsForTree(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx

  v2 = *(__int64 (**)(void))(*(_QWORD *)(a1 + 40) + 64LL);
  if ( v2 != RmpClientCallbackCompareToCallback && v2 != HampConnectionObjectCompareToObject )
    return v2();
  v3 = *(_QWORD *)(a2 + 48);
  v4 = *(_QWORD *)(a1 + 48);
  if ( v4 < v3 )
    return 0xFFFFFFFFLL;
  else
    return v4 > v3;
}
