/*
 * XREFs of ACPICMLidWorker @ 0x1C00172C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     ACPIButtonEvent @ 0x1C0016394 (ACPIButtonEvent.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C00173F8 (WPP_RECORDER_SF_Dqss.c)
 */

__int64 __fastcall ACPICMLidWorker(__int64 a1, char a2)
{
  char v2; // r14
  int v5; // eax
  __int64 v6; // rdx
  void *v7; // rcx
  void *v8; // r8
  BOOL v10; // edi
  KIRQL v11; // al
  int v12; // esi
  int v13; // esi
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v5 = ACPIGet(a1, 0x44494C5Fu, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v14, 0LL);
  if ( v5 >= 0 )
  {
    v10 = v14 != 0;
    v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    *(_BYTE *)(a1 + 192) = v10;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v11);
    v12 = ((a2 & 1) + 2) << 18;
    if ( v10 )
      v13 = v12 | 0x80000000;
    else
      v13 = v12 | 4;
    return ACPIButtonEvent(*(_QWORD *)(a1 + 720), v13);
  }
  else
  {
    v7 = &unk_1C005B1F0;
    v8 = &unk_1C005B1F0;
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v2 = a1;
      if ( (v6 & 0x200000000000LL) != 0 )
      {
        v7 = *(void **)(a1 + 560);
        if ( (v6 & 0x400000000000LL) != 0 )
          v8 = *(void **)(a1 + 568);
      }
    }
    LOBYTE(v6) = 2;
    return WPP_RECORDER_SF_Dqss(
             WPP_GLOBAL_Control->DeviceExtension,
             v6,
             17,
             24,
             (__int64)&WPP_2c3ea2e183a23f0b0659c630e7e4fdba_Traceguids,
             v5,
             v2,
             (__int64)v7,
             (__int64)v8);
  }
}
