/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C00430C0
 * Callers:
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C005CA00 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     ?UpdateUserScreen@@YAJXZ @ 0x1C005EE74 (-UpdateUserScreen@@YAJXZ.c)
 * Callees:
 *     HmgSetOwner @ 0x1C0042A50 (HmgSetOwner.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0043920 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0045460 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0046BE0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 */

__int64 __fastcall SetOrCreateRectRgnIndirectPublic(HRGN *a1, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  LONG bottom; // esi
  LONG top; // ebp
  LONG right; // r14d
  LONG left; // r15d
  __int64 v8; // rdi
  __int64 RectRgnIndirect; // rax
  unsigned int v11; // esi
  struct _RECTL v12; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  int v14; // [rsp+40h] [rbp-28h]

  v2 = 0;
  if ( *a1 )
  {
    bottom = a2->bottom;
    top = a2->top;
    right = a2->right;
    left = a2->left;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, *a1, 0);
    v8 = v13[0];
    if ( v13[0] )
    {
      v12.left = left;
      v12.top = top;
      v12.right = right;
      v12.bottom = bottom;
      if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
        && (((bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        if ( left > right )
        {
          v12.left = right;
          v12.right = left;
        }
        if ( top > bottom )
        {
          v12.top = bottom;
          v12.bottom = top;
        }
        RGNOBJ::vSet((RGNOBJ *)v13, &v12);
        v2 = 1;
      }
    }
    if ( !v14 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v13);
    if ( v8 )
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    return v2;
  }
  RectRgnIndirect = GreCreateRectRgnIndirect(a2);
  *a1 = (HRGN)RectRgnIndirect;
  v11 = RectRgnIndirect;
  if ( !RectRgnIndirect )
    return v2;
  PsGetCurrentProcessId();
  HmgSetOwner(v11, 0, 4);
  return 1LL;
}
