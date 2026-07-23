/*
 * XREFs of RtlpHpLfhContextInitialize @ 0x14029A594
 * Callers:
 *     RtlpHpHeapCreate @ 0x140294F54 (RtlpHpHeapCreate.c)
 * Callees:
 *     InitializeSListHead @ 0x14006A770 (InitializeSListHead.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x140170804 (RtlpHeapGenerateRandomValue64.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

unsigned __int64 __fastcall RtlpHpLfhContextInitialize(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rcx
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  __int64 v14; // rax
  _SLIST_HEADER *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned __int64 *v18; // rdi
  unsigned __int64 result; // rax

  memset((void *)a1, 0, 0x4F0uLL);
  v11 = 0LL;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 64) = a4;
  v12 = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a5;
  v13 = *(_QWORD *)(a5 + 32);
  *(_QWORD *)(a1 + 72) = a6;
  *(_OWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 40) = v13;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)a7;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a7 + 8);
  do
    *(_QWORD *)(a1 + 8 * v11++ + 8) ^= a1 ^ RtlpHpHeapGlobals;
  while ( v11 < 4 );
  v14 = *(_QWORD *)(a1 + 40);
  if ( v14 )
    *(_QWORD *)(a1 + 40) = a1 ^ RtlpHpHeapGlobals ^ v14;
  v15 = (_SLIST_HEADER *)(a1 + 112);
  v16 = 7LL;
  do
  {
    InitializeSListHead(v15++);
    --v16;
  }
  while ( v16 );
  *(_BYTE *)(a1 + 48) = a3;
  if ( a3 > 0x40u )
  {
    *(_BYTE *)(a1 + 48) = 64;
    a3 = 64;
  }
  if ( a3 > 1u )
    *(_QWORD *)(a1 + 56) = (char *)&unk_140318180
                         + ((unsigned __int64)((62 - (64 - a3)) * (64 - (unsigned int)a3 + 61)) >> 1);
  v17 = 32LL;
  memset64((void *)(a1 + 224), 1uLL, 0x81uLL);
  v18 = (unsigned __int64 *)&RtlpLowFragHeapRandomData;
  do
  {
    result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
    *v18++ = result;
    --v17;
  }
  while ( v17 );
  return result;
}
