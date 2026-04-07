/*
 * XREFs of ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x180070410
 * Callers:
 *     ??_ECHolographicSlate@@UEAAPEAXI@Z @ 0x18006FF70 (--_ECHolographicSlate@@UEAAPEAXI@Z.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800700CC (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180076F3C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicSlate::UnbindWindow(CHolographicSlate *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((char *)this + 24);
  v2 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  return 2147500037LL;
}
