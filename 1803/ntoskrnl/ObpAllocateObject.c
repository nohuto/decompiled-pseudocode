/*
 * XREFs of ObpAllocateObject @ 0x1405A1430
 * Callers:
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1405B3C40 (IopAllocRealFileObject.c)
 *     ObCreateObjectTypeEx @ 0x14062189C (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x1400FE500 (SeAuditHeaderRequired.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(int *a1, char a2, __int64 a3, _WORD *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  int v8; // r14d
  char v11; // r8
  int v12; // r10d
  int v13; // r11d
  int v14; // ebp
  int v15; // r9d
  char v16; // r15
  char v17; // si
  int v18; // edx
  char v19; // cl
  char v20; // r15
  unsigned __int8 v21; // r12
  char v22; // r13
  int v23; // ecx
  unsigned int v24; // ecx
  char *PoolWithTag; // rax
  char *v26; // r8
  __int64 v27; // rdx
  char v28; // r8
  int v29; // ecx
  unsigned __int32 v30; // edx
  __int128 v32; // xmm0
  unsigned __int8 v33; // dl
  int v34; // [rsp+20h] [rbp-58h]
  int v35; // [rsp+24h] [rbp-54h]
  int v36; // [rsp+28h] [rbp-50h]
  int v37; // [rsp+80h] [rbp+8h]
  int v39; // [rsp+90h] [rbp+18h]

  v8 = *a1 & 0x20;
  v37 = 16;
  if ( SeAuditHeaderRequired((POBJECT_TYPE *)a3) )
  {
    v13 = 16;
    v11 |= 0x20u;
  }
  else
  {
    v13 = 0;
  }
  v14 = 32;
  v35 = v13;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || KeGetCurrentThread()->ApcState.Process == PsIdleProcess
    || !PsInitialSystemProcess )
  {
    v15 = 0;
  }
  else
  {
    v15 = 32;
    v11 |= 8u;
  }
  v16 = *(_BYTE *)(a3 + 66);
  v36 = v15;
  v17 = v16 & 0x10;
  v18 = (v16 & 0x10) != 0 ? 0x10 : 0;
  v19 = v11 | 4;
  if ( (v16 & 0x10) == 0 )
    v19 = v11;
  if ( *a4 )
  {
    if ( (v16 & 2) != 0 )
      return 3221225523LL;
    v19 |= 2u;
  }
  else
  {
    v14 = 0;
  }
  v20 = v16 & 0x20;
  v21 = (*(char *)(a3 + 66) >> 7) & 0x30;
  v22 = v19 | 1;
  if ( !v20 )
    v22 = v19;
  if ( a7 && (*a7 || a7[1]) )
  {
    v22 |= 0x40u;
    v39 = 48;
  }
  else
  {
    v39 = 0;
    v37 = 0;
  }
  v23 = v13 + v15 + v14 + v37 + v12 + (v20 != 0 ? 0x20 : 0) + v18;
  v34 = v23 + 48;
  v24 = v23 + v21 + v39 + 48;
  if ( v24 + a5 < v24 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a3 + 100), v24 + a5, *(_DWORD *)(a3 + 192));
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v21 )
  {
    v33 = -(char)((_BYTE)PoolWithTag + v34) & 0x3F;
    if ( v33 )
    {
      PoolWithTag += v33;
      v22 |= 0x80u;
      *((_DWORD *)PoolWithTag - 1) = v33;
    }
  }
  if ( v37 )
  {
    v26 = &PoolWithTag[v34 + a5];
    *(_QWORD *)PoolWithTag = v26;
    *(_QWORD *)v26 = 0LL;
    *((_QWORD *)v26 + 1) = 0LL;
    *((_QWORD *)v26 + 2) = 0LL;
    *((_QWORD *)v26 + 3) = 0LL;
    *((_QWORD *)v26 + 4) = 0LL;
    *((_QWORD *)v26 + 5) = 0LL;
    v27 = *(_QWORD *)PoolWithTag;
    PoolWithTag += 16;
    *(_BYTE *)(v27 + 24) = *a7;
  }
  if ( v35 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    PoolWithTag += 16;
  }
  if ( v8 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v36 )
  {
    *(_DWORD *)PoolWithTag = a1[5];
    *((_DWORD *)PoolWithTag + 1) = a1[6];
    *((_DWORD *)PoolWithTag + 2) = a1[7];
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag += 32;
  }
  if ( v17 )
  {
    *((_DWORD *)PoolWithTag + 2) &= 0xFF000000;
    PoolWithTag[11] = 0;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v14 )
  {
    v32 = *(_OWORD *)a4;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *(_OWORD *)(PoolWithTag + 8) = v32;
    PoolWithTag += 32;
  }
  if ( v20 )
  {
    *((_WORD *)PoolWithTag + 12) = 0;
    *((_QWORD *)PoolWithTag + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    PoolWithTag += 32;
  }
  PoolWithTag[26] = v22;
  v28 = 1;
  PoolWithTag[25] = 0;
  PoolWithTag[27] = 1;
  if ( v17 )
  {
    PoolWithTag[27] = 65;
    v28 = 65;
  }
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *(_QWORD *)PoolWithTag = 1LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(PoolWithTag);
  if ( !a2 )
  {
    v28 |= 2u;
    PoolWithTag[27] = v28;
    if ( (*a1 & 0x10000) != 0 )
    {
      v28 |= 4u;
      PoolWithTag[27] = v28;
    }
  }
  v29 = *a1;
  if ( (*a1 & 0x10) != 0 )
  {
    v28 |= 0x10u;
    PoolWithTag[27] = v28;
    v29 = *a1;
  }
  if ( (v29 & 0x20) != 0 )
    PoolWithTag[27] = v28 | 8;
  *((_QWORD *)PoolWithTag + 4) = a1;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  v30 = _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  if ( v30 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v30;
  *a6 = PoolWithTag;
  return 0LL;
}
