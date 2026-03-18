/*
 * XREFs of ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C002EE28
 * Callers:
 *     ?ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z @ 0x1C0034B54 (-ReturnToApplication@CBatch@DirectComposition@@QEAAX_N@Z.c)
 * Callees:
 *     ?ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C0033DEC (-ReleaseChannelHandle@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z @ 0x1C0034A94 (-SetSynchronizationObject@CBatch@DirectComposition@@QEAAXPEBUSynchronizationObject@2@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReturnProcessedBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  DirectComposition::CBatch::SetSynchronizationObject(a2, 0LL);
  if ( *((_DWORD *)a2 + 5) == 6 )
  {
    DirectComposition::CConnection::ReleaseChannelHandle(
      *((DirectComposition::CConnection **)this + 5),
      *((_DWORD *)this + 7));
    Win32FreePool(a2, v4, v5);
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
  else
  {
    *((_DWORD *)this + 95) = *((_DWORD *)a2 + 4);
    if ( (*((_BYTE *)a2 + 32) & 8) != 0 )
      *((_BYTE *)this + 241) = 0;
    ExpInterlockedPushEntrySList((PSLIST_HEADER)this + 12, (PSLIST_ENTRY)a2);
    KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 27) + 8LL), 1, 0);
  }
}
