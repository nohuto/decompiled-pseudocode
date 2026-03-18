/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C00198B0
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0015BB0 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0016238 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0015594 (-ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        DirectComposition::CApplicationChannel *this,
        struct _SLIST_ENTRY *a2)
{
  struct _SLIST_ENTRY *Next; // rcx

  Next = a2[6].Next;
  if ( Next )
    ObfDereferenceObject(Next);
  a2[6].Next = 0LL;
  LOBYTE(a2[2].Next) &= ~0x10u;
  if ( HIDWORD(a2[1].Next) == 6 )
  {
    DirectComposition::CConnection::ReleaseChannelHandle(
      *((DirectComposition::CConnection **)this + 5),
      *((_DWORD *)this + 7));
    Win32FreePool(a2);
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
  else
  {
    *((_DWORD *)this + 99) = a2[1].Next;
    if ( ((__int64)a2[2].Next & 8) != 0 )
      *((_BYTE *)this + 257) = 0;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 13, a2);
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 29) + 8LL), 1, 0);
  }
}
