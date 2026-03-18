/*
 * XREFs of ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C00A6330
 * Callers:
 *     ?ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F4FB0 (-ReleaseCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C00F5048 (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C015BF48 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C019E14C (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 * Callees:
 *     ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0002444 (-IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000BC00 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::EnableClockCalibration(ADAPTER_RENDER *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  char v6; // al
  _BYTE v7[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( ADAPTER_RENDER::IsClockCalibrationSupported(this) )
  {
    v5 = v4 + 920;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *(_QWORD *)(v5 + 8) = KeGetCurrentThread();
    v6 = *((_BYTE *)this + 778);
    if ( a2 )
    {
      if ( !v6
        && (qword_1C0079010 & 0x21C8ED7) != 0
        && (qword_1C0079018 & 0xFFFFFFFFFDE37128uLL) == 0
        && (qword_1C0079010 & 0x4000) != 0 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
          (DXGAUTOPUSHLOCKSHARED *)v7,
          (struct DXGPUSHLOCK *const)(*((_QWORD *)this + 2) + 96LL));
        if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 136LL) )
        {
          KeSetTimerEx(
            (PKTIMER)((char *)this + 792),
            *(LARGE_INTEGER *)((char *)this + 784),
            50,
            (PKDPC)((char *)this + 856));
          *((_BYTE *)this + 778) = 1;
        }
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
      }
    }
    else if ( v6 )
    {
      KeCancelTimer((PKTIMER)((char *)this + 792));
      KeFlushQueuedDpcs();
      *((_BYTE *)this + 778) = 0;
    }
    *(_QWORD *)(v5 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
}
