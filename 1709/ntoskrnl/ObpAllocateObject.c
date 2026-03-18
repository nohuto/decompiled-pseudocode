/*
 * XREFs of ObpAllocateObject @ 0x1404AA4C0
 * Callers:
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1404BA930 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObCreateObjectTypeEx @ 0x1405C6D8C (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x140081700 (SeAuditHeaderRequired.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(_DWORD *a1, char a2, __int64 a3, _WORD *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  int v8; // r15d
  char v11; // di
  bool v12; // al
  __int64 v13; // r8
  int v14; // r10d
  int v15; // r11d
  int v16; // r9d
  int v17; // r14d
  int v18; // ecx
  char v19; // al
  int v20; // r13d
  int v21; // r8d
  unsigned __int8 v22; // bp
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // ecx
  char *PoolWithTag; // rax
  char *v27; // r8
  __int64 v28; // rdx
  char v29; // r8
  unsigned __int32 v30; // edx
  char v32; // r8
  unsigned __int8 v33; // dl
  __int128 v34; // xmm0
  int v35; // [rsp+20h] [rbp-58h]
  int v36; // [rsp+24h] [rbp-54h]
  int v37; // [rsp+28h] [rbp-50h]
  int v38; // [rsp+80h] [rbp+8h]
  int v40; // [rsp+90h] [rbp+18h]

  v8 = *a1 & 0x20;
  v11 = v8 != 0 ? 0x10 : 0;
  v12 = SeAuditHeaderRequired((POBJECT_TYPE *)a3);
  v15 = 16;
  v38 = 16;
  if ( v12 )
  {
    v16 = 16;
    v11 |= 0x20u;
  }
  else
  {
    v16 = 0;
  }
  v17 = 32;
  v35 = v16;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || KeGetCurrentThread()->ApcState.Process == PsIdleProcess
    || !PsInitialSystemProcess )
  {
    v18 = 0;
  }
  else
  {
    v18 = 32;
    v11 |= 8u;
  }
  v19 = *(_BYTE *)(v13 + 66);
  v36 = v18;
  if ( (v19 & 0x10) != 0 )
  {
    v20 = 16;
    v11 |= 4u;
  }
  else
  {
    v20 = 0;
  }
  if ( *a4 )
  {
    if ( (v19 & 2) != 0 )
      return 3221225523LL;
    v21 = 32;
    v11 |= 2u;
  }
  else
  {
    v21 = 0;
  }
  v37 = v21;
  v22 = (v19 >> 7) & 0x30;
  if ( (v19 & 0x20) != 0 )
    v11 |= 1u;
  else
    v17 = 0;
  if ( a7 && (*a7 || a7[1]) )
  {
    v11 |= 0x40u;
    v23 = 96;
  }
  else
  {
    v15 = 0;
    v38 = 0;
    v23 = 48;
  }
  v24 = v16 + v20 + v21 + v17 + v14 + v15 + v18;
  v40 = v24 + 48;
  v25 = v23 + v22 + v24;
  if ( v25 + a5 < v25 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a3 + 100), v25 + a5, *(_DWORD *)(a3 + 192));
  if ( !PoolWithTag )
    return 3221225626LL;
  if ( v22 )
  {
    v33 = -(char)((_BYTE)PoolWithTag + v40) & 0x3F;
    if ( v33 )
    {
      PoolWithTag += v33;
      v11 |= 0x80u;
      *((_DWORD *)PoolWithTag - 1) = v33;
    }
  }
  if ( v38 )
  {
    v27 = &PoolWithTag[v40 + a5];
    *(_QWORD *)PoolWithTag = v27;
    *(_QWORD *)v27 = 0LL;
    *((_QWORD *)v27 + 1) = 0LL;
    *((_QWORD *)v27 + 2) = 0LL;
    *((_QWORD *)v27 + 3) = 0LL;
    *((_QWORD *)v27 + 4) = 0LL;
    *((_QWORD *)v27 + 5) = 0LL;
    v28 = *(_QWORD *)PoolWithTag;
    PoolWithTag += 16;
    *(_BYTE *)(v28 + 24) = *a7;
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
  if ( v20 )
  {
    *((_DWORD *)PoolWithTag + 2) &= 0xFF000000;
    PoolWithTag[11] = 0;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v37 )
  {
    v34 = *(_OWORD *)a4;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *(_OWORD *)(PoolWithTag + 8) = v34;
    PoolWithTag += 32;
  }
  if ( v17 )
  {
    *((_WORD *)PoolWithTag + 12) = 0;
    *((_QWORD *)PoolWithTag + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    PoolWithTag += 32;
  }
  PoolWithTag[27] = 1;
  v29 = PoolWithTag[27];
  if ( v20 )
    v29 = 65;
  PoolWithTag[26] = v11;
  PoolWithTag[25] = 0;
  PoolWithTag[27] = v29;
  *(_QWORD *)PoolWithTag = 1LL;
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(PoolWithTag);
  if ( !a2 )
  {
    v32 = v29 | 2;
    PoolWithTag[27] = v32;
    if ( (*a1 & 0x10000) != 0 )
      PoolWithTag[27] = v32 | 4;
  }
  if ( (*a1 & 0x10) != 0 )
    PoolWithTag[27] |= 0x10u;
  if ( (*a1 & 0x20) != 0 )
    PoolWithTag[27] |= 8u;
  *((_QWORD *)PoolWithTag + 4) = a1;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  v30 = _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  if ( v30 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v30;
  *a6 = PoolWithTag;
  return 0LL;
}
