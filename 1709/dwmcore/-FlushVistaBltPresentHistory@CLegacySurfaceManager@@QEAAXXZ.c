/*
 * XREFs of ?FlushVistaBltPresentHistory@CLegacySurfaceManager@@QEAAXXZ @ 0x18007F6FC
 * Callers:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800177E4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z @ 0x18014AA64 (-RemoveAt@-$DynArray@ULineSegment@ClipPlaneIterator@@$0A@@@QEAAJI@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1801789D4 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 */

void __fastcall CLegacySurfaceManager::FlushVistaBltPresentHistory(CLegacySurfaceManager *this)
{
  int i; // edi
  CWindowNode **v3; // rax
  _DWORD *v4; // rbp
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  ++*((_DWORD *)this + 53);
  for ( i = *((_DWORD *)this + 32); i > 0; --i )
  {
    v4 = (_DWORD *)_mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 13) + 16LL * (unsigned int)(i - 1)), 8).m128i_u64[0];
    if ( *v4 == 4
      && (int)DynArray<ClipPlaneIterator::LineSegment,0>::RemoveAt((char *)this + 104, (unsigned int)(i - 1)) >= 0 )
    {
      WPF::ProcessHeapImpl::Free(v4);
    }
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
