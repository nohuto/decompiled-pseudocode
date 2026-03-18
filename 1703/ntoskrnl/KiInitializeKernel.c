/*
 * XREFs of KiInitializeKernel @ 0x140411030
 * Callers:
 *     KiSystemStartup @ 0x140403010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     PsGetCurrentProcess @ 0x1400D8F50 (PsGetCurrentProcess.c)
 *     KeCountSetBitsAffinityEx @ 0x140120AD0 (KeCountSetBitsAffinityEx.c)
 *     KeCompactServiceTable @ 0x140145B4C (KeCompactServiceTable.c)
 *     KiConfigureInitialNodes @ 0x140154FF8 (KiConfigureInitialNodes.c)
 *     KeGetXSaveFeatureFlags @ 0x1401558D0 (KeGetXSaveFeatureFlags.c)
 *     HvlEnlightenProcessor @ 0x140155924 (HvlEnlightenProcessor.c)
 *     HviGetHypervisorFeatures @ 0x140155D10 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     KiDetectBpbMsr @ 0x14017C168 (KiDetectBpbMsr.c)
 *     KeBugCheck @ 0x140181870 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x140182870 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140192D80 (memset.c)
 *     KiFatalFilter @ 0x1401FDB1C (KiFatalFilter.c)
 *     KiDetectFpuLeakage @ 0x140403280 (KiDetectFpuLeakage.c)
 *     KiCheckMicrocode @ 0x1404032C0 (KiCheckMicrocode.c)
 *     KiSetPageAttributesTable @ 0x14040E8D8 (KiSetPageAttributesTable.c)
 *     KiEnableXSave @ 0x14040E9C0 (KiEnableXSave.c)
 *     KiConfigureProcessorBlock @ 0x140410EA0 (KiConfigureProcessorBlock.c)
 *     KiCompleteKernelInit @ 0x14041193C (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x140411BB0 (KiInitializeIdleThread.c)
 *     PoInitializePrcb @ 0x140411D4C (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x140411E0C (KiSetCacheInformation.c)
 *     KeInitializeProcess @ 0x1404A1214 (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x1405A8F40 (HvlPhase0Initialize.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     KiInitSystem @ 0x14080C7A4 (KiInitSystem.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
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
  int v33; // ecx
  ULONG_PTR v34; // r8
  __int64 v35; // rdi
  __int64 v36; // rbx
  __int64 result; // rax
  char v38; // [rsp+30h] [rbp-2F8h]
  int v39; // [rsp+34h] [rbp-2F4h]
  int v40; // [rsp+38h] [rbp-2F0h]
  unsigned int v41; // [rsp+3Ch] [rbp-2ECh]
  unsigned int v42; // [rsp+40h] [rbp-2E8h]
  int v43; // [rsp+44h] [rbp-2E4h]
  int v44; // [rsp+48h] [rbp-2E0h]
  __int64 v45; // [rsp+50h] [rbp-2D8h]
  ULONG_PTR v46; // [rsp+58h] [rbp-2D0h]
  __int64 v48; // [rsp+70h] [rbp-2B8h] BYREF
  int v49; // [rsp+78h] [rbp-2B0h]
  __int16 v50; // [rsp+7Ch] [rbp-2ACh]
  __int16 v51; // [rsp+7Eh] [rbp-2AAh]
  __int64 v52; // [rsp+80h] [rbp-2A8h]
  __int64 v53; // [rsp+88h] [rbp-2A0h]
  __int64 v54; // [rsp+90h] [rbp-298h]
  ULONG_PTR v55; // [rsp+98h] [rbp-290h]
  __int64 v56; // [rsp+A0h] [rbp-288h]
  __int128 v57; // [rsp+A8h] [rbp-280h]
  __int128 v58; // [rsp+B8h] [rbp-270h]
  _DWORD v59[3]; // [rsp+C8h] [rbp-260h] BYREF
  int v60; // [rsp+D4h] [rbp-254h]
  _DWORD v61[128]; // [rsp+E0h] [rbp-248h] BYREF

  v52 = a3;
  v53 = a2;
  v54 = a2;
  v55 = a4;
  v56 = a6;
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
  v8 = *(_QWORD *)(a4 + 25576);
  if ( (unsigned __int8)(*(_BYTE *)(a4 + 141) - 1) <= 1u )
    KiDetectBpbMsr(a4, *(_QWORD *)(a4 + 25576));
  KiCheckMicrocode(a4);
  memset(v61, 0, sizeof(v61));
  _fxsave(v61);
  if ( a5 )
  {
    if ( KiFpuLeakage )
      v8 |= 0x20000000000uLL;
    KiSetPageAttributesTable();
    *(_QWORD *)(a4 + 24856) = 1310721LL;
    memset((void *)(a4 + 24864), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24856), a5);
    v46 = a4;
    v16 = *(_BYTE *)(a4 + 142);
    if ( v16 == 1 && *(_BYTE *)(a4 + 143) == 1 )
    {
      *(_QWORD *)(a4 + 25176) = *(_QWORD *)(a4 + 200);
      *(_DWORD *)(a4 + 25024) = *(_DWORD *)(a4 + 212);
    }
    else
    {
      v17 = *(unsigned __int8 *)(a4 + 143);
      v42 = v17 * v16;
      v18 = ~(v42 - 1);
      v43 = v18;
      v19 = *(_DWORD *)(a4 + 212);
      v20 = v18 & v19;
      v44 = v18 & v19;
      *(_DWORD *)(a4 + 25024) = v18 & v19;
      v39 = ~(v17 - 1);
      v40 = v39 & v19;
      v21 = *(_QWORD *)(a4 + 200);
      v45 = v21;
      v38 = 0;
      v22 = 0;
      v41 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v23 = ~(v17 - 1);
        v24 = v40;
        do
        {
          v25 = KiProcessorBlock[v22];
          if ( (v18 & *(_DWORD *)(v25 + 212)) == v20 )
          {
            KeAddProcessorAffinityEx((_WORD *)(a4 + 24856), v22);
            KeAddProcessorAffinityEx((_WORD *)(v25 + 24856), a5);
            if ( !v38 )
            {
              v46 = v25;
              v38 = 1;
            }
            v26 = KeCountSetBitsAffinityEx((_WORD *)(v25 + 24856));
            if ( v26 > v42 )
              KeBugCheckEx(0x3Eu, v25, v26, *(unsigned __int8 *)(v25 + 142), *(unsigned __int8 *)(v25 + 143));
            v22 = v41;
            v21 = v45;
            v23 = v39;
            v24 = v40;
            v18 = v43;
            v20 = v44;
          }
          if ( (v23 & *(_DWORD *)(v25 + 212)) == v24 && *(_QWORD *)(v25 + 192) == *(_QWORD *)(a4 + 192) )
          {
            v21 |= *(_QWORD *)(v25 + 200);
            v45 = v21;
            *(_QWORD *)(v25 + 25176) |= v21;
          }
          v41 = ++v22;
        }
        while ( v22 < (unsigned int)KeNumberProcessors_0 );
      }
      v27 = KeCountSetBitsAffinityEx((_WORD *)(a4 + 24856));
      if ( v27 > v42 )
        KeBugCheckEx(0x3Eu, a4, v27, *(unsigned __int8 *)(a4 + 142), *(unsigned __int8 *)(a4 + 143));
      *(_QWORD *)(a4 + 25176) = v45;
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
      v57 = 2uLL;
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
      v58 = 2uLL;
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
    *(_DWORD *)(a4 + 25024) = ~(*(unsigned __int8 *)(a4 + 142) * *(unsigned __int8 *)(a4 + 143) - 1) & *(_DWORD *)(a4 + 212);
    *(_QWORD *)(a4 + 24856) = 1310721LL;
    memset((void *)(a4 + 24864), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24856), 0);
    *(_QWORD *)(a4 + 25176) = *(_QWORD *)(a4 + 200);
    v46 = a4;
    v15 = 65471;
    if ( v61[7] )
      v15 = v61[7];
    KiMxCsrMask = v15;
    KeCompactServiceTable(KiServiceTable, KiArgumentTable, KiServiceLimit, 0LL, 0x40000000);
  }
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)a4);
  *(_QWORD *)(a4 + 25240) = 0LL;
  *(_QWORD *)(a4 + 25248) = a4 + 25248;
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
    v33 = 65471;
    if ( v61[7] )
      v33 = v61[7];
    if ( (v8 & 0x8000000) != 0 )
      v34 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    else
      v34 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      v8 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v46 + 25576) & 0x100000) != 0 )
        v8 |= 0x100000uLL;
    }
    if ( v8 != v34
      || v33 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != *(_DWORD *)(a4 + 232)
      || *(_BYTE *)(KiProcessorBlock[0] + 142) != *(_BYTE *)(a4 + 142)
      || *(_BYTE *)(KiProcessorBlock[0] + 143) != *(_BYTE *)(a4 + 143) )
    {
      KeBugCheckEx(0x3Eu, v8, v34, 0LL, 0LL);
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
    qword_1403566E8 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    v50 = 0;
    v51 = 0;
    v49 = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    v48 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v30 = a1;
    KeInitializeProcess(a1, 0, (unsigned int)&v48, 0, 0LL, 1);
    *(_BYTE *)(a1 + 445) = 127;
    v31 = __rdtsc();
    KiWaitNever = __ROR8__(v31 ^ __ROL8__(v31, 43), v31 & 0xF);
    v32 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v32, 47) ^ v32, v32 & 0xF);
    HviGetHypervisorFeatures(v59);
    if ( (v60 & 0x1000) != 0 )
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
  v35 = v53;
  KiInitializeIdleThread(v53, v52, v30, a4);
  if ( a5 )
  {
    if ( !(unsigned __int8)HalInitSystem(1LL, 0LL) )
      KeBugCheck(0x5Cu);
    v36 = a6;
  }
  else
  {
    v36 = a6;
    InitBootProcessor(a6);
  }
  result = KiCompleteKernelInit(a4, v35, a5);
  *(_QWORD *)(v36 + 136) = 0LL;
  return result;
}
