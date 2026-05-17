/*
 * XREFs of sub_18000853C @ 0x18000853C
 * Callers:
 *     sub_180008414 @ 0x180008414 (sub_180008414.c)
 * Callees:
 *     sub_180007C18 @ 0x180007C18 (sub_180007C18.c)
 *     sub_180007F08 @ 0x180007F08 (sub_180007F08.c)
 *     sub_180008020 @ 0x180008020 (sub_180008020.c)
 *     sub_180008820 @ 0x180008820 (sub_180008820.c)
 *     sub_180020EF0 @ 0x180020EF0 (sub_180020EF0.c)
 *     sub_180100DA8 @ 0x180100DA8 (sub_180100DA8.c)
 */

__int64 __fastcall sub_18000853C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rax
  unsigned int v4; // edi
  __int64 *v7; // r15
  unsigned __int64 v8; // rsi
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+78h] [rbp+38h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+48h] BYREF

  v3 = *(__int64 **)a2;
  v4 = 0;
  if ( !*(_QWORD *)a2 )
  {
    *(_QWORD *)a2 = a1;
    *(_QWORD *)(a2 + 8) = 4096LL;
    *(_WORD *)(a2 + 18) = -32766;
    *(_QWORD *)(a2 + 24) = 4096LL;
    *(_BYTE *)(a2 + 17) = 0;
    *(_QWORD *)(a2 + 32) = a1;
    *(_QWORD *)(a2 + 40) = a1;
    return v4;
  }
  if ( v3 == (__int64 *)a1 )
  {
    v16 = (__int64 *)(a1 + 96);
    if ( (__int64 *)*v16 == v16 )
      return (unsigned int)-2147483622;
    v17 = *v16;
LABEL_25:
    sub_180007F08(a2, v17, a3);
    return v4;
  }
  if ( (*(_BYTE *)(a2 + 18) & 2) != 0 )
  {
    v7 = *(__int64 **)a2;
    if ( (_BYTE)a3 )
    {
      v8 = (unsigned __int64)(v3 + 8);
      goto LABEL_9;
    }
    v18 = a1 + 96;
LABEL_27:
    if ( *v7 == v18 )
      return (unsigned int)-2147483622;
    v17 = *v7;
    goto LABEL_25;
  }
  if ( !(_BYTE)a3 )
    return (unsigned int)-2147483622;
  v7 = (__int64 *)((unsigned __int64)v3 & 0xFFFFFFFFFFF00000uLL);
  if ( ((unsigned __int16)v3 & 0xFFF) != 0
    || (*(_BYTE *)(32LL * (unsigned int)(((unsigned __int64)v3 - ((unsigned __int64)v3 & 0xFFFFFFFFFFF00000uLL)) >> 12)
                 + ((unsigned __int64)v3 & 0xFFFFFFFFFFF00000uLL)
                 + 0x18) & 8) == 0 )
  {
    v8 = sub_180020EF0(0LL, *(_QWORD *)a2);
    v13 = *(_QWORD *)a2;
    v14 = (v8 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v8 - (v8 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
    if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
      v15 = sub_180007C18(a1 + 288, v14, v13, &v22, &v21, (__int64)v20);
    else
      v15 = sub_180008820((int)a1 + 176, v14, v13, (unsigned int)&v22, (__int64)&v21, (__int64)v20);
    *(_QWORD *)a2 = v15;
    if ( !v15 )
      goto LABEL_8;
    sub_180008020(a1, (__int64 *)a2, v22, v21, v20[0]);
    *(_WORD *)(a2 + 18) |= (*(_BYTE *)(v8 + 24) & 1) << 15;
  }
  else
  {
    v8 = (*(_QWORD *)a2 & 0xFFFFFFFFFFF00000uLL)
       + 32LL * (unsigned int)((*(_QWORD *)a2 - (*(_QWORD *)a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
    while ( 1 )
    {
LABEL_8:
      v8 += 32LL * *(unsigned __int8 *)(v8 + 27);
LABEL_9:
      if ( ((v8 >> 5) & 0x7FFF) >= 0x100 )
      {
        v18 = a1 + 96;
        goto LABEL_27;
      }
      if ( (*(_BYTE *)(v8 + 24) & 4) == 0 || (*(_BYTE *)(v8 + 24) & 0x10) != 0 )
      {
        *(_QWORD *)a2 = (v8 & 0xFFFFFFFFFFF00000uLL)
                      + ((unsigned int)((__int64)(v8 - (v8 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
        *(_WORD *)(a2 + 18) = 4096;
        *(_QWORD *)(a2 + 8) = (unsigned __int64)*(unsigned __int8 *)(v8 + 27) << 12;
        *(_WORD *)(a2 + 16) = 0;
        return v4;
      }
      v10 = (v8 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v8 - (v8 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
      if ( (*(_BYTE *)(v8 + 24) & 0x21) == 0 )
        break;
      v11 = (v8 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v8 - (v8 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
      if ( (*(_BYTE *)(v8 + 24) & 1) != 0 )
      {
        v19 = sub_180007C18(a1 + 288, v10, v11, &v22, &v21, (__int64)v20);
        *(_QWORD *)a2 = v19;
        if ( v19 )
        {
          sub_180008020(a1, (__int64 *)a2, v22, v21, v20[0]);
          *(_WORD *)(a2 + 18) |= 0x8000u;
          return v4;
        }
      }
      else
      {
        v12 = sub_180008820((int)a1 + 176, v10, v11, (unsigned int)&v22, (__int64)&v21, (__int64)v20);
        *(_QWORD *)a2 = v12;
        if ( v12 )
        {
          sub_180008020(a1, (__int64 *)a2, v22, v21, v20[0]);
          return v4;
        }
      }
    }
    *(_QWORD *)a2 = v10;
    sub_180100DA8(a1, a2);
  }
  return v4;
}
