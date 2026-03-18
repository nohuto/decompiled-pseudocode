/*
 * XREFs of MiGetPageProtection @ 0x14003DEB0
 * Callers:
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x140008950 (MiRotatedToFrameBuffer.c)
 *     MiCaptureProtectionFromLockedProto @ 0x140008CD8 (MiCaptureProtectionFromLockedProto.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockWorkingSetShared @ 0x1400A63A0 (MiLockWorkingSetShared.c)
 *     MiLocateCloneAddress @ 0x1400EA120 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14011D054 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetImageProtoProtection @ 0x14011D114 (MiGetImageProtoProtection.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017C6D0 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017C740 (MiIsPrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiCaptureProtectionFromProto @ 0x1402292FC (MiCaptureProtectionFromProto.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140286144 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

ULONG_PTR __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a3,
        int a4)
{
  ULONG_PTR PteShadow; // rbx
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  int v12; // ebp
  ULONG_PTR result; // rax
  int v14; // ecx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned __int64 v19; // rdi
  unsigned __int64 *v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int8 v22; // al
  __int64 v23; // r8
  unsigned int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // rdx
  _KPROCESS *Process; // rcx
  __int64 *PrototypePteDirect; // rdi
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ecx
  __int64 v33; // rbx
  __int64 v34; // rcx
  LONG *v35; // rcx
  LONG *SharedVm; // rax
  unsigned int v37; // edi
  LONG *v38; // rbx
  void *retaddr; // [rsp+58h] [rbp+0h]
  ULONG_PTR v40; // [rsp+68h] [rbp+10h] BYREF

  PteShadow = *(_QWORD *)BugCheckParameter2;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(BugCheckParameter2, *(_QWORD *)BugCheckParameter2);
  v40 = PteShadow;
  if ( (PteShadow & 1) != 0 )
  {
    v10 = MI_GET_PAGE_FRAME_FROM_PTE(&v40);
    v11 = 48 * v10;
    v12 = *(_DWORD *)(BugCheckParameter4 + 48);
    if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 )
    {
      if ( MiRotatedToFrameBuffer((__int64 *)BugCheckParameter2) )
      {
        result = 4LL;
        if ( (PteShadow & 0x800) == 0 )
          result = 1LL;
        v14 = (unsigned __int8)v12 >> 6;
        if ( v14 == 3 && (v12 & 0x38) != 0 )
          return (unsigned int)result | 0x18;
        if ( v14 == 1 )
          return (unsigned int)result | 8;
        return result;
      }
      v9 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( v10 > qword_1403885E0
      || MmPhysicalMemoryBlock && (*(_QWORD *)(v11 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
      || (*(_QWORD *)(v11 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0
      && (*(_QWORD *)(v11 - 0x58000000000LL + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
    {
      KeBugCheckEx(0x1Au, 0x41201uLL, BugCheckParameter2, PteShadow, BugCheckParameter4);
    }
    if ( (*(_QWORD *)(v11 - 0x58000000000LL + 40) & 0x200000000000000LL) != 0 )
    {
      v19 = (unsigned __int64)((__int64)(BugCheckParameter2 << 25) >> 16) >> 9;
      v20 = (unsigned __int64 *)((v19 & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v21 = *v20;
      if ( (unsigned __int64)v20 >= v9 && (unsigned __int64)v20 <= 0xFFFFF6FB7DBED7F8uLL )
        v21 = MiReadPteShadow((v19 & 0x7FFFFFFFF8LL) - 0x98000000000LL, *v20);
      if ( (v21 & 1) != 0 )
        v22 = 16 * (v21 >> 60);
      else
        v22 = 10;
      LODWORD(v23) = (v22 >> 4) & 7;
      if ( !(_DWORD)v23 )
        goto LABEL_48;
      if ( (*v20 & 0x10) != 0 )
      {
        LODWORD(v23) = v23 | 8;
      }
      else if ( (*v20 & 8) != 0 )
      {
        LODWORD(v23) = v23 | 0x18;
      }
      if ( !(_DWORD)v23 )
      {
LABEL_48:
        v24 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v11 - 0x57FFFFFFFF0LL);
        v27 = *(_QWORD *)(v11 - 0x58000000000LL + 8);
        v23 = v24;
        if ( v27 >= 0
          || (Process = KeGetCurrentThread()->ApcState.Process, Process[1].Affinity.Bitmap[12])
          && MiLocateCloneAddress(Process, v26 | v27, v24, v25) )
        {
          LODWORD(v23) = MmMakeProtectNotWriteCopy[v23];
        }
      }
      return (unsigned int)v23;
    }
    else if ( ((*(_QWORD *)(v11 - 0x58000000000LL + 40) >> 54) & 7) == 1 )
    {
      v15 = (_QWORD *)qword_1403885E8;
      if ( qword_1403885E8 )
      {
        v16 = v11 / 48;
        do
        {
          v17 = v15[3];
          if ( v16 < v17 )
          {
            v15 = (_QWORD *)*v15;
          }
          else
          {
            if ( v16 - v17 < v15[4] )
              return (*(_DWORD *)(v11 - 0x58000000000LL + 16) >> 5) & 0x1F;
            v15 = (_QWORD *)v15[1];
          }
        }
        while ( v15 );
      }
      if ( (PteShadow & 4) != 0 )
      {
        v18 = 1;
        if ( (PteShadow & 0x800) != 0 )
          return 4;
        return v18;
      }
      else
      {
        return 24LL;
      }
    }
    else
    {
      return (*(_DWORD *)(v11 - 0x58000000000LL + 16) >> 5) & 0x1F;
    }
  }
  else if ( (PteShadow & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(PteShadow) )
  {
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(PteShadow);
    if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(PteShadow)
      || *(_QWORD *)(v30 + 912) && MiLocateCloneAddress(v30, PrototypePteDirect, v30, v31) )
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(PrototypePteDirect)];
    }
    else
    {
      v32 = *(_DWORD *)(BugCheckParameter4 + 48);
      if ( (v32 & 7) == 2 && (v32 & 0xF8) == 0x38 )
      {
        return MiGetImageProtoProtection(BugCheckParameter4, PrototypePteDirect);
      }
      else
      {
        v33 = v30 + 1280;
        v34 = v30 + 1280;
        if ( a4 == 1 )
        {
          MiPreUnlockWorkingSetExclusive(v34, a3);
          v35 = &dword_140389780;
          if ( (*(_BYTE *)(v33 + 192) & 7) != 2 )
            v35 = (LONG *)(v33 + 200);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v35, retaddr);
          else
            *v35 = 0;
        }
        else
        {
          SharedVm = MiGetSharedVm(v34);
          ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
        }
        __writecr8(a3);
        v37 = MiCaptureProtectionFromProto((ULONG_PTR)PrototypePteDirect);
        if ( a4 == 1 )
        {
          v38 = MiGetSharedVm(v33);
          ExAcquireSpinLockExclusive(v38);
          result = v37;
          v38[1] = 0;
        }
        else
        {
          MiLockWorkingSetShared(v33);
          return v37;
        }
      }
    }
  }
  else
  {
    return (PteShadow >> 5) & 0x1F;
  }
  return result;
}
