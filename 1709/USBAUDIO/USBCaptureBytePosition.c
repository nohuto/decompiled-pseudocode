/*
 * XREFs of USBCaptureBytePosition @ 0x1C00058A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ii @ 0x1C0002234 (WPP_RECORDER_SF_ii.c)
 *     USBHwGetCurrentFrame @ 0x1C000295C (USBHwGetCurrentFrame.c)
 *     USBMidiInGetCurrentTime @ 0x1C00029B4 (USBMidiInGetCurrentTime.c)
 *     USBHwGetClockRatio @ 0x1C0002B4C (USBHwGetClockRatio.c)
 */

__int64 __fastcall USBCaptureBytePosition(struct _KSPIN *a1, union _LARGE_INTEGER *a2)
{
  __int64 Context; // rdi
  __int64 v4; // r14
  __int64 v5; // rsi
  int AvailableByteCount; // r15d
  KIRQL v7; // al
  KIRQL v8; // r13
  KIRQL v9; // al
  union _LARGE_INTEGER v10; // rcx
  union _LARGE_INTEGER v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  unsigned __int64 CurrentTime; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  union _LARGE_INTEGER v19; // rax
  bool v20; // cc
  __int128 v22; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+48h] BYREF
  LONG OutputBufferBytes; // [rsp+A8h] [rbp+50h] BYREF
  LONG InputDataBytes; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+60h] BYREF

  Context = (__int64)a1->Context;
  v23 = 0;
  v4 = 0LL;
  v26 = 0LL;
  v5 = *(_QWORD *)(Context + 136);
  AvailableByteCount = KsPinGetAvailableByteCount(a1, &InputDataBytes, &OutputBufferBytes);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 96));
  v8 = v7;
  if ( !*(_BYTE *)(v5 + 12) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(Context + 96), v7);
    USBHwGetClockRatio(Context, &v22, &v26);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(Context + 96));
    v4 = v26;
    v8 = v9;
  }
  a2[1] = KeQueryPerformanceCounter(a2);
  v10 = *(union _LARGE_INTEGER *)(Context + 64);
  a2[3] = v10;
  a2[2] = v10;
  if ( *(_BYTE *)(Context + 37) )
  {
    AvailableByteCount = USBHwGetCurrentFrame(*(_QWORD *)(Context + 16), &v23);
    if ( AvailableByteCount < 0 )
      goto LABEL_20;
    v11 = *(union _LARGE_INTEGER *)(Context + 72);
    v12 = v23;
    a2[2] = v11;
    v13 = *(unsigned int *)(v5 + 88);
    if ( v12 - v13 >= 0 )
    {
      if ( v4 )
      {
        v23 = *(_DWORD *)(v5 + 84);
        if ( (unsigned int)v13 <= (unsigned int)v22 )
          v14 = *((_QWORD *)&v22 + 1) - v4 * (unsigned int)(v22 - v13);
        else
          v14 = *((_QWORD *)&v22 + 1) + v4 * (unsigned int)(v13 - v22);
        CurrentTime = USBMidiInGetCurrentTime();
        if ( v14 > CurrentTime )
          v14 = CurrentTime;
        v16 = CurrentTime - v14;
        v17 = ((CurrentTime - v14) * v23 * (unsigned __int128)0xD6BF94D5E57A42BDuLL) >> 64;
        v18 = (CurrentTime - v14) * v23 / 0x989680;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_ii(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v17,
            v16,
            0x1Bu,
            (__int64)&WPP_d97d3c5fbde9319ad26192ea2e6665a7_Traceguids,
            v18,
            v16);
        a2[2].QuadPart += v18;
      }
      else
      {
        a2[2].QuadPart = v11.QuadPart + *(_DWORD *)(v5 + 84) * ((int)v12 - (int)v13) / 0x3E8u;
      }
    }
    v19 = *(union _LARGE_INTEGER *)(Context + 80);
    v20 = v19.QuadPart <= (unsigned __int64)a2[2].QuadPart;
  }
  else
  {
    v19 = *(union _LARGE_INTEGER *)(Context + 80);
    v20 = v19.QuadPart <= (unsigned __int64)v10.QuadPart;
  }
  if ( !v20 )
    a2[2] = v19;
LABEL_20:
  a2[4] = KeQueryPerformanceCounter(0LL);
  *(union _LARGE_INTEGER *)(Context + 80) = a2[2];
  KeReleaseSpinLock((PKSPIN_LOCK)(Context + 96), v8);
  return (unsigned int)AvailableByteCount;
}
