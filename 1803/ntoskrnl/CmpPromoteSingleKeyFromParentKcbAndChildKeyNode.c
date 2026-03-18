/*
 * XREFs of CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1406EFBBC
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x1406EF400 (CmpPromoteSingleKeyFromKcbStacks.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     CmpGetKcbAtLayerHeight @ 0x1404A8BB8 (CmpGetKcbAtLayerHeight.c)
 *     CmpRebuildKcbCacheFromNode @ 0x140516AA4 (CmpRebuildKcbCacheFromNode.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1406EF510 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCleanupKeyNodeStack @ 0x1406FAB20 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1406FB048 (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x1406FB104 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1406FB4DC (CmpStartKeyNodeStackFromKcbStack.c)
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
  __int64 v18; // rcx
  __int64 v20; // [rsp+40h] [rbp-81h] BYREF
  __int64 v21; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v22; // [rsp+50h] [rbp-71h] BYREF
  ULONG_PTR v23; // [rsp+58h] [rbp-69h] BYREF
  __int16 *v24; // [rsp+60h] [rbp-61h]
  __int16 v25[40]; // [rsp+70h] [rbp-51h] BYREF

  v23 = 0LL;
  v21 = 0LL;
  v20 = 0xFFFFFFFFLL;
  v24 = a2;
  CmpInitializeKeyNodeStack(v25);
  started = CmpStartKeyNodeStackFromKcbStack(v25, a1);
  if ( started >= 0 )
  {
    v11 = CmpPromoteSingleKeyFromKeyNodeStacks(v25, v24, a3, &v23, &v22, &v21, (__int64)&v20);
    v12 = v23;
    started = v11;
    if ( v11 < 0 )
    {
      v18 = v21;
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
        *a5 = v22;
      if ( a6 )
      {
        v17 = v21;
        v18 = 0LL;
        *a4 = v12;
        *a6 = v17;
        *(_DWORD *)a7 = v20;
        *(_WORD *)(a7 + 4) = WORD2(v20);
        v20 = 0xFFFFFFFFLL;
      }
      else
      {
        v18 = v21;
      }
      started = 0;
    }
    if ( v18 )
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v12 + 16))(v12, &v20);
  }
  CmpCleanupKeyNodeStack(v25);
  return (unsigned int)started;
}
