/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x14068AFCC
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x14068AB04 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x14068AD7C (CmpPromoteKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404766A8 (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x140481B64 (CmpGetKcbAtLayerHeight.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x14068B750 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpCleanupKeyNodeStack @ 0x140697B4C (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x140697F6C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x140698350 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(int a1, __int64 a2, char a3)
{
  int started; // ebx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rdi
  ULONG_PTR KcbAtLayerHeight; // rax
  int v11; // ecx
  int v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-31h] BYREF
  __int64 v15; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v16[8]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v17[80]; // [rsp+60h] [rbp-19h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  HvpGetCellContextReinitialize((__int64)v16);
  CmpInitializeKeyNodeStack(v17);
  started = CmpStartKeyNodeStackFromKcbStack(v17, a2);
  if ( started >= 0 )
  {
    LOBYTE(v7) = a3;
    v8 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(
           a1,
           (unsigned int)v17,
           v7,
           (unsigned int)&v15,
           (__int64)&v13,
           (__int64)&v14,
           (__int64)v16);
    v9 = v14;
    started = v8;
    if ( v8 >= 0 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, *(_WORD *)(a2 + 2));
      v11 = v13;
      ++*(_QWORD *)(KcbAtLayerHeight + 296);
      *(_DWORD *)(KcbAtLayerHeight + 32) = v11;
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, v9);
      started = 0;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64, _BYTE *))(v15 + 16))(v15, v16);
  }
  CmpCleanupKeyNodeStack(v17);
  return (unsigned int)started;
}
