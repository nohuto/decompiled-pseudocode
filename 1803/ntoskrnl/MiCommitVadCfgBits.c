/*
 * XREFs of MiCommitVadCfgBits @ 0x1404B5948
 * Callers:
 *     MiMapViewOfImageSection @ 0x1404B4E30 (MiMapViewOfImageSection.c)
 *     MmProtectVirtualMemory @ 0x1404D6080 (MmProtectVirtualMemory.c)
 *     MiCfgInitializeProcess @ 0x1404E95B8 (MiCfgInitializeProcess.c)
 *     MiMapViewOfDataSection @ 0x140594470 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x1405B49A0 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x140646C40 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14003E8C4 (MiIsProcessCfgEnabled.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1404B3928 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x1404B5B54 (MiMarkProcessCfgBits.c)
 *     MiSelectCfgBitMap @ 0x1404B5BBC (MiSelectCfgBitMap.c)
 */

__int64 __fastcall MiCommitVadCfgBits(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 *v6; // r9
  __int64 v7; // r11
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 **v10; // rax
  __int64 v11; // rsi
  int v12; // edx
  int v13; // r10d
  int v14; // r11d
  int v15; // eax
  unsigned __int64 v16; // rcx
  unsigned int v17; // edx
  __int16 v19; // cx
  __int64 v20; // rcx

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( MiIsProcessCfgEnabled() )
  {
    v8 = (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12;
    v9 = ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) + 4096;
    if ( v6 )
    {
      v8 = *v6;
      v9 = (v6[1] | 0xFFF) + 1;
    }
    else if ( (*(_DWORD *)(v7 + 48) & 0x4000) == 0 )
    {
      v10 = *(__int64 ***)(v7 + 72);
      if ( ((*v10)[7] & 0x20) != 0 )
        v4 = **v10;
    }
    v11 = MiSelectCfgBitMap(Process, v8, v4);
    v15 = MiMarkProcessCfgBits(v13, v12, v14, v8, v9, v11, a3);
    v16 = Process[1].ActiveProcessors.Bitmap[7];
    v17 = v15;
    if ( !v16 )
      return v17;
    v19 = *(_WORD *)(v16 + 8);
    if ( v19 != 332 && v19 != 452 )
      return v17;
    if ( v15 < 0 )
      return v17;
    v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 376LL;
    if ( v11 == v20 )
    {
      v20 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 400LL;
      if ( v8 > 0x100000000LL )
        return v17;
      if ( v9 > 0x100000000LL )
        v9 = 0x100000000LL;
    }
    return (unsigned int)MiMarkPrivateOpenCfgBits(v20, v8, v9, 0);
  }
  return 0LL;
}
