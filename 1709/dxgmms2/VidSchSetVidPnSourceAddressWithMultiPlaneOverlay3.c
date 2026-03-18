/*
 * XREFs of VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x1C00B5320
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C00206D4 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURC.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3(
        _QWORD *a1,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(_QWORD); // rax
  unsigned int v6; // edi
  void (__fastcall *v7)(_QWORD); // rax

  v4 = a1[a2->VidPnSourceId + 376];
  if ( *(_DWORD *)(v4 + 23648) != -1 )
  {
    v5 = (void (__fastcall *)(_QWORD))a1[358];
    if ( v5 )
      v5(a1[366]);
  }
  v6 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(*(ADAPTER_DISPLAY **)(a1[2] + 2304LL), a2);
  if ( *(_DWORD *)(v4 + 23648) != -1 )
  {
    v7 = (void (__fastcall *)(_QWORD))a1[360];
    if ( v7 )
      v7(a1[366]);
  }
  return v6;
}
