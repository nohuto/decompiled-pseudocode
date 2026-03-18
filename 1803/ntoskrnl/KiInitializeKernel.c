/*
 * XREFs of KiInitializeKernel @ 0x14047A5D0
 * Callers:
 *     KiSystemStartup @ 0x14046F010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140034480 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400A4080 (KeCountSetBitsAffinityEx.c)
 *     KeCompactServiceTable @ 0x140169E24 (KeCompactServiceTable.c)
 *     KeGetXSaveFeatureFlags @ 0x140171CB0 (KeGetXSaveFeatureFlags.c)
 *     KiDetectBpbMsr @ 0x140171D04 (KiDetectBpbMsr.c)
 *     HvlEnlightenProcessor @ 0x140171EBC (HvlEnlightenProcessor.c)
 *     HviGetHypervisorFeatures @ 0x1401722C0 (HviGetHypervisorFeatures.c)
 *     KiConfigureInitialNodes @ 0x140175F08 (KiConfigureInitialNodes.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     KeBugCheck @ 0x1401AAEB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1401ABF40 (KiSetUserTbFlushPending.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     KiFatalFilter @ 0x1402410B4 (KiFatalFilter.c)
 *     KiDetectFpuLeakage @ 0x14046F280 (KiDetectFpuLeakage.c)
 *     KiCheckMicrocode @ 0x14046F2C0 (KiCheckMicrocode.c)
 *     KiSetPageAttributesTable @ 0x140477B34 (KiSetPageAttributesTable.c)
 *     KiEnableXSave @ 0x1404788AC (KiEnableXSave.c)
 *     KiCompleteKernelInit @ 0x14047AF10 (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x14047B1C0 (KiInitializeIdleThread.c)
 *     PoInitializePrcb @ 0x14047B368 (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x14047B428 (KiSetCacheInformation.c)
 *     KiConfigureProcessorBlock @ 0x14047BCA4 (KiConfigureProcessorBlock.c)
 *     KeInitializeProcess @ 0x1404F0384 (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x140628830 (HvlPhase0Initialize.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     KiInitSystem @ 0x1408BC154 (KiInitSystem.c)
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
  _BYTE *v15; // r12
  int v16; // r13d
  int v17; // eax
  _WORD *v18; // rbx
  unsigned __int8 v19; // cl
  int v20; // eax
  int v21; // r9d
  int v22; // ecx
  int v23; // r10d
  __int64 v24; // r8
  char v25; // cl
  unsigned int v26; // edx
  ULONG_PTR v27; // r13
  int v28; // ecx
  char v29; // al
  ULONG_PTR v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rbx
  char XSaveFeatureFlags; // al
  __int64 v35; // r13
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  ULONG_PTR v38; // r8
  __int64 v39; // r12
  _QWORD *v40; // rdi
  __int64 result; // rax
  char v42; // [rsp+30h] [rbp-2F8h]
  char v43; // [rsp+31h] [rbp-2F7h]
  unsigned int v44; // [rsp+34h] [rbp-2F4h]
  unsigned int v45; // [rsp+38h] [rbp-2F0h]
  ULONG_PTR v46; // [rsp+40h] [rbp-2E8h]
  int v47; // [rsp+48h] [rbp-2E0h]
  int v48; // [rsp+4Ch] [rbp-2DCh]
  int v49; // [rsp+50h] [rbp-2D8h]
  int v50; // [rsp+54h] [rbp-2D4h]
  __int64 v51; // [rsp+58h] [rbp-2D0h]
  __int64 v53; // [rsp+70h] [rbp-2B8h] BYREF
  int v54; // [rsp+78h] [rbp-2B0h]
  __int16 v55; // [rsp+7Ch] [rbp-2ACh]
  __int16 v56; // [rsp+7Eh] [rbp-2AAh]
  __int64 v57; // [rsp+80h] [rbp-2A8h]
  __int64 v58; // [rsp+88h] [rbp-2A0h]
  __int64 v59; // [rsp+90h] [rbp-298h]
  ULONG_PTR v60; // [rsp+98h] [rbp-290h]
  void *v61; // [rsp+A0h] [rbp-288h]
  __int128 v62; // [rsp+A8h] [rbp-280h]
  __int128 v63; // [rsp+B8h] [rbp-270h]
  int v64[3]; // [rsp+C8h] [rbp-260h] BYREF
  int v65; // [rsp+D4h] [rbp-254h]
  _DWORD v66[128]; // [rsp+E0h] [rbp-248h] BYREF

  v57 = a3;
  v58 = a2;
  v59 = a2;
  v60 = a4;
  v61 = a6;
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
  if ( (unsigned __int8)(*(_BYTE *)(a4 + 141) - 1) <= 2u )
    KiDetectBpbMsr(a4, *(_QWORD *)(a4 + 25248));
  KiCheckMicrocode(a4);
  memset(v66, 0, sizeof(v66));
  _fxsave(v66);
  if ( a5 )
  {
    if ( KiFpuLeakage )
      v8 |= 0x20000000000uLL;
    KiSetPageAttributesTable();
    v18 = (_WORD *)(a4 + 24720);
    *(_QWORD *)(a4 + 24720) = 1310721LL;
    memset((void *)(a4 + 24728), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24720), a5);
    v46 = a4;
    v19 = *(_BYTE *)(a4 + 142);
    v15 = (_BYTE *)(a4 + 143);
    if ( v19 == 1 && *v15 == 1 )
    {
      *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 200);
      *(_DWORD *)(a4 + 24888) = *(_DWORD *)(a4 + 212);
    }
    else
    {
      v20 = (unsigned __int8)*v15;
      v45 = v20 * v19;
      v21 = ~(v45 - 1);
      v47 = v21;
      v22 = *(_DWORD *)(a4 + 212);
      v23 = v21 & v22;
      v48 = v21 & v22;
      *(_DWORD *)(a4 + 24888) = v21 & v22;
      v49 = ~(v20 - 1);
      v50 = v49 & v22;
      v24 = *(_QWORD *)(a4 + 200);
      v51 = v24;
      v25 = 0;
      v42 = 0;
      v26 = 0;
      v44 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        while ( 1 )
        {
          v43 = v25;
          v27 = KiProcessorBlock[v26];
          v28 = *(_DWORD *)(v27 + 212);
          if ( (v21 & v28) == v23 )
          {
            KeAddProcessorAffinityEx(v18, v26);
            KeAddProcessorAffinityEx((_WORD *)(v27 + 24720), a5);
            v29 = v42;
            if ( !v42 )
              v29 = 1;
            v42 = v29;
            v30 = v27;
            if ( v43 )
              v30 = v46;
            v46 = v30;
            v31 = KeCountSetBitsAffinityEx((_WORD *)(v27 + 24720));
            if ( v31 > v45 )
              KeBugCheckEx(0x3Eu, v27, v31, *(unsigned __int8 *)(v27 + 142), *(unsigned __int8 *)(v27 + 143));
            v28 = *(_DWORD *)(v27 + 212);
            v18 = (_WORD *)(a4 + 24720);
            v26 = v44;
            v24 = v51;
            v21 = v47;
            v23 = v48;
          }
          if ( (v49 & v28) == v50 && *(_QWORD *)(v27 + 192) == *(_QWORD *)(a4 + 192) )
          {
            v24 |= *(_QWORD *)(v27 + 200);
            v51 = v24;
            *(_QWORD *)(v27 + 24920) |= v24;
          }
          v44 = ++v26;
          if ( v26 >= (unsigned int)KeNumberProcessors_0 )
            break;
          v25 = v42;
        }
      }
      v32 = KeCountSetBitsAffinityEx(v18);
      if ( v32 > v45 )
        KeBugCheckEx(0x3Eu, a4, v32, *(unsigned __int8 *)(a4 + 142), (unsigned __int8)*v15);
      *(_QWORD *)(a4 + 24920) = v51;
    }
    v16 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v9;
    if ( v9 )
      v8 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      *(_QWORD *)&v62 = 2LL;
      __asm { invpcid r14d, [rsp+328h+var_280] }
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
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
      *(_QWORD *)&v63 = 2LL;
      __asm { invpcid r14d, [rsp+328h+var_270] }
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
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
    v15 = (_BYTE *)(a4 + 143);
    *(_DWORD *)(a4 + 24888) = ~(*(unsigned __int8 *)(a4 + 142) * *(unsigned __int8 *)(a4 + 143) - 1) & *(_DWORD *)(a4 + 212);
    *(_QWORD *)(a4 + 24720) = 1310721LL;
    memset((void *)(a4 + 24728), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24720), 0);
    *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 200);
    v46 = a4;
    v16 = 65471;
    v17 = 65471;
    if ( v66[7] )
      v17 = v66[7];
    KiMxCsrMask = v17;
    KeCompactServiceTable(KiServiceTable, KiArgumentTable, KiServiceLimit, 0LL, 0x40000000);
  }
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)a4);
  *(_QWORD *)(a4 + 24984) = 0LL;
  *(_QWORD *)(a4 + 24992) = a4 + 24992;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v33 = v8 | 0x800000;
    XSaveFeatureFlags = KeGetXSaveFeatureFlags();
    v8 |= 0x808000uLL;
    if ( (XSaveFeatureFlags & 8) == 0 )
      v8 = v33;
    if ( (XSaveFeatureFlags & 0x10) != 0 )
      v8 |= 0x4000000000uLL;
  }
  if ( a5 )
  {
    if ( v66[7] )
      v16 = v66[7];
    if ( (v8 & 0x8000000) != 0 )
      v38 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    else
      v38 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      v8 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v46 + 25248) & 0x100000) != 0 )
        v8 |= 0x100000uLL;
    }
    if ( v8 != v38
      || v16 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != *(_DWORD *)(a4 + 232)
      || *(_BYTE *)(KiProcessorBlock[0] + 142) != *(_BYTE *)(a4 + 142)
      || *(_BYTE *)(KiProcessorBlock[0] + 143) != *v15 )
    {
      KeBugCheckEx(0x3Eu, v8, v38, 0LL, 0LL);
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor();
    v35 = a1;
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
    qword_1403B4458 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    v55 = 0;
    v56 = 0;
    v54 = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    v53 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v35 = a1;
    KeInitializeProcess(a1, 0, (unsigned int)&v53, 0, 0LL, 1);
    *(_BYTE *)(a1 + 445) = 127;
    v36 = __rdtsc();
    KiWaitNever = __ROR8__(v36 ^ __ROL8__(v36, 43), v36 & 0xF);
    v37 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v37, 47) ^ v37, v37 & 0xF);
    HviGetHypervisorFeatures(v64);
    if ( (v65 & 0x1000) != 0 )
      KiNPIEPEnabled = 1;
  }
  if ( KiNPIEPEnabled )
    __writemsr(0x40000040u, 0xFuLL);
  KiEnableXSave();
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
  v39 = v58;
  KiInitializeIdleThread(v58, v57, v35, a4);
  if ( a5 )
  {
    if ( !(unsigned __int8)HalInitSystem(1LL, 0LL) )
      KeBugCheck(0x5Cu);
    v40 = a6;
  }
  else
  {
    v40 = a6;
    InitBootProcessor(a6);
  }
  result = KiCompleteKernelInit(a4, v39, a5);
  v40[17] = 0LL;
  return result;
}
