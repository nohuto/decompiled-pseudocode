/*
 * XREFs of ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800B3C00
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x18004B3D0 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x180166AFC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800B3A8C (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800B3D24 (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??0CInteractionContextTransformHelper@@QEAA@XZ @ 0x1800B3D6C (--0CInteractionContextTransformHelper@@QEAA@XZ.c)
 */

CInteractionContextWrapper *__fastcall CInteractionContextWrapper::CInteractionContextWrapper(
        CInteractionContextWrapper *this)
{
  CInteractionContextWrapper *result; // rax

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
  *((_QWORD *)this + 1) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)((char *)this + 220) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *(_OWORD *)((char *)this + 248) = _xmm;
  *((_WORD *)this + 156) = 32085;
  *(_OWORD *)((char *)this + 264) = _xmm;
  *(_OWORD *)((char *)this + 280) = _xmm;
  *(_OWORD *)((char *)this + 296) = _xmm;
  *((_DWORD *)this + 79) = 0;
  CInteractionContextTransformHelper::CInteractionContextTransformHelper((CInteractionContextWrapper *)((char *)this + 320));
  *((_BYTE *)this + 472) = 0;
  *((_DWORD *)this + 124) = 0;
  *((_BYTE *)this + 500) = 0;
  *((_QWORD *)this + 61) = (char *)this + 480;
  *((_QWORD *)this + 60) = (char *)this + 480;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CInteractionContextWrapper *)((char *)this + 560));
  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  result = this;
  *((_BYTE *)this + 92) = 0;
  *((_BYTE *)this + 156) = 0;
  return result;
}
