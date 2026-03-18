/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C00908F0
 * Callers:
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C00907E0 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C0090810 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 * Callees:
 *     ?Reset@?$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C000CC84 (-Reset@-$CDynamicArray@PEAUManipulationCaptureInfo@CInteractionMarshaler@DirectComposition@@$0HH.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this)
{
  void *v2; // rcx
  __int64 i; // rsi
  __int64 v5; // rcx

  v2 = *(void **)this;
  if ( v2 )
    ZwClose(v2);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i);
    if ( v5 )
      Win32FreePool(v5);
  }
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset((__int64 *)this + 14);
  CDynamicArray<DirectComposition::CInteractionMarshaler::ManipulationCaptureInfo *,2003858261>::Reset((__int64 *)this + 14);
  Win32FreePool((__int64)this);
  return this;
}
