/*
 * XREFs of ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140054210
 * Callers:
 *     ?Initialize@CCrossProcessClientOutputEndpoint@@UEAAJ_K0000I@Z @ 0x1400559D0 (-Initialize@CCrossProcessClientOutputEndpoint@@UEAAJ_K0000I@Z.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140016C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140019388 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400193F4 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140019480 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140019530 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x1400195A0 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x140046094 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x1400545D8 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseClientEndpoint::Initialize(
        CCrossProcessBaseClientEndpoint *this,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7)
{
  struct _RTL_CRITICAL_SECTION *v7; // r12
  int v11; // ebx
  unsigned int *v12; // rsi
  signed int v13; // eax
  void *v14; // rcx
  void *v15; // rax
  SIZE_T dwNumberOfBytesToMap; // r14
  unsigned int *v17; // rax
  signed int LastError; // eax
  __int64 v19; // rcx
  unsigned __int16 v20; // ax
  unsigned int v21; // r8d
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  void *v25; // rax
  __int64 v26; // rax
  void *v27; // rcx
  void *v28; // rax
  __int64 v30; // rax

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 368);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 368));
  if ( *((_DWORD *)this - 82) )
  {
    v11 = -2005139440;
    goto LABEL_43;
  }
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 || ((a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v11 = -2147024890;
    goto LABEL_43;
  }
  *((_QWORD *)this + 3) = a5;
  *((_QWORD *)this + 4) = a6;
  *((_QWORD *)this - 32) = a3;
  v12 = (unsigned int *)MapViewOfFile(a2, 0xF001Fu, 0, 0, 0x160uLL);
  if ( v12 )
  {
    v14 = (void *)AERTGetDLLRTHeap();
    if ( is_mul_ok(1uLL, v12[45]) )
      v15 = (void *)AERTAllocate(v12[45], v14);
    else
      v15 = 0LL;
    *((_QWORD *)this - 39) = v15;
    if ( v15 )
    {
      memcpy_0(v15, v12 + 45, v12[45]);
      if ( CCrossProcessBaseEndpoint::IsValidControlData(
             (CCrossProcessBaseClientEndpoint *)((char *)this - 384),
             (struct ControlData *)v12) )
      {
        dwNumberOfBytesToMap = v12[82];
        UnmapViewOfFile(v12);
        v17 = (unsigned int *)MapViewOfFile(a2, 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
        v12 = v17;
        if ( v17 )
        {
          v11 = AERTLockMemory(v17, dwNumberOfBytesToMap);
          if ( v11 < 0 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x18u,
                (__int64)&WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
                v11);
            }
            v11 = 0;
          }
          v19 = *((_QWORD *)this - 39);
          *((_QWORD *)this - 27) = 0LL;
          *((_QWORD *)this - 29) = 0LL;
          *((_DWORD *)this - 76) = *(unsigned __int16 *)(v19 + 164);
          *((float *)this - 61) = (float)*(int *)(v19 + 156);
          if ( *(_WORD *)(v19 + 152) == 0xFFFE )
            v20 = *(_WORD *)(v19 + 170);
          else
            v20 = *(_WORD *)(v19 + 166);
          v21 = *((_DWORD *)this - 76);
          *((_DWORD *)this - 73) = v20;
          v22 = *(_DWORD *)(v19 + 144) - *(_DWORD *)(v19 + 140);
          v23 = a7;
          *((_DWORD *)this - 62) = v22;
          v24 = v22 / v21;
          if ( a7 <= v24 )
          {
            if ( !a7 )
              v23 = v24;
            *((_DWORD *)this - 74) = v23;
            v25 = (void *)AERTCreateZoneHeap(v21 * v23);
            *((_QWORD *)this - 33) = v25;
            if ( v25 )
            {
              if ( is_mul_ok(1uLL, (unsigned int)(*((_DWORD *)this - 74) * *((_DWORD *)this - 76))) )
                v26 = AERTZoneAllocate((unsigned int)(*((_DWORD *)this - 74) * *((_DWORD *)this - 76)), v25);
              else
                v26 = 0LL;
              *((_QWORD *)this - 35) = v26;
              if ( v26 )
              {
                v30 = *((_QWORD *)this - 39);
                *((_QWORD *)this - 40) = v12;
                *((_QWORD *)this - 34) = (char *)v12 + *(unsigned int *)(v30 + 136);
                _InterlockedExchange((volatile __int32 *)this - 82, 1);
                goto LABEL_43;
              }
              v27 = (void *)*((_QWORD *)this - 33);
              if ( v27 )
              {
                AERTDestroyZoneHeap(v27);
                *((_QWORD *)this - 33) = 0LL;
              }
            }
            AERTUnlockMemory(v12, dwNumberOfBytesToMap);
            v11 = -2147024882;
          }
          else
          {
            v11 = -2147024809;
          }
        }
        else
        {
          LastError = GetLastError();
          v11 = LastError;
          if ( LastError > 0 )
            v11 = (unsigned __int16)LastError | 0x80070000;
        }
      }
      else
      {
        v11 = -2005139387;
      }
      v28 = (void *)AERTGetDLLRTHeap();
      AERTFree(*((void **)this - 39), v28);
      *((_QWORD *)this - 39) = 0LL;
    }
    else
    {
      v11 = -2147024882;
    }
    if ( v12 )
      UnmapViewOfFile(v12);
  }
  else
  {
    v13 = GetLastError();
    v11 = v13;
    if ( v13 > 0 )
      v11 = (unsigned __int16)v13 | 0x80070000;
  }
LABEL_43:
  LeaveCriticalSection(v7);
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
        v11);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::Initialize", 0x400u, v11);
  }
  return (unsigned int)v11;
}
