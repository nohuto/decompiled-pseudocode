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
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // esi
  unsigned int v24; // eax
  int v25; // r12d
  union _SLIST_HEADER *v26; // rcx
  PSLIST_ENTRY v27; // rbp
  unsigned int v28; // edx
  unsigned int v29; // ebx
  unsigned int v30; // ecx
  __int64 v32; // rcx
  __int64 (__fastcall *v33)(__int64, __int64, unsigned int); // rax
  int v34; // eax
  __int64 v35; // rcx
  __int64 (__fastcall *v36)(__int64, _QWORD, _QWORD, _QWORD); // rax
  __int64 v37; // rax
  int v38; // [rsp+90h] [rbp+8h]
  int v39; // [rsp+98h] [rbp+10h]
  unsigned int v40; // [rsp+A0h] [rbp+18h]

  v40 = a3;
  v3 = *(unsigned __int8 *)(a2 + 1);
  v4 = 0LL;
  v5 = a3;
  v8 = 0LL;
  v9 = (unsigned __int16)word_180119600[v3];
  v38 = v9;
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
  v39 = v10;
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
  v16 = (unsigned int)(v9 * v15);
  v17 = (8 * (((unsigned __int64)(unsigned int)(2 * v15) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v18 = v17 + 2 * ((unsigned int)(v16 + v17 + 4095) >> 12);
  v19 = *(unsigned int *)(a1 + 84);
  v20 = v19;
  if ( (int)v18 + (int)v16 < (unsigned int)v19 )
    v20 = v18 + v16;
  _BitScanReverse(&v21, v20 - 1);
  v22 = v21 + 1;
  if ( v21 + 1 <= 7 )
  {
    v22 = 7;
  }
  else if ( v22 >= 0x12 )
  {
    v22 = 18;
    goto LABEL_14;
  }
  if ( v22 <= 0xC )
    v22 = 12;
LABEL_14:
  v23 = 1 << v22;
  if ( (dword_18015A43C & 8) == 0 || (unsigned int)v18 > (unsigned int)v16 >> 6 )
    goto LABEL_24;
  if ( (unsigned int)v16 < (unsigned int)v19 )
    LODWORD(v19) = v16;
  v19 = (unsigned int)(v19 - 1);
  _BitScanReverse(&v24, v19);
  v22 = v24 + 1;
  if ( v24 + 1 <= 7 )
  {
    v22 = 7;
LABEL_20:
    if ( v22 <= 0xC )
      v22 = 12;
    goto LABEL_22;
  }
  if ( v22 < 0x12 )
    goto LABEL_20;
  v22 = 18;
LABEL_22:
  if ( v23 > 1 << v22 )
    v23 = 1 << v22;
LABEL_24:
  v25 = v5 & 1;
  if ( (v5 & 1) == 0 )
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 96), (char *)v19, v16, v18);
  v26 = (union _SLIST_HEADER *)(a1 + 16 * (v22 - 12 + 7LL));
  if ( !LOWORD(v26->Alignment) || (v27 = RtlInterlockedPopEntrySList(v26)) == 0LL )
    v27 = 0LL;
  if ( v27 )
  {
    v28 = 1 << *((_BYTE *)&v27[2].Next + 12);
  }
  else
  {
    v35 = *(_QWORD *)a1;
    v36 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 8));
    if ( v36 == sub_180023320 )
      v37 = sub_180023320(v35, v23, 0LL, v40);
    else
      v37 = v36(v35, v23, 0LL, v40);
    v27 = (PSLIST_ENTRY)v37;
    if ( !v37 )
      goto LABEL_47;
    v28 = 0;
  }
  if ( (dword_18015A43C & 2) != 0 && v39 )
  {
    v29 = v23;
  }
  else if ( (dword_180159760 & 4) != 0 )
  {
    v29 = v23;
  }
  else
  {
    v29 = 2 * v38;
    if ( ((v29 - 1) & v29) != 0 )
    {
      _BitScanReverse(&v30, v29);
      v29 = 1 << (v30 + 1);
    }
    if ( v29 <= 0x1000 )
      v29 = 4096;
    if ( v29 >= v23 )
      v29 = v23;
  }
  if ( v28 && *((_BYTE *)&v27[2].Next + 13) > 1u )
    v8 = -(__int64)((unsigned __int64)v28 >> 12);
  if ( v28 < v29
    && ((v32 = *(_QWORD *)a1,
         v33 = (__int64 (__fastcall *)(__int64, __int64, unsigned int))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 24)),
         v33 != sub_180012010)
      ? (v34 = v33(v32, (__int64)v27, v29))
      : (v34 = sub_180012010(v32, (__int64)v27, v29)),
        v34 < 0) )
  {
    ((void (__fastcall *)(_QWORD, PSLIST_ENTRY, _QWORD, _QWORD))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 16)))(
      *(_QWORD *)a1,
      v27,
      v23,
      v40);
  }
  else
  {
    if ( v29 != v23 )
      v8 += (unsigned __int64)v29 >> 12;
    if ( v8 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL), v8);
    sub_18001E658(v27);
    _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v27[2].Next));
    v4 = v27;
  }
LABEL_47:
  if ( !v25 )
    RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 96));
  return v4;
}
