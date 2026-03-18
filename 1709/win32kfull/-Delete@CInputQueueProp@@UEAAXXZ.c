/*
 * XREFs of ?Delete@CInputQueueProp@@UEAAXXZ @ 0x1C008E0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C008E224 (-Reset@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputQueueProp::Delete(CInputQueueProp *this)
{
  __int64 i; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  CDynamicArray<IInputQueue *,2003858261>::Reset((char *)this + 16);
  if ( !*((_BYTE *)this + 40) )
    HMAssignmentUnlock((char *)this + 32);
  Win32FreePool(this, v4, v5);
}
