/*
 * XREFs of sub_18001182C @ 0x18001182C
 * Callers:
 *     sub_180012070 @ 0x180012070 (sub_180012070.c)
 *     sub_18005DDCC @ 0x18005DDCC (sub_18005DDCC.c)
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 *     sub_18005EF74 @ 0x18005EF74 (sub_18005EF74.c)
 *     sub_18005F64C @ 0x18005F64C (sub_18005F64C.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 * Callees:
 *     sub_18005E47C @ 0x18005E47C (sub_18005E47C.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemoryEx @ 0x18009B930 (ZwAllocateVirtualMemoryEx.c)
 *     sub_180102438 @ 0x180102438 (sub_180102438.c)
 */

__int64 __fastcall sub_18001182C(__int64 *a1, __int64 *a2, int a3, int a4, int a5, __int128 *a6, __int64 a7)
{
  __int128 v7; // xmm0
  unsigned int v8; // edi
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // [rsp+40h] [rbp-41h] BYREF
  __int64 v19; // [rsp+48h] [rbp-39h]
  __int64 v20; // [rsp+50h] [rbp-31h]
  __int128 v21; // [rsp+58h] [rbp-29h]
  __int64 v22; // [rsp+78h] [rbp-9h] BYREF
  int v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+84h] [rbp+3h]

  v22 = 0x100000001000LL;
  v7 = *a6;
  v23 = 0x200000;
  v24 = 0x40000000;
  v8 = a4 & 0xFEFFFFFF;
  v21 = v7;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v11 = *a2;
    if ( (a4 & 0x2000) != 0 )
    {
      v17 = *((unsigned int *)&v22 + BYTE1(v21));
      v12 = v17 - ((v11 + v17 - 1) & (unsigned int)(v17 - 1)) + v11 - 1;
    }
    else
    {
      v12 = v11 - ((v11 - 1) & 0xFFF) + 4095;
    }
    v22 = v12;
    if ( (a4 & 0x1000) != 0 && BYTE1(v21) >= 2u )
    {
      *a2 = v12;
      goto LABEL_10;
    }
    if ( (a4 & 0x2000) != 0 && (v21 & 8) != 0 )
      v8 = a4 & 0xFEFBFFFF | 0x40000;
    if ( (v8 & 0x2000) != 0 )
    {
      v20 = 0LL;
      *(_QWORD *)&v21 = 1LL;
      v18 = 0LL;
      v19 = 0LL;
      *((_QWORD *)&v21 + 1) = &v18;
      if ( (v8 & 0x40000) != 0 )
        v18 = 0x100000000LL;
    }
    v13 = ZwAllocateVirtualMemoryEx(-1LL, a1, &v22);
    if ( v13 >= 0 )
    {
      *a2 = v22;
LABEL_10:
      v13 = 0;
    }
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    if ( BYTE3(v21) )
      LODWORD(v18) = BYTE3(v21) - 1;
    else
      LODWORD(v18) = -1;
    HIDWORD(v18) = BYTE1(v21);
    LODWORD(v19) = BYTE2(v21);
    if ( (v21 & 8) != 0 )
      HIDWORD(v19) |= 1u;
    v15 = *a2;
    v20 = *((_QWORD *)&v21 + 1);
    v22 = v15 - ((v15 - 1) & 0xFFFFF) + 0xFFFFF;
    v16 = sub_18005E47C((unsigned int)&unk_18015D880, (unsigned int)&v22, a3, (unsigned int)&v18, a7);
    if ( v16 )
    {
      *a2 = v22;
      *a1 = v16;
      goto LABEL_10;
    }
    v13 = -1073741670;
  }
  if ( (byte_18015D028 & 8) != 0 )
    sub_180102438(v8, *a2, *a1, (unsigned int)v13);
  return (unsigned int)v13;
}
