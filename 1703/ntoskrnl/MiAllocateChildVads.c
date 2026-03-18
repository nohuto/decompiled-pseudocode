/*
 * XREFs of MiAllocateChildVads @ 0x14041E31C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUpControlAreaRefs @ 0x14000308C (MiUpControlAreaRefs.c)
 *     MiCloneReserveVadCommit @ 0x140003268 (MiCloneReserveVadCommit.c)
 *     MiIncludeSharedCommit @ 0x140099540 (MiIncludeSharedCommit.c)
 *     MiGetWsAndInsertVad @ 0x14009A420 (MiGetWsAndInsertVad.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiGetProtoPteAddress @ 0x1400BD630 (MiGetProtoPteAddress.c)
 *     MiVadMapsLargeImage @ 0x1400CE200 (MiVadMapsLargeImage.c)
 *     MiVadPureReserve @ 0x1400D2C90 (MiVadPureReserve.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     MiDecrementLargeSubsections @ 0x1402184D4 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x140218D2C (MiIncrementLargeSubsections.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiCloneNoChange @ 0x14041E6C8 (MiCloneNoChange.c)
 *     MiCreateVadEventBitmap @ 0x1404C8910 (MiCreateVadEventBitmap.c)
 *     MiInsertSharedCommitNode @ 0x140512070 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiCreatePerSessionProtos @ 0x1406BDE0C (MiCreatePerSessionProtos.c)
 *     MiCreateLargePageVad @ 0x1406BE7A4 (MiCreateLargePageVad.c)
 *     MiDeletePartialCloneVad @ 0x1406BF360 (MiDeletePartialCloneVad.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  _QWORD *v2; // r15
  _QWORD *v4; // rsi
  _QWORD *i; // rax
  _QWORD *v6; // rax
  __int64 v7; // rbp
  _QWORD *v8; // rcx
  int v9; // r9d
  ULONG v10; // eax
  int v11; // r12d
  SIZE_T v12; // rdx
  _OWORD *PoolWithTag; // rax
  __int64 v14; // rbx
  bool v15; // zf
  unsigned int v16; // r14d
  int VadEventBitmap; // edi
  int v18; // edx
  __int64 v19; // r8
  int v20; // eax
  int v21; // ecx
  _DWORD *v23; // r15
  __int64 *v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  volatile LONG **v27; // r14
  volatile LONG **v28; // r15
  unsigned __int64 v29; // rcx
  unsigned int SessionId; // eax
  int PerSessionProtos; // eax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v33; // rcx
  __int64 v34; // rax
  volatile LONG **v35; // [rsp+20h] [rbp-88h] BYREF
  volatile LONG **v36; // [rsp+28h] [rbp-80h] BYREF
  _QWORD *v37; // [rsp+30h] [rbp-78h]
  $5BC46E0569261879018906DEC3127961 v38; // [rsp+38h] [rbp-70h] BYREF

  v2 = a2;
  v37 = a2;
  v4 = 0LL;
  for ( i = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[4]; i; i = (_QWORD *)*i )
    v4 = i;
  if ( !v4 )
    return 0LL;
  while ( 1 )
  {
    v6 = (_QWORD *)v4[1];
    v7 = (__int64)v4;
    v8 = v4;
    if ( v6 )
    {
      do
      {
        v4 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
    }
    else
    {
      while ( 1 )
      {
        v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)*v4 == v8 )
          break;
        v8 = v4;
      }
    }
    v9 = *(_DWORD *)(v7 + 48);
    if ( ((1 << (*(_BYTE *)(v7 + 48) & 7)) & 0xB5) != 0
      && ((v9 & 0x8000) != 0 || (*(_DWORD *)(v7 + 64) & 0x4000000) != 0) )
    {
      break;
    }
LABEL_37:
    if ( !v4 )
      return 0LL;
  }
  v10 = 1818517846;
  v11 = 0;
  v12 = (-(__int64)((*(_DWORD *)(v7 + 48) & 0x8000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
  if ( (*(_DWORD *)(v7 + 48) & 7) == 2 && (v9 & 0x10000) != 0 )
  {
    v11 = 1;
    v26 = *(unsigned int *)(***(_QWORD ***)(v7 + 72) + 8LL);
    v12 = 8 * ((v26 >> 6) + ((v26 & 0x3F) != 0)) + 160;
    v10 = 1231315286;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, v10);
  v14 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v15 = (*(_DWORD *)(v7 + 48) & 0x8000) == 0;
  *PoolWithTag = *(_OWORD *)v7;
  PoolWithTag[1] = *(_OWORD *)(v7 + 16);
  PoolWithTag[2] = *(_OWORD *)(v7 + 32);
  PoolWithTag[3] = *(_OWORD *)(v7 + 48);
  if ( v15 )
  {
    PoolWithTag[4] = *(_OWORD *)(v7 + 64);
    PoolWithTag[5] = *(_OWORD *)(v7 + 80);
    PoolWithTag[6] = *(_OWORD *)(v7 + 96);
    PoolWithTag[7] = *(_OWORD *)(v7 + 112);
    *((_QWORD *)PoolWithTag + 16) = *(_QWORD *)(v7 + 128);
    *((_QWORD *)PoolWithTag + 14) = BugCheckParameter1 | 1;
  }
  else
  {
    *((_DWORD *)PoolWithTag + 12) &= ~0x4000u;
  }
  *((_QWORD *)PoolWithTag + 7) = 0LL;
  v16 = 0;
  *((_DWORD *)PoolWithTag + 9) = 0;
  VadEventBitmap = 0;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  *((_QWORD *)PoolWithTag + 2) = -2LL;
  if ( (*(_DWORD *)(v7 + 48) & 7) == 4 )
  {
    VadEventBitmap = MiCreateVadEventBitmap(
                       BugCheckParameter1,
                       PoolWithTag,
                       (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
                     - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
                     + 1,
                       4LL);
    if ( VadEventBitmap >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(BugCheckParameter1 + 772), 0x8000u);
      VadEventBitmap = 0;
    }
    v16 = VadEventBitmap >= 0;
  }
  else if ( MiVadMapsLargeImage(v7) || v18 == 5 )
  {
    VadEventBitmap = MiCreateLargePageVad(BugCheckParameter1, v14);
    if ( VadEventBitmap >= 0 )
    {
      ++*v2;
      v16 = 2;
    }
  }
  else
  {
    if ( v18 == 7 && *(_QWORD *)(**(_QWORD **)(v7 + 72) + 64LL) != v19 )
    {
      MiGetProtoPteAddress(
        v7,
        *(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32),
        v19,
        &v35);
      MiGetProtoPteAddress(
        v7,
        *(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32),
        0,
        &v36);
      v27 = v35;
      v28 = 0LL;
      while ( (unsigned int)MiIncrementLargeSubsections(v27, *((unsigned int *)v27 + 11)) != -1 )
      {
        if ( v27 == v36 )
        {
          v16 = 64;
          goto LABEL_20;
        }
        v28 = v27;
        v27 = (volatile LONG **)v27[2];
      }
      if ( v28 )
        MiDecrementLargeSubsections(v35, v28);
      return (unsigned int)-1073741670;
    }
    if ( v18 == 2 )
    {
      v23 = **(_DWORD ***)(v7 + 72);
      if ( v11 == 1 )
      {
        v29 = *(unsigned int *)(*(_QWORD *)v23 + 8LL);
        LOBYTE(v19) = (v29 & 0x3F) != 0;
        memmove((void *)(v14 + 136), (const void *)(v7 + 136), 8 * ((v29 >> 6) + v19) + 24);
        *(_QWORD *)(v14 + 152) = v14 + 160;
      }
      VadEventBitmap = MiInsertSharedCommitNode(**(_QWORD **)(v7 + 72), BugCheckParameter1, 0LL);
      if ( VadEventBitmap < 0 )
      {
LABEL_81:
        ExFreePoolWithTag((PVOID)v14, 0);
        return (unsigned int)VadEventBitmap;
      }
      if ( v11 == 1 )
        ++*(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 1296) + 248LL);
      v16 = 16;
      if ( (v23[14] & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((struct _KPROCESS *)BugCheckParameter1);
        PerSessionProtos = MiCreatePerSessionProtos(v23, SessionId);
        VadEventBitmap = PerSessionProtos;
        if ( PerSessionProtos >= 0 )
          v16 = 20;
      }
    }
  }
LABEL_20:
  if ( (*(_DWORD *)(v7 + 48) & 0x8000) == 0 )
  {
    v20 = *(_DWORD *)(v7 + 48) & 7;
    if ( v20 != 2 )
    {
      if ( *(__int64 *)(v7 + 120) < 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2, 0LL);
        v33 = *(_QWORD *)(***(_QWORD ***)(v14 + 72) + 32LL);
        ++*(_DWORD *)(v33 + 8);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&BugCheckParameter2);
        KeAbPostRelease((ULONG_PTR)&BugCheckParameter2);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      else if ( v20 != 1 )
      {
        v24 = *(__int64 **)(v7 + 72);
        if ( v24 )
        {
          if ( MiIncludeSharedCommit(*v24) )
          {
            VadEventBitmap = MiInsertSharedCommitNode(v25, BugCheckParameter1, 0LL);
            if ( VadEventBitmap < 0 )
              goto LABEL_81;
            v16 |= 0x10u;
          }
        }
      }
    }
  }
  if ( VadEventBitmap >= 0 )
  {
    if ( (*(_DWORD *)(v7 + 48) & 0x8000) == 0 && *(_QWORD *)(v7 + 128) )
    {
      v16 |= 8u;
      ObfReferenceObject(*(PVOID *)(v14 + 128));
    }
    if ( (unsigned int)MiVadPureReserve(v14) )
    {
      *(_QWORD *)(v14 + 16) = 1LL;
      VadEventBitmap = MiCloneReserveVadCommit(v14, BugCheckParameter1);
      *(_QWORD *)(v14 + 16) = -2LL;
    }
    if ( VadEventBitmap >= 0 && (*(_DWORD *)(v7 + 48) & 0x4000) != 0 )
      VadEventBitmap = MiCloneNoChange(v7, v14);
  }
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v38);
  if ( VadEventBitmap >= 0 )
  {
    VadEventBitmap = MiInsertVadCharges(v14, BugCheckParameter1);
    if ( VadEventBitmap >= 0 )
    {
      v21 = *(_DWORD *)(v14 + 48);
      if ( (v21 & 0x100000) != 0 )
      {
        v34 = *(_QWORD *)(BugCheckParameter1 + 1296);
        if ( (v21 & 0x8000) != 0 )
          ++*(_QWORD *)(v34 + 256);
        else
          ++*(_QWORD *)(v34 + 264);
      }
      if ( (*(_DWORD *)(v14 + 48) & 0x8000) == 0 )
        MiUpControlAreaRefs(v14);
      *(_QWORD *)(v14 + 16) = -2LL;
      MiGetWsAndInsertVad(v14);
      KiUnstackDetachProcess(&v38, 0LL);
      v2 = v37;
      goto LABEL_37;
    }
  }
  MiDeletePartialCloneVad(v14, v16);
  KiUnstackDetachProcess(&v38, 0LL);
  return (unsigned int)VadEventBitmap;
}
