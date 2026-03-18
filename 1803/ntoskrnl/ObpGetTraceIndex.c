/*
 * XREFs of ObpGetTraceIndex @ 0x14075A8DC
 * Callers:
 *     ObpPushRefDerefInfo @ 0x14075ACC4 (ObpPushRefDerefInfo.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpGetTraceIndex(unsigned __int16 *Source2)
{
  unsigned int v1; // ebp
  _OWORD *v2; // rdi
  __int64 v3; // r8
  int v4; // edx
  int v5; // eax
  _QWORD *v6; // r14
  unsigned __int16 v7; // bp
  unsigned int v8; // esi
  unsigned int v9; // ebx
  unsigned __int16 *v11; // r8
  PVOID PoolWithTag; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx

  v1 = 0;
  v2 = Source2;
  v3 = 32LL;
  do
  {
    v4 = Source2[1];
    v5 = *Source2;
    Source2 += 2;
    v1 += v5 ^ v4;
    --v3;
  }
  while ( v3 );
  v6 = ObpStackTable;
  v7 = v1 % 0x3FFD;
  LOWORD(v8) = v7;
  LOWORD(v9) = *((_WORD *)ObpStackTable + v7 + 68);
  while ( (_WORD)v9 != 0xFFFF )
  {
    if ( RtlCompareMemory(
           (const void *)(v6[((unsigned __int64)(unsigned __int16)v9 >> 10) + 1] + ((unsigned __int64)(v9 & 0x3FF) << 7)),
           v2,
           0x80uLL) == 128 )
      return (unsigned __int16)v9;
    v8 = ((unsigned int)(unsigned __int16)v8 + 1) % 0x3FFD;
    if ( (_WORD)v8 == v7 )
      return 16381LL;
    LOWORD(v9) = *((_WORD *)ObpStackTable + (unsigned __int16)v8 + 68);
  }
  v11 = (unsigned __int16 *)ObpStackTable;
  if ( *(_WORD *)ObpStackTable == *((_WORD *)ObpStackTable + 1) )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20000uLL, 0x7452624Fu);
    if ( !PoolWithTag )
      return 16381LL;
    v11 = (unsigned __int16 *)ObpStackTable;
    *((_QWORD *)ObpStackTable + ((unsigned __int64)*((unsigned __int16 *)ObpStackTable + 1) >> 10) + 1) = PoolWithTag;
    v11[1] += 1024;
  }
  v9 = *v11;
  v13 = (unsigned __int64)(*v11 & 0x3FF) << 7;
  v11[(unsigned __int16)v8 + 68] = v9;
  v14 = *(_QWORD *)&v11[4 * ((unsigned __int64)v9 >> 10) + 4];
  *(_OWORD *)(v14 + v13) = *v2;
  *(_OWORD *)(v14 + v13 + 16) = v2[1];
  *(_OWORD *)(v14 + v13 + 32) = v2[2];
  *(_OWORD *)(v14 + v13 + 48) = v2[3];
  *(_OWORD *)(v14 + v13 + 64) = v2[4];
  *(_OWORD *)(v14 + v13 + 80) = v2[5];
  *(_OWORD *)(v14 + v13 + 96) = v2[6];
  *(_OWORD *)(v14 + v13 + 112) = v2[7];
  ++*v11;
  return (unsigned __int16)v9;
}
