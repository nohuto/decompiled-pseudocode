/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x1406EEF30
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmpPopulateKcbStack @ 0x1404A5C10 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1404A5CCC (CmpStartKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByName @ 0x1404AB5BC (CmpFindKcbInHashEntryByName.c)
 *     CmpHashUnicodeComponent @ 0x1405132A0 (CmpHashUnicodeComponent.c)
 *     CmpHashCompressedComponent @ 0x1405E227C (CmpHashCompressedComponent.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1406EF400 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1406EFBBC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x1406F3690 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406FB104 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackAdvance @ 0x1406FF528 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x1406FF718 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackEntryNotifyPromotion @ 0x1406FFB18 (CmpKeyEnumStackEntryNotifyPromotion.c)
 *     CmpKeyEnumStackGetEntryAtLayerHeight @ 0x1406FFDC8 (CmpKeyEnumStackGetEntryAtLayerHeight.c)
 *     CmpKeyEnumStackInitialize @ 0x1406FFDF4 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x1406FFE44 (CmpKeyEnumStackStartFromKcbStack.c)
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
  unsigned __int8 *v12; // rdi
  int v13; // eax
  __int64 KcbInHashEntryByCompressedName; // rax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // r8
  unsigned int v18; // r8d
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  int v25; // eax
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
      while ( 1 )
      {
        v25 = CmpKeyEnumStackAdvance(&v30);
        started = v25;
        if ( v25 < 0 )
          break;
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
          v12 = (unsigned __int8 *)(v10 + 76);
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
                                               v15 + 37 * *(_DWORD *)(KcbAtLayerHeight + 8),
                                               KcbAtLayerHeight,
                                               (__int64)&v28);
          }
          v16 = KcbInHashEntryByCompressedName;
          if ( KcbInHashEntryByCompressedName )
          {
            CmpPopulateKcbStack((__int64)v29, KcbInHashEntryByCompressedName);
            started = CmpPromoteSingleKeyFromKcbStacks(a1, v29, 0LL);
            if ( started < 0 )
              goto LABEL_22;
            v17 = *(_DWORD *)(v16 + 32) >> 31;
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
            v17 = v27;
          }
          v19 = CmpKeyEnumStackGetEntryAtLayerHeight(&v30, v30, v17);
          CmpKeyEnumStackEntryNotifyPromotion(v19, v18 >> 31);
          v22 = CmpKeyNodeStackGetEntryAtLayerHeight(v31, v30, v20, v21);
          v23 = *(_QWORD *)v19;
          v24 = *(unsigned int *)(v19 + 112);
          *(_QWORD *)v22 = *(_QWORD *)v19;
          *(_DWORD *)(v22 + 8) = v24;
          *(_QWORD *)(v22 + 16) = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(v23 + 8))(v23, v24, v22 + 24);
        }
      }
      if ( v25 == -2147483622 )
        started = 0;
    }
  }
LABEL_22:
  if ( v29[3] )
    CmSiFreeMemory(v29[3]);
  CmpKeyEnumStackCleanup(&v30);
  return (unsigned int)started;
}
