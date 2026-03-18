/*
 * XREFs of ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F718C
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C01C2A90 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DD090 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00DEAEC (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00DEB74 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1663::__AUTO_USING_PM_PathChangeReason1663 @ 0x1C00E1820 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1663--__AUTO.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C01F7B58 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C01F7BF4 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C01F7E08 (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F8164 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 */

__int64 __fastcall CCD_TOPOLOGY::EnumerateFunctionalModesWorker(
        CCD_TOPOLOGY **this,
        int a2,
        unsigned int a3,
        struct CCD_MODE_RESULT_SET *a4)
{
  PVOID v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // r8
  CCD_TOPOLOGY *v11; // rcx
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  CCD_TOPOLOGY *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  CCD_TOPOLOGY *v22; // rdx
  int v23; // esi
  unsigned int i; // ecx
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  unsigned __int16 v27; // di
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rdx
  CCD_TOPOLOGY *v32; // rcx
  _QWORD *v33; // rax
  unsigned int j; // r14d
  CCD_TOPOLOGY *v35; // rdi
  unsigned __int16 v36; // ax
  __int64 v37; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r12
  char v42; // di
  CCD_TOPOLOGY *v43; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v44; // rdx
  CCD_TOPOLOGY *v45; // r15
  int v46; // r14d
  __int64 v47; // r13
  __int64 v48; // r12
  int PathModeListForAdapter; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  unsigned __int16 v52; // [rsp+38h] [rbp-59h] BYREF
  __int64 v53; // [rsp+40h] [rbp-51h] BYREF
  int v54; // [rsp+48h] [rbp-49h]
  unsigned __int64 v55; // [rsp+50h] [rbp-41h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v56[18]; // [rsp+58h] [rbp-39h] BYREF

  v6 = operator new[](0x2580uLL, 0x4B677844u, PagedPool);
  if ( v6 )
  {
    memset(v6, 0, 0x2580uLL);
    CCD_TOPOLOGY::SwapPathsDescriptors((CCD_TOPOLOGY *)this, a3, *((unsigned __int16 *)this[8] + 10) - 1);
    v11 = this[8];
    v12 = *((unsigned __int16 *)v11 + 10);
    v53 = (__int64)v11 + 48;
    v54 = v12;
    if ( (_DWORD)v12 )
    {
      v13 = (_DWORD *)((char *)v11 + 272);
      v14 = (unsigned int)v12;
      do
      {
        *v13 |= 1u;
        v13[1] = 0;
        v13 += 66;
        --v14;
      }
      while ( v14 );
    }
    v15 = this[8];
    if ( v15 )
      v16 = *((unsigned __int16 *)v15 + 10);
    else
      v16 = 0LL;
    if ( (_WORD)v16 )
    {
      CCD_TOPOLOGY::ValidateIncomingPathModalityFlags((CCD_TOPOLOGY *)this);
      v19 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath((CCD_TOPOLOGY *)this);
      v18 = v19;
      if ( v19 >= 0 )
      {
        v22 = this[8];
        v23 = 0;
        for ( i = 0; ; ++i )
        {
          v25 = v22 ? *((_WORD *)v22 + 10) : 0;
          if ( i >= (unsigned int)v25 - 1 )
            break;
          v26 = 264LL * i;
          if ( *((_BYTE *)v22 + v26 + 177) )
          {
            if ( (*(_DWORD *)((_BYTE *)v22 + v26 + 48) & 0x20101) == 0x20000LL )
              v23 = 1;
          }
        }
        if ( v23 )
        {
          v27 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v56, 8u, 0);
          v52 = 8;
          while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v56, v27) >= v27 )
          {
            v30 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v56, 1, 0, 1, &v52);
            if ( v30 != -1073741789 )
              goto LABEL_28;
            v27 = v52;
          }
          v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28);
          v33[3] = v27;
          v33[4] = this;
          v32 = this[8];
          v33[5] = v32;
          v30 = -1073741801;
LABEL_28:
          if ( v30 >= 0 )
          {
            for ( j = 0; ; ++j )
            {
              v35 = this[8];
              v36 = v35 ? *((_WORD *)v35 + 10) : 0;
              if ( j >= (unsigned int)v36 - 1 )
                break;
              v37 = 264LL * j;
              Global = DXGGLOBAL::GetGlobal((__int64)v32);
              v39 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)v35 + v37 + 64), &v55);
              if ( !v39 )
                goto LABEL_45;
              v40 = *((_QWORD *)v39 + 288);
              v41 = *((_QWORD *)v39 + 289);
              if ( !*(_BYTE *)(v40 + 133) || (v42 = 1, *(_BYTE *)(v40 + 132)) )
                v42 = 0;
              DXGADAPTER::ReleaseReferenceNoTracking(v39);
              v43 = this[8];
              if ( *((_BYTE *)v43 + v37 + 177) )
              {
                if ( v41 )
                {
                  if ( !v42 )
                  {
                    v44 = (CCD_TOPOLOGY *)((char *)v43 + v37 + 48);
                    if ( (*(_DWORD *)v44 & 0x20101) == 0x20000LL )
                      CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v32, v44, (const struct CCD_TOPOLOGY *)v56);
                  }
                }
              }
            }
          }
          else
          {
            WdLogNewEntry5_WdTrace(v32, v31);
LABEL_45:
            v23 = 0;
          }
          CCD_TOPOLOGY::~CCD_TOPOLOGY(v56);
        }
        CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 1);
        v45 = this[8];
        v46 = 0;
        v47 = 264LL * *((unsigned __int16 *)v45 + 10);
        v48 = (__int64)v45 + v47;
        while ( 1 )
        {
          PathModeListForAdapter = BmlGetPathModeListForAdapter(
                                     this[8],
                                     *(_QWORD *)(v48 - 200),
                                     *((_DWORD *)this + 19) & 1,
                                     *((unsigned int *)this + 20),
                                     a2,
                                     a4);
          v18 = PathModeListForAdapter;
          if ( PathModeListForAdapter != -1071774970 )
            break;
          if ( !v23
            || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                                (CCD_TOPOLOGY *)this,
                                (const struct _LUID *)(v48 - 200))
            || v46 )
          {
            goto LABEL_54;
          }
          v46 = 1;
          WdLogNewEntry5_WdTrace(v50, v51);
        }
        if ( PathModeListForAdapter < 0 )
        {
LABEL_54:
          v21 = (_QWORD *)WdLogNewEntry5_WdError(v50);
          v21[3] = v18;
          v21[4] = this[8];
          v21[5] = *((unsigned __int16 *)this[8] + 10) - 1LL;
          v21[6] = *(int *)((char *)v45 + v47 - 196);
          v21[7] = *(unsigned int *)(v48 - 200);
          goto LABEL_55;
        }
        CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 0);
      }
      else
      {
        v21 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v21[3] = this[8];
        v21[4] = v18;
LABEL_55:
        WdLogEvent5_WdError(v21);
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v16, v12, v10);
      *(_QWORD *)(v17 + 24) = this;
      *(_QWORD *)(v17 + 32) = this[8];
      WdLogEvent5_WdWarning(v17);
      LODWORD(v18) = -1073741823;
    }
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1663::__AUTO_USING_PM_PathChangeReason1663(&v53);
    return (unsigned int)v18;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v8 + 24) = 1654LL;
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
}
