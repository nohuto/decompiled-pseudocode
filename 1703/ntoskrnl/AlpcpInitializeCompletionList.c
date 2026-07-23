/*
 * XREFs of AlpcpInitializeCompletionList @ 0x14056B364
 * Callers:
 *     NtAlpcSetInformation @ 0x14055D284 (NtAlpcSetInformation.c)
 * Callees:
 *     AlpcpFreeCompletionPacketLookaside @ 0x14003F3F0 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcGetHeaderSize @ 0x14006F1C0 (AlpcGetHeaderSize.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     MmProbeAndLockPages @ 0x1400B3C30 (MmProbeAndLockPages.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400F8330 (MmMapLockedPagesSpecifyCache.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14055D770 (AlpcpAllocateCompletionPacketLookaside.c)
 *     AlpcpRegisterCompletionListDatabase @ 0x14056B7BC (AlpcpRegisterCompletionListDatabase.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x14056C9C4 (AlpcpUnregisterCompletionListDatabase.c)
 */

__int64 __fastcall AlpcpInitializeCompletionList(__int64 a1, char *a2, unsigned int a3, int a4, int Flags, int a6)
{
  size_t v6; // r15
  char v8; // r12
  char v9; // r13
  PVOID v10; // rsi
  PVOID PoolWithTag; // rax
  struct _MDL *Mdl; // rcx
  __int64 v13; // rcx
  PVOID v14; // rax
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // r10
  unsigned int v18; // r11d
  __int64 v19; // rax
  ULONG HeaderSize; // eax
  _DWORD *v21; // rdi
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  char *CompletionPacketLookaside; // rdi
  unsigned int v25; // edi
  char v26; // r15
  int v28; // ecx
  int v29; // eax
  ULONG v30; // ecx
  ULONG v31; // edx
  struct _MDL *v32; // rcx
  unsigned int v33; // [rsp+38h] [rbp-50h]
  int v34; // [rsp+3Ch] [rbp-4Ch]
  unsigned int P; // [rsp+40h] [rbp-48h]

  v6 = a3;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( ((unsigned __int16)a2 & 0xFFF) != 0LL || (a3 & 0xFFF) != 0 || a3 - 0x4000 > 0x3FFFC000 )
    goto LABEL_51;
  if ( (Flags & 0x57FFFFFF) != 0 || !a4 )
  {
    v9 = 0;
LABEL_51:
    v25 = -1073741811;
    goto LABEL_52;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6E496C41u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v25 = -1073741670;
LABEL_34:
    v9 = 0;
    goto LABEL_52;
  }
  memset(PoolWithTag, 0, 0xA0uLL);
  *((_QWORD *)v10 + 3) = 0LL;
  *((_QWORD *)v10 + 2) = KeGetCurrentThread()->ApcState.Process;
  *((_QWORD *)v10 + 5) = a2;
  *((_QWORD *)v10 + 6) = &a2[v6];
  if ( !(unsigned int)AlpcpRegisterCompletionListDatabase(v10) )
  {
    v25 = -1073741800;
    goto LABEL_34;
  }
  Mdl = IoAllocateMdl(a2, v6, 0, 0, 0LL);
  *((_QWORD *)v10 + 4) = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, KeGetCurrentThread()->PreviousMode, IoModifyAccess);
    v13 = *((_QWORD *)v10 + 4);
    if ( (*(_BYTE *)(v13 + 10) & 5) != 0 )
      v14 = *(PVOID *)(v13 + 24);
    else
      v14 = MmMapLockedPagesSpecifyCache((PMDL)v13, 0, MmCached, 0LL, 0, 0x40000000u);
    *((_QWORD *)v10 + 8) = v14;
    if ( v14 )
    {
      memset(v14, 0, v6);
      v15 = *((_QWORD *)v10 + 8);
      *(_QWORD *)v15 = 0xDEADBEEFBAADF00DuLL;
      *(_QWORD *)(v15 + 328) = 0xBAADF00DDEADBEEFuLL;
      v16 = (8 * ((unsigned int)v6 >> 6) + 4095) & 0xFFFFF000;
      v33 = v16;
      v17 = (((unsigned int)(v6 - v16 - 4096) >> 9) + 4095) & 0xFFFFF000;
      v34 = v17;
      v18 = v6 - v16 - 4096 - v17;
      P = v18;
      *((_QWORD *)v10 + 9) = v6;
      *((_QWORD *)v10 + 10) = v15;
      v19 = *((_QWORD *)v10 + 8) + 4096LL;
      *((_QWORD *)v10 + 11) = v19;
      *((_QWORD *)v10 + 12) = v16;
      *((_QWORD *)v10 + 13) = v16 + v19;
      *((_QWORD *)v10 + 14) = v17;
      *((_DWORD *)v10 + 34) = ((unsigned int)(v6 - v16 - 4096) >> 6)
                            - (((((unsigned int)(v6 - v16 - 4096) >> 9) + 4095) & 0xFFFFF000) >> 6);
      *((_QWORD *)v10 + 15) = v16 + v19 + v17;
      *((_QWORD *)v10 + 16) = v18;
      *((_DWORD *)v10 + 36) = a4;
      *((_QWORD *)v10 + 5) = a2;
      *((_QWORD *)v10 + 6) = &a2[v6];
      *((_QWORD *)v10 + 7) = &a2[v17 + 4096 + v16];
      *((_DWORD *)v10 + 37) = Flags;
      if ( a6 )
      {
        v28 = ((Flags >> 31) & 0xC) + 24;
        if ( (Flags & 0x40000000) == 0 )
          v28 = ((Flags >> 31) & 0xC) + 8;
        v29 = v28 + 20;
        if ( (Flags & 0x20000000) == 0 )
          v29 = v28;
        v30 = v29 + 16;
        if ( (Flags & 0x10000000) == 0 )
          v30 = v29;
        v31 = v30 + 24;
        if ( (Flags & 0x8000000) == 0 )
          v31 = v30;
        HeaderSize = v31 + 8;
        if ( (Flags & 0x2000000) == 0 )
          HeaderSize = v31;
      }
      else
      {
        HeaderSize = AlpcGetHeaderSize(Flags);
        LODWORD(v16) = v33;
        LODWORD(v17) = v34;
        v18 = P;
      }
      *((_DWORD *)v10 + 38) = HeaderSize;
      *(_DWORD *)(v15 + 8) = a3;
      *(_DWORD *)(v15 + 12) = 4096;
      *(_DWORD *)(v15 + 16) = v16;
      *(_DWORD *)(v15 + 20) = v16 + 4096;
      *(_DWORD *)(v15 + 24) = v17;
      *(_DWORD *)(v15 + 28) = v17 + v16 + 4096;
      *(_DWORD *)(v15 + 32) = v18;
      *(_QWORD *)(v15 + 64) |= 0xFFFFFFuLL;
      *(_QWORD *)(v15 + 64) |= 0xFFFFFF000000uLL;
      *(_QWORD *)(v15 + 64) &= 0xFFFFFFFFFFFFuLL;
      *(_DWORD *)(v15 + 36) = *((_DWORD *)v10 + 37);
      *(_DWORD *)(v15 + 40) = *((_DWORD *)v10 + 38);
      v21 = (_DWORD *)*((_QWORD *)v10 + 11);
      v22 = (unsigned __int64)(*((_QWORD *)v10 + 12) + 3LL) >> 2;
      if ( v21 > (_DWORD *)((char *)v21 + *((_QWORD *)v10 + 12)) )
        v22 = 0LL;
      if ( v22 )
      {
        while ( v22 )
        {
          *v21++ = -1;
          --v22;
        }
      }
      ExAcquirePushLockExclusiveEx(a1 + 352, 0LL);
      v8 = 1;
      if ( *(_QWORD *)(a1 + 360) )
      {
        v25 = -1073740006;
        goto LABEL_24;
      }
      if ( (*(_DWORD *)(a1 + 416) & 0x40) != 0 )
      {
        v25 = -1073740032;
        goto LABEL_24;
      }
      v23 = *(_QWORD *)(a1 + 32);
      if ( !v23 )
        goto LABEL_23;
      CompletionPacketLookaside = AlpcpAllocateCompletionPacketLookaside(v33 >> 3, v23, *(_QWORD *)(a1 + 40));
      if ( CompletionPacketLookaside )
      {
        AlpcpFreeCompletionPacketLookaside(*(_QWORD *)(a1 + 48));
        *(_QWORD *)(a1 + 48) = CompletionPacketLookaside;
LABEL_23:
        *(_QWORD *)(a1 + 360) = v10;
        v10 = 0LL;
        *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 416) & 0xFFFFF7FF | ((a6 & 1 | 0x38) << 11);
        v25 = 0;
LABEL_24:
        v26 = 1;
        v9 = 1;
        goto LABEL_25;
      }
    }
    v25 = -1073741670;
    goto LABEL_24;
  }
  v25 = -1073741670;
  v9 = 1;
LABEL_52:
  v26 = 0;
LABEL_25:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
  }
  if ( v10 )
  {
    if ( v26 )
      MmUnlockPages(*((PMDL *)v10 + 4));
    v32 = (struct _MDL *)*((_QWORD *)v10 + 4);
    if ( v32 )
      IoFreeMdl(v32);
    if ( v9 )
      AlpcpUnregisterCompletionListDatabase(v10);
    ExFreePoolWithTag(v10, 0);
  }
  return v25;
}
