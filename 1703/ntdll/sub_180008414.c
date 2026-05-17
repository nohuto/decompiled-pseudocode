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

__int64 __fastcall sub_180008414(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  char v3; // bp
  unsigned __int64 v6; // rdx
  unsigned int v8; // edi
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rax
  int v13; // eax
  __int64 *v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rsi
  int v17; // eax

  v3 = a3;
  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return (unsigned int)sub_180093A28(a1, a2, a3);
  if ( (dword_180158684 & 2) != 0 )
  {
    v11 = *a2;
    if ( !*a2 )
      goto LABEL_7;
    if ( (*((_BYTE *)a2 + 18) & 1) != 0 )
    {
      if ( (_WORD)v11 )
        v13 = 0;
      else
        v13 = sub_1800588D4(&qword_180159600, v11 >> 16, 1LL);
      if ( !v13 )
        v11 -= 16LL;
      *a2 = v11;
    }
  }
  v6 = *a2;
  if ( *a2 )
  {
    if ( (_WORD)v6 ? 0 : sub_1800588D4(&qword_180159600, v6 >> 16, 1LL) )
    {
LABEL_12:
      if ( *a2 )
      {
        v14 = (__int64 *)sub_180009380(a1);
        v10 = 0LL;
        if ( v14 )
        {
          v10 = *v14;
          if ( !*v14 )
          {
            v10 = v14[1];
            if ( !v10 )
            {
              while ( v14 != *(__int64 **)(a1 + 56) )
              {
                v15 = v14[2] & 0xFFFFFFFFFFFFFFFCuLL;
                if ( v14 != *(__int64 **)(v15 + 8) && *(_QWORD *)(v15 + 8) )
                {
                  v10 = *(_QWORD *)(v15 + 8);
                  goto LABEL_38;
                }
                v14 = (__int64 *)(v14[2] & 0xFFFFFFFFFFFFFFFCuLL);
              }
              goto LABEL_14;
            }
          }
        }
      }
      else
      {
        v10 = *(_QWORD *)(a1 + 56);
        if ( !v10 )
        {
LABEL_14:
          v8 = -2147483622;
          goto LABEL_8;
        }
      }
LABEL_38:
      sub_180102ACC(a1, v10, a2);
      v8 = 0;
      goto LABEL_8;
    }
  }
LABEL_7:
  LOBYTE(a3) = v3;
  v8 = sub_18000853C(a1, a2, a3);
  if ( v8 == -2147483622 )
  {
    *a2 = 0LL;
    goto LABEL_12;
  }
LABEL_8:
  if ( (dword_180158684 & 2) != 0 && v8 != -2147483622 && (*((_BYTE *)a2 + 18) & 1) != 0 )
  {
    v16 = *a2;
    if ( (unsigned __int16)*a2 )
      v17 = 0;
    else
      v17 = sub_1800588D4(&qword_180159600, v16 >> 16, 1LL);
    if ( !v17 )
      v16 += 16LL;
    v12 = a2[1];
    *a2 = v16;
    if ( (dword_180158684 & 2) != 0 )
      v12 -= 16LL;
    a2[1] = v12;
  }
  return v8;
}
