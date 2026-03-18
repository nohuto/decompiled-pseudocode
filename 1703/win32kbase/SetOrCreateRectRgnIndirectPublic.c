/*
 * XREFs of SetOrCreateRectRgnIndirectPublic @ 0x1C0038F70
 * Callers:
 *     ?UpdateUserScreen@@YAJH@Z @ 0x1C0070960 (-UpdateUserScreen@@YAJH@Z.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003C4E0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C003DBA0 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F3D0 (GreCreateRectRgnIndirect.c)
 *     HmgSetOwner @ 0x1C00433A0 (HmgSetOwner.c)
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
  __int64 v11; // rsi
  __int64 v12; // r8
  struct _RECTL v13; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+40h] [rbp-28h]

  v2 = 0;
  if ( *a1 )
  {
    bottom = a2->bottom;
    top = a2->top;
    right = a2->right;
    left = a2->left;
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v14, *a1, 0);
    v8 = v14[0];
    if ( v14[0] )
    {
      v13.left = left;
      v13.top = top;
      v13.right = right;
      v13.bottom = bottom;
      if ( ((left & 0xF8000000) == 0 || (left & 0xF8000000) == -134217728)
        && (((bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
        && (((top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
      {
        if ( left > right )
        {
          v13.left = right;
          v13.right = left;
        }
        if ( top > bottom )
        {
          v13.top = bottom;
          v13.bottom = top;
        }
        RGNOBJ::vSet((RGNOBJ *)v14, &v13);
        v2 = 1;
      }
    }
    if ( !v15 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v14);
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
  LOBYTE(v12) = 4;
  HmgSetOwner(v11, 0LL, v12);
  return 1LL;
}
