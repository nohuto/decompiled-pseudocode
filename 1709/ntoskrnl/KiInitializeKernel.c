/*
 * XREFs of KiInitializeKernel @ 0x140425860
 * Callers:
 *     KiSystemStartup @ 0x140423010 (KiSystemStartup.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x1400574C0 (PsGetCurrentProcess.c)
 *     KeAddProcessorAffinityEx @ 0x14008EC40 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400D3180 (KeCountSetBitsAffinityEx.c)
 *     HviGetHypervisorFeatures @ 0x1401348B0 (HviGetHypervisorFeatures.c)
 *     KiConfigureInitialNodes @ 0x140139440 (KiConfigureInitialNodes.c)
 *     KeGetXSaveFeatureFlags @ 0x140139E60 (KeGetXSaveFeatureFlags.c)
 *     HvlEnlightenProcessor @ 0x140139EB4 (HvlEnlightenProcessor.c)
 *     KeCompactServiceTable @ 0x14013A398 (KeCompactServiceTable.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiDetectBpbMsr @ 0x14017B87C (KiDetectBpbMsr.c)
 *     KeBugCheck @ 0x140181270 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1401822F0 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140192F40 (memset.c)
 *     KiFatalFilter @ 0x140203C14 (KiFatalFilter.c)
 *     KiDetectFpuLeakage @ 0x140423280 (KiDetectFpuLeakage.c)
 *     KiCheckMicrocode @ 0x1404232C0 (KiCheckMicrocode.c)
 *     KiConfigureProcessorBlock @ 0x1404255A4 (KiConfigureProcessorBlock.c)
 *     KiCompleteKernelInit @ 0x14042615C (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x1404263CC (KiInitializeIdleThread.c)
 *     KiEnableXSave @ 0x140426568 (KiEnableXSave.c)
 *     PoInitializePrcb @ 0x1404265E8 (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x1404266A8 (KiSetCacheInformation.c)
 *     KiSetPageAttributesTable @ 0x1404269A4 (KiSetPageAttributesTable.c)
 *     KeInitializeProcess @ 0x14048C5AC (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x1405ABC98 (HvlPhase0Initialize.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     KiInitSystem @ 0x140832A0C (KiInitSystem.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, unsigned int a5, void *a6)
{
  ULONG_PTR v8; // rdi
  int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // eax
  unsigned __int8 v16; // cl
  int v17; // eax
  int v18; // r10d
  int v19; // ecx
  int v20; // r11d
  __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  ULONG_PTR v25; // rbx
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rbx
  char XSaveFeatureFlags; // al
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // ecx
  ULONG_PTR v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdi
  _QWORD *v38; // rbx
  __int64 result; // rax
  char v40; // [rsp+30h] [rbp-2F8h]
  int v41; // [rsp+34h] [rbp-2F4h]
  int v42; // [rsp+38h] [rbp-2F0h]
  unsigned int v43; // [rsp+3Ch] [rbp-2ECh]
  unsigned int v44; // [rsp+40h] [rbp-2E8h]
  int v45; // [rsp+44h] [rbp-2E4h]
  int v46; // [rsp+48h] [rbp-2E0h]
  __int64 v47; // [rsp+50h] [rbp-2D8h]
  ULONG_PTR v48; // [rsp+58h] [rbp-2D0h]
  __int64 v50; // [rsp+70h] [rbp-2B8h] BYREF
  int v51; // [rsp+78h] [rbp-2B0h]
  __int16 v52; // [rsp+7Ch] [rbp-2ACh]
  __int16 v53; // [rsp+7Eh] [rbp-2AAh]
  __int64 v54; // [rsp+80h] [rbp-2A8h]
  __int64 v55; // [rsp+88h] [rbp-2A0h]
  __int64 v56; // [rsp+90h] [rbp-298h]
  ULONG_PTR v57; // [rsp+98h] [rbp-290h]
  void *v58; // [rsp+A0h] [rbp-288h]
  __int128 v59; // [rsp+A8h] [rbp-280h]
  __int128 v60; // [rsp+B8h] [rbp-270h]
  int v61[3]; // [rsp+C8h] [rbp-260h] BYREF
  int v62; // [rsp+D4h] [rbp-254h]
  _DWORD v63[128]; // [rsp+E0h] [rbp-248h] BYREF

  v54 = a3;
  v55 = a2;
  v56 = a2;
  v57 = a4;
  v58 = a6;
  if ( a5 )
  {
    _R14D = 1;
  }
  else
  {
    HvlPhase0Initialize(a6);
    _R14D = 1;
    if ( KiSystemCallSelector == 1 && (HvlEnlightenments & 0x80000) != 0 )
      MEMORY[0xFFFFF78000000308] = 1;
  }
  v8 = *(_QWORD *)(a4 + 25248);
  if ( (unsigned __int8)(*(_BYTE *)(a4 + 141) - 1) <= 1u )
    KiDetectBpbMsr(a4, *(_QWORD *)(a4 + 25248));
  KiCheckMicrocode(a4);
  memset(v63, 0, sizeof(v63));
  _fxsave(v63);
  if ( a5 )
  {
    if ( KiFpuLeakage )
      v8 |= 0x20000000000uLL;
    KiSetPageAttributesTable();
    *(_QWORD *)(a4 + 24720) = 1310721LL;
    memset((void *)(a4 + 24728), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24720), a5);
    v48 = a4;
    v16 = *(_BYTE *)(a4 + 142);
    if ( v16 == 1 && *(_BYTE *)(a4 + 143) == 1 )
    {
      *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 200);
      *(_DWORD *)(a4 + 24888) = *(_DWORD *)(a4 + 212);
    }
    else
    {
      v17 = *(unsigned __int8 *)(a4 + 143);
      v44 = v17 * v16;
      v18 = ~(v44 - 1);
      v45 = v18;
      v19 = *(_DWORD *)(a4 + 212);
      v20 = v18 & v19;
      v46 = v18 & v19;
      *(_DWORD *)(a4 + 24888) = v18 & v19;
      v41 = ~(v17 - 1);
      v42 = v41 & v19;
      v21 = *(_QWORD *)(a4 + 200);
      v47 = v21;
      v40 = 0;
      v22 = 0;
      v43 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v23 = ~(v17 - 1);
        v24 = v42;
        do
        {
          v25 = KiProcessorBlock[v22];
          if ( (v18 & *(_DWORD *)(v25 + 212)) == v20 )
          {
            KeAddProcessorAffinityEx((_WORD *)(a4 + 24720), v22);
            KeAddProcessorAffinityEx((_WORD *)(v25 + 24720), a5);
            if ( !v40 )
            {
              v48 = v25;
              v40 = 1;
            }
            v26 = KeCountSetBitsAffinityEx((_WORD *)(v25 + 24720));
            if ( v26 > v44 )
              KeBugCheckEx(0x3Eu, v25, v26, *(unsigned __int8 *)(v25 + 142), *(unsigned __int8 *)(v25 + 143));
            v22 = v43;
            v21 = v47;
            v23 = v41;
            v24 = v42;
            v18 = v45;
            v20 = v46;
          }
          if ( (v23 & *(_DWORD *)(v25 + 212)) == v24 && *(_QWORD *)(v25 + 192) == *(_QWORD *)(a4 + 192) )
          {
            v21 |= *(_QWORD *)(v25 + 200);
            v47 = v21;
            *(_QWORD *)(v25 + 24920) |= v21;
          }
          v43 = ++v22;
        }
        while ( v22 < (unsigned int)KeNumberProcessors_0 );
      }
      v27 = KeCountSetBitsAffinityEx((_WORD *)(a4 + 24720));
      if ( v27 > v44 )
        KeBugCheckEx(0x3Eu, a4, v27, *(unsigned __int8 *)(a4 + 142), *(unsigned __int8 *)(a4 + 143));
      *(_QWORD *)(a4 + 24920) = v47;
    }
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v9;
    if ( v9 )
      v8 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      *(_QWORD *)&v59 = 2LL;
      __asm { invpcid r14d, [rsp+328h+var_280] }
      if ( !PsGetCurrentProcess()->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v10 = __readcr4();
      if ( (v10 & 0x20080) != 0 )
      {
        __writecr4(v10 ^ 0x80);
        __writecr4(v10);
      }
      else
      {
        v11 = __readcr3();
        __writecr3(v11);
      }
    }
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      v8 |= 0x80000000uLL;
    else
      v8 = v8 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    v12 = __readcr4();
    __writecr4(v12 | 0x18);
    if ( KiFlushPcid )
    {
      *(_QWORD *)&v60 = 2LL;
      __asm { invpcid r14d, [rsp+328h+var_270] }
      if ( !PsGetCurrentProcess()->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v13 = __readcr4();
      if ( (v13 & 0x20080) != 0 )
      {
        __writecr4(v13 ^ 0x80);
        __writecr4(v13);
      }
      else
      {
        v14 = __readcr3();
        __writecr3(v14);
      }
    }
    KiConfigureInitialNodes(a4);
    KiConfigureProcessorBlock(a4);
    *(_DWORD *)(a4 + 24888) = ~(*(unsigned __int8 *)(a4 + 142) * *(unsigned __int8 *)(a4 + 143) - 1) & *(_DWORD *)(a4 + 212);
    *(_QWORD *)(a4 + 24720) = 1310721LL;
    memset((void *)(a4 + 24728), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24720), 0);
    *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 200);
    v48 = a4;
    v15 = 65471;
    if ( v63[7] )
      v15 = v63[7];
    KiMxCsrMask = v15;
    KeCompactServiceTable(KiServiceTable, KiArgumentTable, KiServiceLimit, 0LL, 0x40000000);
  }
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)a4);
  *(_QWORD *)(a4 + 24984) = 0LL;
  *(_QWORD *)(a4 + 24992) = a4 + 24992;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v28 = v8 | 0x800000;
    XSaveFeatureFlags = KeGetXSaveFeatureFlags();
    v8 |= 0x808000uLL;
    if ( (XSaveFeatureFlags & 8) == 0 )
      v8 = v28;
    if ( (XSaveFeatureFlags & 0x10) != 0 )
      v8 |= 0x4000000000uLL;
  }
  if ( a5 )
  {
    v34 = 65471;
    if ( v63[7] )
      v34 = v63[7];
    if ( (v8 & 0x8000000) != 0 )
      v35 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    else
      v35 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      v8 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v48 + 25248) & 0x100000) != 0 )
        v8 |= 0x100000uLL;
    }
    if ( v8 != v35
      || v34 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != *(_DWORD *)(a4 + 232)
      || *(_BYTE *)(KiProcessorBlock[0] + 142) != *(_BYTE *)(a4 + 142)
      || *(_BYTE *)(KiProcessorBlock[0] + 143) != *(_BYTE *)(a4 + 143) )
    {
      KeBugCheckEx(0x3Eu, v8, v35, 0LL, 0LL);
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor();
    v30 = a1;
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = *(char *)(a4 + 64);
    KeProcessorRevision = *(_WORD *)(a4 + 66);
    KeFeatureBits = v8;
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem();
    qword_1403711F8 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    v52 = 0;
    v53 = 0;
    v51 = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    v50 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v30 = a1;
    KeInitializeProcess(a1, 0, (unsigned int)&v50, 0, 0LL, 1);
    *(_BYTE *)(a1 + 445) = 127;
    v31 = __rdtsc();
    KiWaitNever = __ROR8__(v31 ^ __ROL8__(v31, 43), v31 & 0xF);
    v32 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v32, 47) ^ v32, v32 & 0xF);
    HviGetHypervisorFeatures(v61);
    if ( (v62 & 0x1000) != 0 )
      KiNPIEPEnabled = 1;
  }
  v36 = (unsigned int)KiNPIEPEnabled;
  if ( KiNPIEPEnabled )
  {
    v33 = 0LL;
    v36 = 1073741888LL;
    __writemsr(0x40000040u, 0xFuLL);
  }
  KiEnableXSave(v36, v33);
  MEMORY[0xFFFFF780000002F8] = 195LL;
  MEMORY[0xFFFFF78000000276] = 1;
  MEMORY[0xFFFFF78000000277] = 1;
  MEMORY[0xFFFFF7800000027A] = 1;
  MEMORY[0xFFFFF7800000027C] = 1;
  MEMORY[0xFFFFF7800000027D] = 1;
  MEMORY[0xFFFFF7800000027E] = 1;
  MEMORY[0xFFFFF78000000282] = 1;
  if ( (v8 & 0x80000) != 0 )
    MEMORY[0xFFFFF78000000281] = 1;
  if ( (v8 & 0x4000) != 0 )
    MEMORY[0xFFFFF7800000027B] = 1;
  if ( (v8 & 0x800000) != 0 )
    MEMORY[0xFFFFF78000000285] = 1;
  if ( (v8 & 0x10000000) != 0 )
    MEMORY[0xFFFFF7800000028A] = 1;
  if ( (v8 & 0x4000000) != 0 )
    MEMORY[0xFFFFF78000000288] = 1;
  if ( (v8 & 0x8000000) != 0 )
    MEMORY[0xFFFFF78000000289] = 1;
  if ( (v8 & 0x100000000LL) != 0 )
    MEMORY[0xFFFFF78000000290] = 1;
  if ( (v8 & 0x400000000LL) != 0 )
    MEMORY[0xFFFFF78000000294] = 1;
  MEMORY[0xFFFFF780000002ED] = KiVirtFlags;
  v37 = v55;
  KiInitializeIdleThread(v55, v54, v30, a4);
  if ( a5 )
  {
    if ( !(unsigned __int8)HalInitSystem(1LL, 0LL) )
      KeBugCheck(0x5Cu);
    v38 = a6;
  }
  else
  {
    v38 = a6;
    InitBootProcessor(a6);
  }
  result = KiCompleteKernelInit(a4, v37, a5);
  v38[17] = 0LL;
  return result;
}
