/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x140661CD0
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140661A80 (CmpPromoteKey.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404D0DFC (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140662304 (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpCleanupKeyNodeStack @ 0x14066D4DC (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14066DA4C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14066DE58 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(int a1, __int64 a2, char a3)
{
  int started; // ebx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rdi
  ULONG_PTR KcbAtLayerHeight; // rax
  int v12; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+48h] [rbp-31h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v15[8]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v16[80]; // [rsp+60h] [rbp-19h] BYREF

  v14 = 0LL;
  v13 = 0LL;
  HvpGetCellContextReinitialize((__int64)v15);
  CmpInitializeKeyNodeStack(v16);
  started = CmpStartKeyNodeStackFromKcbStack(v16, a2);
  if ( started >= 0 )
  {
    LOBYTE(v7) = a3;
    v8 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(
           a1,
           (unsigned int)v16,
           v7,
           (unsigned int)&v14,
           (__int64)&v12,
           (__int64)&v13,
           (__int64)v15);
    v9 = v13;
    started = v8;
    if ( v8 >= 0 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, *(_WORD *)(a2 + 2));
      *(_DWORD *)(KcbAtLayerHeight + 32) = v12;
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, v9);
      started = 0;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64, _BYTE *))(v14 + 16))(v14, v15);
  }
  CmpCleanupKeyNodeStack(v16);
  return (unsigned int)started;
}
