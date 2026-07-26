/*
 * XREFs of ndisMStartWanSends @ 0x1C00571D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     NdisMWanSendComplete @ 0x1C00540A0 (NdisMWanSendComplete.c)
 */

char __fastcall ndisMStartWanSends(__int64 a1)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rax
  _QWORD *v5; // rcx
  unsigned int v6; // eax

  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x20u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1);
  v2 = (_QWORD **)(a1 + 128);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v3[1] = v3;
    *v3 = v3;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)(a1 + 3784) + 200LL))(
           *(_QWORD *)(a1 + 24),
           v3[10],
           v3);
    if ( v6 != 259 )
      NdisMWanSendComplete(a1, (__int64)v3, v6);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 1509151;
  }
  if ( (unsigned __int8)byte_1C009874A >= 4u )
    WPP_SF_q(0x21u, &WPP_984ad900609636e726551c04f4a7943f_Traceguids, a1);
  return 0;
}
