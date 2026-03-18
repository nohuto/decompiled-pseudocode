/*
 * XREFs of MiRebuildLargeZeroPage @ 0x14006FC10
 * Callers:
 *     <none>
 * Callees:
 *     MiProcessLargeCoalesceList @ 0x14006FDBC (MiProcessLargeCoalesceList.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

__int64 __fastcall MiRebuildLargeZeroPage(__int64 a1)
{
  volatile LONG *v1; // rbp
  unsigned int v3; // ebx
  KIRQL v4; // r14
  __int64 v5; // rsi
  unsigned int v6; // eax
  _WORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int128 *v11; // rax
  __int64 v12; // rdx
  _OWORD *v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _BYTE v22[528]; // [rsp+20h] [rbp-238h] BYREF

  v1 = (volatile LONG *)(a1 + 6116);
  v3 = 1;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 6116));
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = a1 + 520LL * v3;
      if ( !*(_WORD *)(v5 + 5042) )
        break;
      v11 = (__int128 *)(v5 + 5040);
      v12 = 4LL;
      v13 = v22;
      do
      {
        v14 = *v11;
        v15 = v11[1];
        v11 += 8;
        *v13 = v14;
        v16 = *(v11 - 6);
        v13[1] = v15;
        v17 = *(v11 - 5);
        v13[2] = v16;
        v18 = *(v11 - 4);
        v13[3] = v17;
        v19 = *(v11 - 3);
        v13[4] = v18;
        v20 = *(v11 - 2);
        v13[5] = v19;
        v21 = *(v11 - 1);
        v13[6] = v20;
        v13 += 8;
        *(v13 - 1) = v21;
        --v12;
      }
      while ( v12 );
      *(_QWORD *)v13 = *(_QWORD *)v11;
      memset((void *)(v5 + 5048), 0, 0x200uLL);
      *(_WORD *)(v5 + 5042) = 0;
      ExReleaseSpinLockExclusiveFromDpcLevel(v1);
      __writecr8(v4);
      MiProcessLargeCoalesceList(a1, v5 + 5040, v22, v3 + 1);
      ExAcquireSpinLockExclusive(v1);
    }
    if ( !v3 )
      break;
LABEL_13:
    --v3;
  }
  v6 = 0;
  v7 = (_WORD *)(a1 + 5042);
  do
  {
    if ( *v7 )
      break;
    ++v6;
    v7 += 260;
  }
  while ( v6 < 2 );
  if ( v6 != 2 )
  {
    v3 = 2;
    goto LABEL_13;
  }
  *(_BYTE *)(a1 + 6112) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel(v1);
  __writecr8(v4);
  return PsDereferencePartition(*(_QWORD *)(a1 + 168), v8, v9);
}
