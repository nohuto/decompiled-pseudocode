/*
 * XREFs of ?vPatCpyRow8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C029F2A0
 * Callers:
 *     <none>
 * Callees:
 *     vFetchAndCopy @ 0x1C02B0B14 (vFetchAndCopy.c)
 *     vFetchShiftAndCopy @ 0x1C02B0BF4 (vFetchShiftAndCopy.c)
 */

void __fastcall vPatCpyRow8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  __int64 v3; // r13
  int v4; // r15d
  __int64 v6; // r14
  int v7; // r9d
  int v8; // edi
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r12
  signed int v15; // eax
  int v16; // r10d
  int v17; // r11d
  unsigned int v18; // esi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h]
  unsigned int v23; // [rsp+30h] [rbp-20h]
  unsigned int v24; // [rsp+34h] [rbp-1Ch]
  unsigned int v25; // [rsp+38h] [rbp-18h]
  unsigned int v26; // [rsp+3Ch] [rbp-14h]
  int v27; // [rsp+98h] [rbp+48h]
  int v28; // [rsp+A0h] [rbp+50h]

  v3 = *((_QWORD *)a1 + 3);
  v4 = a3;
  v6 = *(_QWORD *)a1 + a2 * *((_DWORD *)a1 + 4);
  v7 = a2 - *((_DWORD *)a1 + 9);
  if ( v7 >= 0 )
    v8 = (unsigned int)v7 % *((_DWORD *)a1 + 11);
  else
    v8 = *((_DWORD *)a1 + 11) - (unsigned int)~v7 % *((_DWORD *)a1 + 11) - 1;
  v9 = *((_QWORD *)a1 + 1) + v8 * *((_DWORD *)a1 + 5);
  v22 = v9;
  if ( a3 )
  {
    do
    {
      v10 = *((_DWORD *)a1 + 12);
      v11 = (v10 * *(_DWORD *)v3) & 0xFFFFFFFC;
      v12 = ((_BYTE)v10 * *(_BYTE *)v3) & 3;
      v13 = ((_BYTE)v10 * *(_BYTE *)(v3 + 4)) & 3;
      v14 = (v10 * *(_DWORD *)(v3 + 4)) & 0xFFFFFFFC;
      v28 = ((_BYTE)v10 * *(_BYTE *)(v3 + 4)) & 3;
      v15 = ((v10 * *(_DWORD *)v3) & 0xFFFFFFFC) - *((_DWORD *)a1 + 8);
      v16 = aulLeftMask[v12];
      v17 = ~aulLeftMask[v13];
      v27 = v17;
      if ( v15 >= 0 )
        v18 = (unsigned int)v15 % *((_DWORD *)a1 + 10);
      else
        v18 = *((_DWORD *)a1 + 10) - (unsigned int)~v15 % *((_DWORD *)a1 + 10) - 1;
      if ( (_DWORD)v11 == (_DWORD)v14 )
      {
        v23 = v18;
        *(_DWORD *)(v11 + v6) = *(_DWORD *)(v11 + v6) & ~(v17 & v16) | v17 & v16 & *(_DWORD *)(v18 + v9);
      }
      else
      {
        if ( (_DWORD)v12 )
        {
          v23 = v18;
          *(_DWORD *)(v11 + v6) = *(_DWORD *)(v11 + v6) & ~v16 | v16 & *(_DWORD *)(v18 + v9);
          LODWORD(v11) = v11 + 4;
          v18 += 4;
        }
        v19 = (unsigned int)(v14 - v11) >> 2;
        v25 = v19;
        if ( v19 )
        {
          v24 = *((_DWORD *)a1 + 10);
          v20 = v18 % v24;
          v23 = v20;
          v21 = v6 + (unsigned int)v11;
          v18 %= v24;
          v26 = v24;
          if ( (((unsigned __int8)v20 | (unsigned __int8)v24) & 3) != 0 )
          {
            vFetchShiftAndCopy(&v21);
          }
          else
          {
            v26 = v24 >> 2;
            vFetchAndCopy(&v21, v20);
          }
          v17 = v27;
          v9 = v22;
          v19 = v25;
        }
        if ( v28 )
          *(_DWORD *)(v14 + v6) = *(_DWORD *)(v14 + v6) & ~v17 | v17 & *(_DWORD *)(((int)v18 + 4 * (unsigned __int64)v19)
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
      v22 = v9;
      v3 += 8LL;
      --v4;
    }
    while ( v4 );
  }
}
