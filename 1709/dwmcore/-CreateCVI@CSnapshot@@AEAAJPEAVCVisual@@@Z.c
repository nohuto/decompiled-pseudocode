/*
 * XREFs of ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180175E30
 * Callers:
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x180176060 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z @ 0x18008ED34 (--0CCachedVisualImage@@IEAA@PEAVCComposition@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??2CCachedVisualImage@@KAPEAX_K@Z @ 0x1800BF3F8 (--2CCachedVisualImage@@KAPEAX_K@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180128E08 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z @ 0x180159704 (-SetForDCompSnapshot@CCachedVisualImage@@QEAAJPEAVCVisual@@II_N@Z.c)
 */

__int64 __fastcall CSnapshot::CreateCVI(CSnapshot *this, struct CVisual *a2)
{
  CCachedVisualImage *v4; // rax
  CCachedVisualImage *v5; // rdi
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r9d
  signed int v9; // eax
  signed int v10; // eax

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
      && (v9 = CCachedVisualImage::SetForDCompSnapshot(v5, a2, v7, v8, *((_BYTE *)this + 64)), v6 = v9, v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x34u);
    }
    else
    {
      v10 = CComposition::RegisterSnapshotToPerform(*((CComposition **)this + 2), v5);
      v6 = v10;
      if ( v10 >= 0 )
      {
        *((_QWORD *)this + 9) = v5;
        return v6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0x38u);
    }
    CMILCOMBase::InternalRelease((CCachedVisualImage *)((char *)v5 + 16));
    return v6;
  }
  v6 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2Du);
  return v6;
}
