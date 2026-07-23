/*
 * XREFs of PpmParkSteerInterrupts @ 0x14008FDD0
 * Callers:
 *     <none>
 * Callees:
 *     KeIntSteerPeriodic @ 0x140002920 (KeIntSteerPeriodic.c)
 *     KeIntSteerSnapPerf @ 0x140003780 (KeIntSteerSnapPerf.c)
 *     KeCopyAffinityEx @ 0x14005B740 (KeCopyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x14005CAE0 (KeSubtractAffinityEx.c)
 *     KeComplementAffinityEx @ 0x14008CC00 (KeComplementAffinityEx.c)
 *     KeAndAffinityEx @ 0x14008CC70 (KeAndAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400D3180 (KeCountSetBitsAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1401174F8 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x140202C60 (KeFindFirstSetRightAffinityEx.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

char PpmParkSteerInterrupts()
{
  unsigned int v0; // r14d
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned __int64 v3; // r8
  LARGE_INTEGER v4; // r11
  unsigned __int16 v5; // si
  unsigned __int64 v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // r9d
  LARGE_INTEGER *v9; // rdx
  LARGE_INTEGER v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned __int64 v14; // rax
  SIZE_T v16; // rbx
  PVOID PoolWithTag; // rax
  int FirstSetRightAffinity; // eax
  unsigned __int64 v19; // rax
  unsigned int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 *v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int16 v24; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER v25[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v27[43]; // [rsp+74h] [rbp-8Ch] BYREF
  _QWORD v28[22]; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int16 v29[88]; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v30[44]; // [rsp+280h] [rbp+180h] BYREF
  char v31[8]; // [rsp+330h] [rbp+230h] BYREF
  __int64 v32; // [rsp+338h] [rbp+238h]

  if ( PpmIntSteerDisabled || !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    v16 = 8 * (unsigned int)HalQueryMaximumProcessorCount();
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x6B725449u);
    PpmIntSteerTrigger = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 1;
    memset(PoolWithTag, 0, (unsigned int)v16);
  }
  KeIntSteerSnapPerf(&v21, v25);
  KeComplementAffinityEx((__int64)v29, PpmPerfCoreParkingMask);
  KeQuerySystemAllowedCpuSetAffinity(KiCachedSystemAllowedCpuSet, &KiCachedSystemAllowedCpuSetVersion);
  KeAndAffinityEx(v29, KiCachedSystemAllowedCpuSet, v29);
  LODWORD(v28[0]) = 1310721;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  memset((char *)v28 + 4, 0, 0xA4uLL);
  v3 = qword_140401408[0];
  v4 = v25[0];
  v22 = (unsigned __int16 *)KeActiveProcessors;
  v5 = 0;
  while ( v3 )
  {
LABEL_6:
    _BitScanForward64(&v6, v3);
    ++v0;
    v3 &= ~(1LL << v6);
    v20 = KiProcessorNumberToIndexMappingTable[64 * v5 + (unsigned __int8)v6];
    v7 = KiProcessorIndexToNumberMappingTable[v20];
    v8 = v7 & 0x3F;
    if ( ((*(_QWORD *)&v29[4 * ((unsigned __int64)v7 >> 6) + 4] >> (KiProcessorIndexToNumberMappingTable[v20] & 0x3F)) & 1) != 0 )
    {
      ++v2;
      v9 = (LARGE_INTEGER *)(PpmIntSteerTrigger + 8LL * v20);
      v10 = *v9;
      if ( !v9->QuadPart )
      {
        v10 = v4;
        *v9 = v4;
      }
      if ( v4.QuadPart - v10.QuadPart >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
      {
        v11 = v7 >> 6;
        if ( LOWORD(v28[0]) <= (unsigned int)v11 )
          LOWORD(v28[0]) = v11 + 1;
        v12 = v28[v11 + 1];
        _bittestandset64(&v12, v8);
        v28[v11 + 1] = v12;
        ++v1;
      }
    }
    else
    {
      *(_QWORD *)(PpmIntSteerTrigger + 8LL * v20) = 0LL;
    }
  }
  while ( ++v5 < (unsigned int)LOWORD(KeActiveProcessors[0]) )
  {
    v3 = *(_QWORD *)&KeActiveProcessors[2 * v5 + 2];
    if ( v3 )
      goto LABEL_6;
  }
  if ( !v1 )
  {
    if ( v2 )
    {
      KeCopyAffinityEx((__int64)v28, v29);
      v1 = v2;
    }
    else
    {
      FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(KiCachedSystemAllowedCpuSet);
      if ( FirstSetRightAffinity == -1 )
        FirstSetRightAffinity = 0;
      v20 = FirstSetRightAffinity;
      KeAddProcessorAffinityEx(v28, FirstSetRightAffinity);
      v1 = 1;
    }
  }
  if ( PpmIntSteerMode < 1 )
    goto LABEL_16;
  switch ( PpmIntSteerMode )
  {
    case 1:
      KeCopyAffinityEx((__int64)&v26, (unsigned __int16 *)KeActiveProcessors);
      v2 = v0;
      break;
    case 2:
      KeCopyAffinityEx((__int64)&v26, (unsigned __int16 *)v28);
      v2 = v1;
      break;
    case 3:
      KeCopyAffinityEx((__int64)&v26, v29);
      break;
    default:
      if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
      {
LABEL_16:
        v2 = (PpmIntSteerLoadMax + v21) / (unsigned int)PpmIntSteerLoadMax;
        if ( v2 >= v1 )
        {
          v2 = v1;
          KeCopyAffinityEx((__int64)&v26, (unsigned __int16 *)v28);
        }
        else
        {
          v26 = 1310721;
          memset(v27, 0, 0xA4uLL);
          v30[0] = 1310721;
          memset(&v30[1], 0, 0xA4uLL);
          if ( PpmParkPreferenceHandler )
            PpmParkPreferenceHandler(1LL, PpmCheckTime, v2, v28, 0LL, v30, &v26);
          v13 = KeCountSetBitsAffinityEx(&v26);
          if ( v13 > v2 )
          {
            v26 = 1310721;
            memset(v27, 0, 0xA4uLL);
            v13 = 0;
          }
          if ( v13 < v2 )
          {
            KeSubtractAffinityEx((char *)v28, (char *)v30, v31);
            v23 = v32;
            v22 = (unsigned __int16 *)v31;
            v24 = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v20, &v22) )
            {
              v14 = (unsigned int)KiProcessorIndexToNumberMappingTable[v20];
              if ( ((*(_QWORD *)&v27[2 * (v14 >> 6) + 1] >> (v14 & 0x3F)) & 1) == 0 )
              {
                KeAddProcessorAffinityEx(&v26, v20);
                if ( ++v13 >= v2 )
                  goto LABEL_26;
              }
            }
            if ( v13 < v2 )
            {
              v23 = v28[1];
              v22 = (unsigned __int16 *)v28;
              v24 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v20, &v22) )
              {
                v19 = (unsigned int)KiProcessorIndexToNumberMappingTable[v20];
                if ( ((*(_QWORD *)&v27[2 * (v19 >> 6) + 1] >> (v19 & 0x3F)) & 1) == 0 )
                {
                  KeAddProcessorAffinityEx(&v26, v20);
                  if ( ++v13 >= v2 )
                    break;
                }
              }
            }
          }
        }
        break;
      }
      v26 = 1310721;
      memset(v27, 0, 0xA4uLL);
      KeAddProcessorAffinityEx(&v26, PpmIntSteerMode - 5);
      v2 = 1;
      break;
  }
LABEL_26:
  if ( (unsigned int)KeIsEmptyAffinityEx(&v26) )
    KeAddProcessorAffinityEx(&v26, 0);
  KeIntSteerPeriodic((__int64)&v26, v2);
  return 1;
}
