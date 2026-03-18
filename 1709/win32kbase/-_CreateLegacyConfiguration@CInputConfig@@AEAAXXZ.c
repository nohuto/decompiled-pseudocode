/*
 * XREFs of ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0061350
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C00610C8 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CommitConfiguration@CInputConfig@@QEAAJXZ @ 0x1C012FC0C (-CommitConfiguration@CInputConfig@@QEAAJXZ.c)
 * Callees:
 *     RIMGetDisplayMonitor @ 0x1C000D010 (RIMGetDisplayMonitor.c)
 *     RIMFreeQDCActivePathsData @ 0x1C000EDD0 (RIMFreeQDCActivePathsData.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0061224 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     ?_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z @ 0x1C0061268 (-_OnNewConfiguration@CInputConfig@@AEAAJPEAUCOutputConfig@@KPEAUCRegionConfig@@@Z.c)
 *     RIMGetQDCActivePathsData @ 0x1C006436C (RIMGetQDCActivePathsData.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C008E0A8 (RIMUpdatePointerDeviceScalingInfo.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

void __fastcall CInputConfig::_CreateLegacyConfiguration(CInputConfig *this)
{
  CInputConfig *v1; // r13
  unsigned int *v2; // rax
  unsigned int *v3; // r15
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 v6; // r8
  struct CRegionConfig *v7; // r12
  unsigned int v8; // r13d
  __int64 v9; // rdi
  int v10; // edx
  char *v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // r8d
  __int64 i; // r10
  char *v15; // r9
  __int64 v16; // rcx
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  char v19; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v20[23]; // [rsp+68h] [rbp-A0h] BYREF
  char v21; // [rsp+120h] [rbp+18h]

  v18 = 0LL;
  v1 = this;
  v20[0] = 0LL;
  v21 = 1;
  v20[1] = 1LL;
  v20[2] = 0LL;
  v20[12] = 0LL;
  v20[22] = 0LL;
  v2 = (unsigned int *)RIMGetQDCActivePathsData(&v18);
  v3 = v2;
  if ( v2 && (v4 = *v2, (_DWORD)v4) )
  {
    v7 = (struct CRegionConfig *)Win32AllocPoolZInit(80 * v4, 1866690121LL);
    if ( !v7 )
      goto LABEL_17;
    if ( *v3 )
    {
      v8 = 0;
      do
      {
        v9 = *((_QWORD *)v3 + 1) + 192LL * v8;
        v10 = v3[2] + 192 * v8;
        v11 = (char *)v7 + 80 * v8;
        *((_QWORD *)v11 + 3) = *(_QWORD *)(v9 + 16);
        *((_DWORD *)v11 + 8) = *(_DWORD *)(v9 + 28);
        *((_DWORD *)v11 + 12) = *(_DWORD *)(v9 + 56);
        *((_DWORD *)v11 + 13) = *(_DWORD *)(v9 + 60);
        *((_DWORD *)v11 + 9) = *(_DWORD *)(v9 + 104);
        RIMUpdatePointerDeviceScalingInfo((_DWORD)v11 + 40, v10, 1, (unsigned int)&v19, (__int64)(v11 + 56));
        *((_QWORD *)v11 + 9) = *(_QWORD *)(gpDispInfo + 88);
        RIMGetDisplayMonitor(v9, v3, (_QWORD *)v11 + 9);
        v12 = *((_QWORD *)v11 + 9);
        *((_DWORD *)v11 + 5) = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 60LL);
        *(_OWORD *)v11 = *(_OWORD *)(*(_QWORD *)(v12 + 40) + 28LL);
        ++v8;
        *((_DWORD *)v11 + 4) = 3 - (*(_QWORD *)(gpDispInfo + 88) != v12);
      }
      while ( v8 < *v3 );
      v1 = this;
    }
  }
  else
  {
    v4 = **(unsigned int **)gpDispInfo;
    v7 = (struct CRegionConfig *)Win32AllocPoolZInit(80 * v4, 1866690121LL);
    if ( !v7 )
      goto LABEL_17;
    v13 = 0;
    for ( i = *(_QWORD *)(gpDispInfo + 96); i; i = *(_QWORD *)(i + 56) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
      {
        if ( v13 == (_DWORD)v4 )
          break;
        v15 = (char *)v7 + 80 * v13;
        *((_QWORD *)v15 + 9) = i;
        *((_DWORD *)v15 + 5) = *(_DWORD *)(*(_QWORD *)(i + 40) + 60LL);
        *(_OWORD *)v15 = *(_OWORD *)(*(_QWORD *)(i + 40) + 28LL);
        v16 = i - *(_QWORD *)(gpDispInfo + 88);
        *((_DWORD *)v15 + 9) = 1;
        *((_DWORD *)v15 + 4) = 3 - (v16 != 0);
        *((_DWORD *)v15 + 12) = *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) - *(_DWORD *)(*(_QWORD *)(i + 40) + 28LL);
        *((_DWORD *)v15 + 13) = *(_DWORD *)(*(_QWORD *)(i + 40) + 40LL) - *(_DWORD *)(*(_QWORD *)(i + 40) + 32LL);
        ++v13;
        *(_OWORD *)(v15 + 56) = *(_OWORD *)(v15 + 40);
      }
    }
  }
  if ( (int)CInputConfig::_OnNewConfiguration(v1, (struct COutputConfig *)v20, v4, v7) >= 0 )
    CInputConfig::_CommitConfiguration(v1);
LABEL_17:
  RIMFreeQDCActivePathsData(v3, v5, v6);
}
