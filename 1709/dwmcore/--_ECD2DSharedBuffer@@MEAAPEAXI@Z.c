/*
 * XREFs of ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x180046B00
 * Callers:
 *     ?Release@CD2DSharedBuffer@@UEAAKXZ @ 0x180046BA0 (-Release@CD2DSharedBuffer@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::`vector deleting destructor'(CD2DSharedBuffer *this, char a2)
{
  bool v2; // zf
  void *v5; // r8
  volatile signed __int32 *v7; // rcx

  v2 = *((_QWORD *)this + 5) == 0LL;
  *(_QWORD *)this = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
  if ( v2 )
  {
    v5 = (void *)*((_QWORD *)this + 3);
    if ( v5 )
      HeapFree(WPF::g_processHeap, 0, v5);
  }
  else
  {
    v7 = (volatile signed __int32 *)*((_QWORD *)this + 5);
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
      {
        --*((_DWORD *)v7 + 2);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
      }
      *((_QWORD *)this + 5) = 0LL;
    }
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    HeapFree(WPF::g_processHeap, 0, this);
  return this;
}
