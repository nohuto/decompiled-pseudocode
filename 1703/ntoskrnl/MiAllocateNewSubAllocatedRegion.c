/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x1404C85E0
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1405160A8 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     ExGenRandom @ 0x14004F864 (ExGenRandom.c)
 *     MiInsertPrivateVad @ 0x140099410 (MiInsertPrivateVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14009A7F0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14009A810 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLocateVadEvent @ 0x1400CE790 (MiLocateVadEvent.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiAdvanceVadHint @ 0x1404345F0 (MiAdvanceVadHint.c)
 *     MiCreateVadEventBitmap @ 0x1404C8910 (MiCreateVadEventBitmap.c)
 *     MiSelectUserAddress @ 0x1405126A0 (MiSelectUserAddress.c)
 *     MiAddSecureEntry @ 0x1405127E0 (MiAddSecureEntry.c)
 *     MiInsertVadCharges @ 0x1405136C0 (MiInsertVadCharges.c)
 *     MiFreeVadEventBitmap @ 0x1406B6404 (MiFreeVadEventBitmap.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(int a1, unsigned __int64 a2)
{
  __int64 v3; // r13
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r14
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // r15
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  unsigned __int64 v14; // r12
  int v15; // eax
  int VadEventBitmap; // ebp
  __int64 v17; // r15
  bool v18; // cf
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r14
  __int64 **v22; // rbp
  unsigned int v23; // eax
  _QWORD *v24; // r12
  void *v25; // rsi
  struct _KTHREAD *v26; // r14
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  bool v30; // zf
  unsigned __int64 v31; // rax
  __int64 *v32; // rax
  __int64 v33; // [rsp+40h] [rbp-98h]
  unsigned __int64 v34; // [rsp+40h] [rbp-98h]
  int v35; // [rsp+48h] [rbp-90h] BYREF
  __int64 v36; // [rsp+50h] [rbp-88h]
  _KPROCESS *Process; // [rsp+58h] [rbp-80h]
  unsigned __int64 v38; // [rsp+60h] [rbp-78h]
  unsigned __int64 v39; // [rsp+68h] [rbp-70h] BYREF
  __int64 **v40; // [rsp+70h] [rbp-68h]
  __int64 v41; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-58h]
  unsigned int v44; // [rsp+E8h] [rbp+10h]
  unsigned int v45; // [rsp+F0h] [rbp+18h]
  int v46; // [rsp+F8h] [rbp+20h]
  int v47; // [rsp+F8h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v3 = *(_QWORD *)&Process[1].IdealGlobalNode + 40LL;
  v38 = v3;
  if ( a1 == 3 )
  {
    v30 = (*(_BYTE *)(v3 + 193) & 2) == 0;
    v4 = 0x80000LL;
    v44 = 0;
    v5 = 0x80000LL;
    v36 = 0x100000LL;
    v33 = 0x80000LL;
    v6 = 0x80000LL;
    v45 = 128;
    v46 = 0x100000;
    if ( v30 )
      v6 = 0x400000LL;
  }
  else
  {
    v44 = 0x80000000;
    v36 = 4096LL;
    v4 = 512LL;
    v5 = 16LL;
    v45 = 64;
    v33 = 16LL;
    v6 = 512LL;
    v46 = 0;
  }
  if ( a2 <= v5 )
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
      v14 = v36 * v4;
      while ( 1 )
      {
        v15 = (unsigned __int8)*(_DWORD *)(v8 + 48) >> 3;
        v34 = v11 * v6;
        v35 = 0;
        VadEventBitmap = MiSelectUserAddress(v46, v13, (int)v11 * (int)v6, v14, v15, v44, (__int64)&v35, (__int64)&v39);
        if ( VadEventBitmap >= 0 )
        {
LABEL_13:
          v17 = (__int64)Process;
          v18 = v4 < v12;
          v19 = v38;
          if ( v18 )
          {
            v25 = 0LL;
            goto LABEL_28;
          }
          if ( v6 <= v4 )
          {
            v20 = v34;
            goto LABEL_16;
          }
          v20 = v36 * v4;
          v31 = v34 - v36 * v4;
          if ( v14 >= v36 * v4 )
            v31 = v34;
          if ( v31 / v14 <= 1 )
LABEL_16:
            v21 = v39;
          else
            v21 = v14 * ((unsigned int)ExGenRandom(1) % (v31 / v14)) + v39;
          Process = (_KPROCESS *)(v21 >> 12);
          *(_DWORD *)(v8 + 24) = v21 >> 12;
          *(_BYTE *)(v8 + 32) = v21 >> 44;
          v38 = (v21 + v20 - 1) >> 12;
          *(_DWORD *)(v8 + 28) = v38;
          v47 = v21 + v20 - 1;
          *(_BYTE *)(v8 + 33) = (v21 + v20 - 1) >> 44;
          VadEventBitmap = MiCreateVadEventBitmap(v17, v8, v4, v45);
          if ( VadEventBitmap >= 0 )
          {
            v22 = MiLocateVadEvent(v8, v45) + 1;
            v40 = v22;
            v23 = ExGenRandom(1);
            v24 = v22 + 2;
            v22[4] = (__int64 *)v8;
            v22[2] = 0LL;
            *((_DWORD *)v22 + 12) = a1 & 3 ^ (4 * (v23 % v4));
            v22[3] = 0LL;
            *((_DWORD *)v22 + 10) = 0;
            *((_DWORD *)v22 + 11) = v4;
            if ( a1 == 3 )
            {
              v32 = v22[1];
              *((_DWORD *)v22 + 10) = 2;
              *v32 |= 1uLL;
              _bittestandset64(v22[1], v4 - 1);
              *((_DWORD *)v22 + 11) = v4 / 0x64;
            }
            v25 = (void *)MiAddSecureEntry(v8, v21, v47, -2147483647, 0);
            if ( v25 )
            {
              VadEventBitmap = MiInsertVadCharges(v8, v17);
              if ( VadEventBitmap >= 0 )
              {
                MiInsertPrivateVad(v8, 0LL, v17);
                if ( v35 == 1 )
                  MiAdvanceVadHint((unsigned __int64)Process, v38, v44);
                v26 = CurrentThread;
                LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, v17);
                v27 = v19 + 16 * (a1 + 8LL);
                v28 = *(_QWORD *)v27;
                if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
                  __fastfail(3u);
                *v24 = v28;
                v24[1] = v27;
                *(_QWORD *)(v28 + 8) = v24;
                *(_QWORD *)v27 = v24;
                if ( (*(_DWORD *)(v8 + 48) & 0x200000) != 0 )
                  *(_BYTE *)(v19 + 193) |= 2u;
                UNLOCK_PAGE_TABLE_COMMITMENT((__int64)v26, v17);
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
              MiFreeVadEventBitmap(v17, v8, v45);
            if ( v25 )
              ExFreePoolWithTag(v25, 0);
          }
          ExFreePoolWithTag((PVOID)v8, 0);
          return (unsigned int)VadEventBitmap;
        }
        if ( v6 <= v4 )
        {
          if ( v14 != 0x10000 )
          {
            v14 = 0x10000LL;
            goto LABEL_39;
          }
          v4 >>= 1;
        }
        v6 = v4;
LABEL_39:
        LODWORD(v13) = v41;
        if ( v4 < v12 )
          goto LABEL_13;
      }
    }
  }
  return 3221225495LL;
}
