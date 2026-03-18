/*
 * XREFs of MiGetPageProtection @ 0x1400D2870
 * Callers:
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 * Callees:
 *     MiCaptureProtectionFromLockedProto @ 0x140003868 (MiCaptureProtectionFromLockedProto.c)
 *     MiGetImageProtoProtection @ 0x14002D55C (MiGetImageProtoProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140073B74 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14007C2AC (MiRotatedToFrameBuffer.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLockWorkingSetShared @ 0x1400A7E80 (MiLockWorkingSetShared.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x14017CE98 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x14017CEE4 (MiIsPrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiCaptureProtectionFromProto @ 0x14021C6BC (MiCaptureProtectionFromProto.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14025C828 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

ULONG_PTR __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a3,
        int a4)
{
  __int64 v8; // rax
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // r14
  int v12; // ebp
  ULONG_PTR result; // rax
  int v14; // ecx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  _QWORD *v20; // r9
  unsigned __int8 v21; // cl
  __int64 v22; // r8
  unsigned int v23; // eax
  __int64 v24; // r10
  __int64 v25; // rdx
  _KPROCESS *Process; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _KPROCESS *v30; // rbx
  __int64 PrototypePteDirect; // rdi
  int v32; // ecx
  __int64 v33; // rbx
  LONG *v34; // rcx
  LONG *SharedVm; // rax
  unsigned int v36; // edi
  LONG *v37; // rbx
  __int64 v38[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v8 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
  v38[0] = v8;
  v9 = v8;
  if ( (v8 & 1) != 0 )
  {
    v10 = MI_GET_PAGE_FRAME_FROM_PTE(v38);
    v11 = 48 * v10;
    v12 = *(_DWORD *)(BugCheckParameter4 + 48);
    if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 && MiRotatedToFrameBuffer(BugCheckParameter2) )
    {
      result = 4LL;
      if ( (v9 & 0x800) == 0 )
        result = 1LL;
      v14 = v12 & 0xC0;
      if ( v14 == 192 && (v12 & 0x38) != 0 )
      {
        return (unsigned int)result | 0x18;
      }
      else if ( v14 == 64 )
      {
        return (unsigned int)result | 8;
      }
    }
    else
    {
      if ( v10 > qword_14036C290
        || MmPhysicalMemoryBlock && (*(_QWORD *)(v11 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
        || (*(_QWORD *)(v11 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0
        && (*(_QWORD *)(v11 - 0x58000000000LL + 8) | 0x8000000000000000uLL) != BugCheckParameter2 )
      {
        KeBugCheckEx(0x1Au, 0x41201uLL, BugCheckParameter2, v9, BugCheckParameter4);
      }
      if ( (*(_QWORD *)(v11 - 0x58000000000LL + 40) & 0x200000000000000LL) != 0 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(((((__int64)(BugCheckParameter2 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL);
        if ( (v19 & 1) != 0 )
          v21 = HIBYTE(v19) & 0xF | (16 * ((v19 >> 60) & 7));
        else
          v21 = 10;
        LODWORD(v22) = v21 >> 4;
        if ( v21 >= 0x10u )
        {
          if ( (*v20 & 0x10) != 0 || (*v20 & 8) == 0 )
          {
            if ( (*v20 & 0x10LL) != 0 )
              LODWORD(v22) = v22 | 8;
          }
          else
          {
            LODWORD(v22) = v22 | 0x18;
          }
        }
        if ( !(_DWORD)v22 )
        {
          v23 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v11 - 0x57FFFFFFFF0LL);
          v25 = *(_QWORD *)(v11 - 0x58000000000LL + 8);
          v22 = v23;
          if ( v25 >= 0
            || (Process = KeGetCurrentThread()->ApcState.Process, Process[1].Affinity.Bitmap[12])
            && MiLocateCloneAddress((__int64)Process, v24 | v25) )
          {
            LODWORD(v22) = MmMakeProtectNotWriteCopy[v22];
          }
        }
        return (unsigned int)v22;
      }
      else if ( ((*(_QWORD *)(v11 - 0x58000000000LL + 40) >> 54) & 7) == 1 )
      {
        v15 = (_QWORD *)qword_14036C298;
        if ( qword_14036C298 )
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
        if ( (v9 & 4) != 0 )
        {
          v18 = 1;
          if ( (v9 & 0x800) != 0 )
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
  }
  else if ( (v8 & 0x400) != 0 && !(unsigned int)MiIsPrototypePteVadLookup(v8) )
  {
    v30 = KeGetCurrentThread()->ApcState.Process;
    PrototypePteDirect = MiGetPrototypePteDirect(v38[0], v27, v28, v29);
    if ( MI_PROTO_FORMAT_COMBINED(v38[0])
      || v30[1].Affinity.Bitmap[12] && MiLocateCloneAddress((__int64)v30, PrototypePteDirect) )
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
        v33 = (__int64)&v30[1].IdealNode[12];
        if ( a4 == 1 )
        {
          MiPreUnlockWorkingSetExclusive(v33, a3);
          v34 = &dword_14036D4C0;
          if ( (*(_BYTE *)(v33 + 192) & 7) != 2 )
            v34 = (LONG *)(v33 + 200);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v34, retaddr);
          else
            *v34 = 0;
        }
        else
        {
          SharedVm = MiGetSharedVm(v33);
          ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
        }
        __writecr8(a3);
        v36 = MiCaptureProtectionFromProto(PrototypePteDirect);
        if ( a4 == 1 )
        {
          v37 = MiGetSharedVm(v33);
          ExAcquireSpinLockExclusive(v37);
          result = v36;
          v37[1] = 0;
        }
        else
        {
          MiLockWorkingSetShared(v33);
          return v36;
        }
      }
    }
  }
  else
  {
    return (v9 >> 5) & 0x1F;
  }
  return result;
}
