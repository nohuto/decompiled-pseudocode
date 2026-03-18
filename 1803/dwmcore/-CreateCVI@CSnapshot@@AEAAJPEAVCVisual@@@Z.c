/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x1801A3CF0
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x1801A3F10 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x1800B5094 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800C90E4 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x18014A9A4 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x1801827B4 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 */

__int64 __fastcall CSnapshot::CreateCVI(CSnapshot *this, struct CVisual *a2)
{
  CCachedVisualImage *v4; // rax
  CCachedVisualImage *v5; // rbx
  int v6; // edi
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // eax

  v4 = (CCachedVisualImage *)CCachedVisualImage::operator new();
  if ( v4 )
    v5 = CCachedVisualImage::CCachedVisualImage(v4, *((struct CComposition **)this + 2));
  else
    v5 = 0LL;
  if ( v5 )
  {
    CMILCOMBase::InternalAddRef((CCachedVisualImage *)((char *)v5 + 16));
    v7 = *((_DWORD *)this + 14);
    if ( v7
      && (v8 = *((_DWORD *)this + 15)) != 0
      && (v6 = CCachedVisualImage::SetForDCompSnapshot(v5, a2, v7, v8, *((_BYTE *)this + 64)), v6 < 0) )
    {
      v9 = 52;
    }
    else
    {
      v6 = CComposition::RegisterSnapshotToPerform(*((CComposition **)this + 2), v5);
      if ( v6 >= 0 )
      {
        *((_QWORD *)this + 9) = v5;
        return (unsigned int)v6;
      }
      v9 = 56;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v9);
    CMILCOMBase::InternalRelease((CCachedVisualImage *)((char *)v5 + 16));
    return (unsigned int)v6;
  }
  v6 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x2Du);
  return (unsigned int)v6;
}
