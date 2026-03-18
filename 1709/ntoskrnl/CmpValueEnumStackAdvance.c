/*
 * XREFs of CmpValueEnumStackAdvance @ 0x14069C39C
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x1401E448C (CmpGetValueCountForKeyNodeStack.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14068C5D0 (CmEnumerateValueFromLayeredKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpIsValueTombstone @ 0x140471F84 (CmpIsValueTombstone.c)
 *     CmpValueEnumStackGetEntryAtLayerHeight @ 0x14069C510 (CmpValueEnumStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackMatchingValueInUpperLayer @ 0x14069C584 (CmpValueEnumStackMatchingValueInUpperLayer.c)
 */

__int64 __fastcall CmpValueEnumStackAdvance(__int64 a1)
{
  __int64 *i; // rsi
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edi
  bool v7; // sf
  char v9; // [rsp+40h] [rbp+8h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  HvpGetCellContextReinitialize((__int64)&v10);
  if ( *(_BYTE *)(a1 + 4) )
  {
    if ( *(_DWORD *)a1 == -1 )
      return (unsigned int)-2147483622;
    ++*(_DWORD *)(a1 + 8);
  }
  else
  {
    *(_WORD *)(a1 + 6) = *(_WORD *)(a1 + 12);
    *(_BYTE *)(a1 + 4) = 1;
    *(_DWORD *)(a1 + 8) = 0;
  }
  *(_DWORD *)a1 = -1;
  if ( *(__int16 *)(a1 + 6) >= 0 )
  {
    do
    {
      for ( i = (__int64 *)CmpValueEnumStackGetEntryAtLayerHeight(a1, *(unsigned __int16 *)(a1 + 6));
            *(_DWORD *)(a1 + 8) < *((_DWORD *)i + 6);
            ++*(_DWORD *)(a1 + 8) )
      {
        v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*i + 8))(
               *i,
               *(unsigned int *)(i[1] + 4LL * *(unsigned int *)(a1 + 8)),
               &v10);
        if ( CmpIsValueTombstone(*i, v3) )
        {
          (*(void (__fastcall **)(__int64, char *))(v5 + 16))(v5, &v10);
        }
        else
        {
          v6 = CmpValueEnumStackMatchingValueInUpperLayer(a1, *(unsigned __int16 *)(a1 + 6), v4, &v9);
          (*(void (__fastcall **)(__int64, char *))(*i + 16))(*i, &v10);
          if ( v6 < 0 )
            return (unsigned int)v6;
          if ( !v9 )
          {
            v6 = 0;
            *(_DWORD *)a1 = *(_DWORD *)(i[1] + 4LL * *(unsigned int *)(a1 + 8));
            return (unsigned int)v6;
          }
        }
      }
      v7 = (__int16)--*(_WORD *)(a1 + 6) < 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    while ( !v7 );
  }
  return (unsigned int)-2147483622;
}
