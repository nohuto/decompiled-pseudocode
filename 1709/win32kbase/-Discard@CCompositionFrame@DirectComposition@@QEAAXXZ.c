/*
 * XREFs of ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C0035174
 * Callers:
 *     ?DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ @ 0x1C0033F80 (-DiscardAllCompositionFrames@CConnection@DirectComposition@@AEAAXXZ.c)
 *     ?RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z @ 0x1C0034168 (-RemoveCompositionFrame@CConnection@DirectComposition@@QEAAJ_K@Z.c)
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C003424C (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C0035144 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     NtDCompositionGetConnectionBatch @ 0x1C0036640 (NtDCompositionGetConnectionBatch.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C00368E0 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C0036B40 (NtDCompositionGetFrameLegacyTokens.c)
 *     NtDCompositionConfirmFrame @ 0x1C0036EF0 (NtDCompositionConfirmFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C0037330 (NtDCompositionDiscardFrame.c)
 * Callees:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0034B54 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 *     ?ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0035EAC (-ReturnLegacyTokenBufferInternal@CTokenManager@@IEAAXPEAVCLegacyTokenBuffer@@@Z.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C00394BC (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CCompositionFrame::Discard(
        DirectComposition::CCompositionFrame *this,
        unsigned int a2)
{
  CTokenManager *v3; // rcx
  DirectComposition::CCompositionFrame **v4; // rsi
  DirectComposition::CCompositionFrame **v5; // rax
  DirectComposition::CCompositionFrame *v6; // rcx
  char *v7; // rdi
  char *v8; // rax
  __int64 v9; // rcx
  DirectComposition::CCompositionFrame **v10; // rbx
  DirectComposition::CBatch *v11; // rcx
  __int64 v12; // rbx
  char *v13; // rbx

  if ( *((_QWORD *)this + 11) )
  {
    do
    {
      v11 = (DirectComposition::CBatch *)*((_QWORD *)this + 11);
      v12 = *(_QWORD *)v11;
      DirectComposition::CBatch::ReturnToApplication(v11, 1);
      *((_QWORD *)this + 11) = v12;
    }
    while ( v12 );
  }
  v3 = (CTokenManager *)*((_QWORD *)this + 12);
  *((_DWORD *)this + 20) = 3;
  if ( v3 )
  {
    if ( g_pTokenManager )
      CTokenManager::ReturnLegacyTokenBufferInternal(v3, v3);
    else
      CLegacyTokenBuffer::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 12) = 0LL;
  }
  *((_DWORD *)this + 26) = 0;
  v4 = (DirectComposition::CCompositionFrame **)((char *)this + 144);
  v5 = (DirectComposition::CCompositionFrame **)*((_QWORD *)this + 18);
  if ( v5[1] != (DirectComposition::CCompositionFrame *)((char *)this + 144)
    || (v6 = *v5, *((DirectComposition::CCompositionFrame ***)*v5 + 1) != v5) )
  {
    __fastfail(3u);
  }
  while ( 1 )
  {
    *v4 = v6;
    *((_QWORD *)v6 + 1) = v4;
    if ( v5 == v4 )
      break;
    v10 = v5 - 1;
    (*((void (__fastcall **)(DirectComposition::CCompositionFrame **))*(v5 - 1) + 7))(v5 - 1);
    (*(void (__fastcall **)(DirectComposition::CCompositionFrame **, __int64))*v10)(v10, 1LL);
    v5 = (DirectComposition::CCompositionFrame **)*v4;
    if ( *((DirectComposition::CCompositionFrame ***)*v4 + 1) == v4 )
    {
      v6 = *v5;
      if ( *((DirectComposition::CCompositionFrame ***)*v5 + 1) == v5 )
        continue;
    }
    __fastfail(3u);
  }
  v7 = (char *)this + 160;
  v8 = *(char **)v7;
  if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 || (v9 = *(_QWORD *)v8, *(char **)(*(_QWORD *)v8 + 8LL) != v8) )
    __fastfail(3u);
  while ( 1 )
  {
    *(_QWORD *)v7 = v9;
    *(_QWORD *)(v9 + 8) = v7;
    if ( v8 == v7 )
      break;
    v13 = v8 - 40;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v8 - 1) + 56LL))(v8 - 8);
    ObfDereferenceObject(v13);
    v8 = *(char **)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
    {
      v9 = *(_QWORD *)v8;
      if ( *(char **)(*(_QWORD *)v8 + 8LL) == v8 )
        continue;
    }
    __fastfail(3u);
  }
}
