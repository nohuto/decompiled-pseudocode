/*
 * XREFs of ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4
 * Callers:
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00132F0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C0013648 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0013A50 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionDiscardFrame @ 0x1C0013DF0 (NtDCompositionDiscardFrame.c)
 *     NtDCompositionConfirmFrame @ 0x1C00140C0 (NtDCompositionConfirmFrame.c)
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0015728 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0015ACC (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     ?GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0015DC0 (-GetBatchesFromFrame@CConnection@DirectComposition@@QEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0012FA4 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0016238 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0029CBC (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CCompositionFrame::Discard(DirectComposition::CCompositionFrame *this)
{
  CTokenManager *v2; // rcx
  _QWORD **v3; // rsi
  _QWORD **v4; // rax
  _QWORD *v5; // rcx
  __int64 **v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rbx
  DirectComposition::CBatch *v10; // rcx
  __int64 v11; // rbx
  __int64 *v12; // rbx

  if ( *((_QWORD *)this + 11) )
  {
    do
    {
      v10 = (DirectComposition::CBatch *)*((_QWORD *)this + 11);
      v11 = *(_QWORD *)v10;
      DirectComposition::CBatch::ReturnToApplication(v10, 1);
      *((_QWORD *)this + 11) = v11;
    }
    while ( v11 );
  }
  v2 = (CTokenManager *)*((_QWORD *)this + 12);
  *((_DWORD *)this + 20) = 3;
  if ( v2 )
  {
    if ( g_pTokenManager )
      CTokenManager::ReturnLegacyTokenBufferInternal(v2, v2);
    else
      CLegacyTokenBuffer::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 26) = 0;
  v3 = (_QWORD **)((char *)this + 144);
  v4 = (_QWORD **)*((_QWORD *)this + 18);
  v5 = *v4;
  if ( v4[1] != (_QWORD *)((char *)this + 144) || (_QWORD **)v5[1] != v4 )
    __fastfail(3u);
  while ( 1 )
  {
    *v3 = v5;
    v5[1] = v3;
    if ( v4 == v3 )
      break;
    v9 = (void (__fastcall ***)(_QWORD, __int64))(v4 - 1);
    ((void (__fastcall *)(_QWORD **))(*(v4 - 1))[7])(v4 - 1);
    (**v9)(v9, 1LL);
    v4 = (_QWORD **)*v3;
    v5 = (_QWORD *)**v3;
    if ( (_QWORD **)(*v3)[1] != v3 || (_QWORD **)v5[1] != v4 )
      __fastfail(3u);
  }
  v6 = (__int64 **)((char *)this + 160);
  v7 = *v6;
  v8 = **v6;
  if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
    __fastfail(3u);
  while ( 1 )
  {
    *v6 = (__int64 *)v8;
    *(_QWORD *)(v8 + 8) = v6;
    if ( v7 == (__int64 *)v6 )
      break;
    v12 = v7 - 5;
    (*(void (__fastcall **)(__int64 *))(*(v7 - 1) + 56))(v7 - 1);
    ObfDereferenceObject(v12);
    v7 = *v6;
    v8 = **v6;
    if ( (__int64 **)(*v6)[1] != v6 || *(__int64 **)(v8 + 8) != v7 )
      __fastfail(3u);
  }
}
