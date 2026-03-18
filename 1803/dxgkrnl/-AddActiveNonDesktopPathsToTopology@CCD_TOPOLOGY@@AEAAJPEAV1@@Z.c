/*
 * XREFs of ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@@Z @ 0x1C00B66F0
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B39EC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B3A8C (-ApplyTopology@CCD_TOPOLOGY@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C00B36B8 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00B3948 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1C00B6A00 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z.c)
 *     ?CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z @ 0x1C0224BF8 (-CopyTopology@CCD_TOPOLOGY@@AEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(CCD_TOPOLOGY *this, struct CCD_TOPOLOGY *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // esi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int16 v11; // di
  __int16 v12; // cx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  unsigned __int16 v18; // bx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  unsigned int i; // esi
  unsigned __int16 v25; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v30; // rbx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v31; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v33; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v34; // rax
  struct D3DKMT_PATHMODALITY_DESCRIPTOR **v35; // r8
  int v36; // eax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  __int64 v39; // rcx
  _BYTE v40[64]; // [rsp+38h] [rbp-29h] BYREF
  __int64 v41; // [rsp+78h] [rbp+17h]
  int v42; // [rsp+8Ch] [rbp+2Bh]
  unsigned __int16 v43; // [rsp+D8h] [rbp+77h] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v40, 8u, 0);
  v42 |= 4u;
  v6 = 1;
  v43 = 1;
  while ( (unsigned __int16)CCD_TOPOLOGY::Reserve((CCD_TOPOLOGY *)v40, (unsigned __int16)v6, v4, v5) >= (unsigned __int16)v6 )
  {
    v8 = CCD_TOPOLOGY::RetrieveActive((CCD_TOPOLOGY *)v40, 0, 0, 1, &v43);
    v6 = v43;
    LODWORD(v10) = v8;
    if ( v8 != -1073741789 )
      goto LABEL_4;
  }
  v14 = WdLogNewEntry5_WdLowResource(v7);
  *(_QWORD *)(v14 + 24) = (unsigned __int16)v6;
  *(_QWORD *)(v14 + 32) = this;
  WdLogEvent5_WdLowResource(v14);
  LODWORD(v10) = -1073741801;
LABEL_4:
  v11 = 0;
  if ( (int)v10 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v15 + 24) = (int)v10;
LABEL_25:
    WdLogEvent5_WdError(v15);
    goto LABEL_9;
  }
  if ( v41 )
    v12 = *(_WORD *)(v41 + 20);
  else
    v12 = 0;
  if ( !v12 )
  {
    LODWORD(v10) = 255;
    goto LABEL_9;
  }
  *((_DWORD *)a2 + 21) |= 1u;
  v16 = *((_QWORD *)this + 8);
  if ( v16 )
    v17 = *(unsigned __int16 *)(v16 + 20);
  else
    v17 = 0;
  if ( v16 )
    v18 = *(_WORD *)(v16 + 20);
  else
    v18 = 0;
  v19 = (unsigned __int16)CCD_TOPOLOGY::Reserve(a2, (unsigned int)(v6 + v17), v4, v5);
  if ( (unsigned int)v19 < (unsigned __int16)v6 + (unsigned int)v18 )
  {
    v20 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v20 + 24) = this;
    v21 = *((_QWORD *)this + 8);
    if ( v21 )
      v11 = *(_WORD *)(v21 + 20);
    *(_QWORD *)(v20 + 32) = (unsigned __int16)v6 + (unsigned int)v11;
    WdLogEvent5_WdLowResource(v20);
    LODWORD(v10) = -1073741801;
    goto LABEL_9;
  }
  v22 = CCD_TOPOLOGY::CopyTopology(a2, this);
  v10 = v22;
  if ( v22 < 0 )
  {
    v15 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v15 + 24) = v10;
    goto LABEL_25;
  }
  for ( i = 0; ; ++i )
  {
    v25 = v41 ? *(_WORD *)(v41 + 20) : 0;
    if ( i >= v25 )
      break;
    if ( (*(_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i) & 0x100LL) != 0 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i);
      *((_QWORD *)PathDescriptor + 1) |= 0x100uLL;
      v27 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i) + 38) = *((_DWORD *)v27 + 24);
      v28 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i) + 39) = *((_DWORD *)v28 + 25);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i) + 43) = 0;
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i) + 42) = 0;
      v29 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i) + 45) = *((_DWORD *)v29 + 25);
      v30 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i);
      *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i) + 44) = *((_DWORD *)v30 + 24);
      v31 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i);
      *(_QWORD *)v31 |= 0x820000uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i) & 0x87) != 0 )
    {
      v32 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i);
      *((_QWORD *)v32 + 1) |= 0x87uLL;
    }
    if ( (*(_BYTE *)CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i) & 2) != 0 )
    {
      v33 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i);
      *((_QWORD *)v33 + 1) |= 2uLL;
    }
    v34 = CCD_TOPOLOGY::GetPathDescriptor((CCD_TOPOLOGY *)v40, i);
    v36 = CCD_TOPOLOGY::AddPathDescriptor(a2, v34, v35);
    v10 = v36;
    if ( v36 < 0 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdAssertion(v37);
      v38[3] = v10;
      v38[4] = i;
      v38[5] = this;
      v39 = *((_QWORD *)a2 + 8);
      if ( v39 )
        v11 = *(_WORD *)(v39 + 20);
      v38[6] = v11;
      WdLogEvent5_WdAssertion(v38);
      break;
    }
  }
LABEL_9:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v40);
  return (unsigned int)v10;
}
