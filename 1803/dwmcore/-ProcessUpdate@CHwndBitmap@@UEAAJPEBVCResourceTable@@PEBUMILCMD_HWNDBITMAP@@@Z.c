/*
 * XREFs of ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x1801909C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180151F30 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::ProcessUpdate(
        CHwndBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_HWNDBITMAP *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // ebx

  v3 = *((_QWORD *)a3 + 1);
  if ( v3 == *((_QWORD *)this + 12) )
  {
    v6 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x199u);
  }
  else
  {
    *((_QWORD *)this + 12) = v3;
    v4 = *((_QWORD *)this + 4);
    *((_BYTE *)this + 120) = 1;
    v5 = CWindowManager::AddHwndBitmap(*(CWindowManager **)(v4 + 88), this);
    v6 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x195u);
  }
  return v6;
}
