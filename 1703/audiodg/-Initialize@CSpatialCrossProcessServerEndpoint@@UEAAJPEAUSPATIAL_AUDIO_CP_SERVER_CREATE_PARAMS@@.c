/*
 * XREFs of ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x14005EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140018B34 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140019480 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140019530 (-AERTZoneAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x1400195A0 (-AERTCreateZoneHeap@@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14001CB64 (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D4D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     memcpy_0 @ 0x14001E75E (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x1400303B4 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AB90 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14005AC28 (-SpatialCPTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C458 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005CE7C (-SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??4?$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioResourceTaskCompletion@@@Z @ 0x14005E92C (--4-$ComPtr@UISpatialAudioResourceTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@PEAUISpatialAudioR.c)
 */

__int64 __fastcall CSpatialCrossProcessServerEndpoint::Initialize(
        CSpatialCrossProcessServerEndpoint *this,
        struct SPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  int SecurityDescriptor; // ebx
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  void *v14; // rax
  void *v15; // rax
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // edx
  const unsigned __int16 *v25; // rcx
  unsigned int v26; // eax
  void *v27; // rax
  const unsigned __int16 *v28; // rcx
  HANDLE EventW; // rax
  HANDLE v30; // rax
  HANDLE v31; // rax
  HANDLE v32; // rax
  __int64 v33; // rcx
  HANDLE CurrentProcess; // rbx
  HANDLE v35; // rax
  signed int LastError; // eax
  HANDLE v37; // rax
  signed int v38; // eax
  void *v39[2]; // [rsp+40h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-38h] BYREF
  char v41; // [rsp+58h] [rbp-30h]
  DWORD ThreadId; // [rsp+90h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this - 880);
  v41 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  SpatialCPTraceLoggingTracer("CSpatialCrossProcessServerEndpoint::Initialize", 60);
  if ( !*((_BYTE *)this - 840) )
  {
    if ( !a3 || !a4 || !a2 )
    {
      SecurityDescriptor = -2147467261;
      goto LABEL_31;
    }
    if ( *(_DWORD *)a2 != 144 )
    {
      SecurityDescriptor = -2147024809;
      goto LABEL_31;
    }
    SecurityDescriptor = CSpatialCrossProcessBaseEndpoint::SetWasapiStreamFormat(
                           (CSpatialCrossProcessServerEndpoint *)((char *)this - 912),
                           *((const struct tWAVEFORMATEX **)a2 + 16));
    if ( SecurityDescriptor < 0 )
      goto LABEL_31;
    v9 = *((_DWORD *)a2 + 21);
    v10 = *((_QWORD *)this - 95);
    *((_DWORD *)this - 209) = v9;
    *((_DWORD *)this - 191) = 4 * v9;
    *((float *)this - 201) = (float)*(int *)(v10 + 4);
    if ( *(_WORD *)v10 == 0xFFFE )
      v11 = *(_WORD *)(v10 + 18);
    else
      v11 = *(_WORD *)(v10 + 14);
    *((_DWORD *)this - 208) = v11;
    *((_QWORD *)this + 21) = *((_QWORD *)a2 + 17);
    v12 = *((unsigned int *)a2 + 21) * (unsigned __int64)*(unsigned __int16 *)(v10 + 12);
    if ( v12 > 0xFFFFFFFF )
    {
      SecurityDescriptor = -2147024362;
      goto LABEL_31;
    }
    v13 = (unsigned int)v12;
    v14 = (void *)AERTCreateZoneHeap((unsigned int)v12);
    *((_QWORD *)this - 102) = v14;
    if ( !v14 )
    {
      SecurityDescriptor = -2147024882;
      goto LABEL_31;
    }
    v39[1] = (void *)((1 * (unsigned __int128)v13) >> 64);
    if ( is_mul_ok(1uLL, v13) )
      v15 = (void *)AERTZoneAllocate(v13, v14);
    else
      v15 = 0LL;
    *((_QWORD *)this - 103) = v15;
    if ( !v15 )
      goto LABEL_21;
    memset(v15, 0, v13);
    v21 = *((_DWORD *)a2 + 20);
    v22 = *((_QWORD *)this - 95);
    *((_DWORD *)this - 202) = v21;
    v24 = v21 % *(unsigned __int16 *)(v22 + 12);
    v23 = v21 / *(unsigned __int16 *)(v22 + 12);
    if ( v24 )
      *((_DWORD *)this - 202) = *(unsigned __int16 *)(v22 + 12) * (v23 + 1);
    *((_DWORD *)this + 24) = 0;
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 20) = 24;
    v25 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
    if ( v25 )
    {
      SecurityDescriptor = CreateSecurityDescriptor(v25, 0xF001Fu, (void **)this + 11);
      if ( SecurityDescriptor < 0 )
        goto LABEL_22;
    }
    SecurityDescriptor = CSpatialCrossProcessBaseEndpoint::InitializeCPMemory(
                           (CSpatialCrossProcessServerEndpoint *)((char *)this - 912),
                           (struct _SECURITY_ATTRIBUTES *)((char *)this + 80),
                           *((size_t **)a2 + 12),
                           *((_DWORD *)a2 + 2),
                           *((_DWORD *)a2 + 5),
                           *((_DWORD *)a2 + 6),
                           *((_DWORD *)a2 + 7),
                           v39);
    if ( SecurityDescriptor < 0 )
      goto LABEL_22;
    *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 2);
    v26 = *((_DWORD *)a2 + 12);
    *((_DWORD *)this + 38) = v26;
    if ( v26 )
    {
      v27 = operator new[](v26);
      *((_QWORD *)this + 20) = v27;
      if ( !v27 )
      {
LABEL_21:
        SecurityDescriptor = -2147024882;
        goto LABEL_22;
      }
      memcpy_0(v27, *((const void **)a2 + 7), *((unsigned int *)this + 38));
    }
    _InterlockedExchange(
      (volatile __int32 *)(*((_QWORD *)this - 4) + 52LL),
      (int)((float)((float)*(int *)(*((_QWORD *)this - 95) + 8LL)
                  / (float)*(unsigned __int16 *)(*((_QWORD *)this - 95) + 12LL))
          * (double)(int)*((_QWORD *)a2 + 9)
          / 10000000.0
          + 0.5));
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 30) = 0;
    *((_DWORD *)this + 26) = 24;
    v28 = (const unsigned __int16 *)*((_QWORD *)a2 + 11);
    if ( v28 )
    {
      SecurityDescriptor = CreateSecurityDescriptor(v28, 0x1F0003u, (void **)this + 14);
      if ( SecurityDescriptor < 0 )
        goto LABEL_22;
    }
    EventW = CreateEventW((LPSECURITY_ATTRIBUTES)((char *)this + 104), 0, 0, 0LL);
    *((_QWORD *)this + 1) = EventW;
    if ( EventW )
    {
      v30 = CreateEventW(0LL, 0, 0, 0LL);
      *((_QWORD *)this + 3) = v30;
      if ( v30 )
      {
        v31 = CreateEventW(0LL, 0, 0, 0LL);
        *((_QWORD *)this + 4) = v31;
        if ( v31 )
        {
          v32 = CreateEventW(0LL, 0, 0, 0LL);
          *((_QWORD *)this + 2) = v32;
          if ( v32 )
          {
            SecurityDescriptor = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 111) + 24LL))(
                                   (char *)this - 888,
                                   0LL,
                                   *((unsigned int *)a2 + 16));
            if ( SecurityDescriptor < 0 )
              goto LABEL_22;
            SecurityDescriptor = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this - 111) + 32LL))(
                                   (char *)this - 888,
                                   *((unsigned int *)a2 + 16),
                                   0LL);
            if ( SecurityDescriptor < 0 )
              goto LABEL_22;
            if ( *((_QWORD *)a2 + 12) && (v33 = *((_QWORD *)a2 + 13)) != 0 )
            {
              *(_QWORD *)(v33 + 32) = (char *)this + 64;
            }
            else if ( *((_QWORD *)a2 + 14) )
            {
              CurrentProcess = GetCurrentProcess();
              v35 = GetCurrentProcess();
              if ( !DuplicateHandle(v35, *((HANDLE *)a2 + 14), CurrentProcess, (LPHANDLE)this + 7, 0, 0, 2u) )
              {
                LastError = GetLastError();
                SecurityDescriptor = LastError;
                if ( LastError > 0 )
                  SecurityDescriptor = (unsigned __int16)LastError | 0x80070000;
LABEL_30:
                if ( SecurityDescriptor >= 0 )
                  goto LABEL_32;
                goto LABEL_31;
              }
              _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)this - 4) + 64LL), 0x20u);
            }
            Microsoft::WRL::ComPtr<ISpatialAudioResourceTaskCompletion>::operator=(
              (__int64 *)this - 67,
              *((_QWORD *)a2 + 15));
            v37 = CreateThread(
                    0LL,
                    0LL,
                    (LPTHREAD_START_ROUTINE)CSpatialCrossProcessServerEndpoint::EmptyBufferMonitorThreadThunk,
                    (char *)this - 912,
                    0,
                    &ThreadId);
            *((_QWORD *)this + 6) = v37;
            if ( !v37 )
            {
              v38 = GetLastError();
              SecurityDescriptor = v38;
              if ( v38 > 0 )
                SecurityDescriptor = (unsigned __int16)v38 | 0x80070000;
              goto LABEL_22;
            }
            SetThreadPriority(v37, 2);
            if ( !WaitForSingleObjectEx(*((HANDLE *)this + 4), 0xFFFFFFFF, 0) )
            {
              ATL::CHandle::Close((void **)this + 4);
              SecurityDescriptor = 0;
              *a3 = (unsigned __int64)v39[0];
              *a4 = *((_QWORD *)this + 1);
              *((_BYTE *)this - 840) = 1;
              goto LABEL_30;
            }
          }
        }
      }
    }
    SecurityDescriptor = -2147024890;
LABEL_22:
    v16 = (void *)*((_QWORD *)this + 20);
    if ( v16 )
    {
      operator delete(v16);
      *((_QWORD *)this + 20) = 0LL;
    }
    v17 = (void *)*((_QWORD *)this + 14);
    if ( v17 )
    {
      LocalFree(v17);
      *((_QWORD *)this + 14) = 0LL;
    }
    v18 = (void *)*((_QWORD *)this + 11);
    if ( v18 )
    {
      LocalFree(v18);
      *((_QWORD *)this + 11) = 0LL;
    }
    v19 = (void *)*((_QWORD *)this - 102);
    if ( v19 )
    {
      AERTDestroyZoneHeap(v19);
      *((_QWORD *)this - 102) = 0LL;
    }
    goto LABEL_30;
  }
  SecurityDescriptor = -2005139440;
LABEL_31:
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessServerEndpoint::Initialize", 218, SecurityDescriptor);
LABEL_32:
  if ( v41 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)SecurityDescriptor;
}
