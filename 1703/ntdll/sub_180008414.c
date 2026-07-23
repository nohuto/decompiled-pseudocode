/*
 * XREFs of sub_180008414 @ 0x180008414
 * Callers:
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 *     RtlWalkHeap @ 0x180007280 (RtlWalkHeap.c)
 *     sub_1800080CC @ 0x1800080CC (sub_1800080CC.c)
 *     sub_1800FECE0 @ 0x1800FECE0 (sub_1800FECE0.c)
 * Callees:
 *     sub_18000853C @ 0x18000853C (sub_18000853C.c)
 *     sub_180009380 @ 0x180009380 (sub_180009380.c)
 *     sub_1800588D4 @ 0x1800588D4 (sub_1800588D4.c)
 *     sub_180093A28 @ 0x180093A28 (sub_180093A28.c)
 *     sub_180102ACC @ 0x180102ACC (sub_180102ACC.c)
 */

__int64 __fastcall sub_180008414(__int64 a1, __int64 *a2, __int64 a3)
{
  char v3; // bp
  unsigned int v7; // edi
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  int v16; // eax

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return (unsigned int)sub_180093A28((PVOID)a1);
  if ( (dword_180158684 & 2) != 0 )
  {
    v10 = *a2;
    if ( !*a2 )
      goto LABEL_7;
    if ( (*((_BYTE *)a2 + 18) & 1) != 0 )
    {
      if ( (_WORD)v10 )
        v12 = 0;
      else
        v12 = sub_1800588D4(&stru_180159600);
      if ( !v12 )
        v10 -= 16LL;
      *a2 = v10;
    }
  }
  if ( *a2 )
  {
    if ( (unsigned __int16)*a2 ? 0 : sub_1800588D4(&stru_180159600) )
    {
LABEL_12:
      if ( *a2 )
      {
        v13 = (__int64 *)sub_180009380(a1);
        v9 = 0LL;
        if ( v13 )
        {
          v9 = *v13;
          if ( !*v13 )
          {
            v9 = v13[1];
            if ( !v9 )
            {
              while ( v13 != *(__int64 **)(a1 + 56) )
              {
                v14 = v13[2] & 0xFFFFFFFFFFFFFFFCuLL;
                if ( v13 != *(__int64 **)(v14 + 8) && *(_QWORD *)(v14 + 8) )
                {
                  v9 = *(_QWORD *)(v14 + 8);
                  goto LABEL_38;
                }
                v13 = (__int64 *)(v13[2] & 0xFFFFFFFFFFFFFFFCuLL);
              }
              goto LABEL_14;
            }
          }
        }
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 56);
        if ( !v9 )
        {
LABEL_14:
          v7 = -2147483622;
          goto LABEL_8;
        }
      }
LABEL_38:
      sub_180102ACC(a1, v9, a2);
      v7 = 0;
      goto LABEL_8;
    }
  }
LABEL_7:
  LOBYTE(a3) = v3;
  v7 = sub_18000853C(a1, a2, a3);
  if ( v7 == -2147483622 )
  {
    *a2 = 0LL;
    goto LABEL_12;
  }
LABEL_8:
  if ( (dword_180158684 & 2) != 0 && v7 != -2147483622 && (*((_BYTE *)a2 + 18) & 1) != 0 )
  {
    v15 = *a2;
    if ( (unsigned __int16)*a2 )
      v16 = 0;
    else
      v16 = sub_1800588D4(&stru_180159600);
    if ( !v16 )
      v15 += 16LL;
    v11 = a2[1];
    *a2 = v15;
    if ( (dword_180158684 & 2) != 0 )
      v11 -= 16LL;
    a2[1] = v11;
  }
  return v7;
}
