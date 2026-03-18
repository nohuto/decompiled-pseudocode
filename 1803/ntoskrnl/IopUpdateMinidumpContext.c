/*
 * XREFs of IopUpdateMinidumpContext @ 0x1402354E0
 * Callers:
 *     IoWriteCrashDump @ 0x140233E8C (IoWriteCrashDump.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1402359C0 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     MmIsSpecialPoolAddress @ 0x14004C860 (MmIsSpecialPoolAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140185870 (IoAddTriageDumpDataBlock.c)
 *     IopGetMaxValidMemorySize @ 0x140234EB0 (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckPnpTriageData @ 0x140239A68 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x140239AD0 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x140239B78 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x140239ED8 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14023A124 (IopAddBugcheckTriageThread.c)
 *     PopInternalAddToDumpFile @ 0x1402712F8 (PopInternalAddToDumpFile.c)
 */

__int64 __fastcall IopUpdateMinidumpContext(
        int a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v12; // rdi
  __int64 result; // rax
  char *v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned int v16; // edx
  int MaxValidMemorySize; // eax
  __int64 v18; // rcx
  _QWORD *v19; // r12
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // r8d
  int v24; // edx
  __int64 v25; // rbx
  __int64 v26; // r14
  unsigned __int64 v27; // rcx
  unsigned int v28; // edx
  PVOID *i; // rbx
  __int64 v30; // rcx
  __int128 v31; // xmm1
  char v32; // [rsp+60h] [rbp+8h]
  __int64 Prcb; // [rsp+68h] [rbp+10h]
  __int64 v34; // [rsp+80h] [rbp+28h]
  __int64 v35; // [rsp+88h] [rbp+30h]

  v32 = 0;
  if ( a1 != 126 )
  {
    if ( a1 == 127 )
    {
      v12 = (__int64)a6;
      if ( a2 == 8 )
      {
        a6[20] = *(_QWORD *)(a3 + 344);
        a6[31] = *(_QWORD *)(a3 + 360);
        a6[19] = *(_QWORD *)(a3 + 384);
      }
      goto LABEL_5;
    }
LABEL_8:
    v12 = (__int64)a6;
    goto LABEL_9;
  }
  if ( !a5 )
    goto LABEL_8;
  v12 = a5;
LABEL_5:
  v32 = 1;
LABEL_9:
  IoAddTriageDumpDataBlock(a2 & 0xFFFFF000, 4096);
  IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, 4096);
  IoAddTriageDumpDataBlock(a4 & 0xFFFFF000, 4096);
  IoAddTriageDumpDataBlock(a5 & 0xFFFFF000, 4096);
  if ( a1 == 205 || a1 == 214 || a1 == 209 && (unsigned int)MmIsSpecialPoolAddress(a2) )
    IoAddTriageDumpDataBlock((a2 - 4096) & 0xFFFFF000, 4096);
  result = (unsigned int)KeKernelStackSize;
  v14 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
  v15 = *(_QWORD *)(v12 + 152);
  if ( (unsigned __int64)&v14[-(unsigned int)KeKernelStackSize] <= v15 && v15 < (unsigned __int64)v14 )
  {
    if ( (unsigned __int64)&v14[-v15] >= 0x7FFF )
      v16 = 0x7FFF;
    else
      v16 = (_DWORD)v14 - v15;
    MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(v12 + 152), v16);
    result = IoAddTriageDumpDataBlock(v15, MaxValidMemorySize);
  }
  if ( a1 == 307 )
  {
    Prcb = KeGetPrcb(*(_DWORD *)(a7 + 536));
    v18 = 2LL;
    result = Prcb + 11776;
    v34 = 2LL;
    v35 = Prcb + 11776;
    do
    {
      v19 = *(_QWORD **)result;
      if ( *(_QWORD *)result )
      {
        do
        {
          IoAddTriageDumpDataBlock((_DWORD)v19 - 8, 64);
          v20 = v19[6];
          if ( v20 != 1 )
            IoAddTriageDumpDataBlock(v20, 64);
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
        result = v35;
        v18 = v34;
      }
      result += 40LL;
      --v18;
      v35 = result;
      v34 = v18;
    }
    while ( v18 );
    v21 = *(_QWORD *)(Prcb + 25000);
    if ( !v21 )
      goto LABEL_68;
    v22 = *(_QWORD *)(Prcb + 25008);
    if ( v21 == v22 )
      goto LABEL_68;
    v23 = v22 - v21;
    v24 = 8 * dword_14044B384;
    if ( v23 <= 8 * dword_14044B384 )
      v24 = v23;
    result = IoAddTriageDumpDataBlock(v21, v24);
  }
  if ( a1 == 335 || a1 == 348 )
  {
    if ( a5 )
    {
      result = IoAddTriageDumpDataBlock(a5, 16);
      if ( *(_QWORD *)(a5 + 8) )
        result = ((__int64 (*)(void))IopAddBugcheckTriageThread)();
    }
  }
  if ( a1 == 412 )
  {
    if ( a2 != 16 || !a3 )
      goto LABEL_68;
    result = IopAddBugcheckTriageThread(a3);
  }
  if ( a1 == 159 )
  {
    if ( a2 == 4 )
    {
      if ( a4 )
        result = IopAddBugcheckPnpTriageData(a4, a5);
      goto LABEL_68;
    }
    if ( a2 != 3 )
      goto LABEL_68;
    result = IopAddBugcheckPowerTriageData(a3, a4, a5);
  }
  if ( a1 == 469 )
    result = IopAddBugcheckPnpWatchdogTriageData(a3, a4);
  if ( a1 == 160 )
  {
    if ( a2 == 1560 )
      result = IopAddBugcheckTriageThread(a4);
    if ( a2 != 1561 )
      goto LABEL_68;
    result = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(a3 + 48));
    if ( !a5 )
      goto LABEL_68;
    result = IopAddBugcheckTriageDeviceNode(a5);
  }
  if ( a1 == 257 )
  {
    if ( a3 )
      goto LABEL_68;
    v25 = *(_QWORD *)(a4 + 8);
    IoAddTriageDumpDataBlock(a4, 32448);
    IoAddTriageDumpDataBlock(*(_QWORD *)(a4 + 25280), 1232);
    v26 = *(_QWORD *)(v25 + 88);
    v27 = *(_QWORD *)(*(_QWORD *)(a4 + 25280) + 152LL) - 4096LL;
    if ( v27 < *(_QWORD *)(v25 + 48) )
      v27 = *(_QWORD *)(v25 + 48);
    *(_QWORD *)(v25 + 88) = v27;
    result = IopAddBugcheckTriageThread(*(_QWORD *)(a4 + 8));
    *(_QWORD *)(v25 + 88) = v26;
  }
  if ( a1 == 416 )
  {
    IopAddBugcheckTriageThread(a4);
    result = PopInternalAddToDumpFile(0LL, 0LL, 0LL);
  }
  if ( a1 == 292 && a3 )
  {
    v28 = 72 * *(unsigned __int16 *)(a3 + 10) + 128;
    if ( *(_DWORD *)(a3 + 20) >= v28 )
      v28 = *(_DWORD *)(a3 + 20);
    result = IoAddTriageDumpDataBlock(a3, v28);
  }
LABEL_68:
  for ( i = (PVOID *)PopThermal; i != &PopThermal; i = (PVOID *)*i )
    result = IoAddTriageDumpDataBlock((int)i, 872);
  if ( v32 )
  {
    result = CrashdmpDumpBlock;
    if ( CrashdmpDumpBlock )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 24) |= 0x10000000u;
      v30 = 9LL;
      result = CrashdmpDumpBlock + 64;
      do
      {
        *(_OWORD *)result = *(_OWORD *)v12;
        *(_OWORD *)(result + 16) = *(_OWORD *)(v12 + 16);
        *(_OWORD *)(result + 32) = *(_OWORD *)(v12 + 32);
        *(_OWORD *)(result + 48) = *(_OWORD *)(v12 + 48);
        *(_OWORD *)(result + 64) = *(_OWORD *)(v12 + 64);
        *(_OWORD *)(result + 80) = *(_OWORD *)(v12 + 80);
        *(_OWORD *)(result + 96) = *(_OWORD *)(v12 + 96);
        result += 128LL;
        v31 = *(_OWORD *)(v12 + 112);
        v12 += 128LL;
        *(_OWORD *)(result - 16) = v31;
        --v30;
      }
      while ( v30 );
      *(_OWORD *)result = *(_OWORD *)v12;
      *(_OWORD *)(result + 16) = *(_OWORD *)(v12 + 16);
      *(_OWORD *)(result + 32) = *(_OWORD *)(v12 + 32);
      *(_OWORD *)(result + 48) = *(_OWORD *)(v12 + 48);
      *(_OWORD *)(result + 64) = *(_OWORD *)(v12 + 64);
    }
  }
  return result;
}
