/*
 * XREFs of AlpcpInitializeCompletionList @ 0x1406DD984
 * Callers:
 *     NtAlpcSetInformation @ 0x1404EB08C (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14009A990 (MmMapLockedPagesSpecifyCache.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     AlpcGetHeaderSize @ 0x1400AEDD0 (AlpcGetHeaderSize.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x1400D2EC8 (AlpcpFreeCompletionPacketLookaside.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x1404EB3F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpRegisterCompletionListDatabase @ 0x1406DE074 (AlpcpRegisterCompletionListDatabase.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1406DE134 (AlpcpUnregisterCompletionListDatabase.c)
 */

__int64 __fastcall AlpcpInitializeCompletionList(__int64 a1, char *a2, unsigned int a3, int a4, int Flags, int a6)
{
  size_t v6; // r12
  char v8; // r15
  char v9; // r13
  PVOID v10; // rsi
  PVOID PoolWithTag; // rax
  unsigned int v12; // edi
  struct _MDL *Mdl; // rcx
  __int64 v14; // rcx
  PVOID v15; // rax
  char v16; // r12
  __int64 v17; // r15
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned int v20; // r11d
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  ULONG v24; // ecx
  ULONG v25; // edx
  ULONG HeaderSize; // eax
  _DWORD *v27; // rdi
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  char *CompletionPacketLookaside; // rdi
  struct _MDL *v32; // rcx
  unsigned int v34; // [rsp+38h] [rbp-50h]
  int v35; // [rsp+3Ch] [rbp-4Ch]
  unsigned int v36; // [rsp+40h] [rbp-48h]

  v6 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0LL || (a3 & 0xFFF) != 0 || a3 - 0x4000 > 0x3FFFC000 )
    goto LABEL_45;
  if ( (Flags & 0x57FFFFFF) != 0 || !a4 )
  {
    v9 = 0;
LABEL_45:
    v12 = -1073741811;
    goto LABEL_46;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6E496C41u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xA0uLL);
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 2) = KeGetCurrentThread()->ApcState.Process;
    *((_QWORD *)v10 + 5) = a2;
    *((_QWORD *)v10 + 6) = &a2[v6];
    if ( !(unsigned int)AlpcpRegisterCompletionListDatabase(v10) )
    {
      v12 = -1073741800;
      goto LABEL_8;
    }
    Mdl = IoAllocateMdl(a2, v6, 0, 0, 0LL);
    *((_QWORD *)v10 + 4) = Mdl;
    if ( !Mdl )
    {
      v12 = -1073741670;
      v9 = 1;
      goto LABEL_46;
    }
    MmProbeAndLockPages(Mdl, KeGetCurrentThread()->PreviousMode, IoModifyAccess);
    v14 = *((_QWORD *)v10 + 4);
    if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
      v15 = *(PVOID *)(v14 + 24);
    else
      v15 = MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, 0x40000000u);
    *((_QWORD *)v10 + 8) = v15;
    if ( !v15 )
      goto LABEL_17;
    memset(v15, 0, v6);
    v17 = *((_QWORD *)v10 + 8);
    *(_QWORD *)v17 = 0xDEADBEEFBAADF00DuLL;
    *(_QWORD *)(v17 + 328) = 0xBAADF00DDEADBEEFuLL;
    v18 = (8 * ((unsigned int)v6 >> 6) + 4095) & 0xFFFFF000;
    v34 = v18;
    v19 = (((unsigned int)(v6 - v18 - 4096) >> 9) + 4095) & 0xFFFFF000;
    v35 = v19;
    v20 = v6 - v18 - 4096 - v19;
    v36 = v20;
    *((_QWORD *)v10 + 9) = v6;
    *((_QWORD *)v10 + 10) = v17;
    v21 = *((_QWORD *)v10 + 8) + 4096LL;
    *((_QWORD *)v10 + 11) = v21;
    *((_QWORD *)v10 + 12) = v18;
    *((_QWORD *)v10 + 13) = v18 + v21;
    *((_QWORD *)v10 + 14) = v19;
    *((_DWORD *)v10 + 34) = ((unsigned int)(v6 - v18 - 4096) >> 6)
                          - (((((unsigned int)(v6 - v18 - 4096) >> 9) + 4095) & 0xFFFFF000) >> 6);
    *((_QWORD *)v10 + 15) = v18 + v21 + v19;
    *((_QWORD *)v10 + 16) = v20;
    *((_DWORD *)v10 + 36) = a4;
    *((_QWORD *)v10 + 5) = a2;
    *((_QWORD *)v10 + 6) = &a2[v6];
    *((_QWORD *)v10 + 7) = &a2[v19 + 4096 + v18];
    *((_DWORD *)v10 + 37) = Flags;
    if ( a6 )
    {
      v22 = ((Flags >> 31) & 0xC) + 24;
      if ( (Flags & 0x40000000) == 0 )
        v22 = ((Flags >> 31) & 0xC) + 8;
      v23 = v22 + 20;
      if ( (Flags & 0x20000000) == 0 )
        v23 = v22;
      v24 = v23 + 16;
      if ( (Flags & 0x10000000) == 0 )
        v24 = v23;
      v25 = v24 + 24;
      if ( (Flags & 0x8000000) == 0 )
        v25 = v24;
      HeaderSize = v25 + 8;
      if ( (Flags & 0x2000000) == 0 )
        HeaderSize = v25;
    }
    else
    {
      HeaderSize = AlpcGetHeaderSize(Flags);
      LODWORD(v18) = v34;
      LODWORD(v19) = v35;
      v20 = v36;
    }
    *((_DWORD *)v10 + 38) = HeaderSize;
    *(_DWORD *)(v17 + 8) = a3;
    *(_DWORD *)(v17 + 12) = 4096;
    *(_DWORD *)(v17 + 16) = v18;
    *(_DWORD *)(v17 + 20) = v18 + 4096;
    *(_DWORD *)(v17 + 24) = v19;
    *(_DWORD *)(v17 + 28) = v19 + v18 + 4096;
    *(_DWORD *)(v17 + 32) = v20;
    *(_QWORD *)(v17 + 64) |= 0xFFFFFFuLL;
    *(_QWORD *)(v17 + 64) |= 0xFFFFFF000000uLL;
    *(_QWORD *)(v17 + 64) &= 0xFFFFFFFFFFFFuLL;
    *(_DWORD *)(v17 + 36) = *((_DWORD *)v10 + 37);
    *(_DWORD *)(v17 + 40) = *((_DWORD *)v10 + 38);
    v27 = (_DWORD *)*((_QWORD *)v10 + 11);
    v28 = *((_QWORD *)v10 + 12);
    v29 = (unsigned __int64)(v28 + 3) >> 2;
    if ( v27 > (_DWORD *)((char *)v27 + v28) )
      v29 = 0LL;
    if ( v29 )
    {
      while ( v29 )
      {
        *v27++ = -1;
        --v29;
      }
    }
    ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
    v8 = 1;
    if ( *(_QWORD *)(a1 + 360) )
    {
      v12 = -1073740006;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
    {
      v12 = -1073740032;
      goto LABEL_18;
    }
    v30 = *(_QWORD *)(a1 + 32);
    if ( v30 )
    {
      CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v34 >> 3, v30, *(_QWORD *)(a1 + 40));
      if ( !CompletionPacketLookaside )
      {
LABEL_17:
        v12 = -1073741670;
LABEL_18:
        v16 = 1;
        v9 = 1;
        goto LABEL_47;
      }
      AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
      *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
    }
    *(_QWORD *)(a1 + 360) = v10;
    v10 = 0LL;
    *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 416) & 0xFFFFF7FF | ((a6 & 1 | 0x38) << 11);
    v12 = 0;
    goto LABEL_18;
  }
  v12 = -1073741670;
LABEL_8:
  v9 = 0;
LABEL_46:
  v16 = 0;
LABEL_47:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
  }
  if ( v10 )
  {
    if ( v16 )
      MmUnlockPages(*((PMDL *)v10 + 4));
    v32 = (struct _MDL *)*((_QWORD *)v10 + 4);
    if ( v32 )
      IoFreeMdl(v32);
    if ( v9 )
      AlpcpUnregisterCompletionListDatabase(v10);
    ExFreePoolWithTag(v10, 0);
  }
  return v12;
}
