/*
 * XREFs of USBType1ChangePowerState @ 0x1C0004C90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0001254 (WPP_RECORDER_SF_qd.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C001C04C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwDataPipeReset @ 0x1C001C9BC (USBHwDataPipeReset.c)
 *     USBType1SetSampleRate @ 0x1C00204F0 (USBType1SetSampleRate.c)
 */

__int64 __fastcall USBType1ChangePowerState(__int64 a1, int a2)
{
  __int64 v2; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rbp
  KIRQL v7; // al
  int v8; // eax
  unsigned __int16 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v13; // [rsp+30h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 16);
  v5 = -1073741584;
  v6 = *(_QWORD *)(v2 + 128);
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x1Bu,
    (__int64)&WPP_d82a33061db734901bbdbf9feb709785_Traceguids,
    a1,
    a2 - 1);
  if ( a2 != 1 )
  {
    if ( (unsigned int)(a2 - 2) <= 2 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      *(_BYTE *)(v2 + 37) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v7);
      v5 = USBHwDataPipeReset(a1);
      if ( (v5 & 0x80000000) == 0 )
        return (unsigned int)USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v6 + 144));
    }
    return v5;
  }
  v8 = USBHwSelectStreamingAudioInterface(a1, *(_QWORD *)(v6 + 136));
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 28;
LABEL_11:
    LODWORD(v13) = v8;
    WPP_RECORDER_SF_qd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      8u,
      v9,
      (__int64)&WPP_d82a33061db734901bbdbf9feb709785_Traceguids,
      a1,
      v13);
    return v5;
  }
  v10 = *(_QWORD *)(v2 + 136);
  v11 = *(unsigned int *)(v2 + 88);
  if ( *(_BYTE *)(v10 + 80) )
    v11 = *(unsigned int *)(v10 + 840);
  v8 = USBType1SetSampleRate(a1, v11);
  v5 = v8;
  if ( v8 < 0 )
  {
    v9 = 29;
    goto LABEL_11;
  }
  return v5;
}
