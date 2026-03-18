/*
 * XREFs of ACPICMLidWorker @ 0x1C0047060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0006AC0 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     ACPIButtonEvent @ 0x1C002A918 (ACPIButtonEvent.c)
 */

__int64 __fastcall ACPICMLidWorker(__int64 a1, char a2)
{
  char v2; // r14
  int v5; // eax
  const char *v6; // rcx
  const char *v7; // r8
  __int64 v8; // rdx
  BOOL v10; // edi
  KIRQL v11; // al
  int v12; // esi
  int v13; // esi
  int v14; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v5 = ACPIGet((__int64 *)a1, 1145654367, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v14, 0LL);
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
    v6 = (const char *)&unk_1C0067B08;
    v7 = (const char *)&unk_1C0067B08;
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      v2 = a1;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(a1 + 560);
        if ( (v8 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(a1 + 568);
      }
    }
    return WPP_RECORDER_SF_Lqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             0x11u,
             0x18u,
             (__int64)&WPP_93108c2962503f6832bb11825bb6e7a8_Traceguids,
             v5,
             v2,
             v6,
             v7);
  }
}
