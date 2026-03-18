/*
 * XREFs of SetFailureLocation @ 0x1401DEAE4
 * Callers:
 *     CmpFileReadEx @ 0x14007FD50 (CmpFileReadEx.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     HvInitializeHive @ 0x140439E6C (HvInitializeHive.c)
 *     HvLoadHive @ 0x14043A6FC (HvLoadHive.c)
 *     HvpInitMap @ 0x140451794 (HvpInitMap.c)
 *     HvpEnlistBinInMap @ 0x14048D860 (HvpEnlistBinInMap.c)
 *     HvpMapHiveImage @ 0x14048DA2C (HvpMapHiveImage.c)
 *     CmCheckRegistry @ 0x1404B6EBC (CmCheckRegistry.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1404BF6E4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckLeaf @ 0x140503C50 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140504990 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140505100 (CmpCheckKey.c)
 *     CmpCheckRegistry2 @ 0x140505E80 (CmpCheckRegistry2.c)
 *     HvCheckBin @ 0x140513920 (HvCheckBin.c)
 *     HvCheckHive @ 0x140515888 (HvCheckHive.c)
 *     CmpMountPreloadedHives @ 0x1405A67E8 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     HvpBuildMapForLoaderHive @ 0x1405BD558 (HvpBuildMapForLoaderHive.c)
 *     HvpBuildMap @ 0x14067673C (HvpBuildMap.c)
 * Callees:
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall SetFailureLocation(__int64 a1, int a2, int a3, int a4, int a5)
{
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // ax
  char v11; // [rsp+30h] [rbp-61h] BYREF
  int v12; // [rsp+34h] [rbp-5Dh] BYREF
  int v13; // [rsp+38h] [rbp-59h] BYREF
  int v14; // [rsp+3Ch] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-51h] BYREF
  char *v16; // [rsp+60h] [rbp-31h]
  int v17; // [rsp+68h] [rbp-29h]
  int v18; // [rsp+6Ch] [rbp-25h]
  int *v19; // [rsp+70h] [rbp-21h]
  int v20; // [rsp+78h] [rbp-19h]
  int v21; // [rsp+7Ch] [rbp-15h]
  int *v22; // [rsp+80h] [rbp-11h]
  int v23; // [rsp+88h] [rbp-9h]
  int v24; // [rsp+8Ch] [rbp-5h]
  int *v25; // [rsp+90h] [rbp-1h]
  int v26; // [rsp+98h] [rbp+7h]
  int v27; // [rsp+9Ch] [rbp+Bh]

  if ( stru_14033C3C0.LevelPlus1 > 5 )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = &v11;
    v19 = &v12;
    v22 = &v13;
    v25 = &v14;
    v11 = a2;
    v12 = a3;
    v13 = a4;
    v14 = a5;
    v17 = 1;
    v20 = 4;
    v23 = 4;
    v26 = 4;
    TlgWrite(&stru_14033C3C0, &unk_1402AFA7D, 0LL, 0LL, 6u, &pData);
  }
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = *(_WORD *)(a1 + 10);
      if ( v9 < 8u )
      {
        *(_DWORD *)(a1 + 12 * (v9 + 9LL)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 10) + 112) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 10))++ + 116) = a5;
      }
    }
    else
    {
      v10 = *(_WORD *)(a1 + 8);
      if ( v10 < 8u )
      {
        *(_DWORD *)(a1 + 12 * (v10 + 1LL)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 8) + 16) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 8))++ + 20) = a5;
      }
    }
  }
}
