/*
 * XREFs of MiCloneVads @ 0x1400018B8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14041DF70 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiFreeForkMaps @ 0x140001868 (MiFreeForkMaps.c)
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiUpdateForkMaps @ 0x140002950 (MiUpdateForkMaps.c)
 *     MiInitializeForkMaps @ 0x140003028 (MiInitializeForkMaps.c)
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     MiRelockWorkingSetExclusive @ 0x1400406A4 (MiRelockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     MiReturnFullProcessCharges @ 0x140062CC0 (MiReturnFullProcessCharges.c)
 *     MiWorkingSetIsContended @ 0x14007A1C0 (MiWorkingSetIsContended.c)
 *     RtlAvlInsertNodeEx @ 0x140098EF0 (RtlAvlInsertNodeEx.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14009AA70 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiVadMapsLargeImage @ 0x1400CE200 (MiVadMapsLargeImage.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400D8DB0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1400DB850 (PsReturnProcessNonPagedPoolQuota.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiBuildNewCloneDescriptor @ 0x14041E1EC (MiBuildNewCloneDescriptor.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiFreeCloneDescriptor @ 0x1406BF4BC (MiFreeCloneDescriptor.c)
 */

__int64 __fastcall MiCloneVads(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *v6; // r13
  __int64 v7; // r12
  __int64 v8; // rdi
  _QWORD *v9; // r15
  __int64 v10; // rdi
  int v11; // eax
  __int64 *PoolWithTag; // rax
  __int64 *v13; // rsi
  __int64 SharedVm; // rbx
  KIRQL v15; // al
  __int64 v16; // rdx
  __int64 *v17; // rbx
  __int64 v18; // r8
  _QWORD **v19; // rdi
  _QWORD *v20; // rdx
  char *v21; // r12
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // r10
  _QWORD *v26; // rcx
  unsigned __int64 v27; // rdi
  __int64 v28; // r10
  __int64 v29; // r10
  __int64 v30; // r11
  unsigned __int64 updated; // rdi
  unsigned __int64 v32; // r15
  __int64 v33; // rsi
  _QWORD *v34; // rbx
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // rbx
  unsigned __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r12
  __int64 *v42; // rcx
  _QWORD *v43; // rax
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // r15
  _QWORD **v46; // rdi
  unsigned __int64 v47; // r13
  __int64 *v48; // rax
  _QWORD *v49; // rdx
  _QWORD **v50; // rcx
  unsigned __int64 v51; // rax
  int v52; // edi
  unsigned __int64 v53; // rbx
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 VadEvent; // rax
  __int64 v58; // r9
  size_t v59; // r8
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  unsigned __int64 v62; // r15
  __int64 *v63; // rbx
  int v64; // [rsp+60h] [rbp-A0h]
  char v65; // [rsp+70h] [rbp-90h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-88h]
  _QWORD *v67; // [rsp+78h] [rbp-88h]
  unsigned __int64 v68; // [rsp+80h] [rbp-80h]
  __int64 v69; // [rsp+88h] [rbp-78h] BYREF
  __int64 Address; // [rsp+90h] [rbp-70h]
  __int64 v71; // [rsp+98h] [rbp-68h]
  unsigned __int64 v72; // [rsp+A0h] [rbp-60h]
  __int64 *v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v75; // [rsp+C0h] [rbp-40h]
  __int64 v76; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v77; // [rsp+D0h] [rbp-30h]
  __int64 *v78; // [rsp+D8h] [rbp-28h]
  _QWORD *v79; // [rsp+E0h] [rbp-20h]
  _BYTE v80[40]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v81; // [rsp+118h] [rbp+18h]
  __int64 v82; // [rsp+130h] [rbp+30h]
  int v83; // [rsp+140h] [rbp+40h] BYREF
  __int16 v84; // [rsp+144h] [rbp+44h]
  __int64 v85; // [rsp+148h] [rbp+48h]
  __int64 v86; // [rsp+150h] [rbp+50h]
  __int64 v87; // [rsp+158h] [rbp+58h]

  v76 = a4;
  v72 = 0LL;
  v68 = 0LL;
  v6 = a1;
  v69 = 0LL;
  v74 = 0LL;
  v7 = 0LL;
  v75 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Address = a3;
  v79 = a1;
  while ( 1 )
  {
    v8 = v6[115];
    if ( !v8 )
      v8 = 1LL;
    v71 = MiBuildNewCloneDescriptor(v6, v8, *(_QWORD *)(v6[162] + 240LL));
    v9 = (_QWORD *)v71;
    if ( !v71 )
      return 3221225626LL;
    v10 = 32 * v8 + 24;
    v11 = PsChargeProcessNonPagedPoolQuota(a2, v10);
    if ( v11 < 0 )
    {
      v52 = v11;
      goto LABEL_93;
    }
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x64436D4Du);
    v78 = PoolWithTag;
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      PsReturnProcessNonPagedPoolQuota(a2, v10);
      v52 = -1073741670;
LABEL_93:
      MiFreeCloneDescriptor(v6, v9);
      return (unsigned int)v52;
    }
    PoolWithTag[8] = v10;
    SharedVm = MiGetSharedVm(v6 + 160);
    v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v65 = v15;
    if ( v6[115] <= v9[5] )
    {
      *v13 = Address;
      v6[112] = CurrentThread;
      v17 = (__int64 *)v9[3];
      v73 = v17;
      if ( (unsigned int)MiInitializeForkMaps(a2, v80) )
      {
        v19 = (_QWORD **)(v6 + 114);
        LOBYTE(v18) = 0;
        v20 = (_QWORD *)v6[114];
        v21 = (char *)v17;
        if ( v20 )
        {
          while ( 1 )
          {
            if ( v9[3] > v20[4] || v9[4] >= v20[3] )
            {
              v55 = (_QWORD *)v20[1];
              if ( !v55 )
              {
                LOBYTE(v18) = 1;
                break;
              }
            }
            else
            {
              v55 = (_QWORD *)*v20;
              if ( !*v20 )
              {
                LOBYTE(v18) = 0;
                break;
              }
            }
            v20 = v55;
          }
        }
        RtlAvlInsertNodeEx(v6 + 114, v20, v18, v9);
        v22 = *(_QWORD **)(a2 + 1576);
        v84 = 0;
        v23 = 0LL;
        v86 = 0LL;
        v87 = 0LL;
        v85 = 20LL;
        v83 = 1;
        while ( v22 )
        {
          v23 = v22;
          v22 = (_QWORD *)*v22;
        }
        if ( v23 )
        {
          do
          {
            v24 = (_QWORD *)v23[1];
            v25 = v23;
            v26 = v23;
            if ( v24 )
            {
              do
              {
                v23 = v24;
                v67 = v24;
                v24 = (_QWORD *)*v24;
              }
              while ( v24 );
            }
            else
            {
              v23 = (_QWORD *)(v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
              v67 = v23;
              if ( v23 )
              {
                do
                {
                  if ( (_QWORD *)*v23 == v26 )
                    break;
                  v26 = v23;
                  v23 = (_QWORD *)(v23[2] & 0xFFFFFFFFFFFFFFFCuLL);
                }
                while ( v23 );
                v67 = v23;
              }
            }
            v27 = (*((unsigned int *)v25 + 6) | ((unsigned __int64)*((unsigned __int8 *)v25 + 32) << 32)) << 12;
            Address = MiLocateAddress(v27);
            if ( (unsigned int)MiVadMapsLargeImage(v28) != 1 && (*(_BYTE *)(v29 + 48) & 7) != 5 )
            {
              updated = v30 + ((v27 >> 9) & 0x7FFFFFFFF8LL);
              v32 = v30
                  + 8
                  * ((*(unsigned int *)(v29 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v29 + 33) << 32)) & 0xFFFFFFFFFLL);
              v33 = v29;
              v77 = v32;
              v34 = v6 + 160;
              do
              {
                MiFlushTbList(&v83);
                if ( (unsigned int)MiWorkingSetIsContended(v34) || KeShouldYieldProcessor() )
                {
                  LOBYTE(v35) = v65;
                  MiRelockWorkingSetExclusive(v34, v35);
                }
                updated = MiUpdateForkMaps((unsigned int)v80, updated, v32, (unsigned int)&v69, (__int64)v6, v65);
                if ( (*(_BYTE *)(v33 + 48) & 7) != 7 )
                {
                  if ( updated > v32 )
                    break;
                  v36 = v32;
                  if ( (updated & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v32 )
                    v36 = (updated & 0xFFFFFFFFFFFFF000uLL) + 4088;
                  v37 = v81 - updated;
                  v38 = v36;
                  do
                  {
                    LOBYTE(v64) = v65;
                    if ( (unsigned int)MiBuildForkPte(
                                         v6,
                                         a2,
                                         updated,
                                         v37 + updated,
                                         v76,
                                         v21,
                                         &v69,
                                         v82,
                                         &v83,
                                         Address,
                                         v33,
                                         a5,
                                         v64,
                                         &v74) )
                      v21 += 32;
                    updated += 8LL;
                  }
                  while ( updated <= v38 );
                  v32 = v77;
                  v34 = v6 + 160;
                }
              }
              while ( updated <= v32 );
              v23 = v67;
              if ( (*(_DWORD *)(v33 + 48) & 7) == 4 )
              {
                MiLocateVadEvent(v33, 4LL);
                VadEvent = MiLocateVadEvent(Address, v56);
                memmove(*(void **)(v58 + 16), *(const void **)(VadEvent + 16), v59);
              }
            }
          }
          while ( v23 );
          v13 = v78;
          v19 = (_QWORD **)(v6 + 114);
          v9 = (_QWORD *)v71;
        }
        MiFlushTbList(&v83);
        MiFreeForkMaps((__int64)v80);
        v41 = v21 - (char *)v73;
        v42 = (__int64 *)v9[7];
        *(_QWORD *)(a2 + 920) += v69;
        v7 = v41 >> 5;
        v69 = *(_QWORD *)(a2 + 920);
        if ( v7 )
        {
          *v42 = v7;
          v9[6] = v7;
          v9[5] = v7;
        }
        else
        {
          RtlAvlRemoveNode(v19, v9);
        }
        v43 = *v19;
        v44 = 0LL;
        while ( v43 )
        {
          v44 = (unsigned __int64)v43;
          v43 = (_QWORD *)*v43;
        }
        if ( v44 )
        {
          v45 = 0LL;
          v46 = (_QWORD **)(a2 + 912);
          v47 = v72;
          while ( 1 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v44 + 56) + 8LL));
            v48 = (__int64 *)*v13;
            LOBYTE(v40) = 0;
            v45 += v13[8];
            v47 += *(_QWORD *)(v44 + 64);
            *(_OWORD *)v13 = *(_OWORD *)v44;
            v73 = v48;
            *((_OWORD *)v13 + 1) = *(_OWORD *)(v44 + 16);
            *((_OWORD *)v13 + 2) = *(_OWORD *)(v44 + 32);
            *((_OWORD *)v13 + 3) = *(_OWORD *)(v44 + 48);
            *((_OWORD *)v13 + 4) = *(_OWORD *)(v44 + 64);
            v49 = *v46;
            if ( !*v46 )
              goto LABEL_44;
            while ( (unsigned __int64)v13[3] <= v49[4] && (unsigned __int64)v13[4] < v49[3] )
            {
              v60 = (_QWORD *)*v49;
              if ( !*v49 )
              {
                LOBYTE(v40) = 0;
                goto LABEL_44;
              }
LABEL_81:
              v49 = v60;
            }
            v60 = (_QWORD *)v49[1];
            if ( v60 )
              goto LABEL_81;
            LOBYTE(v40) = 1;
LABEL_44:
            RtlAvlInsertNodeEx(a2 + 912, v49, v40, v13);
            v50 = *(_QWORD ***)(v44 + 8);
            v51 = v44;
            v13 = v73;
            if ( v50 )
            {
              v61 = *v50;
              v44 = *(_QWORD *)(v44 + 8);
              while ( v61 )
              {
                v44 = (unsigned __int64)v61;
                v61 = (_QWORD *)*v61;
              }
            }
            else
            {
              while ( 1 )
              {
                v44 = *(_QWORD *)(v44 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !v44 || *(_QWORD *)v44 == v51 )
                  break;
                v51 = v44;
              }
            }
            if ( !v44 )
            {
              v72 = v47;
              v6 = v79;
              v68 = v45;
              v9 = (_QWORD *)v71;
              break;
            }
          }
        }
        v52 = 0;
      }
      else
      {
        MiFreeForkMaps((__int64)v80);
        v52 = -1073741670;
      }
      LOBYTE(v39) = v65;
      v6[112] = 0LL;
      MiUnlockWorkingSetExclusive(v6 + 160, v39);
      if ( v13 )
      {
        v62 = v68;
        do
        {
          v62 += v13[8];
          v63 = (__int64 *)*v13;
          ExFreePoolWithTag(v13, 0);
          v13 = v63;
        }
        while ( v63 );
        v68 = v62;
        v9 = (_QWORD *)v71;
      }
      if ( v68 > v72 )
        PsReturnProcessNonPagedPoolQuota(a2, v68 - v72);
      if ( v74 )
        MiReturnFullProcessCommitment(a2);
      v53 = v75;
      if ( v75 )
      {
        MiReturnFullProcessCharges(a2, v75);
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a2 + 1452)) + 6280LL),
          v53);
      }
      if ( v7 && v52 >= 0 )
        return (unsigned int)v52;
      goto LABEL_93;
    }
    LOBYTE(v16) = v15;
    MiUnlockWorkingSetExclusive(v6 + 160, v16);
    MiFreeCloneDescriptor(v6, v9);
    PsReturnProcessNonPagedPoolQuota(a2, v10);
    ExFreePoolWithTag(v13, 0);
  }
}
