/*
 * XREFs of MiMapContiguousMemory @ 0x1401199F4
 * Callers:
 *     MiAllocateContiguousMemory @ 0x140119418 (MiAllocateContiguousMemory.c)
 *     MmMapIoSpaceEx @ 0x1401199B0 (MmMapIoSpaceEx.c)
 * Callees:
 *     MiReleasePtes @ 0x140074F70 (MiReleasePtes.c)
 *     MiReservePtes @ 0x140099750 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14009ABD0 (MiFillSystemPtes.c)
 *     MiMappingHasIoReferences @ 0x140119C0C (MiMappingHasIoReferences.c)
 *     MiMapContiguousMemoryLarge @ 0x14014F27C (MiMapContiguousMemoryLarge.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiInsertPteTracker @ 0x1402345EC (MiInsertPteTracker.c)
 */

__int64 __fastcall MiMapContiguousMemory(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // esi
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  unsigned int v9; // ebp
  int v10; // r14d
  ULONG_PTR v11; // rdi
  unsigned __int64 v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // ebp
  __int64 v16; // r9
  int v17; // [rsp+30h] [rbp-A8h] BYREF
  int v18; // [rsp+34h] [rbp-A4h]
  __int64 v19; // [rsp+38h] [rbp-A0h]
  unsigned __int64 v20; // [rsp+40h] [rbp-98h]
  _BYTE v21[16]; // [rsp+48h] [rbp-90h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-80h]
  __int64 v23; // [rsp+60h] [rbp-78h]
  unsigned __int64 v24; // [rsp+68h] [rbp-70h]
  int v25; // [rsp+74h] [rbp-64h]
  unsigned __int64 v26; // [rsp+78h] [rbp-60h]

  v18 = a4;
  v4 = a3;
  if ( (_DWORD)a3 == -1 || (_DWORD)a3 == 24 || (a3 & 5) == 5 || (a3 & 0xFFFFFFF8) == 0x10 || a1 + a2 <= a1 && a1 + a2 )
    return 0LL;
  v19 = a1 & 0xFFF;
  v7 = (v19 + a2 + 4095) >> 12;
  v8 = a1 >> 12;
  v20 = a1 >> 12;
  if ( a1 >> 12 >= 0x1000000000LL )
    v8 &= 0xFFFFFFFFFuLL;
  if ( (a3 & 2) != 0 && (MiFlags & 0x10000) != 0 )
    v4 = a3 & 0xFFFFFFFD;
  v17 = 0;
  if ( (a1 & 0x1FFFFF) == 0 && a2 >= 0x200000 )
  {
    v10 = a4 & 1;
    if ( (a4 & 1) == 0 )
    {
      v13 = MiMapContiguousMemoryLarge(v8, ((a1 & 0xFFF) + a2 + 4095) >> 12, v4, a4, (__int64)&v17);
      if ( v13 )
        goto LABEL_14;
      LOBYTE(a4) = v18;
    }
  }
  v9 = v7;
  v10 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v9 = v7 + 1;
    if ( (_DWORD)v7 == -1 )
      return 0LL;
  }
  v11 = MiReservePtes((__int64)&qword_140389360, v9, a3);
  if ( !v11 )
    return 0LL;
  if ( (int)MiFillSystemPtes(v11, v7, v8, v4, v18, &v17) < 0 )
  {
    MiReleasePtes((__int64)&qword_140389360, v11, v9, v12);
    return 0LL;
  }
  v13 = v19 + ((__int64)(v11 << 25) >> 16);
LABEL_14:
  v14 = v17 & 1;
  if ( (v17 & 1) != 0 )
    MiMappingHasIoReferences(v13);
  if ( (dword_14040010C & 1) != 0 )
  {
    v26 = v20;
    v23 = v13;
    v24 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v25 = a1 & 0xFFF;
    if ( v10 )
      v14 |= 2u;
    v22 = a2;
    v16 = 1LL;
    if ( v4 >> 3 == 1 )
    {
      v16 = 0LL;
    }
    else if ( v4 >> 3 == 3 && (v4 & 7) != 0 )
    {
      v16 = 2LL;
    }
    MiInsertPteTracker(v21, 1LL, v14, v16);
  }
  return v13;
}
