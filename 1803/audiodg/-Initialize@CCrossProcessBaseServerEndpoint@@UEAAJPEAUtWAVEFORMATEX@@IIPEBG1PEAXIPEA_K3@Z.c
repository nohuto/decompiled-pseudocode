/*
 * XREFs of ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140017080
 * Callers:
 *     ?Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z @ 0x140017E90 (-Initialize@CCrossProcessServerOutputEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG1PEAXIPEA_K3@Z.c)
 * Callees:
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140015B70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14001779C (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x1400178C8 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017944 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x140018570 (-SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140018648 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x1400190D0 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x140019140 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x14001C9A0 (memset_0.c)
 *     memcpy_0 @ 0x14001D6ED (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x140034C3C (WPP_SF_D.c)
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x1400455F8 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 *     ?AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140054BE4 (-AudCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
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
  CCrossProcessBaseEndpoint *v15; // rcx
  __int64 (__fastcall *v16)(CCrossProcessBaseEndpoint *__hidden, unsigned int); // rax
  __int64 nBlockAlign; // rdx
  WORD wFormatTag; // ax
  int v19; // r14d
  unsigned int v20; // edi
  void *v21; // rax
  void *v22; // rax
  unsigned int v23; // ecx
  bool v24; // zf
  unsigned int v25; // r13d
  int cbSize; // eax
  unsigned int v27; // edi
  unsigned int v28; // r12d
  BOOL inited; // eax
  void *v30; // rcx
  void *v31; // rax
  signed int SecurityDescriptor; // edi
  DWORD dwMaximumSizeLow; // esi
  HANDLE v34; // rax
  _DWORD *v35; // rax
  _DWORD *v36; // r14
  HANDLE v37; // rax
  __int64 v38; // rdx
  char *v39; // rcx
  signed __int64 v40; // r8
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
  memset(&FileMappingAttributes, 0, sizeof(FileMappingAttributes));
  memset(&EventAttributes, 0, sizeof(EventAttributes));
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
        v15 = (CCrossProcessBaseServerEndpoint *)((char *)this - 384);
        v16 = *(__int64 (__fastcall **)(CCrossProcessBaseEndpoint *__hidden, unsigned int))(*((_QWORD *)this - 48) + 48LL);
        if ( v16 == CCrossProcessBaseEndpoint::SetStreamFlags )
          CCrossProcessBaseEndpoint::SetStreamFlags(v15, a8);
        else
          v16(v15, a8);
        nBlockAlign = a2->nBlockAlign;
        *((_DWORD *)this - 76) = nBlockAlign;
        *((_DWORD *)this - 75) = a2->nChannels;
        *((_DWORD *)this - 71) = 1;
        if ( a2->wFormatTag == 3 )
          goto LABEL_54;
        if ( a2->wFormatTag == 0xFFFE )
        {
          v43 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2)
              - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
          if ( !v43 )
            v43 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
          if ( !v43 )
LABEL_54:
            *((_DWORD *)this - 71) = 3;
        }
        *((float *)this - 61) = (float)(int)a2->nSamplesPerSec;
        *((_DWORD *)this - 73) = a2->wBitsPerSample;
        if ( a2->wFormatTag == 0xFFFE )
          wFormatTag = a2[1].wFormatTag;
        else
          wFormatTag = a2->wBitsPerSample;
        *((_DWORD *)this - 72) = wFormatTag;
        if ( (unsigned __int64)(v10 * nBlockAlign) <= 0xFFFFFFFF )
        {
          v19 = 0;
          v20 = v10 * nBlockAlign;
          if ( *((_DWORD *)this + 12) == 1 )
            v19 = v10 * nBlockAlign;
          v21 = AERTCreateZoneHeap((unsigned int)(v10 * nBlockAlign));
          *((_QWORD *)this - 33) = v21;
          if ( v21 )
          {
            v59 = (1 * (unsigned __int128)v20) >> 64;
            if ( is_mul_ok(1uLL, v20) )
              v22 = AERTZoneAllocate(v20, v21);
            else
              v22 = 0LL;
            *((_QWORD *)this - 35) = v22;
            if ( v22 )
            {
              v23 = *((_DWORD *)this - 76);
              if ( a3 % v23 )
                a3 += v23 - a3 % v23;
              v24 = *((_DWORD *)this + 12) == 1;
              *((_DWORD *)this - 62) = a3;
              if ( v24 )
              {
                v25 = a3 / v23 / (unsigned int)v10 + 3;
                if ( v25 < 0x19 )
                  v25 = 25;
              }
              else
              {
                v25 = 0;
              }
              cbSize = a2->cbSize;
              v27 = cbSize + 172;
              v54 = (cbSize + 479) & 0xFFFFFF80;
              v61 = cbSize + 172;
              v28 = ((v25 << 6) + v54 + 1023) & 0xFFFFFC00;
              inited = InitOnceExecuteOnce(&gRTHeapInitOnce, (PINIT_ONCE_FN)AERTMemoryInitOnce, 0LL, &Context);
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
                  dwMaximumSizeLow = a3 + v28 + v19;
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
                            goto LABEL_86;
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
LABEL_86:
                              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
                                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
                              {
                                WPP_SF_D(
                                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                                  19LL,
                                  &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids,
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
                            *(_DWORD *)(*((_QWORD *)this - 39) + 132LL) = v25;
                            *(_DWORD *)(*((_QWORD *)this - 39) + 136LL) = v54;
                            *(_DWORD *)(*((_QWORD *)this - 39) + 140LL) = v28;
                            *(_DWORD *)(*((_QWORD *)this - 39) + 144LL) = v28 + a3;
                            *(_DWORD *)(*((_QWORD *)this - 39) + 148LL) = dwMaximumSizeLow;
                            if ( a6 )
                            {
                              v38 = 64LL;
                              v39 = (char *)(*((_QWORD *)this - 39) + 4LL);
                              v40 = a6 - v39;
                              while ( v38 != -2147483582 )
                              {
                                v41 = *(_WORD *)&v39[v40];
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
                            memset_0(v36, 0, 0xB0uLL);
                            *((_QWORD *)this - 40) = v36;
                            WerRegisterMemoryBlock(v36, 0xB0u);
                            *((_QWORD *)this - 34) = (char *)v36 + *(unsigned int *)(*((_QWORD *)this - 39) + 136LL);
                            v36[44] = 1162888004;
                            *a9 = *((_QWORD *)this + 1);
                            *a10 = *((_QWORD *)this - 32);
                            *((_DWORD *)this - 82) = 1;
                            SecurityDescriptor = 0;
                            goto LABEL_44;
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
LABEL_44:
          v11 = lpCriticalSection;
          goto LABEL_45;
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
LABEL_45:
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
        &WPP_698a2f115f533c7f031ecbc2e80baf0e_Traceguids,
        (unsigned int)SecurityDescriptor);
    }
    AudCPTraceLoggingErrorHelper("CCrossProcessBaseServerEndpoint::Initialize", 0x30Fu, SecurityDescriptor);
  }
  return (unsigned int)SecurityDescriptor;
}
