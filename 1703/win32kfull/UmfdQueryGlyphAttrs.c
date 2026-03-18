/*
 * XREFs of UmfdQueryGlyphAttrs @ 0x1C02B98F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0090638 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C00F4BCC (FONTOBJ_GetCachedGlyphAttrs.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C0287374 (FONTOBJ_SetCachedGlyphAttrs.c)
 */

__int64 __fastcall UmfdQueryGlyphAttrs(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  void **v6; // [rsp+20h] [rbp-48h] BYREF
  int v7; // [rsp+28h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-38h]
  __int64 v9; // [rsp+38h] [rbp-30h]
  unsigned int v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp-18h]

  result = FONTOBJ_GetCachedGlyphAttrs(a1, a2);
  if ( !result )
  {
    v7 = 7;
    v12 = 0LL;
    v11 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v6 = &QueryGlyphAttrsRequest::`vftable';
    v9 = a1;
    v10 = a2;
    if ( (int)UmfdClientSendAndWaitForCompletion(*(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL), (__int64)&v6) >= 0 )
    {
      v5 = v11;
      if ( v11 )
        FONTOBJ_SetCachedGlyphAttrs(a1, a2, v11);
      return v5;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
