/*
 * XREFs of sub_18003BD44 @ 0x18003BD44
 * Callers:
 *     sub_18003C014 @ 0x18003C014 (sub_18003C014.c)
 * Callees:
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     RtlDeleteBoundaryDescriptor @ 0x180022070 (RtlDeleteBoundaryDescriptor.c)
 *     sub_18004A930 @ 0x18004A930 (sub_18004A930.c)
 *     sub_18004BD40 @ 0x18004BD40 (sub_18004BD40.c)
 *     sub_18004C4D8 @ 0x18004C4D8 (sub_18004C4D8.c)
 *     sub_18007FB7C @ 0x18007FB7C (sub_18007FB7C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 */

__int64 __fastcall sub_18003BD44(unsigned __int16 *a1, int a2, _QWORD *a3, _DWORD *a4, int a5)
{
  unsigned int v7; // ebx
  int v9; // eax
  _QWORD v10[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v11[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v13; // [rsp+78h] [rbp-88h]
  _WORD v14[128]; // [rsp+80h] [rbp-80h] BYREF

  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    v7 = sub_180021AE0(a1, 0LL, a5, (__int64)a3, a4);
  }
  else
  {
    v12 = 0x1000000;
    v13 = v14;
    v14[0] = 0;
    v10[0] = 0LL;
    v10[1] = 0LL;
    if ( (a5 & 0x200) != 0 )
      v9 = sub_18004A930((_DWORD)a1, (unsigned int)&v12, (unsigned int)v11, (unsigned int)v10, 0LL, a5);
    else
      v9 = sub_18004BD40((_DWORD)a1, a2, 0, 0, (__int64)&v12, (__int64)v11, (__int64)v10, 0LL, 0LL);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v7 = sub_180021AE0(v11, (unsigned __int16 *)v10, a5, (__int64)a3, a4);
      if ( v7 == -1073741515 )
        v7 = sub_18007FB7C(&v12, a3, a4);
    }
    sub_18004C4D8(v10);
    if ( v14 != v13 )
      RtlDeleteBoundaryDescriptor();
    v12 = 0x1000000;
    v13 = v14;
    v14[0] = 0;
  }
  if ( (dword_180155A10 & 9) != 0 )
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrfind.c",
      457,
      (unsigned int)"LdrpFindLoadedDllInternal",
      4,
      "Status: 0x%08lx\n",
      v7);
  return v7;
}
