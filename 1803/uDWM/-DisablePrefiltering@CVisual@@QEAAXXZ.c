/*
 * XREFs of ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180025780
 * Callers:
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180011EA0 (-Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800234E0 (-Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CVisual::DisablePrefiltering(CVisual *this)
{
  int v1; // eax
  void (__fastcall *v2)(CVisual *__hidden, unsigned int); // rax

  v1 = *((_DWORD *)this + 49);
  if ( (v1 & 1) == 0 )
  {
    *((_DWORD *)this + 53) = 1;
    *((_DWORD *)this + 49) = v1 | 1;
    v2 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v2 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x40u);
    else
      v2(this, 64u);
  }
}
