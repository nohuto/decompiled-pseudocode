/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C000D310
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C000D1D0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIBuildCompleteCommon @ 0x1C000FF78 (ACPIBuildCompleteCommon.c)
 *     IsPciBusAsync @ 0x1C001FACC (IsPciBusAsync.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckBridge(__int64 a1)
{
  _QWORD *v1; // rsi
  int v3; // ecx
  int v4; // edi
  signed __int32 v5; // ecx
  KIRQL v6; // bl
  int v7; // edx
  int v9; // eax
  __int64 v10; // rdx
  const char *v11; // rax
  const char *v12; // rcx

  v1 = *(_QWORD **)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 84);
  v4 = 0;
  if ( (v3 & 1) != 0 && (v1[1] & 2) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 7;
    if ( (v3 & 0x40) != 0 )
    {
      *(_DWORD *)(a1 + 128) = 0;
      v9 = IsPciBusAsync(v1[89], ACPIBuildCompleteMustSucceed, a1);
      v10 = v1[1];
      v4 = v9;
      v11 = (const char *)&unk_1C0066CD0;
      v12 = (const char *)&unk_1C0066CD0;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v11 = (const char *)v1[70];
        if ( (v10 & 0x400000000000LL) != 0 )
          v12 = (const char *)v1[71];
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x3Au,
        (__int64)&WPP_8442de81bc3731f2cffd4587785a31a7_Traceguids,
        v4,
        (char)v1,
        v11,
        v12);
      if ( v4 == 259 )
        return 259LL;
    }
  }
  v5 = *(_DWORD *)(a1 + 32);
  if ( v4 == -1073741738 )
  {
    *(_DWORD *)(a1 + 48) = -1073741738;
    ACPIBuildCompleteCommon(a1 + 24, 2LL);
  }
  else
  {
    if ( v4 < 0 )
    {
      *(_DWORD *)(a1 + 48) = v4;
      KeBugCheckEx(0xA5u, 3uLL, 0LL, v4, 0LL);
    }
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v5, 1);
    v6 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    v7 = AcpiBuildDpcFlags | 2;
    AcpiBuildDpcFlags = v7;
    if ( (v7 & 1) == 0 )
    {
      AcpiBuildDpcFlags = v7 | 1;
      KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
    }
    KeReleaseSpinLock(&AcpiBuildQueueLock, v6);
  }
  return (unsigned int)v4;
}
