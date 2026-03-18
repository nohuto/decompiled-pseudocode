/*
 * XREFs of VidSchSetVidPnSourceAddress @ 0x1C006EA80
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z @ 0x1C0013B30 (-DdiSetVidPnSourceAddress@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETVIDPNSOURCEADDRESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchSetVidPnSourceAddress(_QWORD *a1, const struct _DXGKARG_SETVIDPNSOURCEADDRESS *a2)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  void (__fastcall *v7)(_QWORD); // rax
  void (__fastcall *v8)(_QWORD); // rax

  v4 = a1[a2->VidPnSourceId + 374];
  if ( *(_DWORD *)(v4 + 18896) != -1 )
  {
    v7 = (void (__fastcall *)(_QWORD))a1[356];
    if ( v7 )
      v7(a1[364]);
  }
  v5 = ADAPTER_DISPLAY::DdiSetVidPnSourceAddress(*(ADAPTER_DISPLAY **)(a1[2] + 2280LL), a2);
  if ( *(_DWORD *)(v4 + 18896) != -1 )
  {
    v8 = (void (__fastcall *)(_QWORD))a1[358];
    if ( v8 )
      v8(a1[364]);
  }
  return v5;
}
