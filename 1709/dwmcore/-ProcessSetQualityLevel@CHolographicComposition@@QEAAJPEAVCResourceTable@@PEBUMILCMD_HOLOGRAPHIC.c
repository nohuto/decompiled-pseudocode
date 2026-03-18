/*
 * XREFs of ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z @ 0x1801BCF38
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z @ 0x1801BFC04 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAUHOLOGRAPHIC_COMPOSITION_DESC@@@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicComposition::ProcessSetQualityLevel(
        CHolographicComposition *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  bool v6; // al

  v4 = *((_QWORD *)this + 7);
  if ( v4 && *((_BYTE *)this + 69) )
  {
    v5 = *((_DWORD *)a3 + 2);
    *((_DWORD *)this + 16) = v5;
    if ( *((_BYTE *)this + 68) )
    {
      if ( *(_QWORD *)(v4 + 40) && *(_BYTE *)(v4 + 192) )
        CHolographicInteropTaskQueue::PostMessageW(
          *(CHolographicInteropTaskQueue **)(v4 + 40),
          0xBu,
          0LL,
          (void *)v5,
          0LL,
          0LL,
          0LL);
    }
    else
    {
      v6 = CHolographicManager::AddHolographicComposition(
             (CHolographicManager *)v4,
             (CHolographicComposition *)((char *)this + 64));
      *((_BYTE *)this + 69) = v6;
      *((_BYTE *)this + 68) = v6;
    }
  }
  return 0LL;
}
