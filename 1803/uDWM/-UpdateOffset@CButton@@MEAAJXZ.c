/*
 * XREFs of ?UpdateOffset@CButton@@MEAAJXZ @ 0x180016CF0
 * Callers:
 *     ?ValidateVisual@CButton@@UEAAJXZ @ 0x180017060 (-ValidateVisual@CButton@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180020554 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x180020C44 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::UpdateOffset(CButton *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rcx
  struct tagPOINT v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 352LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 2) + 24LL));
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x299u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xCDu);
  }
  else
  {
    v4 = *((_QWORD *)this + 36);
    if ( *(_DWORD *)(v4 + 24) != *((_DWORD *)this + 30) || *(_DWORD *)(v4 + 28) != *((_DWORD *)this + 31) )
    {
      *(_QWORD *)(v4 + 24) = *((_QWORD *)this + 15);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v4, 1u, 0x2000u);
      v4 = *((_QWORD *)this + 36);
    }
    if ( *(CButton **)(v4 + 80) == this )
    {
      v6 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v4, &v6);
    }
    else if ( *((_DWORD *)this + 28) != *(_DWORD *)(v4 + 16) || *((_DWORD *)this + 29) != *(_DWORD *)(v4 + 20) )
    {
      *(_QWORD *)(v4 + 16) = *((_QWORD *)this + 14);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v4, 1u, 0x2000u);
    }
  }
  return v3;
}
