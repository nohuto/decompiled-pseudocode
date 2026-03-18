/*
 * XREFs of DxgkGetPathsModality @ 0x1C00DF950
 * Callers:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00D2B10 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E0E70 (-GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C000D69C (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DEFF8 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00DF040 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DF0C8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01F755C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  _DWORD *v7; // rsi
  int AllPaths; // ebx
  struct D3DKMT_GETPATHSMODALITY **v9; // rcx
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
  __int64 v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+48h] [rbp-B8h]
  __int16 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  _DWORD *v28; // [rsp+70h] [rbp-90h]
  bool v29; // [rsp+78h] [rbp-88h]
  int v30; // [rsp+7Ch] [rbp-84h]
  int v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+84h] [rbp-7Ch]
  int v33; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int16 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  _DWORD *v41; // [rsp+D0h] [rbp-30h]
  bool v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+DCh] [rbp-24h]
  int v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E4h] [rbp-1Ch]
  int v46; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v47; // [rsp+F8h] [rbp-8h]
  __int64 v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int16 v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  __int64 v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  _DWORD *v54; // [rsp+130h] [rbp+30h]
  bool v55; // [rsp+138h] [rbp+38h]
  int v56; // [rsp+13Ch] [rbp+3Ch]
  int v57; // [rsp+140h] [rbp+40h]
  __int64 v58; // [rsp+144h] [rbp+44h]
  int v59; // [rsp+150h] [rbp+50h] BYREF
  __int64 v60; // [rsp+158h] [rbp+58h]
  __int64 v61; // [rsp+160h] [rbp+60h]
  __int64 v62; // [rsp+168h] [rbp+68h]
  __int16 v63; // [rsp+170h] [rbp+70h]
  __int64 v64; // [rsp+178h] [rbp+78h]
  __int64 v65; // [rsp+180h] [rbp+80h]
  __int64 v66; // [rsp+188h] [rbp+88h]
  _DWORD *v67; // [rsp+190h] [rbp+90h]
  bool v68; // [rsp+198h] [rbp+98h]
  int v69; // [rsp+19Ch] [rbp+9Ch]
  int v70; // [rsp+1A0h] [rbp+A0h]
  BOOL v71; // [rsp+1A4h] [rbp+A4h]
  int v72; // [rsp+1A8h] [rbp+A8h]
  struct D3DKMT_GETPATHSMODALITY *v73[12]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 retaddr; // [rsp+238h] [rbp+138h]
  unsigned int v75; // [rsp+240h] [rbp+140h] BYREF
  __int64 v76; // [rsp+248h] [rbp+148h] BYREF

  v5 = (unsigned int)a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, (__int64)a3, 2081);
  v76 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v76, 9);
  v7 = &`anonymous namespace'::_NullModality;
  if ( a2 )
    v7 = a2;
  if ( (v5 & 0x800000) != 0 )
    v7[6] |= 2u;
  if ( (v5 & 0x14000) != 0 )
  {
    if ( (v5 & 0xFFFEBFFF) == 0 )
    {
      v13 = 0;
      v14 = ((unsigned int)v5 >> 13) & 2 | 4;
      if ( (v5 & 0x10000) == 0 )
        v14 = ((unsigned int)v5 >> 13) & 2;
      if ( *((_WORD *)v7 + 10) )
      {
        do
        {
          v15 = *(_QWORD *)&v7[66 * v13 + 66];
          if ( v15 )
            *(_DWORD *)(v15 + 240) |= v14;
          ++v13;
        }
        while ( v13 < *((unsigned __int16 *)v7 + 10) );
      }
      goto LABEL_26;
    }
LABEL_31:
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = v5;
    WdLogEvent5_WdAssertion(v16);
LABEL_33:
    AllPaths = -1073741811;
    goto LABEL_13;
  }
  if ( (v5 & 0x100) != 0 )
  {
    if ( (v5 & 0xFFFFFEFF) == 0 )
    {
      v20 = 0;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0LL;
      v29 = v7 == 0LL;
      v24 = 0;
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
      v28 = v7;
      v30 = 0;
      v31 = 1;
      v32 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v20);
      v9 = (struct D3DKMT_GETPATHSMODALITY **)&v20;
      goto LABEL_12;
    }
    goto LABEL_31;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v33 = 0;
    v34 = 0LL;
    v35 = 0LL;
    v36 = 0LL;
    v42 = v7 == 0LL;
    v37 = 0;
    v38 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = v7;
    v43 = 0;
    v44 = 1;
    v45 = 0LL;
    AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v33, a3);
    v9 = (struct D3DKMT_GETPATHSMODALITY **)&v33;
    goto LABEL_12;
  }
  if ( (v5 & 0x2000040) != 0 )
  {
    v59 = 0;
    v60 = 0LL;
    v61 = 0LL;
    v64 = 0LL;
    v68 = v7 == 0LL;
    v65 = 0LL;
    v62 = 0LL;
    v63 = 0;
    v66 = 0LL;
    v67 = v7;
    v69 = 0;
    v70 = 1;
    v72 = 0;
    v71 = (v5 & 0x1000000) != 0;
    AllPaths = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v59, (v5 & 0x80000) != 0, 0, (v5 & 0x100000) != 0, a3);
    if ( AllPaths >= 0 && (v5 & 0x2000000) != 0 )
    {
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v73, 0, 0);
      if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v73, 0x8Fu, 0LL) >= 0 )
      {
        for ( i = 0; i < *((unsigned __int16 *)v7 + 10); ++i )
        {
          v18 = 66LL * i;
          if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                      (CCD_TOPOLOGY *)v73,
                      (const struct _LUID *)&v7[v18 + 16],
                      v7[v18 + 19],
                      &v75) >= 0 )
          {
            v19 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v73, v75) + 35);
            *(_QWORD *)&v7[v18 + 12] |= 0x10000uLL;
            v7[v18 + 47] = v19;
          }
        }
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v73);
    }
    v9 = (struct D3DKMT_GETPATHSMODALITY **)&v59;
    goto LABEL_12;
  }
  if ( (v5 & 0xF) == 0 )
  {
    if ( (v5 & 0x400000) == 0 )
      goto LABEL_33;
LABEL_26:
    AllPaths = 0;
    goto LABEL_13;
  }
  v46 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v55 = v7 == 0LL;
  v50 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = v7;
  v56 = 0;
  v57 = 1;
  v58 = 0LL;
  AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v46, v5 & 0x40030AF, a3);
  v9 = (struct D3DKMT_GETPATHSMODALITY **)&v46;
LABEL_12:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v9);
LABEL_13:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v76, 10);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, 2081);
  return (unsigned int)AllPaths;
}
