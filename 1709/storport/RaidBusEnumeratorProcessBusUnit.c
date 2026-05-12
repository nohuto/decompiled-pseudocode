/*
 * XREFs of RaidBusEnumeratorProcessBusUnit @ 0x1C0015D70
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C001452C (RaidBusEnumeratorVisitUnit.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorDeleteScsiIdentity @ 0x1C0015E8C (StorDeleteScsiIdentity.c)
 *     StorCompareScsiIdentity @ 0x1C0016834 (StorCompareScsiIdentity.c)
 *     memmove @ 0x1C001F340 (memmove.c)
 */

_OWORD *__fastcall RaidBusEnumeratorProcessBusUnit(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  _OWORD *result; // rax
  __int64 *v6; // r15
  __int64 *v7; // r14
  int v8; // eax
  _QWORD *v9; // r8
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  PVOID Pool; // rax
  PVOID v13; // rsi
  void *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int16 v24; // dx
  __int64 v25; // rcx
  char v26; // al

  v3 = *(_QWORD *)(a2 + 8);
  if ( !*(_BYTE *)(a2 + 92) )
  {
    if ( !*(_BYTE *)(a2 + 93) )
      goto LABEL_11;
    v6 = (__int64 *)(a2 + 32);
    v7 = (__int64 *)(v3 + 96);
    v8 = StorCompareScsiIdentity(a2 + 32, v3 + 96);
    if ( v8 == 2 )
    {
      v10 = (*(unsigned __int8 *)(*(_QWORD *)(a2 + 64) + 3LL) | (*(unsigned __int8 *)(*(_QWORD *)(a2 + 64) + 2LL) << 8))
          + 4;
      if ( v10 > 0xFFFF )
        v10 = 0xFFFF;
      v11 = v10;
      Pool = RaidAllocatePool(NonPagedPoolNx, v10, 0x32316152u, *(_QWORD *)(*a1 + 8LL));
      v13 = Pool;
      if ( Pool )
      {
        memmove(Pool, *(const void **)(a2 + 64), v11);
        v14 = *(void **)(v3 + 128);
        if ( v14 )
          ExFreePoolWithTag(v14, 0x32316152u);
        *(_QWORD *)(v3 + 128) = v13;
      }
    }
    else
    {
      if ( v8 == 3 )
      {
        v15 = *(_QWORD *)(v3 + 144);
        *(_QWORD *)(v3 + 144) = *(_QWORD *)(a2 + 80);
        v16 = *(_QWORD *)(a2 + 72);
        *(_QWORD *)(a2 + 80) = v15;
        v17 = *(_QWORD *)(v3 + 136);
        *(_QWORD *)(v3 + 136) = v16;
        v18 = *(_QWORD *)(a2 + 64);
        *(_QWORD *)(a2 + 72) = v17;
        v19 = *(_QWORD *)(v3 + 128);
        *(_QWORD *)(v3 + 128) = v18;
        v20 = *v6;
        *(_QWORD *)(a2 + 64) = v19;
        v21 = *v7;
        *v7 = v20;
        v22 = *(_QWORD *)(a2 + 48);
        *v6 = v21;
        LOWORD(v21) = *(_WORD *)(v3 + 106);
        v23 = *(_QWORD *)(v3 + 112);
        v24 = *(_WORD *)(v3 + 104);
        *(_QWORD *)(v3 + 112) = v22;
        *(_WORD *)(v3 + 104) = *(_WORD *)(a2 + 40);
        *(_WORD *)(v3 + 106) = *(_WORD *)(a2 + 42);
        *(_QWORD *)(a2 + 48) = v23;
        *(_WORD *)(a2 + 40) = v24;
        *(_WORD *)(a2 + 42) = v21;
        v25 = *(_QWORD *)(v3 + 24);
        if ( v25 )
        {
          v26 = *(_BYTE *)(v25 + 109);
          if ( (v26 & 0x10) == 0 )
            *(_BYTE *)(v25 + 109) = v26 | 0x10;
        }
        v8 = 0;
      }
      if ( v8 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 8) + 152LL) |= 0x40u;
        goto LABEL_11;
      }
    }
    *(_DWORD *)(a2 + 88) = 2;
    return (_OWORD *)StorDeleteScsiIdentity((void *)(a2 + 32));
  }
  if ( !*(_BYTE *)(a2 + 93) )
    return (_OWORD *)StorDeleteScsiIdentity((void *)(a2 + 32));
  *(_DWORD *)(a2 + 88) = 1;
LABEL_11:
  result = RaidAllocatePool(NonPagedPoolNx, 0x60uLL, 0x74456152u, *(_QWORD *)(*a1 + 8LL));
  if ( result )
  {
    *result = *(_OWORD *)a2;
    result[1] = *(_OWORD *)(a2 + 16);
    result[2] = *(_OWORD *)(a2 + 32);
    result[3] = *(_OWORD *)(a2 + 48);
    result[4] = *(_OWORD *)(a2 + 64);
    result[5] = *(_OWORD *)(a2 + 80);
    if ( *(_DWORD *)(a2 + 88) == 1 )
      a1[7] = 0LL;
    ++result;
    v9 = (_QWORD *)a1[16];
    if ( (_QWORD *)*v9 != a1 + 15 )
      __fastfail(3u);
    *(_QWORD *)result = a1 + 15;
    *((_QWORD *)result + 1) = v9;
    *v9 = result;
    a1[16] = result;
  }
  return result;
}
