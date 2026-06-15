/*
 * XREFs of ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140018480
 * Callers:
 *     ?Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140019060 (-Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140016C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140018B34 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140019388 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140019480 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140019530 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x1400195A0 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     WPP_SF_D @ 0x14001B708 (WPP_SF_D.c)
 *     ?SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x14001BB10 (-SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x14004641C (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400550E4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::Initialize(
        CCrossProcessBaseServerEndpoint *this,
        struct tWAVEFORMATEX *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int16 *a5,
        char *a6,
        _QWORD *a7,
        unsigned int a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10)
{
  __int64 v10; // rsi
  struct _RTL_CRITICAL_SECTION *v11; // r14
  unsigned int v13; // r13d
  CCrossProcessBaseEndpoint *v16; // rcx
  __int64 (__fastcall *v17)(CCrossProcessBaseEndpoint *__hidden, unsigned int); // rax
  WORD wFormatTag; // ax
  unsigned __int64 v19; // rcx
  int v20; // r14d
  unsigned int v21; // edi
  void *v22; // rax
  void *v23; // rax
  unsigned int v24; // ecx
  bool v25; // zf
  int cbSize; // eax
  unsigned int v27; // edi
  unsigned int v28; // r12d
  BOOL inited; // eax
  void *v30; // rcx
  __int64 v31; // rax
  signed int SecurityDescriptor; // edi
  DWORD dwMaximumSizeLow; // esi
  HANDLE v34; // rax
  _DWORD *v35; // rax
  _DWORD *v36; // r14
  HANDLE v37; // rax
  __int64 v38; // rdx
  char *v39; // rcx
  char *v40; // r8
  __int16 v41; // ax
  __int64 v43; // rax
  signed int v44; // eax
  void *v45; // rax
  void *v46; // rcx
  signed int v47; // eax
  signed int LastError; // eax
  bool v49; // sf
  signed int v50; // eax
  char *v51; // rcx
  char *v52; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-59h]
  unsigned int v54; // [rsp+38h] [rbp-51h]
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+40h] [rbp-49h] BYREF
  _SECURITY_ATTRIBUTES FileMappingAttributes; // [rsp+58h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+70h] [rbp-19h] BYREF
  size_t Size; // [rsp+78h] [rbp-11h]
  __int64 v59; // [rsp+80h] [rbp-9h]
  __int64 v60; // [rsp+88h] [rbp-1h]
  int v61; // [rsp+D0h] [rbp+47h]

  v10 = a4;
  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this - 368);
  FileMappingAttributes.lpSecurityDescriptor = 0LL;
  *(_QWORD *)&FileMappingAttributes.bInheritHandle = 0LL;
  v13 = 0;
  EventAttributes.lpSecurityDescriptor = 0LL;
  FileMappingAttributes.nLength = 0;
  EventAttributes.nLength = 0;
  *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 368);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this - 368));
  if ( *((_DWORD *)this - 82) )
  {
    SecurityDescriptor = -2005139440;
  }
  else if ( a9 )
  {
    if ( a10 )
    {
      if ( a2 )
      {
        v16 = (CCrossProcessBaseServerEndpoint *)((char *)this - 384);
        v17 = *(__int64 (__fastcall **)(CCrossProcessBaseEndpoint *__hidden, unsigned int))(*((_QWORD *)this - 48) + 48LL);
        if ( v17 == CCrossProcessBaseEndpoint::SetStreamFlags )
          CCrossProcessBaseEndpoint::SetStreamFlags(v16, a8);
        else
          v17(v16, a8);
        *((_DWORD *)this - 76) = a2->nBlockAlign;
        *((_DWORD *)this - 75) = a2->nChannels;
        *((_DWORD *)this - 72) = 1;
        if ( a2->wFormatTag == 3 )
          goto LABEL_58;
        if ( a2->wFormatTag == 0xFFFE )
        {
          v43 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          if ( !v43 )
            v43 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( !v43 )
LABEL_58:
            *((_DWORD *)this - 72) = 3;
        }
        *((float *)this - 61) = (float)(int)a2->nSamplesPerSec;
        if ( a2->wFormatTag == 0xFFFE )
          wFormatTag = a2[1].wFormatTag;
        else
          wFormatTag = a2->wBitsPerSample;
        v19 = v10 * *((unsigned int *)this - 76);
        *((_DWORD *)this - 73) = wFormatTag;
        if ( v19 <= 0xFFFFFFFF )
        {
          v20 = 0;
          v21 = v19;
          if ( *((_DWORD *)this + 12) == 1 )
            v20 = v19;
          v22 = AERTCreateZoneHeap((unsigned int)v19);
          *((_QWORD *)this - 33) = v22;
          if ( v22 )
          {
            v59 = (1 * (unsigned __int128)v21) >> 64;
            if ( is_mul_ok(1uLL, v21) )
              v23 = AERTZoneAllocate(v21, v22);
            else
              v23 = 0LL;
            *((_QWORD *)this - 35) = v23;
            if ( v23 )
            {
              v24 = *((_DWORD *)this - 76);
              if ( a3 % v24 )
                a3 = v24 * (a3 / v24 + 1);
              v25 = *((_DWORD *)this + 12) == 1;
              *((_DWORD *)this - 62) = a3;
              if ( v25 )
              {
                v13 = a3 / v24 / (unsigned int)v10 + 3;
                if ( v13 < 0x19 )
                  v13 = 25;
              }
              cbSize = a2->cbSize;
              v27 = cbSize + 172;
              v54 = (cbSize + 479) & 0xFFFFFF80;
              v61 = cbSize + 172;
              v28 = ((v13 << 6) + v54 + 1023) & 0xFFFFFC00;
              inited = InitOnceExecuteOnce(&gRTHeapInitOnce, AERTMemoryInitOnce, 0LL, &Context);
              v30 = 0LL;
              if ( inited )
                v30 = Context;
              Size = v27;
              v60 = (1 * (unsigned __int128)v27) >> 64;
              if ( is_mul_ok(1uLL, v27) )
                v31 = AERTAllocate(v27, v30);
              else
                v31 = 0LL;
              *((_QWORD *)this - 39) = v31;
              if ( v31 )
              {
                FileMappingAttributes.nLength = 24;
                FileMappingAttributes.lpSecurityDescriptor = 0LL;
                FileMappingAttributes.bInheritHandle = 0;
                EventAttributes.nLength = 24;
                EventAttributes.lpSecurityDescriptor = 0LL;
                EventAttributes.bInheritHandle = 0;
                if ( !a5
                  || (SecurityDescriptor = CreateSecurityDescriptor(
                                             a5,
                                             0xF001Fu,
                                             &FileMappingAttributes.lpSecurityDescriptor),
                      SecurityDescriptor >= 0)
                  && (SecurityDescriptor = CreateSecurityDescriptor(
                                             a5,
                                             0x1F0003u,
                                             &EventAttributes.lpSecurityDescriptor),
                      SecurityDescriptor >= 0) )
                {
                  dwMaximumSizeLow = a3 + v28 + v20;
                  v34 = CreateFileMappingW(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &FileMappingAttributes,
                          4u,
                          0,
                          dwMaximumSizeLow,
                          0LL);
                  *((_QWORD *)this + 1) = v34;
                  if ( v34 )
                  {
                    if ( GetLastError() == 183 )
                    {
                      SecurityDescriptor = -2147024713;
                    }
                    else
                    {
                      v35 = MapViewOfFile(*((HANDLE *)this + 1), 0xF001Fu, 0, 0, dwMaximumSizeLow);
                      v36 = v35;
                      if ( v35 )
                      {
                        if ( !VirtualLock(v35, dwMaximumSizeLow) )
                        {
                          LastError = IncreaseProcessWorkingSet(dwMaximumSizeLow);
                          if ( LastError < 0 )
                            goto LABEL_84;
                          if ( !VirtualLock(v36, dwMaximumSizeLow) )
                          {
                            LastError = GetLastError();
                            v49 = LastError < 0;
                            if ( LastError > 0 )
                            {
                              LastError = (unsigned __int16)LastError | 0x80070000;
                              v49 = LastError < 0;
                            }
                            if ( v49 )
                            {
LABEL_84:
                              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
                                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
                              {
                                WPP_SF_D(
                                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                                  19LL,
                                  &WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
                                  (unsigned int)LastError);
                              }
                            }
                          }
                        }
                        v37 = CreateEventW(&EventAttributes, 1, 1, 0LL);
                        *((_QWORD *)this - 32) = v37;
                        if ( v37 )
                        {
                          if ( GetLastError() != 183 )
                          {
                            *((_DWORD *)this - 74) = a4;
                            **((_DWORD **)this - 39) = v61;
                            *(_DWORD *)(*((_QWORD *)this - 39) + 132LL) = v13;
                            *(_DWORD *)(*((_QWORD *)this - 39) + 136LL) = v54;
                            *(_DWORD *)(*((_QWORD *)this - 39) + 140LL) = v28;
                            *(_DWORD *)(*((_QWORD *)this - 39) + 144LL) = v28 + a3;
                            *(_DWORD *)(*((_QWORD *)this - 39) + 148LL) = dwMaximumSizeLow;
                            if ( a6 )
                            {
                              v38 = 64LL;
                              v39 = (char *)(*((_QWORD *)this - 39) + 4LL);
                              v40 = (char *)(a6 - v39);
                              while ( v38 != -2147483582 )
                              {
                                v41 = *(_WORD *)&v40[(_QWORD)v39];
                                if ( !v41 )
                                  break;
                                *(_WORD *)v39 = v41;
                                v39 += 2;
                                if ( !--v38 )
                                {
                                  v39 -= 2;
                                  break;
                                }
                              }
                              *(_WORD *)v39 = 0;
                              a7[4] = (char *)this + 24;
                            }
                            memcpy_0((void *)(*((_QWORD *)this - 39) + 152LL), a2, a2->cbSize + 18LL);
                            memcpy_0(v36 + 45, *((const void **)this - 39), Size);
                            memset(v36, 0, 0xB0uLL);
                            *((_QWORD *)this - 40) = v36;
                            WerRegisterMemoryBlock(v36, 0xB0u);
                            *((_QWORD *)this - 34) = (char *)v36 + *(unsigned int *)(*((_QWORD *)this - 39) + 136LL);
                            v36[44] = 1162888004;
                            *a9 = *((_QWORD *)this + 1);
                            *a10 = *((_QWORD *)this - 32);
                            *((_DWORD *)this - 82) = 1;
                            SecurityDescriptor = 0;
                            goto LABEL_43;
                          }
                          SecurityDescriptor = -2147024713;
                        }
                        else
                        {
                          v50 = GetLastError();
                          SecurityDescriptor = v50;
                          if ( v50 > 0 )
                            SecurityDescriptor = (unsigned __int16)v50 | 0x80070000;
                        }
                        UnmapViewOfFile(v36);
                      }
                      else
                      {
                        v47 = GetLastError();
                        SecurityDescriptor = v47;
                        if ( v47 > 0 )
                          SecurityDescriptor = (unsigned __int16)v47 | 0x80070000;
                      }
                    }
                    v51 = (char *)*((_QWORD *)this + 1);
                    if ( (unsigned __int64)(v51 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                    {
                      CloseHandle(v51);
                      *((_QWORD *)this + 1) = 0LL;
                    }
                    v52 = (char *)*((_QWORD *)this - 32);
                    if ( (unsigned __int64)(v52 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                    {
                      CloseHandle(v52);
                      *((_QWORD *)this - 32) = 0LL;
                    }
                  }
                  else
                  {
                    v44 = GetLastError();
                    SecurityDescriptor = v44;
                    if ( v44 > 0 )
                      SecurityDescriptor = (unsigned __int16)v44 | 0x80070000;
                  }
                }
                v45 = AERTGetDLLRTHeap();
                AERTFree(*((void **)this - 39), v45);
                *((_QWORD *)this - 39) = 0LL;
              }
              else
              {
                SecurityDescriptor = -2147024882;
              }
            }
            else
            {
              SecurityDescriptor = -2147024882;
            }
            v46 = (void *)*((_QWORD *)this - 33);
            if ( v46 )
            {
              AERTDestroyZoneHeap(v46);
              *((_QWORD *)this - 33) = 0LL;
            }
          }
          else
          {
            SecurityDescriptor = -2147024882;
          }
LABEL_43:
          v11 = lpCriticalSection;
          goto LABEL_44;
        }
        SecurityDescriptor = -2147024362;
      }
      else
      {
        SecurityDescriptor = -2147467261;
      }
    }
    else
    {
      SecurityDescriptor = -2147467261;
    }
  }
  else
  {
    SecurityDescriptor = -2147467261;
  }
LABEL_44:
  if ( EventAttributes.lpSecurityDescriptor )
  {
    LocalFree(EventAttributes.lpSecurityDescriptor);
    EventAttributes.lpSecurityDescriptor = 0LL;
  }
  if ( FileMappingAttributes.lpSecurityDescriptor )
  {
    LocalFree(FileMappingAttributes.lpSecurityDescriptor);
    FileMappingAttributes.lpSecurityDescriptor = 0LL;
  }
  LeaveCriticalSection(v11);
  if ( SecurityDescriptor < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_16533aa73b2d367cdf7d3dcf93dce015_Traceguids,
        (unsigned int)SecurityDescriptor);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseServerEndpoint::Initialize", 0x30Bu, SecurityDescriptor);
  }
  return (unsigned int)SecurityDescriptor;
}
