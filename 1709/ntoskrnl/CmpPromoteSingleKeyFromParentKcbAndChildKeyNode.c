/*
 * XREFs of CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x14068AFCC (CmpPromoteSingleKeyFromKcbStacks.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     HvpGetCellContextMove @ 0x1401E446C (HvpGetCellContextMove.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404766A8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x14068B0D4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCleanupKeyNodeStack @ 0x140697B4C (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x140697F6C (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140697FC4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140698350 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(
        __int64 a1,
        __int16 *a2,
        char a3,
        ULONG_PTR *a4,
        _DWORD *a5,
        __int64 *a6,
        __int64 a7)
{
  int started; // ebx
  int v11; // eax
  ULONG_PTR v12; // rdi
  __int64 KcbAtLayerHeight; // rax
  __int64 v14; // r8
  __int64 EntryAtLayerHeight; // rax
  ULONG_PTR v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v20; // [rsp+40h] [rbp-81h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-79h] BYREF
  _BYTE v22[8]; // [rsp+50h] [rbp-71h] BYREF
  ULONG_PTR v23; // [rsp+58h] [rbp-69h] BYREF
  __int16 *v24; // [rsp+60h] [rbp-61h]
  __int16 v25[40]; // [rsp+70h] [rbp-51h] BYREF

  v23 = 0LL;
  v20 = 0LL;
  v24 = a2;
  HvpGetCellContextReinitialize((__int64)v22);
  CmpInitializeKeyNodeStack(v25);
  started = CmpStartKeyNodeStackFromKcbStack(v25, a1);
  if ( started >= 0 )
  {
    v11 = CmpPromoteSingleKeyFromKeyNodeStacks(v25, v24, a3, &v23, &v21, &v20, (__int64)v22);
    v12 = v23;
    started = v11;
    if ( v11 < 0 )
    {
      v18 = v20;
    }
    else
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, *(_WORD *)(a1 + 2));
      EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(
                             v25,
                             *(unsigned __int16 *)(KcbAtLayerHeight + 58),
                             v14,
                             KcbAtLayerHeight);
      ++*(_QWORD *)(v16 + 296);
      CmpRebuildKcbCacheFromNode(v16, *(_QWORD *)(EntryAtLayerHeight + 16));
      if ( a5 )
        *a5 = v21;
      if ( a6 )
      {
        v17 = v20;
        *a4 = v12;
        *a6 = v17;
        HvpGetCellContextMove(a7, (__int64)v22);
      }
      else
      {
        v18 = v20;
      }
      started = 0;
    }
    if ( v18 )
      (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v12 + 16))(v12, v22);
  }
  CmpCleanupKeyNodeStack(v25);
  return (unsigned int)started;
}
