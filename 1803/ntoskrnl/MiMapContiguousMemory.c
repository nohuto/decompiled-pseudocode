/*
 * XREFs of MiMapContiguousMemory @ 0x14013A054
 * Callers:
 *     MiAllocateContiguousMemory @ 0x1400BE350 (MiAllocateContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x14013A010 (MmMapIoSpaceEx.c)
 * Callees:
 *     MiFillSystemPtes @ 0x14010B150 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140110560 (MiReleasePtes.c)
 *     MiMappingHasIoReferences @ 0x14013CCF0 (MiMappingHasIoReferences.c)
 *     MiMapContiguousMemoryLarge @ 0x140177CFC (MiMapContiguousMemoryLarge.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiInsertPteTracker @ 0x14026CEA4 (MiInsertPteTracker.c)
 */

__int64 __fastcall MiMapContiguousMemory(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // esi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // ebp
  unsigned int v14; // r15d
  ULONG_PTR v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // r14d
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // [rsp+30h] [rbp-98h] BYREF
  __int64 v22; // [rsp+38h] [rbp-90h]
  _BYTE v23[16]; // [rsp+40h] [rbp-88h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-78h]
  __int64 v25; // [rsp+58h] [rbp-70h]
  unsigned __int64 v26; // [rsp+60h] [rbp-68h]
  int v27; // [rsp+6Ch] [rbp-5Ch]
  unsigned __int64 v28; // [rsp+70h] [rbp-58h]

  v5 = a3;
  if ( a3 == -1 )
    return 0LL;
  if ( a3 == 24 )
    return 0LL;
  if ( (a3 & 5) == 5 )
    return 0LL;
  if ( (a3 & 0xFFFFFFF8) == 0x10 )
    return 0LL;
  v8 = a2 + a1;
  if ( v8 <= a1 )
  {
    if ( v8 )
      return 0LL;
  }
  v9 = a1;
  v10 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  if ( v8 > a1 )
    v9 = a1;
  v11 = v9 >> 12;
  v12 = v11 & 0xFFFFFFFFFLL;
  if ( v11 < 0x1000000000LL )
    v12 = v11;
  v22 = v12;
  if ( (a3 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    v5 = a3 & 0xFFFFFFFD;
  v21 = 0;
  if ( (a1 & 0x1FFFFF) == 0 && a2 >= 0x200000 )
  {
    v13 = a4 & 1;
    if ( (a4 & 1) == 0 )
    {
      v16 = MiMapContiguousMemoryLarge(v12, ((a1 & 0xFFF) + a2 + 4095) >> 12, v5, a4, (__int64)&v21);
      if ( v16 )
        goto LABEL_20;
    }
  }
  v13 = a4 & 1;
  if ( (a4 & 1) != 0 && (_DWORD)v10 == -1 )
    return 0LL;
  v14 = v10 + 1;
  if ( (a4 & 1) == 0 )
    v14 = ((a1 & 0xFFF) + a2 + 4095) >> 12;
  v15 = MiReservePtes((__int64)&qword_1403CC5E0, v14);
  if ( !v15 )
    return 0LL;
  if ( (int)MiFillSystemPtes(v15, ((a1 & 0xFFF) + a2 + 4095) >> 12, v22, v5, a4, &v21) < 0 )
  {
    MiReleasePtes((__int64)&qword_1403CC5E0, v15, v14);
    return 0LL;
  }
  v16 = (a1 & 0xFFF) + ((__int64)(v15 << 25) >> 16);
LABEL_20:
  v17 = v21 & 1;
  if ( (v21 & 1) != 0 )
    MiMappingHasIoReferences(v16);
  if ( (dword_14044B16C & 1) != 0 )
  {
    v25 = v16;
    v28 = a1 >> 12;
    v19 = v17 | 2;
    v24 = a2;
    v20 = 1LL;
    v26 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v27 = a1 & 0xFFF;
    if ( !v13 )
      v19 = v17;
    if ( v5 >> 3 == 1 )
    {
      v20 = 0LL;
    }
    else if ( v5 >> 3 == 3 && (v5 & 7) != 0 )
    {
      v20 = 2LL;
    }
    MiInsertPteTracker(v23, 1LL, v19, v20);
  }
  return v16;
}
