/*
 * XREFs of KeCapturePersistentThreadState @ 0x140235DE0
 * Callers:
 *     DbgkpWerCaptureLiveTriageDump @ 0x140712900 (DbgkpWerCaptureLiveTriageDump.c)
 *     WheapCreateLiveTriageDump @ 0x1407CB5CC (WheapCreateLiveTriageDump.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     RtlGetNtProductType @ 0x1400C4610 (RtlGetNtProductType.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     SecureDump_GetSecureDumpSettings @ 0x14017E37C (SecureDump_GetSecureDumpSettings.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IoGetLoadedDriverInfo @ 0x14023380C (IoGetLoadedDriverInfo.c)
 *     IopGetMaxValidSectionSize @ 0x140234F28 (IopGetMaxValidSectionSize.c)
 *     IopGetMaxValidSectionSizeDown @ 0x140234F70 (IopGetMaxValidSectionSizeDown.c)
 *     IopValidateSectionSize @ 0x140235990 (IopValidateSectionSize.c)
 *     IopWriteDriverList @ 0x140235B9C (IopWriteDriverList.c)
 *     KdCopyDataBlock @ 0x14023E2EC (KdCopyDataBlock.c)
 */

__int64 __fastcall KeCapturePersistentThreadState(
        __int64 a1,
        struct _KTHREAD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        size_t Size)
{
  size_t v8; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  void *v14; // r8
  unsigned __int64 v15; // rdx
  ULONG ActiveProcessorCount; // eax
  int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // esi
  _OWORD *v20; // rcx
  int v21; // eax
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  size_t v29; // r8
  int v30; // esi
  __int64 v31; // rcx
  size_t v32; // r8
  int v33; // esi
  const void *StackLimit; // rcx
  void *StackBase; // rax
  const void *v36; // r14
  unsigned int v37; // eax
  int v38; // edi
  size_t v39; // r8
  struct _KTHREAD *v40; // rax
  unsigned int v41; // edi
  int v42; // r14d
  unsigned int v43; // r15d
  int v44; // eax
  __int64 v45; // r14
  unsigned int v46; // edi
  unsigned int MaxValidSectionSizeDown; // eax
  const void *v48; // rsi
  unsigned int MaxValidSectionSize; // eax
  __int64 v50; // rcx
  int v51; // [rsp+20h] [rbp-20h] BYREF
  int v52; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v53; // [rsp+28h] [rbp-18h] BYREF
  int v54; // [rsp+30h] [rbp-10h]

  v8 = Size;
  result = 0LL;
  v53 = 0LL;
  v54 = 0;
  CurrentThread = a2;
  if ( Size )
  {
    if ( !a2 )
      CurrentThread = KeGetCurrentThread();
    if ( !ForceDumpDisabled )
    {
      if ( (int)SecureDump_GetSecureDumpSettings((__int64)&v53) < 0 || (_BYTE)v53 )
      {
        return 0LL;
      }
      else
      {
        memset((void *)v8, 0, 0x40000uLL);
        v14 = (void *)v8;
        v15 = 2048LL;
        if ( (v8 & 4) != 0 )
        {
          *(_DWORD *)v8 = 1162297680;
          v14 = (void *)(v8 + 4);
          v15 = 2047LL;
        }
        memset64(v14, 0x4547415045474150uLL, v15 >> 1);
        if ( (v15 & 1) != 0 )
          *((_DWORD *)v14 + v15 - 1) = 1162297680;
        *(_DWORD *)v8 = 1162297680;
        *(_DWORD *)(v8 + 4) = 875976004;
        *(_DWORD *)(v8 + 12) = 17134;
        *(_DWORD *)(v8 + 8) = 15;
        *(_QWORD *)(v8 + 16) = CurrentThread->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)(v8 + 24) = MmPfnDatabase;
        *(_QWORD *)(v8 + 32) = &PsLoadedModuleList;
        *(_QWORD *)(v8 + 40) = &PsActiveProcessHead;
        *(_DWORD *)(v8 + 48) = 34404;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        *(_QWORD *)(v8 + 3848) = 0LL;
        *(_DWORD *)(v8 + 3864) = 0;
        *(_DWORD *)(v8 + 52) = ActiveProcessorCount;
        *(_QWORD *)(v8 + 72) = a5;
        *(_QWORD *)(v8 + 80) = a6;
        *(_QWORD *)(v8 + 88) = a7;
        *(_DWORD *)(v8 + 56) = a3;
        *(_QWORD *)(v8 + 64) = a4;
        *(_DWORD *)(v8 + 3840) = -2147483645;
        *(_DWORD *)(v8 + 3844) = 1;
        *(_QWORD *)(v8 + 3856) = *(_QWORD *)(a1 + 248);
        *(_QWORD *)(v8 + 4000) = 0x40000LL;
        *(_DWORD *)(v8 + 4008) = MEMORY[0xFFFFF78000000014];
        *(_DWORD *)(v8 + 4012) = MEMORY[0xFFFFF78000000018];
        *(_DWORD *)(v8 + 4144) = MEMORY[0xFFFFF78000000008];
        v17 = MEMORY[0xFFFFF7800000000C];
        *(_DWORD *)(v8 + 4176) |= 0x10u;
        *(_DWORD *)(v8 + 4148) = v17;
        *(_DWORD *)(v8 + 3992) = 4;
        *(_DWORD *)(v8 + 4152) = 130;
        RtlGetNtProductType((PNT_PRODUCT_TYPE)(v8 + 4160));
        v18 = 9LL;
        *(_DWORD *)(v8 + 4164) = MEMORY[0xFFFFF780000002D0];
        v19 = 8320;
        v20 = (_OWORD *)a1;
        *(_DWORD *)(v8 + 4180) = MEMORY[0xFFFFF780000002C4];
        *(_DWORD *)(v8 + 8260) = 0;
        v21 = CmNtCSDVersion;
        *(_DWORD *)(v8 + 8256) = 0;
        *(_DWORD *)(v8 + 0x2000) = v21;
        v22 = (_OWORD *)(v8 + 840);
        *(_DWORD *)(v8 + 8196) = 0x40000;
        *(_DWORD *)(v8 + 8208) = 3840;
        *(_DWORD *)(v8 + 4152) |= 1u;
        *(_DWORD *)(v8 + 8204) = 840;
        do
        {
          *v22 = *v20;
          v22[1] = v20[1];
          v22[2] = v20[2];
          v22[3] = v20[3];
          v22[4] = v20[4];
          v22[5] = v20[5];
          v22[6] = v20[6];
          v22 += 8;
          v23 = v20[7];
          v20 += 8;
          *(v22 - 1) = v23;
          --v18;
        }
        while ( v18 );
        v24 = *v20;
        LODWORD(Size) = 872;
        *v22 = v24;
        v22[1] = v20[1];
        v22[2] = v20[2];
        v22[3] = v20[3];
        v22[4] = v20[4];
        if ( IopValidateSectionSize(0x2080u, (unsigned int *)&Size) )
        {
          *(_DWORD *)(v8 + 4152) |= 0x400u;
          *(_QWORD *)(v8 + 128) = &KdDebuggerDataBlock;
          *(_DWORD *)(v8 + 8304) = 8320;
          *(_DWORD *)(v8 + 8308) = 872;
          KdCopyDataBlock(v8 + 8320, v25, v26, v27);
          v19 = 9192;
        }
        LODWORD(Size) = 32448;
        if ( IopValidateSectionSize(v19, (unsigned int *)&Size) )
        {
          *(_DWORD *)(v8 + 4152) |= 4u;
          *(_DWORD *)(v8 + 8220) = v19;
          memmove((void *)(v8 + v19), KeGetCurrentPrcb(), (unsigned int)Size);
          v19 += Size;
        }
        LODWORD(Size) = 2120;
        if ( IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
        {
          *(_DWORD *)(v8 + 4152) |= 8u;
          v29 = (unsigned int)Size;
          v30 = v28;
          *(_DWORD *)(v8 + 8224) = v28;
          memmove((void *)(v8 + v28), CurrentThread->ApcState.Process, v29);
          v19 = Size + v30;
        }
        LODWORD(Size) = 2072;
        if ( IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size) )
        {
          *(_DWORD *)(v8 + 4152) |= 0x10u;
          v32 = (unsigned int)Size;
          v33 = v31;
          *(_DWORD *)(v8 + 8228) = v31;
          memmove((void *)(v8 + v31), CurrentThread, v32);
          v19 = Size + v33;
        }
        if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20000) != 0 )
        {
          StackLimit = CurrentThread->StackLimit;
          StackBase = CurrentThread->StackBase;
          v36 = *(const void **)(a1 + 152);
          if ( (StackLimit > v36 || v36 >= StackBase) && (v36 = StackLimit, StackBase <= StackLimit) )
            v37 = 0;
          else
            v37 = (_DWORD)StackBase - (_DWORD)v36;
          if ( v37 >= 0x7FFF )
            v37 = 0x7FFF;
          LODWORD(Size) = IopGetMaxValidSectionSize((__int64)v36, v37);
          if ( (_DWORD)Size )
          {
            if ( !IopValidateSectionSize(v19, (unsigned int *)&Size) )
              *(_DWORD *)(v8 + 8260) |= 0x100u;
            *(_DWORD *)(v8 + 4152) |= 0x20u;
            v38 = Size;
            v39 = (unsigned int)Size;
            *(_DWORD *)(v8 + 8232) = v19;
            *(_DWORD *)(v8 + 8236) = v38;
            *(_QWORD *)(v8 + 8264) = v36;
            memmove((void *)(v8 + v19), v36, v39);
            v19 += v38;
          }
        }
        if ( KeGetCurrentIrql() < 2u )
        {
          v40 = KeGetCurrentThread();
          v41 = (v19 + 7) & 0xFFFFFFF8;
          --v40->KernelApcDisable;
          ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
          if ( (int)IoGetLoadedDriverInfo(0, &v51, &v52) >= 0 )
          {
            v42 = v51;
            LODWORD(Size) = (144 * v51 + 7) & 0xFFFFFFF8;
            if ( (_DWORD)Size && IopValidateSectionSize(v41, (unsigned int *)&Size) )
            {
              v43 = v41 + Size;
              LODWORD(Size) = (v52 + 7 + 6 * v42) & 0xFFFFFFF8;
              if ( (_DWORD)Size && IopValidateSectionSize(v43, (unsigned int *)&Size) )
              {
                if ( (int)IopWriteDriverList(v8, 0, v41, v43) >= 0 )
                {
                  *(_DWORD *)(v8 + 4152) |= 0x40u;
                  v44 = Size;
                  *(_DWORD *)(v8 + 8240) = v41;
                  *(_DWORD *)(v8 + 8244) = v42;
                  *(_DWORD *)(v8 + 8248) = v43;
                  v19 = v43 + v44;
                  *(_DWORD *)(v8 + 8252) = v44;
                }
              }
              else
              {
                *(_DWORD *)(v8 + 8260) |= 0x100u;
              }
            }
            else
            {
              *(_DWORD *)(v8 + 8260) |= 0x100u;
            }
          }
          ExReleaseResourceLite(&PsLoadedModuleResource);
          KeLeaveCriticalRegion();
        }
        LODWORD(Size) = 4112;
        v45 = (v19 + 7) & 0xFFFFFFF8;
        IopValidateSectionSize((v19 + 7) & 0xFFFFFFF8, (unsigned int *)&Size);
        if ( (unsigned int)Size > 0x10 )
        {
          v46 = Size - 16;
          MaxValidSectionSizeDown = IopGetMaxValidSectionSizeDown(*(_QWORD *)(a1 + 248), (unsigned int)(Size - 16) >> 1);
          if ( MaxValidSectionSizeDown )
          {
            v48 = (const void *)(*(_QWORD *)(a1 + 248) - MaxValidSectionSizeDown + 1LL);
            MaxValidSectionSize = IopGetMaxValidSectionSize((__int64)v48, v46);
            if ( MaxValidSectionSize )
            {
              *(_DWORD *)(v8 + 4152) |= 0x800u;
              *(_DWORD *)(v8 + 8312) = v45;
              v50 = ((_DWORD)v45 + 23) & 0xFFFFFFF8;
              *(_DWORD *)(v8 + 8316) = 1;
              *(_DWORD *)(v45 + v8 + 8) = v50;
              *(_QWORD *)(v45 + v8) = v48;
              *(_DWORD *)(v45 + v8 + 12) = MaxValidSectionSize;
              memmove((void *)(v8 + v50), v48, MaxValidSectionSize);
            }
          }
        }
        *(_DWORD *)(v8 + 8200) = 262140;
        result = 0x40000LL;
        *(_DWORD *)(v8 + 262140) = 1145524820;
      }
    }
  }
  return result;
}
