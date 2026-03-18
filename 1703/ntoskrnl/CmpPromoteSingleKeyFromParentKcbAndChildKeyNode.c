/*
 * XREFs of CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140662304
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140661CD0 (CmpPromoteSingleKeyFromKcbStacks.c)
 * Callees:
 *     HvpGetCellContextMove @ 0x14003C438 (HvpGetCellContextMove.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpRebuildKcbCacheFromNode @ 0x1404D0DFC (CmpRebuildKcbCacheFromNode.c)
 *     CmpGetKcbAtLayerHeight @ 0x140500634 (CmpGetKcbAtLayerHeight.c)
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x140661DD4 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCleanupKeyNodeStack @ 0x14066D4DC (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14066DA4C (CmpInitializeKeyNodeStack.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14066DAA4 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x14066DE58 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(
        __int64 a1,
        __int16 *a2,
        char a3,
        ULONG_PTR *a4,
        _DWORD *a5,
        _QWORD *a6,
        __int64 a7)
{
  int started; // ebx
  int v11; // eax
  ULONG_PTR v12; // rdi
  __int64 KcbAtLayerHeight; // rax
  __int64 v14; // r8
  __int64 EntryAtLayerHeight; // rax
  ULONG_PTR v16; // r9
  int v17; // eax
  __int64 v18; // r8
  __int64 v20; // [rsp+40h] [rbp-81h] BYREF
  int v21; // [rsp+48h] [rbp-79h] BYREF
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
    v11 = CmpPromoteSingleKeyFromKeyNodeStacks(v25, v24, a3, &v23, (__int64)&v21, &v20, (__int64)v22);
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
      CmpRebuildKcbCacheFromNode(v16, *(_QWORD *)(EntryAtLayerHeight + 16));
      if ( a6 )
      {
        v17 = v21;
        *a4 = v12;
        *a5 = v17;
        *a6 = v20;
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
