/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00B0984
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00AEB50 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00A8A40 (DxgkGetAdapterDefaultScaling.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00AE748 (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00AE798 (-RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B0318 (_CcdOpenRegistrySubkey.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B06BC (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B0944 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00B11C0 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     _CcdReadRegistryValues @ 0x1C00B1844 (_CcdReadRegistryValues.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00EE288 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int16 v8; // si
  unsigned __int16 *v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v15; // rbx
  __int64 v16; // r14
  unsigned int v17; // r12d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v32; // rdi
  int RegistryValues; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // eax
  int Path; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // r8d
  unsigned int v43; // edx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  bool v53; // al
  __int16 v54; // dx
  __int64 v55; // rcx
  __int64 v56; // r9
  bool v57; // cf
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  unsigned int v63; // [rsp+30h] [rbp-50h]
  unsigned int v64; // [rsp+34h] [rbp-4Ch]
  unsigned int v65; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v66[3]; // [rsp+3Ch] [rbp-44h] BYREF
  int v67; // [rsp+48h] [rbp-38h]
  unsigned int v68; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v69; // [rsp+50h] [rbp-30h]
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v70; // [rsp+58h] [rbp-28h]
  __int64 v71; // [rsp+60h] [rbp-20h]
  wchar_t pszDest; // [rsp+68h] [rbp-18h] BYREF

  v70 = this;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v8 = 0;
  v9 = (unsigned __int16 *)SetId;
  if ( !SetId )
  {
    v48 = WdLogNewEntry5_WdError(v5, v4);
    WdLogEvent5_WdError(v48);
    return 3221225473LL;
  }
  v10 = *((unsigned __int16 *)SetId + 16);
  v11 = *((_QWORD *)a2 + 8);
  if ( v11 )
    v12 = *(unsigned __int16 *)(v11 + 22);
  else
    v12 = 0LL;
  if ( (unsigned __int16)v10 > (unsigned __int16)v12 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v12, v10, v6, v7);
    v50 = *((_QWORD *)a2 + 8);
    if ( v50 )
      v8 = *(_WORD *)(v50 + 22);
    *(_QWORD *)(v49 + 24) = v8;
    *(_QWORD *)(v49 + 32) = v9[16];
    WdLogEvent5_WdAssertion(v49);
    return 3221225507LL;
  }
  v13 = 0;
  if ( (_WORD)v10 )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v13);
      CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
      ++v13;
    }
    while ( v13 < v9[16] );
  }
  v67 = -1;
  v15 = 0LL;
  *(_QWORD *)&v66[1] = 0LL;
  LODWORD(v16) = -1073741823;
  v17 = 0;
  if ( !v9[16] )
    return (unsigned int)v16;
  while ( 1 )
  {
    v18 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v9, v17, &v68, 0LL, &v65);
    v16 = v18;
    if ( v18 < 0 )
      break;
    v23 = v68;
    if ( v67 != v68 )
    {
      v24 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v68);
      v16 = v24;
      if ( v24 < 0 )
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdAssertion(v26, v25, v27, v28);
        v60[3] = v16;
        v60[4] = v17;
        v60[5] = v23;
        v60[6] = a2;
        v60[7] = *((_QWORD *)a2 + 8);
        goto LABEL_70;
      }
      if ( *(_QWORD *)&v66[1] )
        ZwClose(*(HANDLE *)&v66[1]);
      v29 = CcdOpenRegistrySubkey((int)&v66[1], 131097, *((_QWORD *)v70 + 8), &pszDest, 0LL);
      v16 = v29;
      if ( v29 < 0 )
      {
        v59 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
        v59[4] = v17;
        v59[3] = v16;
        v59[5] = v23;
        v59[6] = a2;
        v59[7] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v59);
        goto LABEL_37;
      }
      v67 = v23;
    }
    v32 = CCD_TOPOLOGY::GetPathDescriptor(a2, v17);
    RegistryValues = CcdReadRegistryValues(v66[1], 0LL, &unk_1C006E5C0, (__int64)v32);
    v16 = RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_67;
    v36 = CcdReadRegistryValues(v66[1], 0LL, &unk_1C006E400, (__int64)v66);
    v16 = v36;
    if ( v36 == -1073741772 )
    {
      v66[0] = 0;
    }
    else if ( v36 < 0 )
    {
LABEL_67:
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v35, v34);
      v61[3] = v16;
      v61[4] = *(_QWORD *)&v66[1];
      v61[5] = v65;
      v61[6] = v17;
      goto LABEL_68;
    }
    v64 = *((_DWORD *)v32 + 25);
    v63 = *((_DWORD *)v32 + 24);
    Path = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
             (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v63,
             *(void **)&v66[1],
             v65,
             v32);
    v16 = Path;
    if ( Path < 0 )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
      v61[4] = v17;
      v61[5] = v65;
      v61[3] = v16;
      v61[6] = a2;
      v61[7] = *((_QWORD *)a2 + 8);
LABEL_68:
      WdLogEvent5_WdError(v61);
      CCD_TOPOLOGY::ClearPathDescriptor(v32);
      goto LABEL_37;
    }
    *((_DWORD *)v32 + 63) = 0;
    *((_DWORD *)v32 + 64) = 4;
    switch ( v66[0] )
    {
      case 0:
        *(_QWORD *)v32 &= 0x10B87uLL;
LABEL_51:
        *(_QWORD *)v32 &= 0x30B87uLL;
        if ( v66[0] == 1 && (*(_QWORD *)v32 & 0x10000LL) != 0 )
        {
          v38 = (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)((char *)v32 + 140);
          if ( *((_DWORD *)v32 + 35) == 5 )
            DxgkGetAdapterDefaultScaling((struct _LUID *)v32 + 2, v38);
        }
LABEL_55:
        *(_QWORD *)v32 &= 0x830B87uLL;
        if ( *((_DWORD *)v32 + 29) != 21 )
        {
          v52 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
          v52[3] = *((int *)v32 + 29);
          v52[4] = v70;
          v52[5] = v32;
          WdLogEvent5_WdWarning(v52);
        }
        *((_DWORD *)v32 + 29) = 21;
        goto LABEL_23;
      case 1:
        goto LABEL_51;
      case 2:
        goto LABEL_55;
    }
    if ( v66[0] != 3 )
    {
      v51 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
      v51[3] = v66[0];
      v51[4] = *((unsigned int *)v32 + 6);
      v51[5] = *((unsigned int *)v32 + 7);
      WdLogEvent5_WdError(v51);
      CCD_TOPOLOGY::ClearPathDescriptor(v32);
      goto LABEL_24;
    }
LABEL_23:
    *(_QWORD *)v32 &= 0x830F8FuLL;
    if ( g_ProductType == 104 )
    {
      v53 = IsInternalVideoOutput(*((_DWORD *)v32 + 22));
      v42 = v64;
      if ( v53 )
        goto LABEL_25;
      v57 = (v54 & 0x400) != 0LL;
      v43 = v63;
      if ( v57 )
        goto LABEL_26;
      v69 = v63 * v64;
      if ( v63 * v64 >= 0xC0001 )
        goto LABEL_26;
      LODWORD(v16) = -1073741275;
      v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v55, v63, v64, v56);
      v58[4] = v63;
      v58[3] = v32;
      v58[5] = v64;
      v58[6] = 786433LL;
      WdLogEvent5_WdWarning(v58);
      v71 = 0LL;
      DxgkLogCodePointPacket(0x51u, 0, v69, 0xC0000225, 0LL);
      CCD_TOPOLOGY::RemoveResolutionPathDescriptor(v32);
    }
LABEL_24:
    v42 = v64;
LABEL_25:
    v43 = v63;
LABEL_26:
    v44 = *(_QWORD *)v32;
    if ( (*(_QWORD *)v32 & 0x20000LL) != 0 )
    {
      if ( v65 )
      {
        *((_QWORD *)v32 + 19) = v15;
      }
      else
      {
        if ( (v44 & 0x200) != 0 && ((*((_DWORD *)v32 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          *((_DWORD *)v32 + 38) = v42;
          *((_DWORD *)v32 + 39) = v43;
        }
        else
        {
          *((_DWORD *)v32 + 38) = v43;
          *((_DWORD *)v32 + 39) = v42;
        }
        v15 = *((_QWORD *)v32 + 19);
      }
    }
    if ( (v44 & 0x10000) != 0 )
    {
      *((_DWORD *)v32 + 34) = *((_DWORD *)v32 + 35);
      *(_QWORD *)v32 = v44 | 0x40000000000LL;
    }
    if ( (*(_QWORD *)v32 & 0x100LL) == 0 )
      *(_QWORD *)v32 &= ~0x800000uLL;
    if ( ++v17 >= v9[16] )
      goto LABEL_37;
  }
  v60 = (_QWORD *)WdLogNewEntry5_WdAssertion(v20, v19, v21, v22);
  v60[3] = v16;
  v60[4] = v17;
  v60[5] = a2;
  v60[6] = *((_QWORD *)a2 + 8);
LABEL_70:
  WdLogEvent5_WdAssertion(v60);
LABEL_37:
  if ( (int)v16 >= 0 )
  {
    v16 = *(int *)CCD_TOPOLOGY::SetModalitySetId(a2, (const struct CCD_SET_STRING_ID *)v9);
    if ( (int)v16 < 0 )
    {
      v62 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45);
      v62[3] = v16;
      v62[4] = a2;
      v62[5] = v9;
      WdLogEvent5_WdError(v62);
    }
    else
    {
      *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = v9[16];
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
    }
  }
  if ( *(_QWORD *)&v66[1] )
    ZwClose(*(HANDLE *)&v66[1]);
  return (unsigned int)v16;
}
