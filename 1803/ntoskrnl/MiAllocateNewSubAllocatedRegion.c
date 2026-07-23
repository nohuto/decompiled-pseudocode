/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x1405BA858
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x140592B34 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE70 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14000AE94 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     ExGenRandom @ 0x1400692A0 (ExGenRandom.c)
 *     MiInsertPrivateVad @ 0x1400E4BE4 (MiInsertPrivateVad.c)
 *     MiUnlockVad @ 0x1400E6930 (MiUnlockVad.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     MiLockVad @ 0x1401175F0 (MiLockVad.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404AEFA0 (MiInsertVadCharges.c)
 *     MiAddSecureEntry @ 0x140593490 (MiAddSecureEntry.c)
 *     MiSelectUserAddress @ 0x1405935C0 (MiSelectUserAddress.c)
 *     MiAdvanceVadHint @ 0x140594F50 (MiAdvanceVadHint.c)
 *     MiGetUserReservationHighestAddress @ 0x1405BA540 (MiGetUserReservationHighestAddress.c)
 *     MiCreateVadEventBitmap @ 0x1405BABD8 (MiCreateVadEventBitmap.c)
 *     MiFreeVadEventBitmap @ 0x14074D260 (MiFreeVadEventBitmap.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(int a1, unsigned __int64 a2)
{
  __int64 Process; // r15
  __int64 v5; // r13
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  PVOID PoolWithTag; // rax
  __int64 v11; // rbx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  unsigned __int64 UserReservationHighestAddress; // r8
  unsigned __int64 v17; // r12
  int VadEventBitmap; // r14d
  struct _KPROCESS *v19; // r15
  bool v20; // cf
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rbp
  __int64 **v24; // r14
  unsigned int v25; // eax
  _QWORD *v26; // r12
  _DWORD *v27; // rsi
  struct _KTHREAD *v28; // rbp
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 *v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v34; // rax
  __int64 *v35; // rax
  unsigned __int64 v36; // [rsp+50h] [rbp-98h]
  unsigned __int64 v37; // [rsp+50h] [rbp-98h]
  __int64 v38; // [rsp+58h] [rbp-90h]
  unsigned __int64 v39; // [rsp+60h] [rbp-88h]
  unsigned __int64 v40; // [rsp+60h] [rbp-88h]
  unsigned __int64 v41; // [rsp+68h] [rbp-80h] BYREF
  _RTL_BITMAP *v42; // [rsp+70h] [rbp-78h] BYREF
  __int64 **v43; // [rsp+78h] [rbp-70h]
  unsigned __int64 v44; // [rsp+80h] [rbp-68h]
  struct _KPROCESS *v45; // [rsp+88h] [rbp-60h]
  __int64 v46; // [rsp+90h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-50h]
  unsigned int v49; // [rsp+F8h] [rbp+10h]
  unsigned int v50; // [rsp+100h] [rbp+18h]
  unsigned __int64 v51; // [rsp+100h] [rbp+18h]
  int v52; // [rsp+108h] [rbp+20h]
  unsigned __int64 v53; // [rsp+108h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v45 = (struct _KPROCESS *)Process;
  v5 = *(_QWORD *)(Process + 1296) + 48LL;
  v46 = v5;
  if ( a1 == 3 )
  {
    v6 = 0x100000LL;
    v50 = 0;
    v49 = 128;
    v7 = 0x80000LL;
    v52 = 0x100000;
    v8 = 0x80000LL;
    v9 = (-(__int64)((*(_BYTE *)(v5 + 273) & 2) != 0) & 0xFFFFFFFFFFC80000uLL) + 0x400000;
  }
  else
  {
    v6 = 4096LL;
    v50 = 0x80000000;
    v7 = 512LL;
    v49 = 64;
    v8 = 16LL;
    v52 = 0;
    v9 = 512LL;
  }
  v36 = v8;
  v38 = v6;
  if ( a2 <= v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
    v11 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      v12 = *(_DWORD *)(v11 + 48) & 0xFFFFFF27;
      *(_QWORD *)(v11 + 16) = -2LL;
      v13 = v12 | 0x4020;
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_DWORD *)(v11 + 48) = v13;
      if ( a1 == 3 )
        *(_DWORD *)(v11 + 48) = v13 | 0x40000;
      v14 = 33LL;
      if ( a1 != 1 )
        v14 = 0LL;
      if ( a1 == 2 )
        v14 = 32LL;
      v15 = v36;
      UserReservationHighestAddress = MiGetUserReservationHighestAddress(Process, v14);
      v17 = v38 * v7;
      v44 = UserReservationHighestAddress;
      v43 = 0LL;
      while ( 1 )
      {
        v42 = 0LL;
        v39 = v38 * v9;
        v37 = v38 * v9;
        VadEventBitmap = MiSelectUserAddress(
                           v52,
                           0LL,
                           UserReservationHighestAddress,
                           v38 * v9,
                           v17,
                           0LL,
                           (*(_DWORD *)(v11 + 48) >> 3) & 0x1F,
                           v50,
                           &v42,
                           (__int64)&v41);
        if ( VadEventBitmap >= 0 )
        {
LABEL_13:
          v19 = v45;
          v20 = v7 < v15;
          v21 = v46;
          if ( v20 )
          {
            v27 = 0LL;
            goto LABEL_28;
          }
          if ( v9 <= v7 )
          {
            v22 = v37;
            goto LABEL_16;
          }
          v22 = v38 * v7;
          v34 = v37 - v38 * v7;
          if ( v17 >= v38 * v7 )
            v34 = v39;
          if ( v34 / v17 <= 1 )
LABEL_16:
            v23 = v41;
          else
            v23 = v17 * ((unsigned int)ExGenRandom(1) % (v34 / v17)) + v41;
          v40 = v23 >> 12;
          *(_DWORD *)(v11 + 24) = v23 >> 12;
          *(_BYTE *)(v11 + 32) = v23 >> 44;
          v53 = (v22 + v23 - 1) >> 12;
          *(_DWORD *)(v11 + 28) = v53;
          v51 = v22 + v23 - 1;
          *(_BYTE *)(v11 + 33) = v51 >> 44;
          VadEventBitmap = MiCreateVadEventBitmap(v19, v11, v7, v49);
          if ( VadEventBitmap >= 0 )
          {
            v24 = MiLocateVadEvent(v11, v49) + 1;
            v43 = v24;
            v25 = ExGenRandom(1);
            v26 = v24 + 2;
            v24[4] = (__int64 *)v11;
            v24[2] = 0LL;
            *((_DWORD *)v24 + 12) = a1 & 3 ^ (4 * (v25 % v7));
            v24[3] = 0LL;
            *((_DWORD *)v24 + 10) = 0;
            *((_DWORD *)v24 + 11) = v7;
            if ( a1 == 3 )
            {
              v35 = v24[1];
              *((_DWORD *)v24 + 10) = 2;
              *v35 |= 1uLL;
              _bittestandset64(v24[1], v7 - 1);
              *((_DWORD *)v24 + 11) = v7 / 0x64;
            }
            v27 = MiAddSecureEntry(v11, v23, v51, -2147483647, 0);
            if ( v27 )
            {
              VadEventBitmap = MiInsertVadCharges(v11, v19);
              if ( VadEventBitmap >= 0 )
              {
                v28 = CurrentThread;
                MiLockVad((__int64)CurrentThread, v11);
                MiInsertPrivateVad(v11, 0LL, (__int64)v19);
                MiUnlockVad((__int64)v28, v11, v29, v30);
                if ( v42 )
                  MiAdvanceVadHint(v40, v53, v42);
                LOCK_PAGE_TABLE_COMMITMENT((__int64)v28, (__int64)v19);
                v31 = (__int64 *)(v21 + 16 * (a1 + 13LL));
                v32 = *v31;
                if ( *(__int64 **)(*v31 + 8) != v31 )
                  __fastfail(3u);
                *v26 = v32;
                v26[1] = v31;
                *(_QWORD *)(v32 + 8) = v26;
                *v31 = (__int64)v26;
                if ( (*(_DWORD *)(v11 + 48) & 0x40000) != 0 )
                  *(_BYTE *)(v21 + 273) |= 2u;
                UNLOCK_PAGE_TABLE_COMMITMENT((__int64)v28, (__int64)v19);
LABEL_28:
                if ( VadEventBitmap >= 0 )
                  return (unsigned int)VadEventBitmap;
              }
            }
            else
            {
              VadEventBitmap = -1073741670;
            }
            if ( v43 )
              MiFreeVadEventBitmap(v19, v11, v49);
            if ( v27 )
              ExFreePoolWithTag(v27, 0);
          }
          ExFreePoolWithTag((PVOID)v11, 0);
          return (unsigned int)VadEventBitmap;
        }
        if ( v9 <= v7 )
        {
          if ( v17 != 0x10000 )
          {
            v17 = 0x10000LL;
            goto LABEL_38;
          }
          v7 >>= 1;
        }
        v9 = v7;
LABEL_38:
        UserReservationHighestAddress = v44;
        if ( v7 < v15 )
          goto LABEL_13;
      }
    }
  }
  return 3221225495LL;
}
