/*
 * XREFs of BuildReadWriteCommand @ 0x1C00073B0
 * Callers:
 *     MdlToPrp @ 0x1C0006E34 (MdlToPrp.c)
 *     ScsiReadWriteRequest @ 0x1C0009324 (ScsiReadWriteRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00138B0 (__security_check_cookie.c)
 *     memset @ 0x1C0013D00 (memset.c)
 */

__int64 __fastcall BuildReadWriteCommand(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4, __int64 a5, int a6)
{
  _DWORD *v10; // r12
  __int64 v11; // r15
  __int16 v12; // cx
  unsigned int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned __int8 v16; // al
  __int64 result; // rax
  int v18; // ecx
  int v19; // [rsp+20h] [rbp-40h]
  int v20; // [rsp+24h] [rbp-3Ch]
  _DWORD v21[10]; // [rsp+28h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v10 = (_DWORD *)(a2 + 60);
    v11 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v11 = *(unsigned __int8 *)(a2 + 7);
    v10 = (_DWORD *)(a2 + 16);
  }
  if ( *a3 == 40 )
    goto LABEL_18;
  if ( *a3 != 42 )
  {
    if ( *a3 != 136 )
    {
      if ( *a3 != 138 )
        goto LABEL_19;
      goto LABEL_8;
    }
LABEL_18:
    *(_BYTE *)a5 = 2;
    goto LABEL_19;
  }
LABEL_8:
  *(_BYTE *)a5 = 1;
  if ( (*(_BYTE *)(a1 + 3240) & 3) != 3
    || *(unsigned __int8 *)(a1 + 3241) != (_DWORD)v11
    || !*(_WORD *)(a1 + 3244)
    || (memset((char *)v21 + 2, 0, 0x26uLL),
        LOWORD(v21[0]) = 1,
        (unsigned int)StorPortExtendedFunction(28LL, a1, a2, v21))
    || (v21[2] & 0x100) == 0
    || (v12 = v21[3], (unsigned int)(v21[3] - 1) > 0xFFFE)
    || v21[3] > (unsigned int)*(unsigned __int16 *)(a1 + 3244) )
  {
    v12 = 0;
  }
  if ( v12 )
  {
    v13 = *(_DWORD *)(a5 + 48) & 0xFF1FFFFF;
    *(_WORD *)(a5 + 54) = v12;
    *(_DWORD *)(a5 + 48) = v13 | 0x100000;
  }
LABEL_19:
  *(_DWORD *)a5 &= 0xFFFFFCFF;
  *(_DWORD *)(a5 + 4) = a6;
  *(_QWORD *)(a5 + 16) = 0LL;
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v11 + 1184) + 52LL);
  v15 = (v14 + *v10 - 1) / v14;
  if ( a4 == 16 )
  {
    HIBYTE(v20) = a3[2];
    BYTE2(v20) = a3[3];
    BYTE1(v20) = a3[4];
    BYTE2(v19) = a3[7];
    LOBYTE(v20) = a3[5];
    BYTE1(v19) = a3[8];
    v16 = a3[9];
    HIBYTE(v19) = a3[6];
  }
  else
  {
    HIBYTE(v19) = a3[2];
    BYTE2(v19) = a3[3];
    BYTE1(v19) = a3[4];
    v16 = a3[5];
    v20 = 0;
  }
  LOBYTE(v19) = v16;
  *(_DWORD *)(a5 + 40) = v19;
  *(_WORD *)(a5 + 48) = v15 - 1;
  *(_DWORD *)(a5 + 48) &= 0xC3FFFFFF;
  *(_DWORD *)(a5 + 44) = v20;
  result = *(_DWORD *)(a5 + 48) & 0x3FFFFFFF;
  v18 = result | ((a3[1] & 8) << 27);
  *(_BYTE *)(a5 + 52) = 0;
  *(_QWORD *)(a5 + 56) = 0LL;
  *(_DWORD *)(a5 + 48) = v18;
  return result;
}
