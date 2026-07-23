/*
 * XREFs of AlpcpInitializeCompletionList @ 0x14052DD94
 * Callers:
 *     NtAlpcSetInformation @ 0x14052E020 (NtAlpcSetInformation.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140022650 (MmProbeAndLockPages.c)
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     AlpcGetHeaderSize @ 0x140073120 (AlpcGetHeaderSize.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400B88D8 (AlpcpFreeCompletionPacketLookaside.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14010AF00 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14052E8E4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpRegisterCompletionListDatabase @ 0x140748BA8 (AlpcpRegisterCompletionListDatabase.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140748C68 (AlpcpUnregisterCompletionListDatabase.c)
 */

__int64 __fastcall AlpcpInitializeCompletionList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int Flags, int a6)
{
  size_t v6; // r15
  char v8; // r12
  char v9; // r13
  PVOID v10; // rsi
  unsigned int v11; // edi
  char v12; // r15
  PVOID PoolWithTag; // rax
  struct _MDL *Mdl; // rcx
  __int64 v16; // rcx
  PVOID v17; // rax
  __int64 v18; // r12
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned int v21; // r11d
  __int64 v22; // rax
  int v23; // ecx
  int v24; // eax
  ULONG v25; // ecx
  ULONG v26; // edx
  ULONG HeaderSize; // eax
  _DWORD *v28; // rdi
  __int64 v29; // rax
  unsigned __int64 v30; // rcx
  int v31; // eax
  __int64 CompletionPacketLookaside; // rdi
  struct _MDL *v33; // rcx
  unsigned int v34; // [rsp+38h] [rbp-50h]
  int v35; // [rsp+3Ch] [rbp-4Ch]
  unsigned int v36; // [rsp+40h] [rbp-48h]
  char *VirtualAddress; // [rsp+98h] [rbp+10h]
  int v38; // [rsp+A0h] [rbp+18h]
  int v39; // [rsp+A8h] [rbp+20h]

  v39 = a4;
  v38 = a3;
  VirtualAddress = (char *)a2;
  v6 = (unsigned int)a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( (a2 & 0xFFF) != 0 || (a3 & 0xFFF) != 0 || (unsigned int)(a3 - 0x4000) > 0x3FFFC000 )
    goto LABEL_5;
  if ( (Flags & 0x57FFFFFF) != 0 || !(_DWORD)a4 )
  {
    v9 = 0;
LABEL_5:
    v11 = -1073741811;
LABEL_6:
    v12 = 0;
    goto LABEL_7;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6E496C41u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
LABEL_14:
    v9 = 0;
    goto LABEL_6;
  }
  memset(PoolWithTag, 0, 0xA0uLL);
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 2) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)v10 + 5) = VirtualAddress;
  *((_QWORD *)v10 + 6) = &VirtualAddress[v6];
  if ( !(unsigned int)AlpcpRegisterCompletionListDatabase(v10) )
  {
    v11 = -1073741800;
    goto LABEL_14;
  }
  Mdl = IoAllocateMdl(VirtualAddress, v6, 0, 0, 0LL);
  *((_QWORD *)v10 + 4) = Mdl;
  if ( !Mdl )
  {
    v11 = -1073741670;
    v9 = 1;
    goto LABEL_6;
  }
  MmProbeAndLockPages(Mdl, KeGetCurrentThread()->PreviousMode, IoModifyAccess);
  v16 = *((_QWORD *)v10 + 4);
  if ( (*(_BYTE *)(v16 + 10) & 5) != 0 )
    v17 = *(PVOID *)(v16 + 24);
  else
    v17 = MmMapLockedPagesSpecifyCache((PMDL)v16, 0, MmCached, 0LL, 0, 0x40000000u);
  *((_QWORD *)v10 + 8) = v17;
  if ( v17 )
  {
    memset(v17, 0, v6);
    v18 = *((_QWORD *)v10 + 8);
    *(_QWORD *)v18 = 0xDEADBEEFBAADF00DuLL;
    *(_QWORD *)(v18 + 328) = 0xBAADF00DDEADBEEFuLL;
    v19 = (8 * ((unsigned int)v6 >> 6) + 4095) & 0xFFFFF000;
    v34 = v19;
    v20 = (((unsigned int)(v6 - v19 - 4096) >> 9) + 4095) & 0xFFFFF000;
    v35 = v20;
    v21 = v6 - v19 - 4096 - v20;
    v36 = v21;
    *((_QWORD *)v10 + 9) = v6;
    *((_QWORD *)v10 + 10) = v18;
    v22 = *((_QWORD *)v10 + 8) + 4096LL;
    *((_QWORD *)v10 + 11) = v22;
    *((_QWORD *)v10 + 12) = v19;
    *((_QWORD *)v10 + 13) = v19 + v22;
    *((_QWORD *)v10 + 14) = v20;
    *((_DWORD *)v10 + 34) = ((unsigned int)(v6 - v19 - 4096) >> 6)
                          - (((((unsigned int)(v6 - v19 - 4096) >> 9) + 4095) & 0xFFFFF000) >> 6);
    *((_QWORD *)v10 + 15) = v19 + v22 + v20;
    *((_QWORD *)v10 + 16) = v21;
    *((_DWORD *)v10 + 36) = v39;
    *((_QWORD *)v10 + 5) = VirtualAddress;
    *((_QWORD *)v10 + 6) = &VirtualAddress[v6];
    *((_QWORD *)v10 + 7) = &VirtualAddress[v20 + 4096 + v19];
    *((_DWORD *)v10 + 37) = Flags;
    if ( a6 )
    {
      v23 = ((Flags >> 31) & 0xC) + 24;
      if ( (Flags & 0x40000000) == 0 )
        v23 = ((Flags >> 31) & 0xC) + 8;
      v24 = v23 + 20;
      if ( (Flags & 0x20000000) == 0 )
        v24 = v23;
      v25 = v24 + 16;
      if ( (Flags & 0x10000000) == 0 )
        v25 = v24;
      v26 = v25 + 24;
      if ( (Flags & 0x8000000) == 0 )
        v26 = v25;
      HeaderSize = v26 + 8;
      if ( (Flags & 0x2000000) == 0 )
        HeaderSize = v26;
    }
    else
    {
      HeaderSize = AlpcGetHeaderSize(Flags);
      LODWORD(v19) = v34;
      LODWORD(v20) = v35;
      v21 = v36;
    }
    *((_DWORD *)v10 + 38) = HeaderSize;
    *(_DWORD *)(v18 + 8) = v38;
    *(_DWORD *)(v18 + 12) = 4096;
    *(_DWORD *)(v18 + 16) = v19;
    *(_DWORD *)(v18 + 20) = v19 + 4096;
    *(_DWORD *)(v18 + 24) = v20;
    *(_DWORD *)(v18 + 28) = v20 + v19 + 4096;
    *(_DWORD *)(v18 + 32) = v21;
    *(_QWORD *)(v18 + 64) |= 0xFFFFFFuLL;
    *(_QWORD *)(v18 + 64) |= 0xFFFFFF000000uLL;
    *(_QWORD *)(v18 + 64) &= 0xFFFFFFFFFFFFuLL;
    *(_DWORD *)(v18 + 36) = *((_DWORD *)v10 + 37);
    *(_DWORD *)(v18 + 40) = *((_DWORD *)v10 + 38);
    v28 = (_DWORD *)*((_QWORD *)v10 + 11);
    v29 = *((_QWORD *)v10 + 12);
    v30 = (unsigned __int64)(v29 + 3) >> 2;
    if ( v28 > (_DWORD *)((char *)v28 + v29) )
      v30 = 0LL;
    if ( v30 )
    {
      while ( v30 )
      {
        *v28++ = -1;
        --v30;
      }
    }
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    v8 = 1;
    if ( *(_QWORD *)(a1 + 360) )
    {
      v11 = -1073740006;
      goto LABEL_36;
    }
    v31 = *(_DWORD *)(a1 + 416);
    if ( (v31 & 0x40) != 0 )
    {
      v11 = -1073740032;
      goto LABEL_36;
    }
    a2 = *(_QWORD *)(a1 + 32);
    if ( !a2 )
      goto LABEL_35;
    CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v34 >> 3, a2, *(_QWORD *)(a1 + 40));
    if ( CompletionPacketLookaside )
    {
      AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
      *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
      v31 = *(_DWORD *)(a1 + 416);
LABEL_35:
      *(_QWORD *)(a1 + 360) = v10;
      v10 = 0LL;
      *(_DWORD *)(a1 + 416) = v31 & 0xFFFFF7FF | ((a6 & 1 | 0x38) << 11);
      v11 = 0;
      goto LABEL_36;
    }
  }
  v11 = -1073741670;
LABEL_36:
  v12 = 1;
  v9 = 1;
LABEL_7:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352), a2, a3, a4);
    KeAbPostRelease(a1 + 352);
  }
  if ( v10 )
  {
    if ( v12 )
      MmUnlockPages(*((PMDL *)v10 + 4));
    v33 = (struct _MDL *)*((_QWORD *)v10 + 4);
    if ( v33 )
      IoFreeMdl(v33);
    if ( v9 )
      AlpcpUnregisterCompletionListDatabase(v10);
    ExFreePoolWithTag(v10, 0);
  }
  return v11;
}
