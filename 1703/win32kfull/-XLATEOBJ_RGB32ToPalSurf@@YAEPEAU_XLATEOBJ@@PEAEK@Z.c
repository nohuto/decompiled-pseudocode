/*
 * XREFs of ?XLATEOBJ_RGB32ToPalSurf@@YAEPEAU_XLATEOBJ@@PEAEK@Z @ 0x1C029B530
 * Callers:
 *     ?vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1C02A5AC0 (-vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XLATEOBJ_RGB32ToPalSurf(struct _XLATEOBJ *a1, unsigned __int8 *a2, unsigned int a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rax
  FLONG flXlate; // r8d
  unsigned __int8 v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rax

  v4 = (32LL * ((unsigned __int8)a3 & 0xF8)) | (a3 >> 8) & 0xF8LL;
  v5 = BYTE2(a3);
  flXlate = a1[3].flXlate;
  v7 = a2[(v5 >> 3) | (4 * v4)];
  if ( (flXlate & 0x800) != 0 )
  {
    v8 = *(_QWORD *)&a1[2].iSrcType;
    if ( (struct PALETTE *)v8 == ppalDefault )
    {
      if ( v7 >= 0xAu )
        v7 -= 20;
    }
    else
    {
      if ( (flXlate & 0x1000) != 0 )
        v9 = *(_QWORD *)(v8 + 80);
      else
        v9 = *(_QWORD *)(v8 + 72);
      return *(_BYTE *)(v9 + v7 + 4);
    }
  }
  return v7;
}
