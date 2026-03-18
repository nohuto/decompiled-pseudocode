/*
 * XREFs of ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x1800B049C
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z @ 0x180035420 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N0@Z.c)
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x18006C1F0 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z @ 0x180024360 (-RemoveAt@-$DynArray@VUnclaimedToken@CLegacySurfaceManager@@$0A@@@QEAAJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x18012AD28 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 */

void __fastcall CLegacySurfaceManager::FlushVistaBltPresentHistory(CLegacySurfaceManager *this)
{
  int i; // edi
  CWindowNode **v3; // rax
  _DWORD *v4; // xmm0_8
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  ++*((_DWORD *)this + 53);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
  {
    v4 = (_DWORD *)_mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 13) + 16LL * (unsigned int)(i - 1)), 8).m128i_u64[0];
    if ( *v4 == 4 && (int)DynArray<CLegacySurfaceManager::UnclaimedToken,0>::RemoveAt((__int64 *)this + 13, i - 1) >= 0 )
      WPF::ProcessHeapImpl::Free(v4);
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v3 = (CWindowNode **)RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)((char *)this + 136), &RestartKey);
    if ( !v3 )
      break;
    CWindowNode::FlushVistaBltTokens(v3[1]);
  }
}
