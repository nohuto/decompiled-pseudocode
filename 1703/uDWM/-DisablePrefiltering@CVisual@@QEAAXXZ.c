/*
 * XREFs of ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180023694
 * Callers:
 *     ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x18002ECB0 (-Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180037D10 (-Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CVisual::DisablePrefiltering(CVisual *this)
{
  __int64 v1; // rax
  void (__fastcall *v2)(CVisual *__hidden, unsigned int); // rax

  if ( (*((_BYTE *)this + 196) & 1) == 0 )
  {
    *((_DWORD *)this + 49) |= 1u;
    v1 = *(_QWORD *)this;
    *((_DWORD *)this + 53) = 1;
    v2 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v1 + 24);
    if ( v2 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x40u);
    else
      v2(this, 64u);
  }
}
