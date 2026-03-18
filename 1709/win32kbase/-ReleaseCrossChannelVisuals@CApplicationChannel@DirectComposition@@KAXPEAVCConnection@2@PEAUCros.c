/*
 * XREFs of ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0096524
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0032790 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C0032960 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0023924 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C002F2B4 (-ReleaseCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0033230 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CrossChannelVisualData *a2)
{
  struct DirectComposition::CrossChannelVisualData *v4; // rbx
  struct DirectComposition::CApplicationChannel *v5; // rbx
  struct DirectComposition::CApplicationChannel *v6; // [rsp+38h] [rbp+10h] BYREF

  do
  {
    if ( (int)DirectComposition::CApplicationChannel::ReferenceHandleAndLock(*((_DWORD *)a2 + 3), &v6) >= 0 )
    {
      v5 = v6;
      DirectComposition::CApplicationChannel::ReleaseCrossChannelVisualChild(v6, *((_DWORD *)a2 + 2));
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
    }
    DirectComposition::CConnection::ReleaseSystemResource((__int64)a1, *((_DWORD *)a2 + 2));
    v4 = *(struct DirectComposition::CrossChannelVisualData **)a2;
    Win32FreePool((__int64)a2);
    a2 = v4;
  }
  while ( v4 );
}
