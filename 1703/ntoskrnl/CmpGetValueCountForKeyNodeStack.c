/*
 * XREFs of CmpGetValueCountForKeyNodeStack @ 0x1401E032C
 * Callers:
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1401E14EC (CmpQueryKeyDataFromKeyNodeStack.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401E0544 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpSortedValueEnumStackAdvance @ 0x14041C83C (CmpSortedValueEnumStackAdvance.c)
 *     CmpSortedValueEnumStackCleanup @ 0x14041C980 (CmpSortedValueEnumStackCleanup.c)
 *     CmpSortedValueEnumStackInitialize @ 0x14041CBA4 (CmpSortedValueEnumStackInitialize.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14041CBDC (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14066DAA4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpValueEnumStackAdvance @ 0x140671354 (CmpValueEnumStackAdvance.c)
 *     CmpValueEnumStackCleanup @ 0x14067146C (CmpValueEnumStackCleanup.c)
 *     CmpValueEnumStackInitialize @ 0x1406714CC (CmpValueEnumStackInitialize.c)
 */

__int64 __fastcall CmpGetValueCountForKeyNodeStack(unsigned __int16 *a1, _DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int j; // eax
  int i; // eax
  _BYTE v14[96]; // [rsp+20h] [rbp-99h] BYREF
  _BYTE v15[96]; // [rsp+80h] [rbp-39h] BYREF

  CmpSortedValueEnumStackInitialize(v14);
  CmpValueEnumStackInitialize(v15);
  v4 = *a1;
  LOBYTE(v5) = 0;
  v6 = 0LL;
  if ( (v4 & 0x8000u) != 0LL )
    goto LABEL_26;
  do
  {
    v7 = *(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, v4, v5, v6) + 16);
    if ( v7 && *(_DWORD *)(v7 + 36) )
    {
      v5 = (unsigned __int8)v5;
      if ( (_WORD)v4 )
        v5 = 1LL;
      LOWORD(v6) = v6 + 1;
    }
    LOWORD(v4) = v4 - 1;
  }
  while ( (v4 & 0x8000u) == 0LL );
  if ( !(_WORD)v6 )
  {
LABEL_26:
    *a2 = 0;
    goto LABEL_27;
  }
  if ( !(_BYTE)v5 )
  {
    *a2 = *(_DWORD *)(*(_QWORD *)(CmpKeyNodeStackGetEntryAtLayerHeight(a1, 0LL, v5, v6) + 16) + 36LL);
LABEL_27:
    v9 = 0;
    goto LABEL_28;
  }
  if ( (__int16)v6 <= 1 )
  {
LABEL_20:
    v9 = CmpValueEnumStackStartFromKeyNodeStack(v15, a1);
    if ( v9 >= 0 )
    {
      v10 = 0;
      for ( i = CmpValueEnumStackAdvance(v15); ; i = CmpValueEnumStackAdvance(v15) )
      {
        v9 = i;
        if ( i == -2147483622 )
          break;
        if ( i < 0 )
          goto LABEL_28;
        ++v10;
      }
      goto LABEL_17;
    }
    goto LABEL_28;
  }
  v8 = CmpSortedValueEnumStackStartFromKeyNodeStack(v14, a1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = 0;
    for ( j = CmpSortedValueEnumStackAdvance(v14); ; j = CmpSortedValueEnumStackAdvance(v14) )
    {
      v9 = j;
      if ( j == -2147483622 )
        break;
      if ( j < 0 )
        goto LABEL_28;
      ++v10;
    }
LABEL_17:
    *a2 = v10;
    goto LABEL_27;
  }
  if ( v8 == -1073741670 )
  {
    CmpSortedValueEnumStackCleanup(v14);
    CmpSortedValueEnumStackInitialize(v14);
    goto LABEL_20;
  }
LABEL_28:
  CmpValueEnumStackCleanup(v15);
  CmpSortedValueEnumStackCleanup(v14);
  return (unsigned int)v9;
}
