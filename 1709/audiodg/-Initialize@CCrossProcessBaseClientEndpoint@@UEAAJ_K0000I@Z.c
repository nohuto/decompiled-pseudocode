/*
 * XREFs of ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K0000I@Z @ 0x140056070
 * Callers:
 *     ?Initialize@CCrossProcessClientOutputEndpoint@@UEAAJ_K0000I@Z @ 0x140057BF0 (-Initialize@CCrossProcessClientOutputEndpoint@@UEAAJ_K0000I@Z.c)
 * Callees:
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140017184 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017200 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140017F5C (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140017FDC (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140018A90 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x14001E51D (memcpy_0.c)
 *     WPP_SF_D @ 0x140035F74 (WPP_SF_D.c)
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x140047000 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z @ 0x140055948 (-AE_ALLOCATE_SAFEMULT@@YAPEAX_K0PEAXP6APEAX01@Z@Z.c)
 *     ?IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z @ 0x140056410 (-IsValidControlData@CCrossProcessBaseEndpoint@@IEAA_NPEAUControlData@@@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140056F64 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v11; // ebx
  unsigned int *v12; // rax
  unsigned int *v13; // rsi
  signed int v14; // eax
  unsigned int *v15; // rbx
  void *v16; // rax
  __int64 v17; // rcx
  void *v18; // rax
  SIZE_T dwNumberOfBytesToMap; // r14
  unsigned int *v20; // rax
  signed int LastError; // eax
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  unsigned int v24; // r8d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  void *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  void *v31; // rcx
  void *v32; // rax
  __int64 v34; // rax

  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 368);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 368));
  if ( *((_DWORD *)this - 82) )
  {
    v11 = -2005139440;
    goto LABEL_37;
  }
  if ( (((unsigned __int64)a2 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 || ((a3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v11 = -2147024890;
    goto LABEL_37;
  }
  *((_QWORD *)this + 3) = a5;
  *((_QWORD *)this + 4) = a6;
  *((_QWORD *)this - 32) = a3;
  v12 = (unsigned int *)MapViewOfFile(a2, 0xF001Fu, 0, 0, 0x160uLL);
  v13 = v12;
  if ( v12 )
  {
    v15 = v12 + 45;
    v16 = (void *)AERTGetDLLRTHeap();
    v18 = (void *)AE_ALLOCATE_SAFEMULT(v17, *v15, v16, (__int64 (__fastcall *)(unsigned __int64, void *))AERTAllocate);
    *((_QWORD *)this - 39) = v18;
    if ( v18 )
    {
      memcpy_0(v18, v15, *v15);
      if ( CCrossProcessBaseEndpoint::IsValidControlData(
             (CCrossProcessBaseClientEndpoint *)((char *)this - 384),
             (struct ControlData *)v13) )
      {
        dwNumberOfBytesToMap = v13[82];
        UnmapViewOfFile(v13);
        v20 = (unsigned int *)MapViewOfFile(a2, 0xF001Fu, 0, 0, dwNumberOfBytesToMap);
        v13 = v20;
        if ( v20 )
        {
          v11 = AERTLockMemory(v20, dwNumberOfBytesToMap);
          if ( v11 < 0 )
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x18u,
                (__int64)&WPP_a656f1dc337437ce15896b73439d7644_Traceguids,
                v11);
            }
            v11 = 0;
          }
          v22 = *((_QWORD *)this - 39);
          *((_QWORD *)this - 27) = 0LL;
          *((_QWORD *)this - 29) = 0LL;
          *((_DWORD *)this - 76) = *(unsigned __int16 *)(v22 + 164);
          *((float *)this - 61) = (float)*(int *)(v22 + 156);
          if ( *(_WORD *)(v22 + 152) == 0xFFFE )
            v23 = *(_WORD *)(v22 + 170);
          else
            v23 = *(_WORD *)(v22 + 166);
          v24 = *((_DWORD *)this - 76);
          *((_DWORD *)this - 72) = v23;
          v25 = *(_DWORD *)(v22 + 144) - *(_DWORD *)(v22 + 140);
          v26 = a7;
          *((_DWORD *)this - 62) = v25;
          v27 = v25 / v24;
          if ( a7 <= v27 )
          {
            if ( !a7 )
              v26 = v27;
            *((_DWORD *)this - 74) = v26;
            v28 = (void *)AERTCreateZoneHeap(v24 * v26);
            *((_QWORD *)this - 33) = v28;
            if ( v28 )
            {
              v30 = AE_ALLOCATE_SAFEMULT(
                      v29,
                      (unsigned int)(*((_DWORD *)this - 74) * *((_DWORD *)this - 76)),
                      v28,
                      AERTZoneAllocate);
              *((_QWORD *)this - 35) = v30;
              if ( v30 )
              {
                v34 = *((_QWORD *)this - 39);
                *((_QWORD *)this - 40) = v13;
                *((_QWORD *)this - 34) = (char *)v13 + *(unsigned int *)(v34 + 136);
                _InterlockedExchange((volatile __int32 *)this - 82, 1);
                goto LABEL_37;
              }
              v31 = (void *)*((_QWORD *)this - 33);
              if ( v31 )
              {
                AERTDestroyZoneHeap(v31);
                *((_QWORD *)this - 33) = 0LL;
              }
            }
            AERTUnlockMemory(v13, dwNumberOfBytesToMap);
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
      v32 = (void *)AERTGetDLLRTHeap();
      AERTFree(*((void **)this - 39), v32);
      *((_QWORD *)this - 39) = 0LL;
    }
    else
    {
      v11 = -2147024882;
    }
    if ( v13 )
      UnmapViewOfFile(v13);
  }
  else
  {
    v14 = GetLastError();
    v11 = v14;
    if ( v14 > 0 )
      v11 = (unsigned __int16)v14 | 0x80070000;
  }
LABEL_37:
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
        (__int64)&WPP_a656f1dc337437ce15896b73439d7644_Traceguids,
        v11);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseClientEndpoint::Initialize", 0x404u, v11);
  }
  return (unsigned int)v11;
}
