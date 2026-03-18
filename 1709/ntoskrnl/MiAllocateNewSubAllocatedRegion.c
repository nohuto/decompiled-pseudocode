/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x14056A41C
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x14050946C (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1640 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x1400A1880 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     ExGenRandom @ 0x1400C3144 (ExGenRandom.c)
 *     MiInsertPrivateVad @ 0x14010C710 (MiInsertPrivateVad.c)
 *     MiLocateVadEvent @ 0x14010C834 (MiLocateVadEvent.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     MiInsertVadCharges @ 0x1404D0090 (MiInsertVadCharges.c)
 *     MiSelectUserAddress @ 0x1404D0540 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1404D3274 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x14056A9D8 (MiCreateVadEventBitmap.c)
 *     MiAdvanceVadHint @ 0x14056D510 (MiAdvanceVadHint.c)
 *     MiFreeVadEventBitmap @ 0x1406E26F4 (MiFreeVadEventBitmap.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(int a1, unsigned __int64 a2)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // r15
  unsigned __int64 v12; // r13
  __int64 v13; // r10
  unsigned __int64 v14; // r12
  int VadEventBitmap; // r14d
  struct _KPROCESS *v16; // r15
  bool v17; // cf
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rbp
  __int64 **v21; // r14
  unsigned int v22; // eax
  _QWORD *v23; // r12
  _DWORD *v24; // rsi
  struct _KTHREAD *v25; // rbp
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  char v29; // al
  unsigned __int64 v30; // rax
  __int64 *v31; // rax
  char v32; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v33; // [rsp+50h] [rbp-98h]
  unsigned __int64 v34; // [rsp+50h] [rbp-98h]
  int v35; // [rsp+58h] [rbp-90h] BYREF
  __int64 v36; // [rsp+60h] [rbp-88h]
  unsigned __int64 Process; // [rsp+68h] [rbp-80h]
  unsigned __int64 v38; // [rsp+70h] [rbp-78h]
  unsigned __int64 v39; // [rsp+78h] [rbp-70h] BYREF
  __int64 **v40; // [rsp+80h] [rbp-68h]
  __int64 v41; // [rsp+88h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-58h]
  unsigned int v44; // [rsp+F8h] [rbp+10h]
  unsigned int v45; // [rsp+100h] [rbp+18h]
  int v46; // [rsp+108h] [rbp+20h]
  unsigned __int64 v47; // [rsp+108h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Process = (unsigned __int64)CurrentThread->ApcState.Process;
  v3 = *(_QWORD *)(Process + 1296) + 40LL;
  v38 = v3;
  if ( a1 == 3 )
  {
    v29 = *(_BYTE *)(v3 + 193) & 2;
    v36 = 0x100000LL;
    v44 = 0;
    v5 = 0x80000LL;
    v45 = 128;
    v46 = 0x100000;
    v4 = 0x80000LL;
    v6 = (-(__int64)(v29 != 0) & 0xFFFFFFFFFFC80000uLL) + 0x400000;
  }
  else
  {
    v36 = 4096LL;
    v4 = 16LL;
    v5 = 512LL;
    v44 = 0x80000000;
    v6 = 512LL;
    v45 = 64;
    v46 = 0;
  }
  v33 = v4;
  if ( a2 <= v4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x53646156u);
    v8 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      v9 = *(_DWORD *)(v8 + 48) & 0xFFFFFF27;
      *(_QWORD *)(v8 + 16) = -2LL;
      v10 = v9 | 0x8020;
      *(_QWORD *)(v8 + 40) = 0LL;
      *(_DWORD *)(v8 + 48) = v10;
      if ( a1 == 3 )
        *(_DWORD *)(v8 + 48) = v10 | 0x200000;
      v11 = v36;
      v12 = v33;
      v13 = 33LL;
      if ( a1 != 1 )
        v13 = 0LL;
      v40 = 0LL;
      if ( a1 == 2 )
        v13 = 32LL;
      v41 = v13;
      v14 = v36 * v5;
      while ( 1 )
      {
        v34 = v11 * v6;
        v32 = (unsigned __int8)*(_DWORD *)(v8 + 48) >> 3;
        v35 = 0;
        VadEventBitmap = MiSelectUserAddress(v46, v13, v11 * v6, v14, 0LL, v32, v44, &v35, &v39);
        if ( VadEventBitmap >= 0 )
        {
LABEL_13:
          v16 = (struct _KPROCESS *)Process;
          v17 = v5 < v12;
          v18 = v38;
          if ( v17 )
          {
            v24 = 0LL;
            goto LABEL_28;
          }
          if ( v6 <= v5 )
          {
            v19 = v34;
            goto LABEL_16;
          }
          v19 = v36 * v5;
          v30 = v34 - v36 * v5;
          if ( v14 >= v36 * v5 )
            v30 = v34;
          if ( v30 / v14 <= 1 )
LABEL_16:
            v20 = v39;
          else
            v20 = v14 * ((unsigned int)ExGenRandom(1) % (v30 / v14)) + v39;
          Process = v20 >> 12;
          *(_DWORD *)(v8 + 24) = v20 >> 12;
          *(_BYTE *)(v8 + 32) = v20 >> 44;
          v38 = (v19 + v20 - 1) >> 12;
          *(_DWORD *)(v8 + 28) = v38;
          v47 = v19 + v20 - 1;
          *(_BYTE *)(v8 + 33) = v47 >> 44;
          VadEventBitmap = MiCreateVadEventBitmap(v16, v8, v5, v45);
          if ( VadEventBitmap >= 0 )
          {
            v21 = MiLocateVadEvent(v8, v45) + 1;
            v40 = v21;
            v22 = ExGenRandom(1);
            v23 = v21 + 2;
            v21[4] = (__int64 *)v8;
            v21[2] = 0LL;
            *((_DWORD *)v21 + 12) = a1 & 3 ^ (4 * (v22 % v5));
            v21[3] = 0LL;
            *((_DWORD *)v21 + 10) = 0;
            *((_DWORD *)v21 + 11) = v5;
            if ( a1 == 3 )
            {
              v31 = v21[1];
              *((_DWORD *)v21 + 10) = 2;
              *v31 |= 1uLL;
              _bittestandset64(v21[1], v5 - 1);
              *((_DWORD *)v21 + 11) = v5 / 0x64;
            }
            v24 = MiAddSecureEntry(v8, v20, v47, -2147483647, 0);
            if ( v24 )
            {
              VadEventBitmap = MiInsertVadCharges(v8, v16);
              if ( VadEventBitmap >= 0 )
              {
                MiInsertPrivateVad(v8, 0LL, (__int64)v16);
                if ( v35 == 1 )
                  MiAdvanceVadHint(Process, v38, v44);
                v25 = CurrentThread;
                LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)v16);
                v26 = v18 + 16 * (a1 + 8LL);
                v27 = *(_QWORD *)v26;
                if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
                  __fastfail(3u);
                *v23 = v27;
                v23[1] = v26;
                *(_QWORD *)(v27 + 8) = v23;
                *(_QWORD *)v26 = v23;
                if ( (*(_DWORD *)(v8 + 48) & 0x200000) != 0 )
                  *(_BYTE *)(v18 + 193) |= 2u;
                UNLOCK_PAGE_TABLE_COMMITMENT((__int64)v25, (__int64)v16);
LABEL_28:
                if ( VadEventBitmap >= 0 )
                  return (unsigned int)VadEventBitmap;
              }
            }
            else
            {
              VadEventBitmap = -1073741670;
            }
            if ( v40 )
              MiFreeVadEventBitmap(v16, v8, v45);
            if ( v24 )
              ExFreePoolWithTag(v24, 0);
          }
          ExFreePoolWithTag((PVOID)v8, 0);
          return (unsigned int)VadEventBitmap;
        }
        if ( v6 <= v5 )
        {
          if ( v14 != 0x10000 )
          {
            v14 = 0x10000LL;
            goto LABEL_38;
          }
          v5 >>= 1;
        }
        v6 = v5;
LABEL_38:
        v13 = v41;
        if ( v5 < v12 )
          goto LABEL_13;
      }
    }
  }
  return 3221225495LL;
}
