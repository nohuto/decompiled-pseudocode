/*
 * XREFs of PfpMemoryListQuery @ 0x1400365BC
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x1400DD920 (MmQueryMemoryListInformation.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 */

__int64 __fastcall PfpMemoryListQuery(__int64 a1, char a2, _DWORD *a3)
{
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-C8h]
  __int64 v10; // [rsp+38h] [rbp-C0h]
  __int64 v11; // [rsp+40h] [rbp-B8h]
  __int64 v12; // [rsp+48h] [rbp-B0h]
  __int64 v13; // [rsp+58h] [rbp-A0h]
  __int64 v14; // [rsp+60h] [rbp-98h]
  __int64 v15; // [rsp+68h] [rbp-90h]
  __int64 v16; // [rsp+70h] [rbp-88h]
  __int64 v17; // [rsp+78h] [rbp-80h]
  __int64 v18; // [rsp+80h] [rbp-78h]
  __int64 v19; // [rsp+88h] [rbp-70h]
  __int64 v20; // [rsp+90h] [rbp-68h]
  __int64 v21; // [rsp+100h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 24) < 0x40u )
  {
    v7 = -1073741789;
    *a3 = 64;
  }
  else
  {
    MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, (__int64)&v21);
    v6 = *(_QWORD *)(a1 + 16);
    v7 = 0;
    if ( a2 )
      ProbeForWrite(*(volatile void **)(a1 + 16), *(unsigned int *)(a1 + 24), 8u);
    *(_DWORD *)v6 = 1;
    *(_DWORD *)(v6 + 4) = 64;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)(v6 + 16) &= 0xFFFFFFFFFFFFFF00uLL;
    *(_QWORD *)(v6 + 24) = v16 + v15 + v14 + v13 + v17;
    *(_QWORD *)(v6 + 32) = v18;
    *(_QWORD *)(v6 + 40) = v20 + v19;
    *(_QWORD *)(v6 + 48) = v9 + v10;
    *(_QWORD *)(v6 + 56) = v12 + v11;
    *a3 = 64;
  }
  return v7;
}
