/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00D9FF4
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00D09A0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     RtlStringCbPrintfW @ 0x1C000C794 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _CcdReadRegistryValues @ 0x1C00CED24 (_CcdReadRegistryValues.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00CF0AC (_CcdOpenRegistrySubkey.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00D9D0C (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x1C00D9FB4 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00DAA3C (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x1C00DC360 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00E5230 (DxgkGetAdapterDefaultScaling.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00F6A8C (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00F6ADC (-RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(void **this, struct CCD_TOPOLOGY *a2)
{
  void **SetId; // rax
  __int64 v4; // rcx
  unsigned __int16 v5; // si
  unsigned __int16 *v6; // r13
  unsigned __int16 v7; // dx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v12; // rbx
  __int64 v13; // r14
  unsigned int v14; // r12d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rdi
  int RegistryValues; // eax
  __int64 v24; // rcx
  int v25; // eax
  int Path; // eax
  char *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned int v30; // r8d
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rax
  int v39; // eax
  _QWORD *v40; // rax
  bool v41; // al
  __int16 v42; // dx
  __int64 v43; // rcx
  bool v44; // cf
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  unsigned int v50; // [rsp+30h] [rbp-50h]
  unsigned int v51; // [rsp+34h] [rbp-4Ch]
  unsigned int v52; // [rsp+38h] [rbp-48h] BYREF
  _DWORD v53[3]; // [rsp+3Ch] [rbp-44h] BYREF
  int v54; // [rsp+48h] [rbp-38h]
  unsigned int v55; // [rsp+4Ch] [rbp-34h] BYREF
  unsigned int v56; // [rsp+50h] [rbp-30h]
  void **v57; // [rsp+58h] [rbp-28h]
  __int64 v58; // [rsp+60h] [rbp-20h]
  wchar_t pszDest; // [rsp+68h] [rbp-18h] BYREF

  v57 = this;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v5 = 0;
  v6 = (unsigned __int16 *)SetId;
  if ( !SetId )
  {
    v35 = WdLogNewEntry5_WdError(v4);
    WdLogEvent5_WdError(v35);
    return 3221225473LL;
  }
  v7 = *((_WORD *)SetId + 16);
  v8 = *((_QWORD *)a2 + 8);
  if ( v8 )
    v9 = *(unsigned __int16 *)(v8 + 22);
  else
    v9 = 0LL;
  if ( v7 > (unsigned __int16)v9 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v9);
    v37 = *((_QWORD *)a2 + 8);
    if ( v37 )
      v5 = *(_WORD *)(v37 + 22);
    *(_QWORD *)(v36 + 24) = v5;
    *(_QWORD *)(v36 + 32) = v6[16];
    WdLogEvent5_WdAssertion(v36);
    return 3221225507LL;
  }
  v10 = 0;
  if ( v7 )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v10);
      CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
      ++v10;
    }
    while ( v10 < v6[16] );
  }
  v54 = -1;
  v12 = 0LL;
  *(_QWORD *)&v53[1] = 0LL;
  LODWORD(v13) = -1073741823;
  v14 = 0;
  if ( !v6[16] )
    return (unsigned int)v13;
  while ( 1 )
  {
    v15 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v6, v14, &v55, 0LL, &v52);
    v13 = v15;
    if ( v15 < 0 )
      break;
    v17 = v55;
    if ( v54 != v55 )
    {
      v18 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v55);
      v13 = v18;
      if ( v18 < 0 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdAssertion(v19);
        v47[3] = v13;
        v47[4] = v14;
        v47[5] = v17;
        v47[6] = a2;
        v47[7] = *((_QWORD *)a2 + 8);
        goto LABEL_75;
      }
      if ( *(_QWORD *)&v53[1] )
        ZwClose(*(HANDLE *)&v53[1]);
      v20 = CcdOpenRegistrySubkey((int)&v53[1], 131097, (int)v57[8], &pszDest, 0LL);
      v13 = v20;
      if ( v20 < 0 )
      {
        v46 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v46[4] = v14;
        v46[3] = v13;
        v46[5] = v17;
        v46[6] = a2;
        v46[7] = *((_QWORD *)a2 + 8);
        WdLogEvent5_WdError(v46);
        goto LABEL_37;
      }
      v54 = v17;
    }
    v22 = CCD_TOPOLOGY::GetPathDescriptor(a2, v14);
    RegistryValues = CcdReadRegistryValues(*(HANDLE *)&v53[1], 0LL, &unk_1C005F610, 8u, (__int64)v22);
    v13 = RegistryValues;
    if ( RegistryValues < 0 )
      goto LABEL_72;
    *((_QWORD *)v22 + 13) = *((_QWORD *)v22 + 12);
    v25 = CcdReadRegistryValues(*(HANDLE *)&v53[1], 0LL, &unk_1C005F450, 2u, (__int64)v53);
    v13 = v25;
    if ( v25 == -1073741772 )
    {
      v53[0] = 0;
    }
    else if ( v25 < 0 )
    {
LABEL_72:
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v48[3] = v13;
      v48[4] = *(_QWORD *)&v53[1];
      v48[5] = v52;
      v48[6] = v14;
      goto LABEL_73;
    }
    v50 = *((_DWORD *)v22 + 24);
    v51 = *((_DWORD *)v22 + 25);
    Path = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(
             (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v51,
             *(void **)&v53[1],
             v52,
             v22);
    v13 = Path;
    if ( Path < 0 )
    {
      v48 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v48[4] = v14;
      v48[5] = v52;
      v48[3] = v13;
      v48[6] = a2;
      v48[7] = *((_QWORD *)a2 + 8);
LABEL_73:
      WdLogEvent5_WdError(v48);
      CCD_TOPOLOGY::ClearPathDescriptor(v22);
      goto LABEL_37;
    }
    *((_DWORD *)v22 + 51) = 0;
    *((_DWORD *)v22 + 52) = 4;
    switch ( v53[0] )
    {
      case 0:
        *(_QWORD *)v22 &= 0x10B87uLL;
        v28 = *(_QWORD *)v22;
        if ( (*(_QWORD *)v22 & 0x100LL) != 0 )
        {
          if ( (v28 & 0x200) == 0 || ((*((_DWORD *)v22 + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            *((_DWORD *)v22 + 38) = *((_DWORD *)v22 + 24);
            v39 = *((_DWORD *)v22 + 25);
          }
          else
          {
            *((_DWORD *)v22 + 38) = *((_DWORD *)v22 + 25);
            v39 = *((_DWORD *)v22 + 24);
          }
          v28 |= 0x20000uLL;
          *((_DWORD *)v22 + 39) = v39;
          *(_QWORD *)v22 = v28;
        }
LABEL_56:
        *(_QWORD *)v22 &= 0x30B87uLL;
        if ( v53[0] == 1 && (*(_QWORD *)v22 & 0x10000LL) != 0 )
        {
          v27 = (char *)v22 + 140;
          if ( *((_DWORD *)v22 + 35) == 5 )
            DxgkGetAdapterDefaultScaling((char *)v22 + 16);
        }
LABEL_60:
        *(_QWORD *)v22 &= 0x830B87uLL;
        if ( *((_DWORD *)v22 + 29) != 21 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v27, v29);
          v40[3] = *((int *)v22 + 29);
          v40[4] = v57;
          v40[5] = v22;
          WdLogEvent5_WdWarning(v40);
        }
        *((_DWORD *)v22 + 29) = 21;
        goto LABEL_23;
      case 1:
        goto LABEL_56;
      case 2:
        goto LABEL_60;
    }
    if ( v53[0] != 3 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v28);
      v38[3] = v53[0];
      v38[4] = *((unsigned int *)v22 + 6);
      v38[5] = *((unsigned int *)v22 + 7);
      WdLogEvent5_WdError(v38);
      CCD_TOPOLOGY::ClearPathDescriptor(v22);
      goto LABEL_24;
    }
LABEL_23:
    *(_QWORD *)v22 &= 0x830F87uLL;
    if ( g_ProductType == 104 )
    {
      v41 = IsInternalVideoOutput(*((_DWORD *)v22 + 22));
      v30 = v51;
      if ( v41 )
        goto LABEL_25;
      v44 = (v42 & 0x400) != 0LL;
      v31 = v50;
      if ( v44 )
        goto LABEL_26;
      v56 = v50 * v51;
      if ( v50 * v51 >= 0xC0001 )
        goto LABEL_26;
      LODWORD(v13) = -1073741275;
      v45 = (_QWORD *)WdLogNewEntry5_WdWarning(v43, v50, v51);
      v45[4] = v50;
      v45[5] = v51;
      v45[3] = v22;
      v45[6] = 786433LL;
      WdLogEvent5_WdWarning(v45);
      v58 = 0LL;
      DxgkLogCodePointPacket(0x51u, 0, v56, 0xC0000225, 0LL);
      CCD_TOPOLOGY::RemoveResolutionPathDescriptor(v22);
    }
LABEL_24:
    v30 = v51;
LABEL_25:
    v31 = v50;
LABEL_26:
    v32 = *(_QWORD *)v22;
    if ( (*(_QWORD *)v22 & 0x20000LL) != 0 )
    {
      if ( v52 )
      {
        *((_QWORD *)v22 + 19) = v12;
      }
      else
      {
        if ( (v32 & 0x200) != 0 && ((*((_DWORD *)v22 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          *((_DWORD *)v22 + 38) = v30;
          *((_DWORD *)v22 + 39) = v31;
        }
        else
        {
          *((_DWORD *)v22 + 38) = v31;
          *((_DWORD *)v22 + 39) = v30;
        }
        v12 = *((_QWORD *)v22 + 19);
      }
    }
    if ( (v32 & 0x10000) != 0 )
    {
      *((_DWORD *)v22 + 34) = *((_DWORD *)v22 + 35);
      *(_QWORD *)v22 = v32 | 0x40000000000LL;
    }
    if ( (*(_QWORD *)v22 & 0x100LL) == 0 )
      *(_QWORD *)v22 &= ~0x800000uLL;
    if ( ++v14 >= v6[16] )
      goto LABEL_37;
  }
  v47 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16);
  v47[3] = v13;
  v47[4] = v14;
  v47[5] = a2;
  v47[6] = *((_QWORD *)a2 + 8);
LABEL_75:
  WdLogEvent5_WdAssertion(v47);
LABEL_37:
  if ( (int)v13 >= 0 )
  {
    v13 = *(int *)CCD_TOPOLOGY::SetModalitySetId(a2, (const struct CCD_SET_STRING_ID *)v6);
    if ( (int)v13 < 0 )
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdError(v33);
      v49[3] = v13;
      v49[4] = a2;
      v49[5] = v6;
      WdLogEvent5_WdError(v49);
    }
    else
    {
      *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = v6[16];
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
    }
  }
  if ( *(_QWORD *)&v53[1] )
    ZwClose(*(HANDLE *)&v53[1]);
  return (unsigned int)v13;
}
