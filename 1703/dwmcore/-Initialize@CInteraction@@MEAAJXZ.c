/*
 * XREFs of ?Initialize@CInteraction@@MEAAJXZ @ 0x18004B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x1800B2C74 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z.c)
 *     ??0CInteractionContextWrapper@@QEAA@XZ @ 0x1800B3C00 (--0CInteractionContextWrapper@@QEAA@XZ.c)
 *     ??2CInteractionContextWrapper@@SAPEAX_K@Z @ 0x1800C7B50 (--2CInteractionContextWrapper@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CInteraction::Initialize(CInteraction *this)
{
  CInteractionContextWrapper *v2; // rax
  unsigned __int64 v3; // rcx
  struct IInteractionContextWrapper *v4; // rdi
  CInteractionContextWrapper *v5; // rax
  signed int v6; // ebx

  v2 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new((unsigned __int64)this);
  if ( v2 )
    v4 = CInteractionContextWrapper::CInteractionContextWrapper(v2);
  else
    v4 = 0LL;
  v5 = 0LL;
  v6 = v4 == 0LL ? 0x8007000E : 0;
  if ( v4 )
  {
    v5 = (CInteractionContextWrapper *)CInteractionContextWrapper::operator new(v3);
    if ( v5 )
      v5 = CInteractionContextWrapper::CInteractionContextWrapper(v5);
    if ( !v5 )
      v6 = -2147024882;
  }
  if ( v6 >= 0 )
    return (unsigned int)CInteractionProcessor::Initialize((CInteraction *)((char *)this + 352), v4, v5);
  return (unsigned int)v6;
}
