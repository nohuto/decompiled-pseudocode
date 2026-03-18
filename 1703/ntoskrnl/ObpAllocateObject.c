/*
 * XREFs of ObpAllocateObject @ 0x140506B40
 * Callers:
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14053AC70 (IopAllocRealFileObject.c)
 *     ObCreateObjectTypeEx @ 0x14059EB6C (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x14008D440 (SeAuditHeaderRequired.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(_DWORD *a1, char a2, __int64 a3, __int128 *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  char v7; // r14
  int v10; // r10d
  int v11; // edx
  __int64 v12; // r8
  int v13; // r10d
  _WORD *v14; // r11
  int v15; // r9d
  int v16; // ebp
  int v17; // r13d
  unsigned __int8 v18; // si
  int v19; // r15d
  int v20; // r8d
  int v21; // edx
  unsigned __int8 v22; // cl
  unsigned int v23; // ecx
  char *PoolWithTag; // rax
  char *v25; // r8
  __int64 v26; // rdx
  char v27; // r8
  unsigned __int32 v28; // edx
  char v30; // r8
  __int128 v31; // xmm0
  unsigned __int8 v32; // r8
  int v33; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+24h] [rbp-54h]
  int v35; // [rsp+28h] [rbp-50h]
  int v36; // [rsp+80h] [rbp+8h]
  int v38; // [rsp+90h] [rbp+18h]

  v7 = 0;
  v36 = 16;
  if ( (*a1 & 0x20) != 0 )
  {
    v10 = 16;
    v7 = 16;
  }
  else
  {
    v10 = 0;
  }
  v34 = v10;
  if ( SeAuditHeaderRequired((POBJECT_TYPE *)a3) )
  {
    v15 = v11;
    v7 |= 0x20u;
  }
  else
  {
    v15 = 0;
  }
  v16 = 32;
  v33 = v15;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || KeGetCurrentThread()->ApcState.Process == PsIdleProcess
    || !PsInitialSystemProcess )
  {
    v17 = 0;
  }
  else
  {
    v17 = 32;
    v7 |= 8u;
  }
  v18 = *(_BYTE *)(v12 + 66);
  if ( (v18 & (unsigned __int8)v11) != 0 )
  {
    v19 = v11;
    v7 |= 4u;
  }
  else
  {
    v19 = 0;
  }
  if ( *v14 )
  {
    if ( (v18 & 2) != 0 )
      return 3221225523LL;
    v20 = 32;
    v7 |= 2u;
  }
  else
  {
    v20 = 0;
  }
  v35 = v20;
  v21 = 48;
  v22 = 48;
  if ( v18 < 0x80u )
    v22 = 0;
  if ( (v18 & 0x20) != 0 )
    v7 |= 1u;
  else
    v16 = 0;
  if ( a7 && (*a7 || a7[1]) )
  {
    v7 |= 0x40u;
  }
  else
  {
    v21 = 0;
    v36 = 0;
  }
  v38 = v13 + v15 + v17 + v19 + v16 + v36 + 48 + v20;
  v23 = v21 + v38 + v22;
  if ( v23 + a5 < v23 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a3 + 100), v23 + a5, *(_DWORD *)(a3 + 192));
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v18 >= 0x80u )
  {
    v32 = -(char)((_BYTE)PoolWithTag + v38) & 0x3F;
    if ( v32 )
    {
      PoolWithTag += v32;
      v7 |= 0x80u;
      *((_DWORD *)PoolWithTag - 1) = v32;
    }
  }
  if ( v36 )
  {
    v25 = &PoolWithTag[v38 + a5];
    *(_QWORD *)PoolWithTag = v25;
    *(_QWORD *)v25 = 0LL;
    *((_QWORD *)v25 + 1) = 0LL;
    *((_QWORD *)v25 + 2) = 0LL;
    *((_QWORD *)v25 + 3) = 0LL;
    *((_QWORD *)v25 + 4) = 0LL;
    *((_QWORD *)v25 + 5) = 0LL;
    v26 = *(_QWORD *)PoolWithTag;
    PoolWithTag += 16;
    *(_BYTE *)(v26 + 24) = *a7;
  }
  if ( v33 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    PoolWithTag += 16;
  }
  if ( v34 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v17 )
  {
    *(_DWORD *)PoolWithTag = a1[5];
    *((_DWORD *)PoolWithTag + 1) = a1[6];
    *((_DWORD *)PoolWithTag + 2) = a1[7];
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag += 32;
  }
  if ( v19 )
  {
    *((_DWORD *)PoolWithTag + 2) &= 0xFF000000;
    PoolWithTag[11] = 0;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v35 )
  {
    v31 = *a4;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *(_OWORD *)(PoolWithTag + 8) = v31;
    PoolWithTag += 32;
  }
  if ( v16 )
  {
    *((_WORD *)PoolWithTag + 12) = 0;
    *((_QWORD *)PoolWithTag + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    PoolWithTag += 32;
  }
  PoolWithTag[27] = 1;
  v27 = PoolWithTag[27];
  if ( v19 )
    v27 = 65;
  PoolWithTag[26] = v7;
  PoolWithTag[25] = 0;
  PoolWithTag[27] = v27;
  *(_QWORD *)PoolWithTag = 1LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(PoolWithTag);
  if ( !a2 )
  {
    v30 = v27 | 2;
    PoolWithTag[27] = v30;
    if ( (*a1 & 0x10000) != 0 )
      PoolWithTag[27] = v30 | 4;
  }
  if ( (*a1 & 0x10) != 0 )
    PoolWithTag[27] |= 0x10u;
  if ( (*a1 & 0x20) != 0 )
    PoolWithTag[27] |= 8u;
  *((_QWORD *)PoolWithTag + 4) = a1;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  v28 = _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  if ( v28 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v28;
  *a6 = PoolWithTag;
  return 0LL;
}
