/*
 * XREFs of DxgkGetPathsModality @ 0x1C00C4CF0
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00C3940 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C4BD8 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000AC2C (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B2EB8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00B2F00 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00B2F88 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00B3948 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C0225120 (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  _DWORD *v7; // rsi
  int AllPaths; // ebx
  CCD_TOPOLOGY *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int i; // edi
  __int64 v18; // r15
  int v19; // ecx
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int16 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  _DWORD *v30; // [rsp+80h] [rbp-80h]
  bool v31; // [rsp+88h] [rbp-78h]
  int v32; // [rsp+8Ch] [rbp-74h]
  int v33; // [rsp+90h] [rbp-70h]
  BOOL v34; // [rsp+94h] [rbp-6Ch]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h]
  __int64 v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  __int16 v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  _DWORD *v44; // [rsp+E0h] [rbp-20h]
  bool v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  int v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F4h] [rbp-Ch]
  int v49; // [rsp+100h] [rbp+0h] BYREF
  __int64 v50; // [rsp+108h] [rbp+8h]
  __int64 v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  __int16 v53; // [rsp+120h] [rbp+20h]
  __int64 v54; // [rsp+128h] [rbp+28h]
  __int64 v55; // [rsp+130h] [rbp+30h]
  __int64 v56; // [rsp+138h] [rbp+38h]
  _DWORD *v57; // [rsp+140h] [rbp+40h]
  bool v58; // [rsp+148h] [rbp+48h]
  int v59; // [rsp+14Ch] [rbp+4Ch]
  int v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+154h] [rbp+54h]
  int v62; // [rsp+160h] [rbp+60h] BYREF
  __int64 v63; // [rsp+168h] [rbp+68h]
  __int64 v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  __int16 v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  __int64 v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  _DWORD *v70; // [rsp+1A0h] [rbp+A0h]
  bool v71; // [rsp+1A8h] [rbp+A8h]
  int v72; // [rsp+1ACh] [rbp+ACh]
  int v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B4h] [rbp+B4h]
  _BYTE v75[96]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 retaddr; // [rsp+248h] [rbp+148h]
  unsigned int v77; // [rsp+250h] [rbp+150h] BYREF
  __int64 v78; // [rsp+258h] [rbp+158h] BYREF

  v3 = (unsigned int)a1;
  v21 = 0LL;
  v20 = 2081;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 2081);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 2081);
  v78 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v78, 9);
  v7 = &`anonymous namespace'::_NullModality;
  if ( a2 )
    v7 = a2;
  if ( (v3 & 0x800000) != 0 )
    v7[6] |= 2u;
  if ( (v3 & 0x14000) == 0 )
  {
    if ( (v3 & 0x100) == 0 )
    {
      if ( (v3 & 0x10) != 0 )
      {
        v49 = 0;
        v50 = 0LL;
        v51 = 0LL;
        v52 = 0LL;
        v58 = v7 == 0LL;
        v53 = 0;
        v54 = 0LL;
        v55 = 0LL;
        v56 = 0LL;
        v57 = v7;
        v59 = 0;
        v60 = 1;
        v61 = 0LL;
        AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v49, a3);
        v9 = (CCD_TOPOLOGY *)&v49;
        goto LABEL_13;
      }
      if ( (v3 & 0x2000040) != 0 )
      {
        v22 = 0;
        v23 = 0LL;
        v24 = 0LL;
        v27 = 0LL;
        v31 = v7 == 0LL;
        v28 = 0LL;
        v25 = 0LL;
        v26 = 0;
        v29 = 0LL;
        v30 = v7;
        v32 = 0;
        v33 = 1;
        v35 = 0;
        v34 = (v3 & 0x1000000) != 0;
        AllPaths = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v22, (v3 & 0x80000) != 0, 0, (v3 & 0x100000) != 0, a3);
        if ( AllPaths >= 0 && (v3 & 0x2000000) != 0 )
        {
          CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v75, 0, 0);
          if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v75, 0x8Fu, 0LL) >= 0 )
          {
            for ( i = 0; i < *((unsigned __int16 *)v7 + 10); ++i )
            {
              v18 = 68LL * i;
              if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                          (CCD_TOPOLOGY *)v75,
                          (const struct _LUID *)&v7[v18 + 16],
                          v7[v18 + 19],
                          &v77) >= 0 )
              {
                v19 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v75, v77) + 35);
                *(_QWORD *)&v7[v18 + 12] |= 0x10000uLL;
                v7[v18 + 47] = v19;
              }
            }
          }
          CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v75);
        }
        v9 = (CCD_TOPOLOGY *)&v22;
        goto LABEL_13;
      }
      if ( (v3 & 0xF) != 0 )
      {
        v62 = 0;
        v63 = 0LL;
        v64 = 0LL;
        v65 = 0LL;
        v71 = v7 == 0LL;
        v66 = 0;
        v67 = 0LL;
        v68 = 0LL;
        v69 = 0LL;
        v70 = v7;
        v72 = 0;
        v73 = 1;
        v74 = 0LL;
        AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v62, v3 & 0x40030AF, a3);
        v9 = (CCD_TOPOLOGY *)&v62;
LABEL_13:
        CCD_TOPOLOGY::~CCD_TOPOLOGY(v9);
        goto LABEL_14;
      }
LABEL_32:
      AllPaths = -1073741811;
      goto LABEL_14;
    }
    if ( (v3 & 0xFFFFFEFF) == 0 )
    {
      v36 = 0;
      v37 = 0LL;
      v38 = 0LL;
      v39 = 0LL;
      v45 = v7 == 0LL;
      v40 = 0;
      v41 = 0LL;
      v42 = 0LL;
      v43 = 0LL;
      v44 = v7;
      v46 = 0;
      v47 = 1;
      v48 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v36);
      v9 = (CCD_TOPOLOGY *)&v36;
      goto LABEL_13;
    }
LABEL_31:
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = v3;
    WdLogEvent5_WdAssertion(v16);
    goto LABEL_32;
  }
  if ( (v3 & 0xFFFEBFFF) != 0 )
    goto LABEL_31;
  v13 = 0;
  v14 = ((unsigned int)v3 >> 13) & 2 | 4;
  if ( (v3 & 0x10000) == 0 )
    v14 = ((unsigned int)v3 >> 13) & 2;
  if ( *((_WORD *)v7 + 10) )
  {
    do
    {
      v15 = *(_QWORD *)&v7[68 * v13 + 68];
      if ( v15 )
        *(_DWORD *)(v15 + 240) |= v14;
      ++v13;
    }
    while ( v13 < *((unsigned __int16 *)v7 + 10) );
  }
  AllPaths = 0;
LABEL_14:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v78, 10);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v20);
  return (unsigned int)AllPaths;
}
