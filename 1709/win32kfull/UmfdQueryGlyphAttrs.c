/*
 * XREFs of UmfdQueryGlyphAttrs @ 0x1C02B3710
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z @ 0x1C0038470 (--0FontDriverDdiRequest@@IEAA@W4FontDriverDdiKind@@@Z.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C003F144 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C0283EA4 (FONTOBJ_SetCachedGlyphAttrs.c)
 */

__int64 __fastcall UmfdQueryGlyphAttrs(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 result; // rax
  __int64 v6; // rbx
  struct _SLIST_ENTRY v7[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v8; // [rsp+48h] [rbp-30h]
  unsigned int v9; // [rsp+50h] [rbp-28h]
  __int64 v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]

  v3 = a2;
  result = FONTOBJ_GetCachedGlyphAttrs(a1, a2, a3);
  if ( !result )
  {
    FontDriverDdiRequest::FontDriverDdiRequest((__int64)v7, 7);
    v11 = 0LL;
    v10 = 0LL;
    v7[0].Next = (struct _SLIST_ENTRY *)&QueryGlyphAttrsRequest::`vftable';
    v8 = a1;
    v9 = v3;
    if ( (int)UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL), v7) >= 0 )
    {
      v6 = v10;
      if ( v10 )
        FONTOBJ_SetCachedGlyphAttrs(a1, v3, v10);
      return v6;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
