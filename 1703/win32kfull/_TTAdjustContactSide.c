/*
 * XREFs of _TTAdjustContactSide @ 0x1C023B95C
 * Callers:
 *     TouchTargetingCreateContact @ 0x1C023A850 (TouchTargetingCreateContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TTAdjustContactSide(int a1, int *a2, _DWORD *a3, int a4)
{
  int v4; // esi
  int v6; // edi
  int v8; // r10d
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rax
  int v12; // r8d
  int v13; // r11d

  v4 = *a2;
  v6 = *a3 - *a2;
  v8 = v6;
  v9 = a4 * (__int64)v6 / 1000;
  result = v9 + 0x80000000LL;
  if ( (unsigned __int64)(v9 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    if ( !(_DWORD)v9 )
    {
      v11 = 700000LL;
      goto LABEL_8;
    }
    if ( (int)v9 < 400 )
    {
      v11 = 400000LL;
      goto LABEL_8;
    }
    if ( (int)v9 <= 1100 )
      goto LABEL_10;
  }
  v11 = 1100000LL;
LABEL_8:
  v8 = 0x7FFFFFFF;
  result = v11 / a4;
  if ( (unsigned __int64)(result + 0x80000000LL) <= 0xFFFFFFFF )
    v8 = result;
LABEL_10:
  if ( a1 == *a3 || a1 == v4 )
  {
    result = (unsigned int)(v8 / 2);
    v13 = a1 - result;
    goto LABEL_15;
  }
  if ( v6 != v8 )
  {
    v12 = (a1 - v4) * (100 * v8 / v6);
    result = (unsigned int)((unsigned __int64)(1374389535LL * v12) >> 32) >> 31;
    v13 = a1 - v12 / 100;
LABEL_15:
    *a2 = v13;
  }
  *a3 = v8 + *a2;
  return result;
}
