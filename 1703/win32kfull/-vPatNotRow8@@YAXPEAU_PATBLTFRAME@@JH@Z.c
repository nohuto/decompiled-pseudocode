/*
 * XREFs of ?vPatNotRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02A33A0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchNotAndCopy @ 0x1C02B6DF8 (vFetchNotAndCopy.c)
 *     vFetchShiftNotAndCopy @ 0x1C02B6F3C (vFetchShiftNotAndCopy.c)
 */

void __fastcall vPatNotRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  _DWORD *v3; // r13
  int v4; // r15d
  __int64 v6; // r14
  int v7; // r9d
  int v8; // edi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r12
  signed int v12; // eax
  int v13; // r10d
  int v14; // r11d
  unsigned int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h]
  unsigned int v20; // [rsp+30h] [rbp-20h]
  unsigned int v21; // [rsp+34h] [rbp-1Ch]
  unsigned int v22; // [rsp+38h] [rbp-18h]
  unsigned int v23; // [rsp+3Ch] [rbp-14h]
  int v24; // [rsp+98h] [rbp+48h]
  int v25; // [rsp+A0h] [rbp+50h]

  v3 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = a3;
  v6 = *(_QWORD *)a1 + a2 * *((_DWORD *)a1 + 4);
  v7 = a2 - *((_DWORD *)a1 + 9);
  if ( v7 >= 0 )
    v8 = (unsigned int)v7 % *((_DWORD *)a1 + 11);
  else
    v8 = *((_DWORD *)a1 + 11) - (unsigned int)~v7 % *((_DWORD *)a1 + 11) - 1;
  v9 = *((_QWORD *)a1 + 1) + v8 * *((_DWORD *)a1 + 5);
  v19 = v9;
  if ( a3 )
  {
    do
    {
      v10 = (*((_DWORD *)a1 + 12) * *v3) & 0xFFFFFFFC;
      v11 = (*((_DWORD *)a1 + 12) * v3[1]) & 0xFFFFFFFC;
      v12 = ((*((_DWORD *)a1 + 12) * *v3) & 0xFFFFFFFC) - *((_DWORD *)a1 + 8);
      v13 = aulLeftMask[(*((_BYTE *)a1 + 48) * *(_BYTE *)v3) & 3];
      v25 = (*((_BYTE *)a1 + 48) * *((_BYTE *)v3 + 4)) & 3;
      v14 = ~aulLeftMask[(*((_BYTE *)a1 + 48) * *((_BYTE *)v3 + 4)) & 3];
      v24 = v14;
      if ( v12 >= 0 )
        v15 = (unsigned int)v12 % *((_DWORD *)a1 + 10);
      else
        v15 = *((_DWORD *)a1 + 10) - (unsigned int)~v12 % *((_DWORD *)a1 + 10) - 1;
      if ( (_DWORD)v10 == (_DWORD)v11 )
      {
        v20 = v15;
        *(_DWORD *)(v10 + v6) = *(_DWORD *)(v10 + v6) & ~(v14 & v13) | v14 & v13 & *(_DWORD *)(v15 + v9);
      }
      else
      {
        if ( ((*((_BYTE *)a1 + 48) * *(_BYTE *)v3) & 3) != 0 )
        {
          v20 = v15;
          *(_DWORD *)(v10 + v6) = *(_DWORD *)(v10 + v6) & ~v13 | v13 & ~*(_DWORD *)(v15 + v9);
          LODWORD(v10) = v10 + 4;
          v15 += 4;
        }
        v16 = (unsigned int)(v11 - v10) >> 2;
        v22 = v16;
        if ( v16 )
        {
          v17 = *((_DWORD *)a1 + 10);
          v21 = v17;
          v18 = v6 + (unsigned int)v10;
          v15 %= v17;
          v20 = v15;
          v23 = v17;
          if ( (((unsigned __int8)v15 | (unsigned __int8)v17) & 3) != 0 )
          {
            vFetchShiftNotAndCopy(&v18);
          }
          else
          {
            v23 = v17 >> 2;
            vFetchNotAndCopy(&v18);
          }
          v14 = v24;
          v9 = v19;
          v16 = v22;
        }
        if ( v25 )
          *(_DWORD *)(v11 + v6) = *(_DWORD *)(v11 + v6) & ~v14 | v14 & ~*(_DWORD *)(((int)v15 + 4
                                                                                              * (unsigned __int64)v16)
                                                                                  % *((unsigned int *)a1 + 10)
                                                                                  + v9);
      }
      if ( ++v8 == *((_DWORD *)a1 + 11) )
      {
        v9 = *((_QWORD *)a1 + 1);
        v8 = 0;
      }
      else
      {
        v9 += *((int *)a1 + 5);
      }
      v6 += *((int *)a1 + 4);
      v19 = v9;
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
}
