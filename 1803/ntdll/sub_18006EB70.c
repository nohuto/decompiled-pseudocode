/*
 * XREFs of sub_18006EB70 @ 0x18006EB70
 * Callers:
 *     sub_1800309A4 @ 0x1800309A4 (sub_1800309A4.c)
 *     sub_18003185C @ 0x18003185C (sub_18003185C.c)
 *     RtlpQueryDefaultUILanguage @ 0x18006EA40 (RtlpQueryDefaultUILanguage.c)
 * Callees:
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_180032BDC @ 0x180032BDC (sub_180032BDC.c)
 *     sub_18006F31C @ 0x18006F31C (sub_18006F31C.c)
 */

__int64 __fastcall sub_18006EB70(__int64 a1, unsigned int a2, __int64 *a3, int a4, char a5)
{
  int v8; // edx
  __int64 v10; // rax
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  if ( a3 && a1 && a2 <= 1 && (unsigned int)(a4 - 2) <= 1 )
  {
    if ( a5 && a4 == 3 )
    {
      v8 = sub_180031B44(a1, a2);
      if ( v8 >= 0 )
      {
        if ( a2 == 1 )
        {
          *a3 = *(_QWORD *)(a1 + 64);
        }
        else if ( !a2 )
        {
          *a3 = *(_QWORD *)(a1 + 56);
        }
      }
      return (unsigned int)v8;
    }
    v8 = sub_18006F31C(a1, a2, a2, a4, (__int64)&v11, (__int64)a3);
    if ( !*a3 )
    {
      v10 = sub_180032BDC(1, a2 != 1, a1);
      *a3 = v10;
      if ( !v10 )
        return (unsigned int)-1073741801;
      v8 = 0;
    }
    if ( v8 && v8 != -1073741801 && v11 )
      return 0;
    return (unsigned int)v8;
  }
  return 3221225485LL;
}
