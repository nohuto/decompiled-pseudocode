/*
 * XREFs of MiZeroAndFlushPtes @ 0x14013CDC4
 * Callers:
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MmUnmapLockedPages @ 0x140110450 (MmUnmapLockedPages.c)
 *     MmUnmapIoSpace @ 0x14013D150 (MmUnmapIoSpace.c)
 *     MmMapMdl @ 0x140256AE0 (MmMapMdl.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x14003DF80 (MiGetLeafVa.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140088920 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiInsertLargeTbFlushEntry @ 0x1401373A0 (MiInsertLargeTbFlushEntry.c)
 *     MiDereferenceIoPages @ 0x140139794 (MiDereferenceIoPages.c)
 *     MiReplicatePteChange @ 0x14016B45C (MiReplicatePteChange.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r12
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  int v6; // r15d
  __int64 v7; // rcx
  unsigned int v8; // esi
  __int64 DemandZeroPte; // rbx
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // rdx
  unsigned __int64 v13; // rtt
  unsigned __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // r8
  BOOL v17; // r12d
  __int64 v18; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  BOOL IsPfnInline; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 *v24; // rsi
  __int64 v25; // r12
  unsigned __int64 v26; // r10
  unsigned __int64 LeafVa; // rax
  __int64 v28; // r11
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 *v31; // rbx
  unsigned __int64 v32; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v33; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v34; // [rsp+38h] [rbp-D0h]
  __int64 v35; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v37; // [rsp+50h] [rbp-B8h]
  __int64 v38; // [rsp+58h] [rbp-B0h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-A8h] BYREF
  int v40; // [rsp+78h] [rbp-90h] BYREF
  __int16 v41; // [rsp+7Ch] [rbp-8Ch]
  __int64 v42; // [rsp+80h] [rbp-88h]
  __int64 v43; // [rsp+88h] [rbp-80h]
  __int64 v44; // [rsp+90h] [rbp-78h]
  _QWORD v45[32]; // [rsp+138h] [rbp+30h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v32 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 1LL;
  v6 = MI_IS_PHYSICAL_ADDRESS(a1);
  if ( v6 > 0 )
  {
    v7 = (unsigned int)v6;
    do
    {
      v5 <<= 9;
      v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v7;
    }
    while ( v7 );
  }
  v33 = 0LL;
  v34 = 0LL;
  v8 = 0;
  v42 = 20LL;
  v40 = 0;
  v41 = 0;
  v43 = 0LL;
  v44 = 0LL;
  DemandZeroPte = MiMakeDemandZeroPte(24LL);
  while ( 2 )
  {
    v13 = a2;
    v12 = a2 % v5;
    a2 = v12;
    v38 = v12;
    v37 = v4 + 8 * (v13 / v5);
    if ( v4 >= v37 )
      goto LABEL_31;
    v36 = v5 << 12;
    do
    {
      v35 = MI_READ_PTE_LOCK_FREE(v4);
      v14 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v35) >> 12) & 0xFFFFFFFFFLL;
      v17 = MiPteInShadowRange(v4);
      if ( v6 == 3 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_1403CC4C0, &LockHandle);
        *(_QWORD *)v4 = ZeroPte;
        if ( v17 )
          MiWritePteShadow(v4, ZeroPte, v18);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v19 = v4;
        v34 = v4;
        if ( v33 )
          v19 = v33;
        v33 = v19;
LABEL_19:
        MiInsertLargeTbFlushEntry((__int64)&v40, v6, v4);
        goto LABEL_21;
      }
      if ( v6 < 1 )
      {
        v20 = ZeroPte;
        *(_QWORD *)v4 = ZeroPte;
        if ( !v17 )
          goto LABEL_18;
      }
      else
      {
        *(_QWORD *)v4 = DemandZeroPte;
        if ( !v17 )
          goto LABEL_18;
        v20 = DemandZeroPte;
      }
      MiWritePteShadow(v15, v20, v16);
LABEL_18:
      if ( v6 >= 1 )
        goto LABEL_19;
      MiInsertTbFlushEntry((__int64)&v40, v32, 1LL, v6);
LABEL_21:
      IsPfnInline = MiIsPfnInline(v14);
      v11 = 0;
      if ( !IsPfnInline )
      {
        if ( v8 && (v22 = v45[2 * v8 - 1], v22 == v14) )
        {
          v45[2 * v8 - 1] = v5 + v22;
        }
        else
        {
          v23 = 2LL * v8++;
          v45[v23] = v14;
          v45[v23 + 1] = v5 + v14;
          if ( v8 == 16 )
          {
            MiFlushTbList((__int64)&v40, v12, v10);
            v24 = v45;
            v25 = 16LL;
            do
            {
              MiDereferenceIoPages(1, *v24, v24[1] - *v24);
              v24 += 2;
              --v25;
            }
            while ( v25 );
            v11 = 0;
            v8 = 0;
          }
        }
      }
      v4 += 8LL;
      v2 = v36 + v32;
      v32 += v36;
    }
    while ( v4 < v37 );
    a2 = v38;
LABEL_31:
    if ( a2 )
    {
      v5 = 1LL;
      v6 = v11;
      v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      continue;
    }
    break;
  }
  if ( v33 )
  {
    MiGetLeafVa(v34);
    LeafVa = MiGetLeafVa(v26);
    MiReplicatePteChange(v28 + ((LeafVa >> 9) & 0x7FFFFFFFF8LL), v29);
  }
  MiFlushTbList((__int64)&v40, v12, v10);
  v30 = v8;
  if ( v8 )
  {
    v31 = v45;
    do
    {
      MiDereferenceIoPages(1, *v31, v31[1] - *v31);
      v31 += 2;
      --v30;
    }
    while ( v30 );
  }
}
