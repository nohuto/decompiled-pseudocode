/*
 * XREFs of DxgkGetPathsModality @ 0x1C00EE510
 * Callers:
 *     ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00A9978 (-GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00F0CD0 (DxgkGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0001CA8 (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$08$09@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00EA924 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00EBB18 (-FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C00EBB60 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z @ 0x1C01DE47C (-FindPathDescriptorByTarget@CCD_TOPOLOGY@@QEBAJAEBU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetPathsModality(__int64 a1, _DWORD *a2, unsigned __int16 *a3)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rsi
  int AllPaths; // ebx
  struct _D3DKMT_GETPATHSMODALITY **v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int i; // edi
  __int64 v23; // r15
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // ecx
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h]
  __int16 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h]
  __int64 v34; // [rsp+68h] [rbp-98h]
  _DWORD *v35; // [rsp+70h] [rbp-90h]
  bool v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+7Ch] [rbp-84h]
  int v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+84h] [rbp-7Ch]
  int v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h]
  __int64 v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  __int16 v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  _DWORD *v48; // [rsp+D0h] [rbp-30h]
  bool v49; // [rsp+D8h] [rbp-28h]
  int v50; // [rsp+DCh] [rbp-24h]
  int v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E4h] [rbp-1Ch]
  int v53; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  __int16 v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  __int64 v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  _DWORD *v61; // [rsp+130h] [rbp+30h]
  bool v62; // [rsp+138h] [rbp+38h]
  int v63; // [rsp+13Ch] [rbp+3Ch]
  int v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+144h] [rbp+44h]
  int v66; // [rsp+150h] [rbp+50h] BYREF
  __int64 v67; // [rsp+158h] [rbp+58h]
  __int64 v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  __int16 v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  __int64 v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  _DWORD *v74; // [rsp+190h] [rbp+90h]
  bool v75; // [rsp+198h] [rbp+98h]
  int v76; // [rsp+19Ch] [rbp+9Ch]
  int v77; // [rsp+1A0h] [rbp+A0h]
  BOOL v78; // [rsp+1A4h] [rbp+A4h]
  int v79; // [rsp+1A8h] [rbp+A8h]
  struct _D3DKMT_GETPATHSMODALITY *v80[12]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 retaddr; // [rsp+238h] [rbp+138h]
  unsigned int v82; // [rsp+240h] [rbp+140h] BYREF
  __int64 v83; // [rsp+248h] [rbp+148h] BYREF

  v5 = (unsigned int)a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 2081);
  v83 = retaddr;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v83, 9);
  v10 = &`anonymous namespace'::_NullModality;
  if ( a2 )
    v10 = a2;
  if ( (v5 & 0x800000) != 0 )
    v10[6] |= 2u;
  if ( (v5 & 0x14000) != 0 )
  {
    if ( (v5 & 0xFFFEBFFF) == 0 )
    {
      v18 = 0;
      v19 = ((unsigned int)v5 >> 13) & 2 | 4;
      if ( (v5 & 0x10000) == 0 )
        v19 = ((unsigned int)v5 >> 13) & 2;
      if ( *((_WORD *)v10 + 10) )
      {
        do
        {
          v20 = *(_QWORD *)&v10[66 * v18 + 58];
          if ( v20 )
            *(_DWORD *)(v20 + 240) |= v19;
          ++v18;
        }
        while ( v18 < *((unsigned __int16 *)v10 + 10) );
      }
      goto LABEL_26;
    }
LABEL_31:
    v21 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v21 + 24) = v5;
    WdLogEvent5_WdAssertion(v21);
LABEL_33:
    AllPaths = -1073741811;
    goto LABEL_13;
  }
  if ( (v5 & 0x100) != 0 )
  {
    if ( (v5 & 0xFFFFFEFF) == 0 )
    {
      v27 = 0;
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v36 = v10 == 0LL;
      v31 = 0;
      v32 = 0LL;
      v33 = 0LL;
      v34 = 0LL;
      v35 = v10;
      v37 = 0;
      v38 = 1;
      v39 = 0LL;
      AllPaths = CCD_TOPOLOGY::FillPathsTargetFlags((CCD_TOPOLOGY *)&v27, v6, v8, v9);
      v12 = (struct _D3DKMT_GETPATHSMODALITY **)&v27;
      goto LABEL_12;
    }
    goto LABEL_31;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v40 = 0;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0LL;
    v49 = v10 == 0LL;
    v44 = 0;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    v48 = v10;
    v50 = 0;
    v51 = 1;
    v52 = 0LL;
    AllPaths = CCD_TOPOLOGY::RetrieveAllPaths((CCD_TOPOLOGY *)&v40, a3);
    v12 = (struct _D3DKMT_GETPATHSMODALITY **)&v40;
    goto LABEL_12;
  }
  if ( (v5 & 0x2000040) != 0 )
  {
    v66 = 0;
    v67 = 0LL;
    v68 = 0LL;
    v71 = 0LL;
    v75 = v10 == 0LL;
    v72 = 0LL;
    v69 = 0LL;
    v70 = 0;
    v73 = 0LL;
    v74 = v10;
    v76 = 0;
    v16 = (unsigned int)v5 >> 20;
    v17 = (unsigned int)v5 >> 19;
    LOBYTE(v16) = (v5 & 0x100000) != 0;
    LOBYTE(v17) = (v5 & 0x80000) != 0;
    v77 = 1;
    v79 = 0;
    v78 = (v5 & 0x1000000) != 0;
    AllPaths = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)&v66, v17, 0LL, v16, a3);
    if ( AllPaths >= 0 && (v5 & 0x2000000) != 0 )
    {
      CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v80, 0, 0);
      if ( (int)CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)v80, 0x8Fu, 0LL) >= 0 )
      {
        for ( i = 0; i < *((unsigned __int16 *)v10 + 10); ++i )
        {
          v23 = 66LL * i;
          if ( (int)CCD_TOPOLOGY::FindPathDescriptorByTarget(
                      (CCD_TOPOLOGY *)v80,
                      (const struct _LUID *)&v10[v23 + 16],
                      v10[v23 + 19],
                      &v82) >= 0 )
          {
            v26 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v80, v82, v24, v25) + 35);
            *(_QWORD *)&v10[v23 + 12] |= 0x10000uLL;
            v10[v23 + 47] = v26;
          }
        }
      }
      CCD_TOPOLOGY::~CCD_TOPOLOGY(v80);
    }
    v12 = (struct _D3DKMT_GETPATHSMODALITY **)&v66;
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
  v53 = 0;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v62 = v10 == 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = v10;
  v63 = 0;
  v64 = 1;
  v65 = 0LL;
  AllPaths = CCD_TOPOLOGY::RetrievePersisted((CCD_TOPOLOGY *)&v53, v5 & 0x40030AF, a3);
  v12 = (struct _D3DKMT_GETPATHSMODALITY **)&v53;
LABEL_12:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v12);
LABEL_13:
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<9,10>::NotifyStatusChange(&v83, 10);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 2081);
  return (unsigned int)AllPaths;
}
