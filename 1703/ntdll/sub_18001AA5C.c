/*
 * XREFs of sub_18001AA5C @ 0x18001AA5C
 * Callers:
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 * Callees:
 *     sub_18001BDBC @ 0x18001BDBC (sub_18001BDBC.c)
 *     sub_180021AE0 @ 0x180021AE0 (sub_180021AE0.c)
 *     sub_180039E20 @ 0x180039E20 (sub_180039E20.c)
 *     sub_18003AC90 @ 0x18003AC90 (sub_18003AC90.c)
 */

__int64 __fastcall sub_18001AA5C(PUNICODE_STRING a1, int a2, int a3, int a4, __int64 a5, _QWORD *a6, __int64 a7)
{
  int v10; // ebp
  int v11; // eax
  int v12; // ebx

  v10 = (int)a1;
  *a6 = 0LL;
  if ( (a3 & 0x20) != 0 )
  {
    v11 = sub_180021AE0(a1, 0LL, 0LL);
    goto LABEL_4;
  }
  if ( (a3 & 0x200) != 0 )
  {
    v11 = sub_180021AE0(0LL, a1, 0LL);
LABEL_4:
    v12 = v11;
    goto LABEL_5;
  }
  v12 = -1073741515;
LABEL_5:
  if ( v12 == -1073741515 )
  {
    v12 = sub_180039E20(v10, a2, a3, a4, a5, (__int64)a6, a7);
    if ( v12 >= 0 )
      return (unsigned int)sub_18003AC90(*(_QWORD *)(*a6 + 176LL));
  }
  else
  {
    sub_18001BDBC(*a6);
  }
  return (unsigned int)v12;
}
