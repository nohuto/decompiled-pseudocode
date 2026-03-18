/*
 * XREFs of ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z @ 0x1801F9664
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicComposition::ProcessSetQualityLevel(
        struct IUnknown *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL *a3)
{
  struct IUnknownVtbl *lpVtbl; // rdx
  CHolographicInteropTaskQueue *Release; // rax

  lpVtbl = this[10].lpVtbl;
  if ( lpVtbl )
  {
    if ( BYTE5(this[13].lpVtbl) )
    {
      LODWORD(this[13].lpVtbl) = *((_DWORD *)a3 + 2);
      if ( BYTE4(this[13].lpVtbl) )
      {
        Release = (CHolographicInteropTaskQueue *)lpVtbl[1].Release;
        if ( Release )
        {
          if ( LOBYTE(lpVtbl[9].AddRef) )
            CHolographicInteropTaskQueue::PostMessageW(Release, 0xBu, this + 8, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
  }
  return 0LL;
}
