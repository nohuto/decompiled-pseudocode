/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x180046890
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x180042C90 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlpHpSegLfhAllocate @ 0x180037F80 (RtlpHpSegLfhAllocate.c)
 *     RtlReleaseSRWLockShared @ 0x1800467D0 (RtlReleaseSRWLockShared.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlAcquireSRWLockShared @ 0x180046FA0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpSegLfhVsCommit @ 0x180048300 (RtlpHpSegLfhVsCommit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     RtlpInterlockedPopEntrySList @ 0x1800A3B10 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x180106E68 (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 */

PSLIST_ENTRY __fastcall RtlpHpLfhSubsegmentCreate(_RTL_SRWLOCK *a1, __int64 a2, unsigned int a3)
{
  PSLIST_ENTRY v3; // r12
  char v4; // r10
  unsigned __int64 v7; // r15
  unsigned int v8; // r9d
  int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edi
  bool v13; // dl
  char v14; // cl
  char v15; // dl
  char v16; // cl
  unsigned int v17; // r8d
  int v18; // edx
  unsigned int v19; // r9d
  int v20; // eax
  unsigned int v21; // edi
  unsigned int v22; // edi
  unsigned int v23; // ebx
  unsigned int v24; // edi
  _SLIST_HEADER *v25; // rcx
  PSLIST_ENTRY v26; // r14
  unsigned int v27; // edx
  __int64 v28; // r9
  unsigned int v29; // edi
  unsigned int v30; // ecx
  unsigned int v31; // r8d
  unsigned int v32; // ebx
  unsigned __int8 v33; // r8
  unsigned __int64 v34; // r15
  unsigned int v35; // eax
  __int64 v36; // rcx
  _WORD *v37; // rcx
  _WORD *v38; // rdi
  _WORD *v39; // rdx
  unsigned __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rcx
  unsigned __int16 LowFragHeapDataSlot; // di
  unsigned __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v52; // rcx
  __int64 (__fastcall *v53)(unsigned __int64, PSLIST_ENTRY, _QWORD, __int64); // rax
  int v54; // eax
  __int64 Value; // rcx
  __int64 (__fastcall *v56)(__int64, unsigned int, __int64, char); // rax
  __int64 v57; // rax
  int v58; // eax
  int v59; // [rsp+34h] [rbp-54h]
  unsigned int v60; // [rsp+90h] [rbp+8h]
  int v61; // [rsp+98h] [rbp+10h]
  unsigned int v63; // [rsp+A0h] [rbp+18h]
  int v64; // [rsp+A0h] [rbp+18h]

  v3 = 0LL;
  v4 = a3;
  v7 = 0LL;
  v8 = (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a2 + 1)];
  v60 = v8;
  if ( (RtlpHpLfhPerfFlags & 1) != 0 )
  {
    v58 = RtlpHpLfhBucketSubsegmentStatsUpdate(&a1[10], *(unsigned __int8 *)(a2 + 1));
    v8 = v60;
    v9 = v58;
    v4 = a3;
  }
  else
  {
    v9 = 0;
  }
  v10 = *(unsigned __int8 *)(a2 + 2);
  v61 = v9;
  v11 = *(_DWORD *)(a2 + 56);
  if ( !v9 )
  {
    v11 >>= 3;
    if ( v10 != 1 )
      v11 /= v10;
  }
  v12 = v11;
  if ( v11 == 0xFFFFFFFFLL )
    v12 = -1;
  v13 = v10 > 1;
  v14 = (v10 > 1) - 1;
  if ( (unsigned __int16)RtlpBucketBlockSizes[*(unsigned __int8 *)(a2 + 1)] >= 0x100u )
    v14 = v13;
  v15 = v14;
  v16 = v14 - 1;
  if ( !*(_QWORD *)(a2 + 64) )
    v16 = v15;
  if ( v12 < 1 << (3 - v16) )
    v12 = 1 << (3 - v16);
  if ( v12 < 4 )
  {
    v12 = 4;
  }
  else if ( v12 > 0x400 )
  {
    v12 = 1024;
  }
  v17 = v8 * v12;
  v18 = (8 * (((unsigned __int64)(2 * v12) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v19 = v18 + 2 * ((v18 + v8 * v12 + 4095) >> 12);
  v20 = v19 + v17;
  if ( v19 + v17 > 0xF0000 )
    v20 = 983040;
  _BitScanReverse(&v21, v20 - 1);
  v22 = v21 + 1;
  if ( v22 <= 7 )
  {
    v22 = 7;
  }
  else if ( v22 >= 0x12 )
  {
    v22 = 18;
    goto LABEL_23;
  }
  if ( v22 <= 0xC )
    v22 = 12;
LABEL_23:
  v23 = 1 << v22;
  if ( (RtlpHpLfhPerfFlags & 8) == 0 || v19 > v17 >> 6 )
    goto LABEL_33;
  if ( v17 > 0xF0000 )
    v17 = 983040;
  _BitScanReverse(&v24, v17 - 1);
  v22 = v24 + 1;
  if ( v22 <= 7 )
  {
    v22 = 7;
LABEL_29:
    if ( v22 <= 0xC )
      v22 = 12;
    goto LABEL_31;
  }
  if ( v22 < 0x12 )
    goto LABEL_29;
  v22 = 18;
LABEL_31:
  if ( v23 > 1 << v22 )
    v23 = 1 << v22;
LABEL_33:
  v59 = v4 & 1;
  if ( (v4 & 1) == 0 )
    RtlAcquireSRWLockShared(a1 + 9);
  v25 = (_SLIST_HEADER *)&a1[2 * v22 - 12];
  if ( !LOWORD(v25->Alignment) || (v26 = RtlpInterlockedPopEntrySList(v25)) == 0LL )
    v26 = 0LL;
  if ( v26 )
  {
    v27 = 1 << *((_BYTE *)&v26[2].Next + 12);
  }
  else
  {
    Value = a1->Value;
    v56 = (__int64 (__fastcall *)(__int64, unsigned int, __int64, char))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[1].Value);
    if ( v56 == RtlpHpSegLfhAllocate )
      v57 = RtlpHpSegLfhAllocate(Value, v23, 0LL, a3);
    else
      v57 = v56(Value, v23, 0LL, a3);
    v26 = (PSLIST_ENTRY)v57;
    if ( !v57 )
      goto LABEL_65;
    v27 = 0;
  }
  if ( (RtlpHpLfhPerfFlags & 2) != 0 && v61 )
  {
    v28 = v60;
    v29 = v23;
  }
  else
  {
    v28 = v60;
    if ( (RtlpHpAppCompatFlags & 4) != 0 )
    {
      v29 = v23;
    }
    else
    {
      v29 = 2 * v60;
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
  }
  if ( v27 && *((_BYTE *)&v26[2].Next + 13) > 1u )
    v7 = -(__int64)((unsigned __int64)v27 >> 12);
  if ( v27 < v29 )
  {
    v52 = a1->Value;
    v53 = (__int64 (__fastcall *)(unsigned __int64, PSLIST_ENTRY, _QWORD, __int64))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[3].Value);
    if ( (char *)v53 == (char *)RtlpHpSegLfhVsCommit )
      v54 = RtlpHpSegLfhVsCommit(v52, v26, v29);
    else
      v54 = v53(v52, v26, v29, v28);
    if ( v54 < 0 )
    {
      ((void (__fastcall *)(unsigned __int64, PSLIST_ENTRY, _QWORD, _QWORD))((unsigned __int64)a1 ^ RtlpHeapKey ^ a1[2].Value))(
        a1->Value,
        v26,
        v23,
        a3);
      goto LABEL_65;
    }
    LODWORD(v28) = v60;
  }
  if ( v29 != v23 )
    v7 += (unsigned __int64)v29 >> 12;
  if ( v7 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1[8].Value + 24), v7);
  if ( v29 == 4096 )
  {
    v31 = v23 >> 12;
    v63 = v23 >> 12;
  }
  else
  {
    v31 = v23 / v29;
    v63 = v23 / v29;
  }
  v32 = (v23
       - ((2
         * (v31
          + 4 * (unsigned int)(((unsigned __int64)(2 * ((8 * (v23 - 2 * v31) - 384) / (8 * (int)v28 + 1))) + 63) >> 6))
         + 63) & 0xFFFFFFF0))
      / (unsigned int)v28;
  memset(v26, 0, 0x30uLL);
  v33 = v63;
  v34 = 2 * v32;
  *((_QWORD *)&v26[1].Next + 1) = 0LL;
  LOWORD(v26[2].Next) = v32;
  WORD1(v26[2].Next) = v32;
  BYTE6(v26[2].Next) = 2;
  *((_BYTE *)&v26[2].Next + 13) = v63;
  HIWORD(v64) = (2 * (v63 + 4 * ((v34 + 63) >> 6)) + 63) & 0xFFF0;
  LOWORD(v64) = v60;
  *((_DWORD *)&v26[2].Next + 2) = RtlpLFHKey ^ v64 ^ ((unsigned int)v26 >> 12);
  _BitScanForward(&v35, v29);
  v36 = (unsigned __int16)(8 * (((v34 + 63) >> 6) + 6));
  *((_WORD *)&v26[2].Next + 7) = v36;
  v37 = (_WORD *)((char *)v26 + v36);
  *((_BYTE *)&v26[2].Next + 12) = v35;
  v38 = v37 + 1;
  *v37 = 0;
  v39 = &v37[v33];
  v40 = (2 * (unsigned __int64)v33 - 2 + 1) >> 1;
  if ( v38 > v39 )
    v40 = 0LL;
  if ( v40 )
  {
    while ( v40 )
    {
      *v38++ = -1;
      --v40;
    }
  }
  memset(&v26[3], 0, (v34 + 7) >> 3);
  v44 = (2 * (_BYTE)v32) & 0x3F;
  if ( ((2 * (_BYTE)v32) & 0x3F) != 0 )
    *((_QWORD *)&v26[3].Next + (v34 >> 6)) |= ~((1LL << v44) - 1);
  LowFragHeapDataSlot = NtCurrentTeb()->LowFragHeapDataSlot;
  v46 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32(v44, v41, v42, v43) << 32;
  RtlpLowFragHeapRandomData[(unsigned __int8)LowFragHeapDataSlot >> 3] = (v46 | (unsigned int)RtlpHeapGenerateRandomValue32(
                                                                                                v48,
                                                                                                v47,
                                                                                                v49,
                                                                                                v50)) & 0x7F7F7F7F7F7F7F7FLL;
  _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), WORD1(v26[2].Next));
  v3 = v26;
LABEL_65:
  if ( !v59 )
    RtlReleaseSRWLockShared(a1 + 9);
  return v3;
}
