/*
 * XREFs of MiCloneVads @ 0x1400E6F20
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14057A87C (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140015000 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnFullProcessCharges @ 0x1400365E0 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400379D0 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     MiRelockWorkingSetExclusive @ 0x1400661C0 (MiRelockWorkingSetExclusive.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x1400A18B0 (PsChargeProcessNonPagedPoolQuota.c)
 *     RtlAvlInsertNodeEx @ 0x1400A2A10 (RtlAvlInsertNodeEx.c)
 *     MiUpdateForkMaps @ 0x1400CC280 (MiUpdateForkMaps.c)
 *     MiFreeForkMaps @ 0x1400D0710 (MiFreeForkMaps.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiLocateAddress @ 0x1400E9700 (MiLocateAddress.c)
 *     MiWorkingSetIsContended @ 0x1400EBDF0 (MiWorkingSetIsContended.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 *     MiInitializeForkMaps @ 0x1401321C4 (MiInitializeForkMaps.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 *     MiBuildNewCloneDescriptor @ 0x14057AB18 (MiBuildNewCloneDescriptor.c)
 *     MiFreeCloneDescriptor @ 0x140594950 (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *a1, struct _KPROCESS *a2, __int64 a3, __int64 a4, int a5, _DWORD *a6)
{
  struct _KPROCESS *v6; // r15
  _QWORD *v7; // r13
  __int64 v8; // r12
  __int64 v9; // rdi
  _QWORD *v10; // r14
  __int64 v11; // rdi
  int v12; // eax
  __int64 *PoolWithTag; // rax
  __int64 *v14; // rsi
  LONG *SharedVm; // rbx
  KIRQL v16; // al
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 *v22; // rdi
  bool v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // r12
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _KPROCESS *v28; // rdx
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // r10
  _QWORD *v32; // rcx
  unsigned __int64 v33; // rdi
  __int64 v34; // r10
  __int64 v35; // r10
  __int64 v36; // r11
  ULONG_PTR updated; // rdi
  unsigned __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rbx
  unsigned __int64 v41; // rcx
  ULONG_PTR v42; // rbx
  ULONG_PTR v43; // r14
  __int64 v44; // rdx
  __int64 v45; // r8
  unsigned __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r12
  __int64 *v49; // rcx
  _QWORD *v50; // rax
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // r13
  unsigned __int64 *v53; // r14
  unsigned __int64 v54; // r15
  bool v55; // r8
  __int64 *v56; // rdi
  _QWORD *v57; // rdx
  _QWORD **v58; // rcx
  unsigned __int64 v59; // rax
  int v60; // edi
  unsigned __int64 v61; // r14
  __int64 *v62; // rbx
  __int64 v64; // rdx
  __int64 VadEvent; // rax
  __int64 v66; // r9
  size_t v67; // r8
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  int v70; // [rsp+60h] [rbp-A0h]
  unsigned __int8 v71; // [rsp+80h] [rbp-80h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-78h]
  _QWORD *v73; // [rsp+88h] [rbp-78h]
  int v74; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v75; // [rsp+98h] [rbp-68h]
  unsigned __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 Address; // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-48h]
  __int64 v80; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v81; // [rsp+D0h] [rbp-30h]
  __int64 v82; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v83; // [rsp+E0h] [rbp-20h]
  __int64 *v84; // [rsp+E8h] [rbp-18h]
  __int64 v85; // [rsp+F0h] [rbp-10h]
  struct _KPROCESS *v86; // [rsp+F8h] [rbp-8h]
  _QWORD *v87; // [rsp+100h] [rbp+0h]
  _DWORD *v88; // [rsp+108h] [rbp+8h]
  _QWORD v89[10]; // [rsp+110h] [rbp+10h] BYREF
  int v90; // [rsp+160h] [rbp+60h] BYREF
  __int16 v91; // [rsp+164h] [rbp+64h]
  __int64 v92; // [rsp+168h] [rbp+68h]
  __int64 v93; // [rsp+170h] [rbp+70h]
  __int64 v94; // [rsp+178h] [rbp+78h]

  v6 = a2;
  v88 = a6;
  v7 = a1;
  v82 = a4;
  v74 = 0;
  v79 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v80 = 0LL;
  v8 = 0LL;
  v81 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Address = a3;
  v86 = a2;
  v87 = a1;
  while ( 1 )
  {
    v9 = v7[115];
    if ( !v9 )
      v9 = 1LL;
    v78 = MiBuildNewCloneDescriptor(v7, v9, *(_QWORD *)(v7[162] + 240LL));
    v10 = (_QWORD *)v78;
    if ( !v78 )
      return 3221225626LL;
    v11 = 32 * (v9 + 1);
    v12 = PsChargeProcessNonPagedPoolQuota((__int64)v6, v11);
    if ( v12 < 0 )
    {
      v60 = v12;
      goto LABEL_96;
    }
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    v84 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
    {
      PsReturnProcessNonPagedPoolQuota(v6, v11);
      v60 = -1073741670;
LABEL_96:
      MiFreeCloneDescriptor(v7, v78);
      return (unsigned int)v60;
    }
    PoolWithTag[8] = v11;
    SharedVm = MiGetSharedVm((__int64)(v7 + 160));
    v16 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v71 = v16;
    if ( v7[115] <= v10[5] )
    {
      *v14 = Address;
      v7[112] = CurrentThread;
      v18 = v10[3];
      v85 = v18;
      if ( (unsigned int)MiInitializeForkMaps(v6, v89) )
      {
        v22 = v7 + 114;
        v23 = 0;
        v24 = (_QWORD *)v7[114];
        v25 = v18;
        if ( v24 )
        {
          while ( 1 )
          {
            if ( v10[3] > v24[4] || v10[4] >= v24[3] )
            {
              v26 = (_QWORD *)v24[1];
              if ( !v26 )
              {
                v23 = 1;
                break;
              }
            }
            else
            {
              v26 = (_QWORD *)*v24;
              if ( !*v24 )
              {
                v23 = 0;
                break;
              }
            }
            v24 = v26;
          }
        }
        RtlAvlInsertNodeEx(v7 + 114, (unsigned __int64)v24, v23, (unsigned __int64)v10);
        v27 = (_QWORD *)v6[2].Affinity.Bitmap[4];
        v28 = 0LL;
        v91 = 0;
        v29 = 0LL;
        v93 = 0LL;
        v94 = 0LL;
        v92 = 20LL;
        v90 = 1;
        while ( v27 )
        {
          v29 = v27;
          v27 = (_QWORD *)*v27;
        }
        if ( v29 )
        {
          do
          {
            v30 = (_QWORD *)v29[1];
            v31 = v29;
            v32 = v29;
            if ( v30 )
            {
              do
              {
                v29 = v30;
                v73 = v30;
                v30 = (_QWORD *)*v30;
              }
              while ( v30 );
            }
            else
            {
              v29 = (_QWORD *)(v29[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v73 = v29;
              if ( v29 )
              {
                do
                {
                  if ( (_QWORD *)*v29 == v32 )
                    break;
                  v32 = v29;
                  v29 = (_QWORD *)(v29[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v29 );
                v73 = v29;
              }
            }
            v33 = (*((unsigned int *)v31 + 6) | ((unsigned __int64)*((unsigned __int8 *)v31 + 32) << 32)) << 12;
            Address = MiLocateAddress(v33);
            if ( !MiVadMapsLargeImage(v34) && (*(_BYTE *)(v35 + 48) & 7) != 5 )
            {
              updated = v36 + ((v33 >> 9) & 0x7FFFFFFFF8LL);
              v38 = v36
                  + 8
                  * ((*(unsigned int *)(v35 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v35 + 33) << 32)) & 0xFFFFFFFFFLL);
              v39 = v35;
              v83 = v38;
              v40 = (__int64)(v7 + 160);
              do
              {
                MiFlushTbList((__int64)&v90, v28);
                if ( (unsigned int)MiWorkingSetIsContended(v40) || KeShouldYieldProcessor() )
                  MiRelockWorkingSetExclusive(v40, v71);
                updated = MiUpdateForkMaps(v89, updated, v38, &v76, (__int64)v7, v71);
                if ( (*(_BYTE *)(v39 + 48) & 7) != 7 )
                {
                  if ( updated > v38 )
                    break;
                  v41 = v38;
                  if ( (updated & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v38 )
                    v41 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  v42 = v89[5] - updated;
                  v43 = v41;
                  do
                  {
                    LOBYTE(v70) = v71;
                    if ( (unsigned int)MiBuildForkPte(
                                         v7,
                                         v6,
                                         updated,
                                         v42 + updated,
                                         v82,
                                         v25,
                                         &v76,
                                         v89[8],
                                         &v90,
                                         Address,
                                         v39,
                                         a5,
                                         v70,
                                         &v80,
                                         &v74) )
                      v25 += 32LL;
                    updated += 8LL;
                  }
                  while ( updated <= v43 );
                  v38 = v83;
                  v40 = (__int64)(v7 + 160);
                }
              }
              while ( updated <= v38 );
              v29 = v73;
              if ( (*(_DWORD *)(v39 + 48) & 7) == 4 )
              {
                MiLocateVadEvent(v39, 4LL);
                VadEvent = MiLocateVadEvent(Address, v64);
                memmove(*(void **)(v66 + 16), *(const void **)(VadEvent + 16), v67);
              }
            }
          }
          while ( v29 );
          v14 = v84;
          v22 = v7 + 114;
          v10 = (_QWORD *)v78;
        }
        MiFlushTbList((__int64)&v90, v28);
        MiFreeForkMaps((__int64)v89, v44, v45, v46);
        v48 = v25 - v85;
        v49 = (__int64 *)v10[7];
        v6[1].Affinity.Bitmap[13] += v76;
        v8 = v48 >> 5;
        v76 = v6[1].Affinity.Bitmap[13];
        if ( v8 )
        {
          *v49 = v8;
          v10[6] = v8;
          v10[5] = v8;
        }
        else
        {
          RtlAvlRemoveNode(v22, (__int64)v10);
        }
        v50 = (_QWORD *)*v22;
        v51 = 0LL;
        while ( v50 )
        {
          v51 = (unsigned __int64)v50;
          v50 = (_QWORD *)*v50;
        }
        if ( v51 )
        {
          v52 = v75;
          v53 = &v6[1].Affinity.Bitmap[12];
          v54 = v79;
          while ( 1 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v51 + 56) + 8LL));
            v52 += v14[8];
            v55 = 0;
            v54 += *(_QWORD *)(v51 + 64);
            v56 = (__int64 *)*v14;
            *(_OWORD *)v14 = *(_OWORD *)v51;
            *((_OWORD *)v14 + 1) = *(_OWORD *)(v51 + 16);
            *((_OWORD *)v14 + 2) = *(_OWORD *)(v51 + 32);
            *((_OWORD *)v14 + 3) = *(_OWORD *)(v51 + 48);
            *((_OWORD *)v14 + 4) = *(_OWORD *)(v51 + 64);
            v57 = (_QWORD *)*v53;
            if ( !*v53 )
              goto LABEL_55;
            while ( (unsigned __int64)v14[3] <= v57[4] && (unsigned __int64)v14[4] < v57[3] )
            {
              v68 = (_QWORD *)*v57;
              if ( !*v57 )
              {
                v55 = 0;
                goto LABEL_55;
              }
LABEL_87:
              v57 = v68;
            }
            v68 = (_QWORD *)v57[1];
            if ( v68 )
              goto LABEL_87;
            v55 = 1;
LABEL_55:
            RtlAvlInsertNodeEx(v53, (unsigned __int64)v57, v55, (unsigned __int64)v14);
            v58 = *(_QWORD ***)(v51 + 8);
            v14 = v56;
            v59 = v51;
            if ( v58 )
            {
              v69 = *v58;
              v51 = *(_QWORD *)(v51 + 8);
              while ( v69 )
              {
                v51 = (unsigned __int64)v69;
                v69 = (_QWORD *)*v69;
              }
            }
            else
            {
              while ( 1 )
              {
                v51 = *(_QWORD *)(v51 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v51 || *(_QWORD *)v51 == v59 )
                  break;
                v59 = v51;
              }
            }
            if ( !v51 )
            {
              v10 = (_QWORD *)v78;
              v79 = v54;
              v6 = v86;
              v75 = v52;
              v7 = v87;
              break;
            }
          }
        }
        v60 = 0;
      }
      else
      {
        MiFreeForkMaps((__int64)v89, v19, v20, v21);
        v60 = -1073741670;
      }
      LOBYTE(v47) = v71;
      v7[112] = 0LL;
      MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v47);
      if ( v14 )
      {
        v61 = v75;
        do
        {
          v61 += v14[8];
          v62 = (__int64 *)*v14;
          ExFreePoolWithTag(v14, 0);
          v14 = v62;
        }
        while ( v62 );
        v75 = v61;
        v10 = (_QWORD *)v78;
      }
      if ( v75 > v79 )
        PsReturnProcessNonPagedPoolQuota(v6, v75 - v79);
      if ( v80 )
        MiReturnFullProcessCommitment(v6, v80);
      if ( v81 )
        MiReturnFullProcessCharges((__int64)v6, v81);
      if ( !v8 || v60 < 0 )
        MiFreeCloneDescriptor(v7, v10);
      if ( v74 == 1 )
        *v88 = 1;
      return (unsigned int)v60;
    }
    LOBYTE(v17) = v16;
    MiUnlockWorkingSetExclusive((__int64)(v7 + 160), v17);
    MiFreeCloneDescriptor(v7, v10);
    PsReturnProcessNonPagedPoolQuota(v6, v11);
    ExFreePoolWithTag(v14, 0);
  }
}
