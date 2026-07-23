/*
 * XREFs of sub_18001E320 @ 0x18001E320
 * Callers:
 *     sub_18001AC70 @ 0x18001AC70 (sub_18001AC70.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_180012010 @ 0x180012010 (sub_180012010.c)
 *     sub_18001E658 @ 0x18001E658 (sub_18001E658.c)
 *     sub_18001EDA0 @ 0x18001EDA0 (sub_18001EDA0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPopEntrySList @ 0x18009E550 (RtlInterlockedPopEntrySList.c)
 *     sub_180104D30 @ 0x180104D30 (sub_180104D30.c)
 */

PSLIST_ENTRY __fastcall sub_18001E320(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  PSLIST_ENTRY v4; // r14
  char v5; // bp
  unsigned __int64 v8; // r13
  int v9; // ebx
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // r10d
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // edx
  unsigned int v18; // r9d
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // esi
  unsigned int v25; // eax
  int v26; // r12d
  _SLIST_HEADER *v27; // rcx
  PSLIST_ENTRY v28; // rbp
  unsigned int v29; // edx
  unsigned int v30; // ebx
  unsigned int v31; // ecx
  __int64 v33; // rcx
  __int64 (__fastcall *v34)(__int64, __int64, unsigned int); // rax
  int v35; // eax
  __int64 v36; // rcx
  __int64 (__fastcall *v37)(__int64, _QWORD, _QWORD, _QWORD); // rax
  __int64 v38; // rax
  int v39; // [rsp+90h] [rbp+8h]
  int v40; // [rsp+98h] [rbp+10h]
  unsigned int v41; // [rsp+A0h] [rbp+18h]

  v41 = a3;
  v3 = *(unsigned __int8 *)(a2 + 1);
  v4 = 0LL;
  v5 = a3;
  v8 = 0LL;
  v9 = (unsigned __int16)word_180119600[v3];
  v39 = v9;
  if ( (dword_18015A43C & 1) != 0 )
  {
    v10 = sub_180104D30(a1 + 104, *(unsigned __int8 *)(a2 + 1));
    LOBYTE(v3) = *(_BYTE *)(a2 + 1);
  }
  else
  {
    v10 = 0;
  }
  v11 = *(unsigned __int8 *)(a2 + 2);
  v40 = v10;
  v12 = (unsigned __int16)word_180119600[(unsigned __int8)v3];
  v13 = *(_DWORD *)(a2 + 56);
  if ( !v10 )
  {
    v13 >>= 3;
    if ( v11 != 1 )
      v13 /= v11;
  }
  v14 = v13;
  if ( v13 == 0xFFFFFFFFLL )
    v14 = 0xFFFFFFFFLL;
  LOBYTE(a3) = v11 > 1;
  v15 = sub_18001EDA0(v12, v14, a3, *(_QWORD *)(a2 + 64) != 0LL);
  v16 = v9 * v15;
  v17 = (8 * (((unsigned __int64)(unsigned int)(2 * v15) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v18 = v17 + 2 * ((unsigned int)(v9 * v15 + v17 + 4095) >> 12);
  v19 = *(_DWORD *)(a1 + 84);
  v20 = v18 + v9 * v15;
  v21 = v19;
  if ( v20 < v19 )
    v21 = v20;
  _BitScanReverse(&v22, v21 - 1);
  v23 = v22 + 1;
  if ( v22 + 1 <= 7 )
  {
    v23 = 7;
  }
  else if ( v23 >= 0x12 )
  {
    v23 = 18;
    goto LABEL_14;
  }
  if ( v23 <= 0xC )
    v23 = 12;
LABEL_14:
  v24 = 1 << v23;
  if ( (dword_18015A43C & 8) == 0 || v18 > v16 >> 6 )
    goto LABEL_24;
  if ( v16 < v19 )
    v19 = v16;
  _BitScanReverse(&v25, v19 - 1);
  v23 = v25 + 1;
  if ( v25 + 1 <= 7 )
  {
    v23 = 7;
LABEL_20:
    if ( v23 <= 0xC )
      v23 = 12;
    goto LABEL_22;
  }
  if ( v23 < 0x12 )
    goto LABEL_20;
  v23 = 18;
LABEL_22:
  if ( v24 > 1 << v23 )
    v24 = 1 << v23;
LABEL_24:
  v26 = v5 & 1;
  if ( (v5 & 1) == 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 96));
  v27 = (_SLIST_HEADER *)(a1 + 16 * (v23 - 12 + 7LL));
  if ( !LOWORD(v27->Alignment) || (v28 = RtlInterlockedPopEntrySList(v27)) == 0LL )
    v28 = 0LL;
  if ( v28 )
  {
    v29 = 1 << *((_BYTE *)&v28[2].Next + 12);
  }
  else
  {
    v36 = *(_QWORD *)a1;
    v37 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 8));
    if ( v37 == sub_180023320 )
      v38 = sub_180023320(v36, v24, 0LL, v41);
    else
      v38 = v37(v36, v24, 0LL, v41);
    v28 = (PSLIST_ENTRY)v38;
    if ( !v38 )
      goto LABEL_47;
    v29 = 0;
  }
  if ( (dword_18015A43C & 2) != 0 && v40 )
  {
    v30 = v24;
  }
  else if ( (dword_180159760 & 4) != 0 )
  {
    v30 = v24;
  }
  else
  {
    v30 = 2 * v39;
    if ( ((v30 - 1) & v30) != 0 )
    {
      _BitScanReverse(&v31, v30);
      v30 = 1 << (v31 + 1);
    }
    if ( v30 <= 0x1000 )
      v30 = 4096;
    if ( v30 >= v24 )
      v30 = v24;
  }
  if ( v29 && *((_BYTE *)&v28[2].Next + 13) > 1u )
    v8 = -(__int64)((unsigned __int64)v29 >> 12);
  if ( v29 < v30
    && ((v33 = *(_QWORD *)a1,
         v34 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 24)),
         v34 != sub_180012010)
      ? (v35 = v34(v33, (__int64)v28, v30))
      : (v35 = sub_180012010(v33, (__int64)v28, v30)),
        v35 < 0) )
  {
    ((void (__fastcall *)(_QWORD, PSLIST_ENTRY, _QWORD, _QWORD))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 16)))(
      *(_QWORD *)a1,
      v28,
      v24,
      v41);
  }
  else
  {
    if ( v30 != v24 )
      v8 += (unsigned __int64)v30 >> 12;
    if ( v8 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL), v8);
    sub_18001E658(v28);
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v28[2].Next));
    v4 = v28;
  }
LABEL_47:
  if ( !v26 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 96));
  return v4;
}
