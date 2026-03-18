/*
 * XREFs of ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1C023BF28
 * Callers:
 *     TouchTargetingCreateContact @ 0x1C023C7AC (TouchTargetingCreateContact.c)
 * Callees:
 *     <none>
 */

void __fastcall _TTAdjustContactSide(int a1, int *a2, int *a3, int a4)
{
  int v4; // esi
  int v6; // edi
  int v7; // r10d
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // r11d

  v4 = *a2;
  v6 = *a3 - *a2;
  v7 = v6;
  v8 = a4 * (__int64)v6 / 1000;
  if ( (unsigned __int64)(v8 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    if ( !(_DWORD)v8 )
    {
      v9 = 700000LL;
      goto LABEL_8;
    }
    if ( (int)v8 < 400 )
    {
      v9 = 400000LL;
      goto LABEL_8;
    }
    if ( (int)v8 <= 1100 )
      goto LABEL_10;
  }
  v9 = 1100000LL;
LABEL_8:
  v7 = 0x7FFFFFFF;
  v10 = v9 / a4;
  if ( (unsigned __int64)(v10 + 0x80000000LL) <= 0xFFFFFFFF )
    v7 = v10;
LABEL_10:
  if ( a1 == *a3 || a1 == v4 )
  {
    v11 = a1 - v7 / 2;
    goto LABEL_15;
  }
  if ( v6 != v7 )
  {
    v11 = a1 - (a1 - v4) * (100 * v7 / v6) / 100;
LABEL_15:
    *a2 = v11;
  }
  *a3 = v7 + *a2;
}
