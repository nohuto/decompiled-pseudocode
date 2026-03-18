/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C009FA60
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C009F19C (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00020DC (-ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C009F134 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch *a2)
{
  __int64 v4; // rcx

  DirectComposition::CBatch::SetSynchronizationObject(a2, 0LL);
  if ( *((_DWORD *)a2 + 5) == 6 )
  {
    DirectComposition::CConnection::ReleaseChannelHandle(
      *((DirectComposition::CConnection **)this + 5),
      *((_DWORD *)this + 7));
    Win32FreePool((__int64)a2);
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
  else
  {
    v4 = *((_QWORD *)this + 45);
    *((_DWORD *)this + 95) = *((_DWORD *)a2 + 4);
    if ( v4 && !*((_QWORD *)this + 46) )
      KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
      *((_BYTE *)this + 240) &= ~0x80u;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 12, (PSLIST_ENTRY)a2);
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 27) + 8LL), 1, 0);
  }
}
