/*
 * XREFs of ??_GCInputManager@@IEAAPEAXI@Z @ 0x1C015F5F8
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C015F700 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 *     ?DestroySessionGlobal@CInputManager@@SAXXZ @ 0x1C015F7A0 (-DestroySessionGlobal@CInputManager@@SAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?Reset@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C015FC20 (-Reset@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z.c)
 */

CInputManager *__fastcall CInputManager::`scalar deleting destructor'(CInputManager *this)
{
  void *v2; // rcx
  __int64 i; // rsi
  __int64 v4; // rcx

  v2 = *(void **)this;
  if ( v2 )
    ZwClose(v2);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * i);
    if ( v4 )
      Win32FreePool(v4);
  }
  CDynamicArray<InjectManipulationArgs *,2003858261>::Reset((char *)this + 112);
  CDynamicArray<InjectManipulationArgs *,2003858261>::Reset((char *)this + 112);
  Win32FreePool((__int64)this);
  return this;
}
