/*
 * XREFs of HampIpcChannelObjectComparePayloadForTree @ 0x180005B00
 * Callers:
 *     HampIpcChannelFindCallbackContextByPayload @ 0x18000D970 (HampIpcChannelFindCallbackContextByPayload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampIpcChannelObjectComparePayloadForTree(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rcx

  v2 = *(__int64 (**)(void))(*(_QWORD *)(a2 + 40) + 72LL);
  if ( (char *)v2 != (char *)RmpClientCallbackCompareToPayload )
    return v2();
  if ( *(_DWORD *)a1 )
    v3 = *(_QWORD *)(a1 + 16);
  else
    v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a2 + 48);
  if ( v3 < v4 )
    return 0xFFFFFFFFLL;
  else
    return v3 > v4;
}
