/*
 * XREFs of BuildReadWriteCommand @ 0x1C0006F74
 * Callers:
 *     MdlToPrp @ 0x1C0006A1C (MdlToPrp.c)
 *     ScsiReadWriteRequest @ 0x1C0008DE4 (ScsiReadWriteRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011E70 (__security_check_cookie.c)
 *     memset @ 0x1C0012380 (memset.c)
 */

__int64 __fastcall BuildReadWriteCommand(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4, __int64 a5)
{
  _DWORD *v5; // r12
  __int64 v10; // r15
  __int16 v11; // cx
  unsigned int v12; // eax
  unsigned int v13; // r8d
  unsigned __int8 v14; // al
  __int64 result; // rax
  int v16; // ecx
  int v17; // [rsp+20h] [rbp-40h]
  int v18; // [rsp+24h] [rbp-3Ch]
  _DWORD v19[10]; // [rsp+30h] [rbp-30h] BYREF

  v5 = (_DWORD *)(a2 + 60);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v10 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v10 = *(unsigned __int8 *)(a2 + 7);
    v5 = (_DWORD *)(a2 + 16);
  }
  if ( *a3 == 40 )
    goto LABEL_19;
  if ( *a3 != 42 )
  {
    if ( *a3 != 136 )
    {
      if ( *a3 != 138 )
        goto LABEL_20;
      goto LABEL_7;
    }
LABEL_19:
    *(_BYTE *)a5 = 2;
    goto LABEL_20;
  }
LABEL_7:
  *(_BYTE *)a5 = 1;
  if ( (*(_BYTE *)(a1 + 3240) & 3) != 3
    || *(unsigned __int8 *)(a1 + 3241) != (_DWORD)v10
    || !*(_WORD *)(a1 + 3244)
    || (memset((char *)v19 + 2, 0, 0x26uLL),
        LOWORD(v19[0]) = 1,
        (unsigned int)StorPortExtendedFunction(28LL, a1, a2, v19))
    || (v19[2] & 0x100) == 0
    || (v11 = v19[3], (unsigned int)(v19[3] - 1) > 0xFFFE)
    || v19[3] > (unsigned int)*(unsigned __int16 *)(a1 + 3244) )
  {
    v11 = 0;
  }
  if ( v11 )
  {
    v12 = *(_DWORD *)(a5 + 48) & 0xFF1FFFFF;
    *(_WORD *)(a5 + 54) = v11;
    *(_DWORD *)(a5 + 48) = v12 | 0x100000;
  }
LABEL_20:
  *(_DWORD *)a5 &= 0xFFFFFCFF;
  *(_DWORD *)(a5 + 4) = v10 + 1;
  *(_QWORD *)(a5 + 16) = 0LL;
  v13 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 1184) + 52LL) + *v5 - 1)
      / *(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 1184) + 52LL);
  if ( a4 == 16 )
  {
    HIBYTE(v18) = a3[2];
    BYTE2(v18) = a3[3];
    BYTE1(v18) = a3[4];
    BYTE2(v17) = a3[7];
    LOBYTE(v18) = a3[5];
    BYTE1(v17) = a3[8];
    v14 = a3[9];
    HIBYTE(v17) = a3[6];
  }
  else
  {
    HIBYTE(v17) = a3[2];
    BYTE2(v17) = a3[3];
    BYTE1(v17) = a3[4];
    v14 = a3[5];
    v18 = 0;
  }
  LOBYTE(v17) = v14;
  *(_DWORD *)(a5 + 40) = v17;
  *(_WORD *)(a5 + 48) = v13 - 1;
  *(_DWORD *)(a5 + 48) &= 0xC3FFFFFF;
  *(_DWORD *)(a5 + 44) = v18;
  result = *(_DWORD *)(a5 + 48) & 0x3FFFFFFF;
  v16 = result | ((a3[1] & 8) << 27);
  *(_BYTE *)(a5 + 52) = 0;
  *(_QWORD *)(a5 + 56) = 0LL;
  *(_DWORD *)(a5 + 48) = v16;
  return result;
}
