/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x140661850
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpHashUnicodeComponent @ 0x1404D2F10 (CmpHashUnicodeComponent.c)
 *     CmpPopulateKcbStack @ 0x1404FC4C8 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1404FC4F8 (CmpStartKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpHashCompressedComponent @ 0x140572750 (CmpHashCompressedComponent.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140661CD0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140662304 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140665E68 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpFindKcbInHashEntryByName @ 0x140665F54 (CmpFindKcbInHashEntryByName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14066DAA4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvance @ 0x140670278 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x140670460 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x140670798 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1406707E8 (CmpKeyEnumStackStartFromKcbStack.c)
 */

__int64 __fastcall CmpPartialPromoteSubkeys(__int64 a1)
{
  __int16 v2; // dx
  __int64 KcbAtLayerHeight; // r14
  int started; // ebx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 EntryAtLayerHeight; // rax
  __int64 v9; // rax
  unsigned __int16 v10; // bx
  _BYTE *v11; // rsi
  int v12; // eax
  __int64 KcbInHashEntryByCompressedName; // rax
  int v14; // eax
  int v15; // eax
  __m128i v17; // [rsp+40h] [rbp-C0h] BYREF
  PPRIVILEGE_SET v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[312]; // [rsp+78h] [rbp-88h] BYREF

  CmpKeyEnumStackInitialize(v19);
  memset(v18, 0, sizeof(v18));
  v2 = *(_WORD *)(a1 + 2);
  WORD1(v18[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
  started = CmpStartKcbStack((__int64)v18, *(_WORD *)(a1 + 2));
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKcbStack(v19, a1);
    if ( started >= 0 )
    {
      started = CmpKeyEnumStackAdvance(v19);
      if ( started < 0 )
      {
LABEL_19:
        if ( started == -2147483622 )
          started = 0;
      }
      else
      {
        while ( 1 )
        {
          v5 = *(unsigned __int16 *)(KcbAtLayerHeight + 58);
          v6 = 0LL;
          v7 = (unsigned __int16)v5;
          if ( (v5 & 0x8000u) == 0LL )
          {
            while ( 1 )
            {
              EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v20, v7, v5, v6);
              if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
                break;
              LOWORD(v7) = v7 - 1;
              if ( (v7 & 0x8000u) != 0LL )
                goto LABEL_9;
            }
            v6 = EntryAtLayerHeight;
          }
LABEL_9:
          if ( (_WORD)v7 != (_WORD)v5 )
          {
            v9 = *(_QWORD *)(v6 + 16);
            v10 = *(_WORD *)(v9 + 72);
            v11 = (_BYTE *)(v9 + 76);
            LOBYTE(v9) = *(_BYTE *)(v9 + 2);
            v17.m128i_i64[1] = (__int64)v11;
            v17.m128i_i16[0] = v10;
            v17.m128i_i16[1] = v10;
            if ( (v9 & 0x20) != 0 )
            {
              v12 = CmpHashCompressedComponent(v11, v10);
              KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByCompressedName(
                                                 *(_QWORD *)(KcbAtLayerHeight + 24),
                                                 v12 + 37 * *(_DWORD *)(KcbAtLayerHeight + 8),
                                                 KcbAtLayerHeight,
                                                 (_DWORD)v11,
                                                 v10);
            }
            else
            {
              v14 = CmpHashUnicodeComponent(&v17);
              KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByName(
                                                 *(_QWORD *)(KcbAtLayerHeight + 24),
                                                 (unsigned int)(v14 + 37 * *(_DWORD *)(KcbAtLayerHeight + 8)),
                                                 KcbAtLayerHeight,
                                                 &v17);
            }
            if ( KcbInHashEntryByCompressedName )
            {
              CmpPopulateKcbStack((__int64)v18, KcbInHashEntryByCompressedName);
              v15 = CmpPromoteSingleKeyFromKcbStacks(a1, v18, 0LL);
            }
            else
            {
              v15 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(a1, (unsigned int)v20, 0, 0, 0LL, 0LL, 0LL);
            }
            started = v15;
            if ( v15 < 0 )
              break;
            CmpKeyEnumStackCleanup(v19);
            CmpKeyEnumStackInitialize(v19);
            started = CmpKeyEnumStackStartFromKcbStack(v19, a1);
            if ( started < 0 )
              break;
          }
          started = CmpKeyEnumStackAdvance(v19);
          if ( started < 0 )
            goto LABEL_19;
        }
      }
    }
  }
  if ( v18[3] )
    MiDeleteSubsection(v18[3]);
  CmpKeyEnumStackCleanup(v19);
  return (unsigned int)started;
}
