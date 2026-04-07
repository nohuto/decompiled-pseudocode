/*
 * XREFs of ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x18008E838
 * Callers:
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x18008E770 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18000D72C (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18002592C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180025960 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x18003DC10 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextTetherVisual::_UpdateHandleInstructions(CTextTetherVisual *this)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v4; // ebp
  int v5; // eax
  CContactManager *v6; // rcx
  int v7; // edx
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v2 = CImage::SetBitmapSource(*((CImage **)this + 50), *((struct CBitmapSource **)this + 49));
  v3 = 0;
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = CImage::SetBitmapSource(*((CImage **)this + 52), *((struct CBitmapSource **)this + 51));
    v4 = v5;
    if ( v5 >= 0 )
    {
      v7 = 0;
      if ( *((_DWORD *)this + 85) - *((_DWORD *)this + 83) >= 0 )
        v7 = *((_DWORD *)this + 85) - *((_DWORD *)this + 83);
      if ( *((_DWORD *)this + 86) - *((_DWORD *)this + 84) >= 0 )
        v3 = *((_DWORD *)this + 86) - *((_DWORD *)this + 84);
      if ( v7 <= v3 )
        v7 = v3;
      v8 = CContactManager::GetBoundedContactWidth(v6, v7, *(struct tagPOINT *)((char *)this + 324))
         * *((_DWORD *)this + 79);
      v16 = *(_QWORD *)((char *)this + 348);
      v9 = v8 / 100;
      v10 = v8 / 100 / 2;
      v11 = v16 - v10;
      v12 = HIDWORD(v16) - v10;
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 50), v16 - v10);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 50), v12);
      v13 = *((_QWORD *)this + 50);
      LODWORD(v16) = v9;
      HIDWORD(v16) = v9;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 80LL))(v13, &v16);
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 52), v11);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 52), v12);
      v14 = *((_QWORD *)this + 52);
      LODWORD(v16) = v9;
      HIDWORD(v16) = v9;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 80LL))(v14, &v16);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x85u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x84u);
  }
  return v4;
}
