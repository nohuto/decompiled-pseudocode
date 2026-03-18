/*
 * XREFs of ?bDeleteHandle@RGNOBJAPI@@QEAAHXZ @ 0x1C00438D0
 * Callers:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0043550 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0059C88 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 * Callees:
 *     HmgRemoveObject @ 0x1C0042F70 (HmgRemoveObject.c)
 */

__int64 __fastcall RGNOBJAPI::bDeleteHandle(RGNOBJAPI *this)
{
  struct HOBJ__ *v2; // rcx

  v2 = (struct HOBJ__ *)*((_QWORD *)this + 1);
  if ( v2 == (struct HOBJ__ *)hrgnDefault || HmgRemoveObject(v2, 1, 0, 0, 4, 0LL) != *(void **)this )
    return 0LL;
  *((_QWORD *)this + 1) = 0LL;
  return 1LL;
}
