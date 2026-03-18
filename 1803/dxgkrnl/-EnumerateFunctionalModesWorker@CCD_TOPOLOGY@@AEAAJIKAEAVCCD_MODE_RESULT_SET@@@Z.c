/*
 * XREFs of ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0224D50
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C01C3F50 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00B3948 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B4E1C (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00B67D4 (-ValidateIncomingPathModalityFlags@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C00B685C (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 *     _CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1668::__AUTO_USING_PM_PathChangeReason1668 @ 0x1C00DE024 (_CCD_TOPOLOGY--EnumerateFunctionalModesWorker_--_2_--_AUTO_USING_PM_PathChangeReason1668--__AUTO.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z @ 0x1C0225854 (-RestoreAnyFlagsModifiedBeforeCallingBML@CCD_TOPOLOGY@@QEAAHPEBU_LUID@@@Z.c)
 *     ?SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z @ 0x1C0225904 (-SetGivenPathDataFromActivePath@CCD_TOPOLOGY@@QEAAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEBV1@@Z.c)
 *     ?SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z @ 0x1C0225B2C (-SwapPathsDescriptors@CCD_TOPOLOGY@@QEAAJII@Z.c)
 *     ?BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@IAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0225F68 (-BmlGetPathModeListForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
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
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  CCD_TOPOLOGY *v21; // rdx
  int v22; // esi
  unsigned int i; // ecx
  unsigned __int16 v24; // ax
  __int64 v25; // rax
  unsigned __int16 v26; // di
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rdx
  CCD_TOPOLOGY *v35; // rcx
  _QWORD *v36; // rax
  unsigned int j; // edi
  CCD_TOPOLOGY *v38; // r14
  unsigned __int16 v39; // ax
  __int64 v40; // r15
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r12
  char v45; // r14
  CCD_TOPOLOGY *v46; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *v47; // rdx
  CCD_TOPOLOGY *v48; // r15
  int v49; // r14d
  __int64 v50; // r13
  __int64 v51; // r12
  int PathModeListForAdapter; // eax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned __int16 v57; // [rsp+38h] [rbp-59h] BYREF
  __int64 v58; // [rsp+40h] [rbp-51h] BYREF
  int v59; // [rsp+48h] [rbp-49h]
  unsigned __int64 v60; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v61[144]; // [rsp+58h] [rbp-39h] BYREF

  v6 = operator new[](0x2580uLL, 0x4B677844u, PagedPool);
  if ( v6 )
  {
    memset(v6, 0, 0x2580uLL);
    CCD_TOPOLOGY::SwapPathsDescriptors((CCD_TOPOLOGY *)this, a3, *((unsigned __int16 *)this[8] + 10) - 1);
    v11 = this[8];
    v12 = *((unsigned __int16 *)v11 + 10);
    v58 = (__int64)v11 + 48;
    v59 = v12;
    if ( (_DWORD)v12 )
    {
      v13 = (_DWORD *)((char *)v11 + 280);
      v14 = (unsigned int)v12;
      do
      {
        *v13 |= 1u;
        v13[1] = 0;
        v13 += 68;
        --v14;
      }
      while ( v14 );
      v11 = this[8];
    }
    if ( v11 )
      v15 = *((_WORD *)v11 + 10);
    else
      v15 = 0;
    if ( v15 )
    {
      CCD_TOPOLOGY::ValidateIncomingPathModalityFlags((CCD_TOPOLOGY *)this);
      v18 = CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath((CCD_TOPOLOGY *)this);
      v17 = v18;
      if ( v18 >= 0 )
      {
        v21 = this[8];
        v22 = 0;
        for ( i = 0; ; ++i )
        {
          v24 = v21 ? *((_WORD *)v21 + 10) : 0;
          if ( i >= (unsigned int)v24 - 1 )
            break;
          v25 = 272LL * i;
          if ( *((_BYTE *)v21 + v25 + 177) )
          {
            if ( (*(_DWORD *)((_BYTE *)v21 + v25 + 48) & 0x20101) == 0x20000LL )
              v22 = 1;
          }
        }
        if ( v22 )
        {
          v26 = 8;
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v61, 8u, 0);
          v57 = 8;
          while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v61, v26, v27, v28) >= v26 )
          {
            v33 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v61, 1, 0, 1, &v57);
            if ( v33 != -1073741789 )
              goto LABEL_29;
            v26 = v57;
          }
          v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
          v36[3] = v26;
          v36[4] = this;
          v35 = this[8];
          v36[5] = v35;
          v33 = -1073741801;
LABEL_29:
          if ( v33 >= 0 )
          {
            for ( j = 0; ; ++j )
            {
              v38 = this[8];
              v39 = v38 ? *((_WORD *)v38 + 10) : 0;
              if ( j >= (unsigned int)v39 - 1 )
                break;
              v40 = 272LL * j;
              Global = DXGGLOBAL::GetGlobal((__int64)v35);
              v42 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)((char *)v38 + v40 + 64), &v60);
              if ( !v42 )
                goto LABEL_46;
              v43 = *((_QWORD *)v42 + 307);
              v44 = *((_QWORD *)v42 + 308);
              if ( !*(_BYTE *)(v43 + 133) || (v45 = 1, *(_BYTE *)(v43 + 132)) )
                v45 = 0;
              DXGADAPTER::ReleaseReferenceNoTracking(v42);
              v46 = this[8];
              if ( *((_BYTE *)v46 + v40 + 177) )
              {
                if ( v44 )
                {
                  if ( !v45 )
                  {
                    v47 = (CCD_TOPOLOGY *)((char *)v46 + v40 + 48);
                    if ( (*(_DWORD *)v47 & 0x20101) == 0x20000LL )
                      CCD_TOPOLOGY::SetGivenPathDataFromActivePath(v35, v47, (const struct CCD_TOPOLOGY *)v61);
                  }
                }
              }
            }
          }
          else
          {
            WdLogNewEntry5_WdTrace(v35, v34, v27, v28);
LABEL_46:
            v22 = 0;
          }
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v61);
        }
        CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 1);
        v48 = this[8];
        v49 = 0;
        v50 = 272LL * *((unsigned __int16 *)v48 + 10);
        v51 = (__int64)v48 + v50;
        while ( 1 )
        {
          PathModeListForAdapter = BmlGetPathModeListForAdapter(
                                     this[8],
                                     *(_QWORD *)(v51 - 208),
                                     *((_DWORD *)this + 19) & 1,
                                     *((unsigned int *)this + 20),
                                     a2,
                                     a4);
          v17 = PathModeListForAdapter;
          if ( PathModeListForAdapter != -1071774970 )
            break;
          if ( !v22
            || !(unsigned int)CCD_TOPOLOGY::RestoreAnyFlagsModifiedBeforeCallingBML(
                                (CCD_TOPOLOGY *)this,
                                (const struct _LUID *)(v51 - 208))
            || v49 )
          {
            goto LABEL_55;
          }
          v49 = 1;
          WdLogNewEntry5_WdTrace(v53, v54, v55, v56);
        }
        if ( PathModeListForAdapter < 0 )
        {
LABEL_55:
          v20 = (_QWORD *)WdLogNewEntry5_WdError(v53);
          v20[3] = v17;
          v20[4] = this[8];
          v20[5] = *((unsigned __int16 *)this[8] + 10) - 1LL;
          v20[6] = *(int *)((char *)v48 + v50 - 204);
          v20[7] = *(unsigned int *)(v51 - 208);
          goto LABEL_56;
        }
        CCD_TOPOLOGY::LogFunctionalizePacket((CCD_TOPOLOGY *)this, 0);
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v20[3] = this[8];
        v20[4] = v17;
LABEL_56:
        WdLogEvent5_WdError(v20);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v11, v12, v10);
      *(_QWORD *)(v16 + 24) = this;
      *(_QWORD *)(v16 + 32) = this[8];
      WdLogEvent5_WdWarning(v16);
      LODWORD(v17) = -1073741823;
    }
    CCD_TOPOLOGY::EnumerateFunctionalModesWorker_::_2_::_AUTO_USING_PM_PathChangeReason1668::__AUTO_USING_PM_PathChangeReason1668(&v58);
    return (unsigned int)v17;
  }
  else
  {
    v8 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v8 + 24) = 1659LL;
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
}
