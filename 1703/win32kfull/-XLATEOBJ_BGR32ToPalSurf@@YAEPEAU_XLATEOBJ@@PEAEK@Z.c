/*
 * XREFs of ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C012BC20
 * Callers:
 *     ?vConvertAndSaveBGRATo4@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02A06B0 (-vConvertAndSaveBGRATo4@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRATo8@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02A07B0 (-vConvertAndSaveBGRATo8@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XLATEOBJ_BGR32ToPalSurf(struct _XLATEOBJ *a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  FLONG flXlate; // r8d
  unsigned __int8 v7; // cl
  __int64 v9; // rdx
  __int64 v10; // rax

  v4 = (a3 >> 8) & 0xF8LL | (32 * (HIWORD(a3) & 0xF8LL));
  v5 = (unsigned __int8)a3;
  flXlate = a1[3].flXlate;
  v7 = a2[(v5 >> 3) | (4 * v4)];
  if ( (flXlate & 0x800) != 0 )
  {
    v9 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v9 == ppalDefault )
    {
      if ( v7 >= 0xAu )
        v7 -= 20;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v10 = *(_QWORD *)(v9 + 80);
      else
        v10 = *(_QWORD *)(v9 + 72);
      return *(_BYTE *)(v10 + v7 + 4);
    }
  }
  return v7;
}
