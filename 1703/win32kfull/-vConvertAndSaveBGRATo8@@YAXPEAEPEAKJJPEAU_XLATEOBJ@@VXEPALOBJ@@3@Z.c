/*
 * XREFs of ?vConvertAndSaveBGRATo8@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02A07B0
 * Callers:
 *     <none>
 * Callees:
 *     ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C012BC20 (-XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z.c)
 *     ?XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z @ 0x1C012BC70 (-XLATEOBJ_pGetXlate555@@YAPEAEPEAU_XLATEOBJ@@@Z.c)
 */

unsigned __int8 __fastcall vConvertAndSaveBGRATo8(__int64 a1, unsigned int *a2, int a3, int a4, struct _XLATEOBJ *a5)
{
  __int64 v6; // rbx
  __int64 v8; // rsi
  unsigned __int8 *Xlate555; // r15
  unsigned __int8 result; // al
  unsigned __int8 *v11; // rdi
  __int64 i; // rbx

  v6 = a4;
  v8 = a3;
  Xlate555 = XLATEOBJ_pGetXlate555(a5);
  result = 0;
  if ( Xlate555 )
  {
    v11 = (unsigned __int8 *)(v6 + a1);
    if ( v6 + a1 > (unsigned __int64)(v8 + v6 + a1) )
      v8 = 0LL;
    if ( v8 )
    {
      for ( i = 0LL; i != v8; ++i )
      {
        result = XLATEOBJ_BGR32ToPalSurf(a5, Xlate555, *a2);
        *v11 = result;
        ++a2;
        ++v11;
      }
    }
  }
  return result;
}
