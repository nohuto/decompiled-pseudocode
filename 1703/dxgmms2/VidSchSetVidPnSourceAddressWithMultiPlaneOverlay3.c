/*
 * XREFs of VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3 @ 0x1C00AC940
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3@@@Z @ 0x1C001E954 (-DdiSetVidPnSourceAddressWithMultiPlaneOverlay3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_SETVIDPNSOURC.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddressWithMultiPlaneOverlay3(
        _QWORD *a1,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  __int64 v4; // rsi
  void (__fastcall *v5)(_QWORD); // rax
  unsigned int v6; // edi
  void (__fastcall *v7)(_QWORD); // rax

  v4 = a1[a2->VidPnSourceId + 374];
  if ( *(_DWORD *)(v4 + 18896) != -1 )
  {
    v5 = (void (__fastcall *)(_QWORD))a1[356];
    if ( v5 )
      v5(a1[364]);
  }
  v6 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddressWithMultiPlaneOverlay3(*(ADAPTER_DISPLAY **)(a1[2] + 2280LL), a2);
  if ( *(_DWORD *)(v4 + 18896) != -1 )
  {
    v7 = (void (__fastcall *)(_QWORD))a1[358];
    if ( v7 )
      v7(a1[364]);
  }
  return v6;
}
