/*
 * XREFs of CmpPromoteSingleKeyFromKcbStacks @ 0x1406EF400
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x1406EF198 (CmpPromoteKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1406EFBBC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpCleanupKeyNodeStack @ 0x1406FAB20 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406FB048 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1406FB4DC (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromKcbStacks(int a1, __int64 a2, char a3)
{
  int started; // ebx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rdi
  ULONG_PTR KcbAtLayerHeight; // rax
  int v11; // ecx
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  int v14; // [rsp+48h] [rbp-31h] BYREF
  __int64 v15; // [rsp+50h] [rbp-29h] BYREF
  __int64 v16; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v17[80]; // [rsp+60h] [rbp-19h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v13 = 0xFFFFFFFFLL;
  CmpInitializeKeyNodeStack(v17);
  started = CmpStartKeyNodeStackFromKcbStack(v17, a2);
  if ( started >= 0 )
  {
    LOBYTE(v7) = a3;
    v8 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(
           a1,
           (unsigned int)v17,
           v7,
           (unsigned int)&v16,
           (__int64)&v14,
           (__int64)&v15,
           (__int64)&v13);
    v9 = v15;
    started = v8;
    if ( v8 >= 0 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a2, *(_WORD *)(a2 + 2));
      v11 = v14;
      ++*(_QWORD *)(KcbAtLayerHeight + 296);
      *(_DWORD *)(KcbAtLayerHeight + 32) = v11;
      CmpRebuildKcbCacheFromNode(KcbAtLayerHeight, v9);
      started = 0;
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64 *))(v16 + 16))(v16, &v13);
  }
  CmpCleanupKeyNodeStack(v17);
  return (unsigned int)started;
}
