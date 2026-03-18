/*
 * XREFs of BuildReadWriteCommand @ 0x1C00076A4
 * Callers:
 *     MdlToPrp @ 0x1C00070DC (MdlToPrp.c)
 *     ScsiReadWriteRequest @ 0x1C00096E0 (ScsiReadWriteRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall BuildReadWriteCommand(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4, __int64 a5, int a6)
{
  _DWORD *v10; // r15
  unsigned __int8 v11; // cl
  __int64 v12; // r12
  __int16 v13; // cx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned __int8 v17; // al
  __int64 result; // rax
  int v19; // ecx
  int v20; // [rsp+20h] [rbp-40h]
  int v21; // [rsp+24h] [rbp-3Ch]
  _DWORD v22[10]; // [rsp+28h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v10 = (_DWORD *)(a2 + 60);
    v11 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v11 = *(_BYTE *)(a2 + 7);
    v10 = (_DWORD *)(a2 + 16);
  }
  v12 = v11;
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
  if ( (*(_BYTE *)(a1 + 3288) & 3) != 3
    || *(unsigned __int8 *)(a1 + 3289) != v11
    || !*(_WORD *)(a1 + 3292)
    || (memset(v22, 0, sizeof(v22)), LOWORD(v22[0]) = 1, (unsigned int)StorPortExtendedFunction(28LL, a1, a2, v22))
    || (v22[2] & 0x100) == 0
    || (v13 = v22[3], (unsigned int)(v22[3] - 1) > 0xFFFE)
    || v22[3] > (unsigned int)*(unsigned __int16 *)(a1 + 3292) )
  {
    v13 = 0;
  }
  if ( v13 )
  {
    v14 = *(_DWORD *)(a5 + 48) & 0xFF1FFFFF;
    *(_WORD *)(a5 + 54) = v13;
    *(_DWORD *)(a5 + 48) = v14 | 0x100000;
  }
LABEL_19:
  *(_DWORD *)a5 &= 0xFFFFFCFF;
  *(_DWORD *)(a5 + 4) = a6;
  *(_QWORD *)(a5 + 16) = 0LL;
  v15 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v12 + 1224) + 52LL);
  v16 = (v15 + *v10 - 1) / v15;
  if ( a4 == 16 )
  {
    HIBYTE(v21) = a3[2];
    HIBYTE(v20) = a3[6];
    BYTE2(v21) = a3[3];
    BYTE2(v20) = a3[7];
    BYTE1(v21) = a3[4];
    BYTE1(v20) = a3[8];
    v17 = a3[9];
    LOBYTE(v21) = a3[5];
  }
  else
  {
    HIBYTE(v20) = a3[2];
    BYTE2(v20) = a3[3];
    BYTE1(v20) = a3[4];
    v17 = a3[5];
    v21 = 0;
  }
  LOBYTE(v20) = v17;
  *(_DWORD *)(a5 + 40) = v20;
  *(_WORD *)(a5 + 48) = v16 - 1;
  *(_DWORD *)(a5 + 48) &= 0xC3FFFFFF;
  *(_DWORD *)(a5 + 44) = v21;
  result = *(_DWORD *)(a5 + 48) & 0x3FFFFFFF;
  v19 = result | ((a3[1] & 8) << 27);
  *(_BYTE *)(a5 + 52) = 0;
  *(_QWORD *)(a5 + 56) = 0LL;
  *(_DWORD *)(a5 + 48) = v19;
  return result;
}
