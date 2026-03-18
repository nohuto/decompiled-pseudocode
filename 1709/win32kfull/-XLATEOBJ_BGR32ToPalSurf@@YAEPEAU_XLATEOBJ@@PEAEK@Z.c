/*
 * XREFs of ?XLATEOBJ_BGR32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C01291F0
 * Callers:
 *     ?vConvertAndSaveBGRATo4@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C029CDA0 (-vConvertAndSaveBGRATo4@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 *     ?vConvertAndSaveBGRATo8@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C029CEA0 (-vConvertAndSaveBGRATo8@@YAXPEAEPEAKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XLATEOBJ_BGR32ToPalSurf(struct _XLATEOBJ *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 v4; // r8
  FLONG flXlate; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax

  v4 = a2[((unsigned __int64)(unsigned __int8)a3 >> 3) | (4 * ((32 * (HIWORD(a3) & 0xF8)) | (a3 >> 8) & 0xF8))];
  flXlate = a1[3].flXlate;
  if ( (flXlate & 0x800) != 0 )
  {
    v7 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v7 == ppalDefault )
    {
      if ( v4 >= 0xAu )
        v4 -= 20;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v8 = *(_QWORD *)(v7 + 80);
      else
        v8 = *(_QWORD *)(v7 + 72);
      return *(_BYTE *)(v8 + v4 + 4);
    }
  }
  return v4;
}
