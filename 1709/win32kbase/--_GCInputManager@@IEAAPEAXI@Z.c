/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C0099890
 * Callers:
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C0099780 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C00997B0 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 * Callees:
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C001EAE4 (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this, __int64 a2, __int64 a3)
{
  void *v4; // rcx
  __int64 i; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // rcx

  v4 = *(void **)this;
  if ( v4 )
    ZwClose(v4);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i);
    if ( v9 )
      Win32FreePool(v9);
  }
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(
    (__int64 *)this + 14,
    a2,
    a3);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset(
    (__int64 *)this + 14,
    v6,
    v7);
  Win32FreePool((__int64)this);
  return this;
}
