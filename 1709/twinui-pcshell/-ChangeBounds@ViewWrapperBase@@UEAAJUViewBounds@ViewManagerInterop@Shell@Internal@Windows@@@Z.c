/*
 * XREFs of ?ChangeBounds@ViewWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013FC50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x180141AB0 (-SetDesiredPosition@ViewWrapperBase@@AEAAXHHHHW4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@.c)
 */

__int64 __fastcall ViewWrapperBase::ChangeBounds(__int64 a1, unsigned int *a2)
{
  __int128 v2; // xmm1
  __int64 v3; // r9
  __int128 v4; // xmm0
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  __int128 v11; // [rsp+50h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-18h]

  v2 = *(_OWORD *)(a1 + 228);
  v3 = *a2;
  v4 = *(_OWORD *)(a1 + 212);
  v5 = a2[5];
  v12 = *(_DWORD *)(a1 + 244);
  v6 = a2[8];
  v11 = v2;
  DWORD2(v11) = v6;
  v7 = a2[1];
  v8 = a2[4];
  v10 = v4;
  ViewWrapperBase::SetDesiredPosition(a1 - 8, v8, v5, v3, v7, 3, &v10);
  return 0LL;
}
