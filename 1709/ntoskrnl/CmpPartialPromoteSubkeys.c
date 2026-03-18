/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x14068AB04
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpHashUnicodeComponent @ 0x140474458 (CmpHashUnicodeComponent.c)
 *     CmpPopulateKcbStack @ 0x14047EA38 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x140481B10 (CmpStartKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpHashCompressedComponent @ 0x140562B74 (CmpHashCompressedComponent.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14068AFCC (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x14068F8D0 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpFindKcbInHashEntryByName @ 0x14068F9BC (CmpFindKcbInHashEntryByName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140697FC4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvance @ 0x14069A94C (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x14069AB34 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x14069AF24 (CmpKeyEnumStackEntryNotifyPromotion.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x14069B1D8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackInitialize @ 0x14069B20C (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14069B25C (CmpKeyEnumStackStartFromKcbStack.c)
 */

__int64 __fastcall CmpPartialPromoteSubkeys(__int64 a1)
{
  __int16 v2; // dx
  __int64 KcbAtLayerHeight; // rsi
  __int16 v4; // r9
  int started; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 EntryAtLayerHeight; // rax
  __int64 v10; // rax
  unsigned __int16 v11; // bx
  _BYTE *v12; // rdi
  int v13; // eax
  __int64 KcbInHashEntryByCompressedName; // rax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // r9d
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v27; // [rsp+40h] [rbp-C0h] BYREF
  __m128i v28; // [rsp+48h] [rbp-B8h] BYREF
  PPRIVILEGE_SET v29[5]; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 v30; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[344]; // [rsp+88h] [rbp-78h] BYREF

  CmpKeyEnumStackInitialize(&v30);
  memset(v29, 0, 0x20uLL);
  v2 = *(_WORD *)(a1 + 2);
  WORD1(v29[0]) = -1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
  started = CmpStartKcbStack((__int64)v29, v4);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKcbStack(&v30, a1, 0LL);
    if ( started >= 0 )
    {
      for ( started = CmpKeyEnumStackAdvance(&v30); started >= 0; started = CmpKeyEnumStackAdvance(&v30) )
      {
        v6 = *(unsigned __int16 *)(KcbAtLayerHeight + 58);
        v7 = 0LL;
        v8 = (unsigned __int16)v6;
        if ( (v6 & 0x8000u) == 0LL )
        {
          while ( 1 )
          {
            EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(v31, v8, v6, v7);
            if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
              break;
            LOWORD(v8) = v8 - 1;
            if ( (v8 & 0x8000u) != 0LL )
              goto LABEL_9;
          }
          v7 = EntryAtLayerHeight;
        }
LABEL_9:
        if ( (_WORD)v8 != (_WORD)v6 )
        {
          v10 = *(_QWORD *)(v7 + 16);
          v11 = *(_WORD *)(v10 + 72);
          v12 = (_BYTE *)(v10 + 76);
          LOBYTE(v10) = *(_BYTE *)(v10 + 2);
          v28.m128i_i64[1] = (__int64)v12;
          v28.m128i_i16[0] = v11;
          v28.m128i_i16[1] = v11;
          if ( (v10 & 0x20) != 0 )
          {
            v13 = CmpHashCompressedComponent(v12, v11);
            KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByCompressedName(
                                               *(_QWORD *)(KcbAtLayerHeight + 24),
                                               v13 + 37 * *(_DWORD *)(KcbAtLayerHeight + 8),
                                               KcbAtLayerHeight,
                                               (_DWORD)v12,
                                               v11);
          }
          else
          {
            v15 = CmpHashUnicodeComponent(&v28);
            KcbInHashEntryByCompressedName = CmpFindKcbInHashEntryByName(
                                               *(_QWORD *)(KcbAtLayerHeight + 24),
                                               (unsigned int)(v15 + 37 * *(_DWORD *)(KcbAtLayerHeight + 8)),
                                               KcbAtLayerHeight,
                                               &v28);
          }
          v16 = KcbInHashEntryByCompressedName;
          if ( KcbInHashEntryByCompressedName )
          {
            CmpPopulateKcbStack((__int64)v29, KcbInHashEntryByCompressedName);
            started = CmpPromoteSingleKeyFromKcbStacks(a1, v29, 0LL);
            if ( started < 0 )
              goto LABEL_22;
            v18 = *(_DWORD *)(v16 + 32) >> 31;
            v27 = *(_DWORD *)(v16 + 32) >> 31;
          }
          else
          {
            started = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(
                        a1,
                        (unsigned int)v31,
                        0,
                        0,
                        (__int64)&v27,
                        0LL,
                        0LL);
            if ( started < 0 )
              goto LABEL_22;
            v18 = v27;
          }
          v20 = CmpKeyEnumStackGetEntryAtLayerHeight(&v30, v30, v17, v18);
          CmpKeyEnumStackEntryNotifyPromotion(v20, v19 >> 31);
          v23 = CmpKeyNodeStackGetEntryAtLayerHeight(v31, v30, v21, v22);
          v24 = *(_QWORD *)v20;
          v25 = *(unsigned int *)(v20 + 112);
          *(_QWORD *)v23 = *(_QWORD *)v20;
          *(_DWORD *)(v23 + 8) = v25;
          *(_QWORD *)(v23 + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v24 + 8))(v24, v25, v23 + 24);
        }
      }
      if ( started == -2147483622 )
        started = 0;
    }
  }
LABEL_22:
  if ( v29[3] )
    MiDeleteSubsection(v29[3]);
  CmpKeyEnumStackCleanup(&v30);
  return (unsigned int)started;
}
