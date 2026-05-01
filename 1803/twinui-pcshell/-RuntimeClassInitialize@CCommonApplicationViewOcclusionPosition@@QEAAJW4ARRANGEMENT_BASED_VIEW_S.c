/*
 * XREFs of ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJW4ARRANGEMENT_BASED_VIEW_STATE@@AEBUtagRECT@@@Z @ 0x18008A3DC
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18008A1CC (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRA.c)
 * Callees:
 *     memset_0 @ 0x18009911C (memset_0.c)
 */

__int64 __fastcall CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(__int64 a1, int a2, __int128 *a3)
{
  int v3; // edi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  _OWORD v13[3]; // [rsp+30h] [rbp-30h] BYREF

  *(_DWORD *)(a1 + 48) = a2;
  v3 = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_OWORD *)(a1 + 16) = 0uLL;
  v6 = *a3;
  *(_DWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 32) = v6;
  memset_0(v13, 0, 0x28uLL);
  v7 = v13[1];
  *(_OWORD *)(a1 + 60) = v13[0];
  v8 = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a1 + 76) = v7;
  *(_QWORD *)(a1 + 76) = -1LL;
  *(_QWORD *)(a1 + 68) = -1LL;
  *(_DWORD *)(a1 + 60) = 0;
  *(_OWORD *)(a1 + 84) = v8;
  v9 = a2 - 1;
  if ( !v9 )
  {
    v3 = 6;
    goto LABEL_5;
  }
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_6;
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
      goto LABEL_5;
LABEL_6:
    v3 = 4;
    goto LABEL_5;
  }
  v3 = 3;
LABEL_5:
  *(_DWORD *)(a1 + 64) = v3;
  return 0LL;
}
