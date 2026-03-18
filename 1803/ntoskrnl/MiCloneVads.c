/*
 * XREFs of MiCloneVads @ 0x140140C44
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1405BF2F8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     PsChargeProcessNonPagedPoolQuota @ 0x14000AD00 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlAvlRemoveNode @ 0x14002A570 (RtlAvlRemoveNode.c)
 *     MiLocateAddress @ 0x140033EE0 (MiLocateAddress.c)
 *     MiReturnFullProcessCharges @ 0x14003E5A0 (MiReturnFullProcessCharges.c)
 *     MiWorkingSetIsContended @ 0x14004EA30 (MiWorkingSetIsContended.c)
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     KeShouldYieldProcessor @ 0x1400A9D70 (KeShouldYieldProcessor.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400E6200 (MiUnlockWorkingSetExclusive.c)
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400F0EE0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiFreeForkMaps @ 0x140140BF4 (MiFreeForkMaps.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140141F94 (MiUpdateForkMaps.c)
 *     MiInsertClone @ 0x1401426E0 (MiInsertClone.c)
 *     MiInitializeForkMaps @ 0x140142764 (MiInitializeForkMaps.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x1405BF59C (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x1407563A0 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *a1, struct _KPROCESS *a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  _QWORD *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rdi
  _QWORD *v10; // r15
  __int64 v11; // rdi
  int v12; // eax
  _QWORD *PoolWithTag; // rax
  _QWORD *v14; // rsi
  LONG *SharedVm; // rbx
  KIRQL v16; // al
  __int64 v17; // rbx
  __int64 v18; // r12
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  struct _KTHREAD *v21; // rax
  struct _KTHREAD *v22; // rbx
  struct _KTHREAD *Flink; // rax
  __int64 v24; // r15
  struct _KTHREAD *v25; // rcx
  unsigned __int64 v26; // rdi
  unsigned __int64 Address; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r10
  unsigned __int64 v31; // rdi
  unsigned __int64 v32; // rbx
  unsigned __int64 updated; // rax
  int StackLimit; // ecx
  unsigned __int64 v35; // rcx
  bool v36; // cc
  __int64 v37; // rbx
  __int64 v38; // r15
  unsigned __int64 v39; // rsi
  __int64 v40; // r12
  __int64 *v41; // rcx
  _QWORD *v42; // rax
  unsigned __int64 i; // rdi
  unsigned __int64 v44; // r15
  unsigned __int64 v45; // r14
  _QWORD *v46; // rbx
  _QWORD **v47; // rax
  unsigned __int64 v48; // rcx
  int v49; // edi
  __int64 v50; // r8
  struct _KTHREAD *v52; // rcx
  struct _KTHREAD *v53; // rax
  LONG *v54; // rax
  int v55; // esi
  int v56; // edx
  __int64 **VadEvent; // rax
  __int64 v58; // r9
  size_t v59; // r8
  _QWORD *v60; // rcx
  unsigned __int64 v61; // r15
  _QWORD *v62; // rbx
  int v63; // [rsp+60h] [rbp-A0h]
  KIRQL v64; // [rsp+80h] [rbp-80h]
  int v65; // [rsp+84h] [rbp-7Ch] BYREF
  int v66; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v67; // [rsp+90h] [rbp-70h]
  PEX_SPIN_LOCK SpinLock; // [rsp+98h] [rbp-68h]
  struct _KTHREAD *v69; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v70; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  __int64 v72; // [rsp+B8h] [rbp-48h]
  int v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v75; // [rsp+D0h] [rbp-30h]
  __int64 v76; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h]
  struct _KTHREAD *v79; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v80; // [rsp+F8h] [rbp-8h]
  _QWORD *v81; // [rsp+100h] [rbp+0h]
  __int64 v82; // [rsp+108h] [rbp+8h]
  _QWORD *v83; // [rsp+110h] [rbp+10h]
  _DWORD *v84; // [rsp+118h] [rbp+18h]
  _BYTE v85[40]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v86; // [rsp+148h] [rbp+48h]
  __int64 v87; // [rsp+160h] [rbp+60h]
  int v88; // [rsp+170h] [rbp+70h] BYREF
  __int16 v89; // [rsp+174h] [rbp+74h]
  __int64 v90; // [rsp+178h] [rbp+78h]
  __int64 v91; // [rsp+180h] [rbp+80h]
  __int64 v92; // [rsp+188h] [rbp+88h]

  v84 = a6;
  v7 = a1;
  v78 = a4;
  v66 = 0;
  v75 = 0LL;
  v67 = 0LL;
  v70 = 0LL;
  v76 = 0LL;
  v8 = 0LL;
  v77 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v72 = a3;
  v83 = a1;
  while ( 1 )
  {
    v9 = v7[115];
    if ( !v9 )
      v9 = 1LL;
    v74 = MiBuildNewCloneDescriptor(v7, v9, *(_QWORD *)(v7[162] + 328LL));
    v10 = (_QWORD *)v74;
    if ( !v74 )
      return 3221225626LL;
    v11 = 32 * (v9 + 1);
    v12 = PsChargeProcessNonPagedPoolQuota((__int64)a2, v11);
    if ( v12 < 0 )
    {
      v49 = v12;
      goto LABEL_91;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x64436D4Du);
    v81 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      PsReturnProcessNonPagedPoolQuota(a2, v11);
      v49 = -1073741670;
LABEL_91:
      MiFreeCloneDescriptor(v7, v74);
      return (unsigned int)v49;
    }
    PoolWithTag[8] = v11;
    SharedVm = MiGetSharedVm((__int64)(v7 + 160));
    v16 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v64 = v16;
    if ( v7[115] <= v10[5] )
    {
      *v14 = v72;
      v7[112] = CurrentThread;
      v17 = v10[3];
      v82 = v17;
      if ( (unsigned int)MiInitializeForkMaps(a2, v85) )
      {
        v18 = v17;
        v10[6] = 1LL;
        MiInsertClone(v7, v10, 1LL);
        v21 = (struct _KTHREAD *)a2[2].Affinity.Bitmap[4];
        v88 = 1;
        v22 = 0LL;
        v90 = 20LL;
        v89 = 0;
        v91 = 0LL;
        v92 = 0LL;
        while ( v21 )
        {
          v22 = v21;
          v21 = *(struct _KTHREAD **)&v21->Header.Lock;
        }
        if ( v22 )
        {
          do
          {
            Flink = (struct _KTHREAD *)v22->Header.WaitListHead.Flink;
            v24 = (__int64)v22;
            v79 = v22;
            v25 = v22;
            CurrentThread = v22;
            if ( Flink )
            {
              v52 = *(struct _KTHREAD **)&Flink->Header.Lock;
              v22 = Flink;
              v69 = Flink;
              if ( v52 )
              {
                do
                {
                  v53 = *(struct _KTHREAD **)&v52->Header.Lock;
                  v22 = v52;
                  v69 = v52;
                  v52 = v53;
                }
                while ( v53 );
              }
            }
            else
            {
              v22 = (struct _KTHREAD *)((unsigned __int64)v22->Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFFCuLL);
              v69 = v22;
              if ( v22 )
              {
                do
                {
                  if ( *(struct _KTHREAD **)&v22->Header.Lock == v25 )
                    break;
                  v25 = v22;
                  v22 = (struct _KTHREAD *)((unsigned __int64)v22->Header.WaitListHead.Blink & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v22 );
                v69 = v22;
              }
            }
            v26 = (*(unsigned int *)(v24 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 32) << 32)) << 12;
            Address = MiLocateAddress(v26);
            v28 = *(unsigned int *)(v24 + 52);
            LODWORD(v28) = v28 & 0x7FFFFFFF;
            v29 = (unsigned __int64)*(unsigned __int8 *)(v24 + 34) << 31;
            v72 = Address;
            v19 = v28 | v29;
            if ( v19 < 0x7FFFFFFFDLL && !MiVadMapsLargeImage(v24) && (*(_BYTE *)(v24 + 48) & 7) != 5 )
            {
              v31 = v30 + ((v26 >> 9) & 0x7FFFFFFFF8LL);
              v32 = v30
                  + 8
                  * ((*(unsigned int *)(v24 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v24 + 33) << 32)) & 0xFFFFFFFFFLL);
              v80 = v32;
              do
              {
                MiFlushTbList((__int64)&v88, v19, v20);
                if ( (unsigned int)MiWorkingSetIsContended((__int64)(v7 + 160)) || KeShouldYieldProcessor() )
                {
                  v54 = MiGetSharedVm((__int64)(v7 + 160));
                  SpinLock = v54;
                  v73 = *v54 & 0x40000000;
                  if ( v73 )
                    v54[1] = 1;
                  MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v64);
                  v55 = 0;
                  if ( v73 )
                  {
                    v65 = 0;
                    while ( *((_DWORD *)SpinLock + 1) )
                    {
                      KeYieldProcessorEx(&v65);
                      if ( (v65 & 0x3F) == 0 )
                      {
                        v55 = 1;
                        break;
                      }
                    }
                  }
                  ExAcquireSpinLockExclusive(SpinLock);
                  if ( !v55 )
                    *((_DWORD *)SpinLock + 1) = 0;
                }
                updated = MiUpdateForkMaps((unsigned int)v85, v31, v32, (unsigned int)&v70, (__int64)v7, v64);
                StackLimit = *(_DWORD *)(v24 + 48);
                v31 = updated;
                if ( (*(_BYTE *)(v24 + 48) & 7) != 7 )
                {
                  if ( updated > v32 )
                    break;
                  v35 = v32;
                  v36 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v32;
                  v37 = v87;
                  if ( v36 )
                    v35 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  v38 = v86 - updated;
                  v39 = v35;
                  do
                  {
                    LOBYTE(v63) = v64;
                    if ( (unsigned int)MiBuildForkPte(
                                         v7,
                                         a2,
                                         v31,
                                         v38 + v31,
                                         v78,
                                         v18,
                                         &v70,
                                         v37,
                                         &v88,
                                         v72,
                                         CurrentThread,
                                         a5,
                                         v63,
                                         &v76,
                                         &v66) )
                      v18 += 32LL;
                    v31 += 8LL;
                  }
                  while ( v31 <= v39 );
                  v32 = v80;
                  v24 = (__int64)v79;
                  StackLimit = (int)v79->StackLimit;
                }
              }
              while ( v31 <= v32 );
              v22 = v69;
              v19 = 4LL;
              if ( (StackLimit & 7) == 4 )
              {
                MiLocateVadEvent(v24, 4);
                VadEvent = MiLocateVadEvent(v72, v56);
                memmove(*(void **)(v58 + 16), VadEvent[2], v59);
              }
            }
          }
          while ( v22 );
          v14 = v81;
          v10 = (_QWORD *)v74;
        }
        MiFlushTbList((__int64)&v88, v19, v20);
        MiFreeForkMaps((__int64)v85);
        v40 = v18 - v82;
        v41 = (__int64 *)v10[7];
        a2[1].Affinity.Bitmap[13] += v70;
        v8 = v40 >> 5;
        v70 = a2[1].Affinity.Bitmap[13];
        if ( v8 )
        {
          *v41 = v8;
          v10[6] = v8;
          v10[5] = v8;
        }
        else
        {
          RtlAvlRemoveNode(v7 + 114, (__int64)v10);
        }
        v42 = (_QWORD *)v7[114];
        i = 0LL;
        while ( v42 )
        {
          i = (unsigned __int64)v42;
          v42 = (_QWORD *)*v42;
        }
        if ( i )
        {
          v44 = v67;
          v45 = v75;
          do
          {
            if ( *(_QWORD *)(i + 48) )
            {
              _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(i + 56) + 8LL));
              v46 = (_QWORD *)*v14;
              v44 += v14[8];
              v45 += *(_QWORD *)(i + 64);
              *(_OWORD *)v14 = *(_OWORD *)i;
              *((_OWORD *)v14 + 1) = *(_OWORD *)(i + 16);
              *((_OWORD *)v14 + 2) = *(_OWORD *)(i + 32);
              *((_OWORD *)v14 + 3) = *(_OWORD *)(i + 48);
              *((_OWORD *)v14 + 4) = *(_OWORD *)(i + 64);
              *((_OWORD *)v14 + 5) = *(_OWORD *)(i + 80);
              *((_OWORD *)v14 + 6) = *(_OWORD *)(i + 96);
              MiInsertClone(a2, v14, 0LL);
              v14 = v46;
            }
            v47 = *(_QWORD ***)(i + 8);
            v48 = i;
            if ( v47 )
            {
              v60 = *v47;
              for ( i = *(_QWORD *)(i + 8); v60; v60 = (_QWORD *)*v60 )
                i = (unsigned __int64)v60;
            }
            else
            {
              while ( 1 )
              {
                i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !i || *(_QWORD *)i == v48 )
                  break;
                v48 = i;
              }
            }
          }
          while ( i );
          v75 = v45;
          v7 = v83;
          v67 = v44;
          v10 = (_QWORD *)v74;
        }
        v49 = 0;
      }
      else
      {
        MiFreeForkMaps((__int64)v85);
        v49 = -1073741670;
      }
      v7[112] = 0LL;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v64);
      if ( v14 )
      {
        v61 = v67;
        do
        {
          v61 += v14[8];
          v62 = (_QWORD *)*v14;
          ExFreePoolWithTag(v14, 0);
          v14 = v62;
        }
        while ( v62 );
        v67 = v61;
        v10 = (_QWORD *)v74;
      }
      if ( v67 > v75 )
        PsReturnProcessNonPagedPoolQuota(a2, v67 - v75);
      if ( v76 )
        MiReturnFullProcessCommitment(a2, v76, v50);
      if ( v77 )
        MiReturnFullProcessCharges((__int64)a2, v77);
      if ( !v8 || v49 < 0 )
        MiFreeCloneDescriptor(v7, v10);
      if ( v66 == 1 )
        *v84 = 1;
      return (unsigned int)v49;
    }
    MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v16);
    MiFreeCloneDescriptor(v7, v10);
    PsReturnProcessNonPagedPoolQuota(a2, v11);
    ExFreePoolWithTag(v14, 0);
  }
}
