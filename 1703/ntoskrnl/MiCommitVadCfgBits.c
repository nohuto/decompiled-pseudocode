/*
 * XREFs of MiCommitVadCfgBits @ 0x14049B12C
 * Callers:
 *     MiCfgInitializeProcess @ 0x14049A54C (MiCfgInitializeProcess.c)
 *     MiMapViewOfImageSection @ 0x140511460 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MmProtectVirtualMemory @ 0x14051A990 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x14051BE20 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfPhysicalSection @ 0x1405C6964 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14006341C (MiIsProcessCfgEnabled.c)
 *     MiMarkSharedImageCfgBits @ 0x140063450 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x14044169C (MiMarkPrivateImageCfgBits.c)
 *     MiMarkPrivateOpenCfgBits @ 0x14049A770 (MiMarkPrivateOpenCfgBits.c)
 *     MiSelectCfgBitMap @ 0x14049B378 (MiSelectCfgBitMap.c)
 */

__int64 __fastcall MiCommitVadCfgBits(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v4; // rsi
  _KPROCESS *Process; // r13
  __int64 v6; // r10
  unsigned __int64 *v7; // r11
  int v8; // ebp
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 **v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r10
  _QWORD *v15; // rsi
  int v16; // r9d
  int v17; // r9d
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned __int64 v20; // rax
  int v22; // r9d
  __int16 v23; // cx
  __int64 v24; // rcx

  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( MiIsProcessCfgEnabled() )
  {
    v8 = 1;
    v9 = (*(unsigned int *)(v6 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 32) << 32)) << 12;
    v10 = ((*(unsigned int *)(v6 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 33) << 32)) << 12) + 4096;
    if ( v7 )
    {
      v9 = *v7;
      v10 = (v7[1] | 0xFFF) + 1;
    }
    else if ( (*(_DWORD *)(v6 + 48) & 0x8000) == 0 )
    {
      v11 = *(__int64 ***)(v6 + 72);
      if ( ((*v11)[7] & 0x20) != 0 )
        v4 = **v11;
    }
    v12 = (_QWORD *)MiSelectCfgBitMap(Process, v9, v4);
    v15 = v12;
    v17 = v16 - 1;
    if ( v17 )
    {
      v22 = v17 - 1;
      if ( v22 )
      {
        if ( v22 != 1 )
        {
          v19 = -1073741823;
LABEL_9:
          v20 = Process[1].ActiveProcessors.Bitmap[7];
          if ( !v20 )
            return v19;
          v23 = *(_WORD *)(v20 + 8);
          if ( v23 != 332 && v23 != 452 )
            return v19;
          if ( (v19 & 0x80000000) != 0 )
            return v19;
          v24 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 272LL;
          if ( v15 == (_QWORD *)v24 )
          {
            v24 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 296LL;
            if ( v9 > 0x100000000LL )
              return v19;
            if ( v10 > 0x100000000LL )
              v10 = 0x100000000LL;
          }
          return (unsigned int)MiMarkPrivateOpenCfgBits(v24, v9, v10, 0);
        }
        if ( a3 )
          v8 = *a3;
        v18 = MiMarkPrivateOpenCfgBits((int)v12, v9, v10, v8);
      }
      else
      {
        v18 = MiMarkPrivateImageCfgBits((__int64)v12, v13, v14);
      }
    }
    else
    {
      v18 = MiMarkSharedImageCfgBits(v12, v13, v14);
    }
    v19 = v18;
    goto LABEL_9;
  }
  return 0LL;
}
