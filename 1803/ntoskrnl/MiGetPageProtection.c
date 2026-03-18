/*
 * XREFs of MiGetPageProtection @ 0x140022690
 * Callers:
 *     MiQueryAddressState @ 0x14001F780 (MiQueryAddressState.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiRotatedToFrameBuffer @ 0x14004F064 (MiRotatedToFrameBuffer.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14004FA88 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiLocateCloneAddress @ 0x140050C4C (MiLocateCloneAddress.c)
 *     PsGetCurrentProcess @ 0x1400627B0 (PsGetCurrentProcess.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BC2D0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetImageProtoProtection @ 0x1400C14E0 (MiGetImageProtoProtection.c)
 *     MiCaptureProtectionFromLockedProto @ 0x140143CE8 (MiCaptureProtectionFromLockedProto.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiGetPrototypePteDirect @ 0x1401A6524 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401A6594 (MiIsPrototypePteVadLookup.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiGetValidAweProtection @ 0x1402626A8 (MiGetValidAweProtection.c)
 */

ULONG_PTR __fastcall MiGetPageProtection(
        ULONG_PTR BugCheckParameter4,
        ULONG_PTR BugCheckParameter2,
        unsigned __int64 *a3,
        __int64 a4)
{
  ULONG_PTR v4; // rdi
  unsigned int v5; // r14d
  unsigned __int64 v7; // r8
  ULONG_PTR v8; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r15
  int v16; // r14d
  unsigned int v17; // r8d
  int v18; // eax
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rcx
  unsigned int v22; // edx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r10
  __int64 v30; // rdx
  __int64 v31; // r9
  _KPROCESS *Process; // rcx
  __int64 v33; // rdi
  unsigned __int64 v34; // rsi
  unsigned __int64 ProtoPteAddress; // rbx
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbx
  __int64 v40; // r9
  __int64 PrototypePteDirect; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 CurrentProcess; // rax
  int v46; // ecx
  ULONG_PTR v47; // [rsp+78h] [rbp+10h] BYREF
  __int64 v48; // [rsp+80h] [rbp+18h] BYREF

  v4 = *(_QWORD *)BugCheckParameter2;
  v5 = 0;
  *a3 = 0LL;
  v7 = 0xFFFFF6FB7DBED000uLL;
  v8 = BugCheckParameter2;
  if ( BugCheckParameter2 >= 0xFFFFF6FB7DBED000uLL
    && BugCheckParameter2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(BugCheckParameter4, BugCheckParameter2, 0xFFFFF6FB7DBED000uLL, a4)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    BugCheckParameter2 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( BugCheckParameter2 )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 8 * ((v8 >> 3) & 0x1FF));
      BugCheckParameter2 = v4 | 0x20;
      if ( (v10 & 0x20) == 0 )
        BugCheckParameter2 = v4;
      v4 = BugCheckParameter2;
      if ( (v10 & 0x42) != 0 )
        v4 = BugCheckParameter2 | 0x42;
    }
  }
  v47 = v4;
  if ( (v4 & 1) == 0 )
  {
    if ( (v4 & 0x400) == 0 )
      return (v4 >> 5) & 0x1F;
    if ( !(unsigned int)MiIsPrototypePteVadLookup(v4) )
    {
      PrototypePteDirect = MiGetPrototypePteDirect(v4);
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v4, v42, v43, v44) )
        return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(PrototypePteDirect)];
      CurrentProcess = PsGetCurrentProcess();
      if ( *(_QWORD *)(CurrentProcess + 912) )
      {
        if ( MiLocateCloneAddress(CurrentProcess, PrototypePteDirect) )
          return (unsigned int)MmMakeProtectNotWriteCopy[(unsigned int)MiCaptureProtectionFromLockedProto(PrototypePteDirect)];
      }
      v46 = *(_DWORD *)(BugCheckParameter4 + 48);
      if ( (v46 & 7) != 2 || (v46 & 0xF8) != 0x38 )
        KeBugCheckEx(0x1Au, 0x41202uLL, v8, v4, BugCheckParameter4);
      return MiGetImageProtoProtection(BugCheckParameter4, PrototypePteDirect);
    }
    v33 = (v4 >> 5) & 0x1F;
    if ( (*(_DWORD *)(BugCheckParameter4 + 48) & 0x4000) == 0 )
    {
      v34 = (unsigned __int64)((__int64)(v8 << 25) >> 16) >> 12;
      ProtoPteAddress = MiGetProtoPteAddress(BugCheckParameter4, v34, 4, &v48);
      if ( !ProtoPteAddress )
        return v5;
      v36 = *(_QWORD **)(BugCheckParameter4 + 120);
      if ( (__int64)v36 < 0
        && v34
         - (*(unsigned int *)(BugCheckParameter4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(BugCheckParameter4 + 32) << 32)) > (unsigned __int64)(*v36 - 1LL) >> 12 )
      {
        return v5;
      }
      if ( !*(_QWORD *)(*(_QWORD *)v48 + 64LL) && (*(_DWORD *)(*(_QWORD *)v48 + 56LL) & 0x2000) == 0 )
      {
        if ( MiTryLockProtoPoolPageAtDpc(ProtoPteAddress, 0LL) )
        {
          v37 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
          LOBYTE(v38) = 2;
          v39 = v37;
          MiUnlockProtoPoolPage(v40, v38);
          if ( v39 )
            return (unsigned int)v33;
          return v5;
        }
        *a3 = ProtoPteAddress;
        LODWORD(v33) = 256;
      }
    }
    return (unsigned int)v33;
  }
  if ( (unsigned __int64)&v47 < v7 || (unsigned __int64)&v47 > 0xFFFFF6FB7DBED7F8uLL )
  {
    v11 = v4;
  }
  else
  {
    v11 = v4;
    if ( (unsigned int)MiPteHasShadow(&v47, BugCheckParameter2, v7, a4) && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
    {
      v12 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v12 )
      {
        v11 = v4 | 0x20;
        v13 = *(_QWORD *)(v12 + 8 * (((unsigned __int64)&v47 >> 3) & 0x1FF));
        if ( (v13 & 0x20) == 0 )
          v11 = v4;
        if ( (v13 & 0x42) != 0 )
          v11 |= 0x42uLL;
      }
    }
  }
  v14 = (v11 >> 12) & 0xFFFFFFFFFLL;
  v15 = 48 * v14;
  v16 = *(_DWORD *)(BugCheckParameter4 + 48);
  if ( (*(_BYTE *)(BugCheckParameter4 + 48) & 7) == 6 )
  {
    if ( (unsigned int)MiRotatedToFrameBuffer(v8) )
    {
      v17 = 4;
      if ( (v4 & 0x800) == 0 )
        v17 = 1;
      v18 = (unsigned __int8)v16 >> 6;
      if ( v18 == 3 && (v16 & 0x38) != 0 )
        return v17 | 0x18;
      if ( v18 == 1 )
        v17 |= 8u;
      return v17;
    }
    v7 = 0xFFFFF6FB7DBED000uLL;
  }
  if ( v14 > qword_1403CB780
    || MmPhysicalMemoryBlock && (*(_QWORD *)(v15 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) == 0
    || (v20 = (*(_QWORD *)(v15 - 0x58000000000LL + 40) >> 57) & 1LL,
        (*(_QWORD *)(v15 - 0x58000000000LL + 40) & 0x200000000000000LL) == 0)
    && (*(_QWORD *)(v15 - 0x58000000000LL + 8) | 0x8000000000000000uLL) != v8 )
  {
    KeBugCheckEx(0x1Au, 0x41201uLL, v8, v4, BugCheckParameter4);
  }
  if ( (_DWORD)v20 )
  {
    v23 = ((((__int64)(v8 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
    v24 = *(_QWORD *)v23;
    if ( v23 >= v7
      && v23 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(0xFFFFF68000000000uLL, v24, v7, v23)
      && (v24 & 1) != 0
      && ((v24 & 0x20) == 0 || (v24 & 0x42) == 0) )
    {
      v25 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 8 * ((v23 >> 3) & 0x1FF));
        v27 = v24 | 0x20;
        if ( (v26 & 0x20) == 0 )
          v27 = v24;
        v24 = v27;
        if ( (v26 & 0x42) != 0 )
          v24 = v27 | 0x42;
      }
    }
    v22 = (v24 >> 60) & 7;
    if ( v22 )
    {
      if ( (*(_QWORD *)v23 & 0x10) != 0 )
      {
        v22 |= 8u;
      }
      else if ( (*(_QWORD *)v23 & 8) != 0 )
      {
        v22 |= 0x18u;
      }
    }
    else
    {
      v28 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v15 - 0x57FFFFFFFF0LL);
      v30 = *(_QWORD *)(v15 - 0x58000000000LL + 8);
      LODWORD(v31) = v28;
      if ( v30 < 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process[1].Affinity.Bitmap[12] && MiLocateCloneAddress(Process, v29 | v30) )
          LODWORD(v31) = MmMakeProtectNotWriteCopy[v31];
        return (unsigned int)v31;
      }
      else
      {
        return (unsigned int)MmMakeProtectNotWriteCopy[v28];
      }
    }
  }
  else if ( ((*(_QWORD *)(v15 - 0x58000000000LL + 40) >> 54) & 7) == 1 )
  {
    v21 = (_QWORD *)qword_1403CB788;
    if ( qword_1403CB788 )
    {
      v20 = v15 / 48;
      do
      {
        v7 = v21[3];
        if ( v20 < v7 )
        {
          v21 = (_QWORD *)*v21;
        }
        else
        {
          if ( v20 - v7 < v21[4] )
            return (*(_DWORD *)(v15 - 0x58000000000LL + 16) >> 5) & 0x1F;
          v21 = (_QWORD *)v21[1];
        }
      }
      while ( v21 );
    }
    return (unsigned int)MiGetValidAweProtection(v4, v20, v7, a4);
  }
  else
  {
    return (*(_DWORD *)(v15 - 0x58000000000LL + 16) >> 5) & 0x1F;
  }
  return v22;
}
