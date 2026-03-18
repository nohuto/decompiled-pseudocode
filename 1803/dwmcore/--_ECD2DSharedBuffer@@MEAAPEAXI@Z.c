/*
 * XREFs of ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x180070190
 * Callers:
 *     ?Release@CD2DSharedBuffer@@UEAAKXZ @ 0x180070230 (-Release@CD2DSharedBuffer@@UEAAKXZ.c)
 * Callees:
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CD2DSharedBuffer *__fastcall CD2DSharedBuffer::`vector deleting destructor'(CD2DSharedBuffer *this, char a2)
{
  volatile signed __int32 *v4; // rcx
  void *v5; // r8

  *(_QWORD *)this = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 5);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      --*((_DWORD *)v4 + 2);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
    }
    *((_QWORD *)this + 5) = 0LL;
  }
  else
  {
    v5 = (void *)*((_QWORD *)this + 3);
    if ( v5 )
      HeapFree(WPF::g_processHeap, 0, v5);
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      HeapFree(WPF::g_processHeap, 0, this);
  }
  return this;
}
