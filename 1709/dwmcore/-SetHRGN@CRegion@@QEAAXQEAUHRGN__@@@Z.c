/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x180088C68
 * Callers:
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18007627C (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x18009D974 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009E26C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180088DEC (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180089E8C (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN hrgn, unsigned int *a3)
{
  void *v3; // rdi
  signed int v5; // eax
  int v6; // ebx
  signed int appended; // eax
  _DWORD *v8; // rdx
  void *lpMem; // [rsp+30h] [rbp-78h] BYREF
  int *v10; // [rsp+40h] [rbp-68h] BYREF
  int v11; // [rsp+48h] [rbp-60h] BYREF

  v3 = 0LL;
  lpMem = 0LL;
  if ( hrgn )
  {
    if ( hrgn == (HRGN)1 )
    {
LABEL_13:
      v8 = *(_DWORD **)this;
      *v8 = 2;
      v8[1] = 0x80000000;
      v8[2] = 0x7FFFFFFF;
      v8[3] = 0x80000000;
      v8[4] = 16;
      v8[7] = 0x80000000;
      v8[8] = 0x7FFFFFFF;
      v8[5] = 0x7FFFFFFF;
      v8[6] = 16;
      return;
    }
    v10 = &v11;
    v11 = 0;
    v5 = HrgnToRgnData(hrgn, (struct _RGNDATA **)&lpMem, a3);
    v6 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x1Au);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v10);
      v3 = lpMem;
    }
    else
    {
      v3 = lpMem;
      **(_DWORD **)this = 0;
      appended = CRegion::AppendRects<tagRECT>(this);
      v6 = appended;
      if ( appended < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x21u);
      FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v10);
    }
  }
  else
  {
    **(_DWORD **)this = 0;
    v6 = 0;
  }
  if ( v3 )
    WPF::ProcessHeapImpl::Free(v3);
  if ( v6 < 0 )
    goto LABEL_13;
}
