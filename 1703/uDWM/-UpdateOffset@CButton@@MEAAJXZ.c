/*
 * XREFs of ?UpdateOffset@CButton@@MEAAJXZ @ 0x180020000
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180020260 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BEB4 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18002C3FC (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::UpdateOffset(CButton *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  struct tagPOINT v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 344LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x3ACu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xCDu);
  }
  else
  {
    v4 = *((_QWORD *)this + 36);
    if ( *(_DWORD *)(v4 + 24) != *((_DWORD *)this + 30) || *(_DWORD *)(v4 + 28) != *((_DWORD *)this + 31) )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 15);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v4, 1u, 0x2000u);
    }
    v5 = *((_QWORD *)this + 36);
    if ( *(CButton **)(v5 + 80) == this )
    {
      v7 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v5, &v7);
    }
    else if ( *((_DWORD *)this + 28) != *(_DWORD *)(v5 + 16) || *((_DWORD *)this + 29) != *(_DWORD *)(v5 + 20) )
    {
      *(_QWORD *)(v5 + 16) = *((_QWORD *)this + 14);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v5, 1u, 0x2000u);
    }
  }
  return v3;
}
