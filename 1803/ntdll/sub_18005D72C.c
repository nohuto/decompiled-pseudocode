/*
 * XREFs of sub_18005D72C @ 0x18005D72C
 * Callers:
 *     sub_18005D87C @ 0x18005D87C (sub_18005D87C.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x18005A240 (RtlQueryResourcePolicy.c)
 *     RtlInitializeSListHead_0 @ 0x180073A34 (RtlInitializeSListHead_0.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18005D72C(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 v16; // rax
  _SLIST_HEADER *v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  int v23; // [rsp+50h] [rbp+18h] BYREF

  memset((void *)a1, 0, 0x4F0uLL);
  v11 = a5;
  v12 = 0LL;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 64) = a4;
  v13 = *(_OWORD *)(v11 + 16);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v11;
  v14 = *(_QWORD *)(v11 + 32);
  *(_QWORD *)(a1 + 72) = a6;
  v15 = a7;
  *(_OWORD *)(a1 + 24) = v13;
  *(_QWORD *)(a1 + 40) = v14;
  *(_QWORD *)(a1 + 80) = *(_QWORD *)v15;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(v15 + 8);
  do
    *(_QWORD *)(a1 + 8 * v12++ + 8) ^= a1 ^ qword_18015A440;
  while ( v12 < 4 );
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 )
    *(_QWORD *)(a1 + 40) = a1 ^ qword_18015A440 ^ v16;
  if ( (int)RtlQueryResourcePolicy(0, 0, (__int64)&v23, 4LL) >= 0 && v23 <= 10 )
    a3 = 1;
  v17 = (_SLIST_HEADER *)(a1 + 112);
  v18 = 7LL;
  do
  {
    RtlInitializeSListHead_0(v17++);
    --v18;
  }
  while ( v18 );
  v21 = 64LL;
  *(_BYTE *)(a1 + 48) = a3;
  if ( a3 > 0x40u )
  {
    *(_BYTE *)(a1 + 48) = 64;
    a3 = 64;
  }
  if ( a3 > 1u )
  {
    v21 = 64 - (unsigned int)a3;
    *(_QWORD *)(a1 + 56) = (char *)&unk_180114EE0 + ((unsigned __int64)(unsigned int)((62 - v21) * (v21 + 61)) >> 1);
  }
  a5 = 1LL;
  memset64((void *)(a1 + 224), 1uLL, 0x81uLL);
  return sub_18005C734(0LL, v21, v19, v20);
}
