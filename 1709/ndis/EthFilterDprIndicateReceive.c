/*
 * XREFs of EthFilterDprIndicateReceive @ 0x1C0062F20
 * Callers:
 *     <none>
 * Callees:
 *     NdisReleaseRWLock @ 0x1C000F620 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockRead @ 0x1C0017B40 (NdisAcquireRWLockRead.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ethFindMulticast @ 0x1C0063FAC (ethFindMulticast.c)
 *     ethFilterReceivePacketStats @ 0x1C0064160 (ethFilterReceivePacketStats.c)
 */

void __fastcall EthFilterDprIndicateReceive(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        unsigned int a8)
{
  unsigned int Number; // r13d
  __int64 *v12; // rbx
  __int64 v13; // rax
  int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rdx
  int v20; // esi
  __int64 v21; // rdi
  int v22; // eax
  __int64 v23; // rbp
  int v24; // ebp
  __int64 v25; // r8
  _QWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned int v34; // ebx
  int v35; // eax
  __int64 v36; // r14
  struct _LOCK_STATE_EX LockState; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-44h]

  Number = KeGetPcr()->Prcb.Number;
  v38 = Number;
  v12 = a1;
  if ( a1 && (*(_DWORD *)(a1[37] + 120) & 0x20000000) != 0 )
  {
    NdisAcquireRWLockRead((PNDIS_RW_LOCK_EX)a1[36], &LockState, 0);
    v13 = v12[41];
    if ( v13 && *(_BYTE *)(*(_QWORD *)(v13 + 24) + 56LL) < 6u )
    {
      if ( a5 >= 0xE && a8 || (v12[38] & 0xA0) != 0 )
      {
        ethFilterReceivePacketStats(v12[37], a3, a8);
        v15 = v12[41];
        if ( v15 )
        {
          *(_BYTE *)((Number << 12) + *(_QWORD *)(v15 + 816)) = 1;
          (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, int))(v15 + 128))(
            *(_QWORD *)(v15 + 32),
            a2,
            a4,
            a5,
            a6,
            a7,
            v14);
        }
      }
      goto LABEL_55;
    }
    if ( a5 >= 0xE && a8 )
    {
      if ( (*(_BYTE *)a3 & 1) == 0 )
      {
        v16 = *(_QWORD *)(v12[37] + 3160);
        if ( v16 )
        {
          v17 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v17 + v16 + 32);
        }
        v18 = *(_QWORD *)(v12[37] + 3160);
        if ( v18 )
        {
          v19 = (_QWORD *)(v18 + 112LL * KeGetPcr()->Prcb.Number);
          v19[1] += a8;
          *v19 += a8;
        }
        v20 = 0;
        if ( (v12[38] & 0xA4) != 0
          && (*(_DWORD *)((char *)v12 + 338) != *(_DWORD *)(a3 + 2) || *((_WORD *)v12 + 168) != *(_WORD *)a3) )
        {
          v20 = 1;
        }
        v21 = *v12;
        if ( !*v12 )
          goto LABEL_55;
        do
        {
          v22 = *(_DWORD *)(v21 + 432);
          v23 = *(_QWORD *)(v21 + 424);
          if ( (v22 & 0xA0) != 0 || !v20 && (v22 & 1) != 0 )
          {
            (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, unsigned int))(v21 + 128))(
              *(_QWORD *)(v21 + 32),
              a2,
              a4,
              a5,
              a6,
              a7,
              a8);
            *(_BYTE *)((Number << 12) + *(_QWORD *)(v21 + 816)) = 1;
          }
          v21 = v23;
        }
        while ( v23 );
        goto LABEL_54;
      }
      if ( *(_BYTE *)a3 == 0xFF
        && *(_BYTE *)(a3 + 1) == 0xFF
        && *(_BYTE *)(a3 + 2) == 0xFF
        && *(_BYTE *)(a3 + 3) == 0xFF
        && *(_BYTE *)(a3 + 4) == 0xFF
        && *(_BYTE *)(a3 + 5) == 0xFF )
      {
        v24 = 8;
        v25 = *(_QWORD *)(v12[37] + 3160);
        if ( v25 )
        {
          v26 = (_QWORD *)(v25 + 112LL * KeGetPcr()->Prcb.Number);
          v26[2] += a8;
          *v26 += a8;
        }
        v27 = *(_QWORD *)(v12[37] + 3160);
        if ( v27 )
        {
          v28 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v28 + v27 + 48);
        }
      }
      else
      {
        v24 = 2;
        v29 = *(_QWORD *)(v12[37] + 3160);
        if ( v29 )
        {
          v30 = (_QWORD *)(v29 + 112LL * KeGetPcr()->Prcb.Number);
          v30[3] += a8;
          *v30 += a8;
        }
        v31 = *(_QWORD *)(v12[37] + 3160);
        if ( v31 )
        {
          v32 = 112LL * KeGetPcr()->Prcb.Number;
          ++*(_QWORD *)(v32 + v31 + 40);
        }
      }
    }
    else
    {
      v24 = 32;
    }
    v33 = *v12;
    if ( !*v12 )
    {
LABEL_55:
      NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v12[36], &LockState);
      return;
    }
    v34 = v38;
    do
    {
      v35 = *(_DWORD *)(v33 + 432);
      v36 = *(_QWORD *)(v33 + 424);
      if ( (v35 & 0xA0) != 0
        || v24 == 8 && (v35 & 8) != 0
        || v24 == 2
        && ((v35 & 4) != 0
         || (v35 & 2) != 0
         && (unsigned __int8)ethFindMulticast(*(unsigned int *)(v33 + 456), *(_QWORD *)(v33 + 448), 0LL, a3)) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, int, unsigned int))(v33 + 128))(
          *(_QWORD *)(v33 + 32),
          a2,
          a4,
          a5,
          a6,
          a7,
          a8);
        *(_BYTE *)((v34 << 12) + *(_QWORD *)(v33 + 816)) = 1;
      }
      v33 = v36;
    }
    while ( v36 );
LABEL_54:
    v12 = a1;
    goto LABEL_55;
  }
}
