/*
 * XREFs of ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800B7CD0
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x180091910 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x1801695CC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800B7BB8 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     ??0QpcTimeConverter@@QEAA@XZ @ 0x1800B7DFC (--0QpcTimeConverter@@QEAA@XZ.c)
 *     ??0CInteractionContextTransformHelper@@QEAA@XZ @ 0x1800B7E44 (--0CInteractionContextTransformHelper@@QEAA@XZ.c)
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
  *((_BYTE *)this + 320) = 0;
  CInteractionContextTransformHelper::CInteractionContextTransformHelper((CInteractionContextWrapper *)((char *)this + 328));
  *((_BYTE *)this + 528) = 0;
  *((_DWORD *)this + 138) = 0;
  *((_BYTE *)this + 556) = 0;
  *((_QWORD *)this + 68) = (char *)this + 536;
  *((_QWORD *)this + 67) = (char *)this + 536;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 14);
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  QpcTimeConverter::QpcTimeConverter((CInteractionContextWrapper *)((char *)this + 616));
  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  result = this;
  *((_BYTE *)this + 92) = 0;
  *((_BYTE *)this + 156) = 0;
  return result;
}
