/*
 * XREFs of ?DisablePrefiltering@CVisual@@QEAAXXZ @ 0x180019214
 * Callers:
 *     ?Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800231F0 (-Initialize@CTopLevelWindow3D@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18002F120 (-Initialize@CAnimatedTransitionVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

void __fastcall CVisual::DisablePrefiltering(CVisual *this)
{
  __int64 v1; // rax
  void (__fastcall *v2)(CVisual *, int); // rax

  if ( (*((_BYTE *)this + 196) & 1) == 0 )
  {
    *((_DWORD *)this + 49) |= 1u;
    v1 = *(_QWORD *)this;
    *((_DWORD *)this + 53) = 1;
    v2 = *(void (__fastcall **)(CVisual *, int))(v1 + 24);
    if ( v2 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 64);
    else
      v2(this, 64);
  }
}
