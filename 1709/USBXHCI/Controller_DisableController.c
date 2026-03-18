/*
 * XREFs of Controller_DisableController @ 0x1C0010918
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C0011130 (Controller_InitiateRecovery.c)
 *     Controller_InternalReset @ 0x1C0011414 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_SetControllerGone @ 0x1C00123D0 (Controller_SetControllerGone.c)
 */

void __fastcall Controller_DisableController(__int64 a1)
{
  __int64 v2; // rcx
  __int16 v3; // [rsp+40h] [rbp+8h] BYREF

  Controller_SetControllerGone(a1, 0LL);
  if ( *(_DWORD *)(a1 + 180) == 1 )
  {
    v2 = *(_QWORD *)(a1 + 216);
    v3 = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int16 *, __int64, int))(a1 + 224))(v2, 0LL, &v3, 4LL, 2);
  }
  else
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 72), 2u, 4u, 0xA8u, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids);
  }
  KeFlushQueuedDpcs();
}
