/*
 * XREFs of ?_UpdateHandleInstructions@CTextTetherVisual@@AEAAJXZ @ 0x18008C128
 * Callers:
 *     ?UpdateInstructions@CTextTetherVisual@@IEAAJXZ @ 0x18008C060 (-UpdateInstructions@CTextTetherVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x1800195DC (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023840 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023874 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x1800414DC (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTextTetherVisual::_UpdateHandleInstructions(CTextTetherVisual *this)
{
  int v2; // eax
  int v3; // ebx
  unsigned int v4; // ebp
  int v5; // eax
  CContactManager *v6; // rcx
  int v7; // edx
  int v8; // esi
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

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
      v8 = (int)(CContactManager::GetBoundedContactWidth(v6, v7, *(struct tagPOINT *)((char *)this + 324))
               * *((_DWORD *)this + 79))
         / 100;
      v14 = *(_QWORD *)((char *)this + 348);
      v9 = v14 - v8 / 2;
      v10 = HIDWORD(v14) - v8 / 2;
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 50), v9);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 50), v10);
      v11 = *((_QWORD *)this + 50);
      LODWORD(v14) = v8;
      HIDWORD(v14) = v8;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 80LL))(v11, &v14);
      CVisual::SetInsetFromParentLeft(*((CVisual **)this + 52), v9);
      CVisual::SetInsetFromParentTop(*((CVisual **)this + 52), v10);
      v12 = *((_QWORD *)this + 52);
      LODWORD(v14) = v8;
      HIDWORD(v14) = v8;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 80LL))(v12, &v14);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x85u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x84u);
  }
  return v4;
}
