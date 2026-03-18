/*
 * XREFs of ?AddActiveHMDPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z @ 0x1C00DEA08
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DBC2C (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DBCCC (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00DB824 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00DB89C (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00DB8E8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00DBB88 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00DED1C (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C01F7034 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveHMDPathsToTopology(CCD_TOPOLOGY *this, struct CCD_TOPOLOGY *a2)
{
  int v4; // esi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rbx
  unsigned __int16 v9; // di
  __int16 v10; // cx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  unsigned __int16 v16; // bx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  unsigned int i; // esi
  unsigned __int16 v23; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v31; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v33; // r8
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rcx
  struct D3DKMT_GETPATHSMODALITY *v38[8]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v39; // [rsp+78h] [rbp+17h]
  int v40; // [rsp+8Ch] [rbp+2Bh]
  unsigned __int16 v41; // [rsp+D8h] [rbp+77h] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v38, 8u, 0);
  v40 |= 4u;
  v4 = 1;
  v41 = 1;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v38, (unsigned __int16)v4) >= (unsigned __int16)v4 )
  {
    v6 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v38, 0, 0, 1, &v41);
    v4 = v41;
    LODWORD(v8) = v6;
    if ( v6 != -1073741789 )
      goto LABEL_4;
  }
  v12 = WdLogNewEntry5_WdLowResource(v5);
  *(_QWORD *)(v12 + 24) = (unsigned __int16)v4;
  *(_QWORD *)(v12 + 32) = this;
  WdLogEvent5_WdLowResource(v12);
  LODWORD(v8) = -1073741801;
LABEL_4:
  v9 = 0;
  if ( (int)v8 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v13 + 24) = (int)v8;
LABEL_25:
    WdLogEvent5_WdError(v13);
    goto LABEL_9;
  }
  if ( v39 )
    v10 = *(_WORD *)(v39 + 20);
  else
    v10 = 0;
  if ( !v10 )
  {
    LODWORD(v8) = 255;
    goto LABEL_9;
  }
  *((_DWORD *)a2 + 21) |= 1u;
  v14 = *((_QWORD *)this + 8);
  if ( v14 )
    v15 = *(unsigned __int16 *)(v14 + 20);
  else
    v15 = 0;
  if ( v14 )
    v16 = *(_WORD *)(v14 + 20);
  else
    v16 = 0;
  v17 = (unsigned __int16)CCD_TOPOLOGY::Reserve(a2, (unsigned int)(v4 + v15));
  if ( (unsigned int)v17 < (unsigned __int16)v4 + (unsigned int)v16 )
  {
    v18 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v18 + 24) = this;
    v19 = *((_QWORD *)this + 8);
    if ( v19 )
      v9 = *(_WORD *)(v19 + 20);
    *(_QWORD *)(v18 + 32) = (unsigned __int16)v4 + (unsigned int)v9;
    WdLogEvent5_WdLowResource(v18);
    LODWORD(v8) = -1073741801;
    goto LABEL_9;
  }
  v20 = CCD_TOPOLOGY::CopyTopology(a2, this);
  v8 = v20;
  if ( v20 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v13 + 24) = v8;
    goto LABEL_25;
  }
  for ( i = 0; ; ++i )
  {
    v23 = v39 ? *(_WORD *)(v39 + 20) : 0;
    if ( i >= v23 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i) & 0x100LL) != 0 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i);
      *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
      v25 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i) + 38) = *((_DWORD *)v25 + 24);
      v26 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i) + 39) = *((_DWORD *)v26 + 25);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i) + 43) = 0;
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i) + 42) = 0;
      v27 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i) + 45) = *((_DWORD *)v27 + 25);
      v28 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i) + 44) = *((_DWORD *)v28 + 24);
      v29 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i);
      *(_QWORD *)v29 |= 0x820000uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i) & 0x87) != 0 )
    {
      v30 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i);
      *((_QWORD *)v30 + 1) |= 0x87uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i) & 2) != 0 )
    {
      v31 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i);
      *((_QWORD *)v31 + 1) |= 2uLL;
    }
    v32 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v38, i);
    v34 = CCD_TOPOLOGY::AddPathDescriptor(a2, v32, v33);
    v8 = v34;
    if ( v34 < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v35);
      v36[3] = v8;
      v36[4] = i;
      v36[5] = this;
      v37 = *((_QWORD *)a2 + 8);
      if ( v37 )
        v9 = *(_WORD *)(v37 + 20);
      v36[6] = v9;
      WdLogEvent5_WdAssertion(v36);
      break;
    }
  }
LABEL_9:
  CCD_TOPOLOGY::~CCD_TOPOLOGY(v38);
  return (unsigned int)v8;
}
