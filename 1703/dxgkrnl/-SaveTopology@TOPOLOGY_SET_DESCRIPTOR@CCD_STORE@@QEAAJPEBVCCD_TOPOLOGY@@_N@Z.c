/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B0C90
 * Callers:
 *     _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C00A6840 (_anonymous_namespace_--_SaveTopologySetCallback.c)
 * Callees:
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C0003A18 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C00044B8 (RtlStringCbPrintfW.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _CcdWriteRegistryValues @ 0x1C00AE504 (_CcdWriteRegistryValues.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B0318 (_CcdOpenRegistrySubkey.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C00B054C (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B05C0 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00B11C0 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00EE2CC (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rbx
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int16 *v11; // r14
  int v12; // r12d
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int16 v20; // dx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v22; // rcx
  __int64 v23; // r15
  __int64 v24; // rbx
  NTSTATUS v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r12
  int v34; // eax
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r15
  int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int16 v43; // dx
  _QWORD *v45; // rax
  int v46; // ebx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v50; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v51; // [rsp+3Ch] [rbp-34h] BYREF
  int v52; // [rsp+40h] [rbp-30h]
  int v53; // [rsp+44h] [rbp-2Ch]
  int v54; // [rsp+48h] [rbp-28h]
  ULONG v55[3]; // [rsp+4Ch] [rbp-24h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v56; // [rsp+58h] [rbp-18h]
  wchar_t pszDest; // [rsp+60h] [rbp-10h] BYREF

  v56 = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v6 = 0;
  v7 = v3;
  if ( v3 < 0 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v5, v4);
    v45[3] = v7;
LABEL_51:
    v45[4] = a2;
    v45[5] = *((_QWORD *)a2 + 8);
    v45[6] = 1LL;
    WdLogEvent5_WdError(v45);
    return (unsigned int)v7;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(a2);
  v11 = (unsigned __int16 *)ModalitySetId;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9);
    v45[3] = *(int *)v11;
    goto LABEL_51;
  }
  v12 = -1;
  Handle = 0LL;
  if ( *((_WORD *)ModalitySetId + 16) )
  {
    while ( 1 )
    {
      v13 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v11, v6, &v51, 0LL, &v50);
      v17 = v13;
      if ( v13 < 0 )
        break;
      if ( *(int *)a2 < 0
        || !*((_WORD *)a2 + 4)
        || ((v18 = *((_QWORD *)a2 + 8)) == 0 ? (v14 = 0LL) : (v14 = *(unsigned __int16 *)(v18 + 20)),
            v6 >= (unsigned __int16)v14) )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, 0LL, v15, v16);
        v48[3] = -1073741823LL;
        goto LABEL_48;
      }
      v19 = *((_QWORD *)a2 + 7);
      if ( v19 )
        v20 = *(_WORD *)(v19 + 2LL * v6);
      else
        v20 = v6;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v20);
      v23 = v51;
      v24 = (__int64)PathDescriptor;
      if ( v12 != v51 )
      {
        v25 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v51);
        v30 = v25;
        if ( v25 < 0 )
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
          v48[3] = v30;
          v48[4] = v6;
          v48[5] = v23;
          v48[6] = a2;
          v48[7] = *((_QWORD *)a2 + 8);
          goto LABEL_49;
        }
        if ( Handle )
          ZwClose(Handle);
        v31 = CcdOpenRegistrySubkey((int)&Handle, 983103, *((_QWORD *)v56 + 8), &pszDest, &v55[1]);
        v33 = v31;
        if ( v31 < 0 )
        {
          v47 = (_QWORD *)WdLogNewEntry5_WdError(v22, v32);
          v47[3] = v33;
          v47[4] = v6;
          v47[5] = v23;
          goto LABEL_43;
        }
        v12 = v23;
        if ( !v50 )
        {
          v52 = *(_DWORD *)(v24 + 96);
          v53 = *(_DWORD *)(v24 + 100);
          v54 = *(_DWORD *)(v24 + 112);
          if ( (*(_QWORD *)v24 & 0x20000LL) != 0 )
          {
            if ( (*(_QWORD *)v24 & 0x200LL) != 0 && ((*(_DWORD *)(v24 + 132) - 2) & 0xFFFFFFFD) == 0 )
            {
              *(_DWORD *)(v24 + 96) = *(_DWORD *)(v24 + 156);
              v34 = *(_DWORD *)(v24 + 152);
            }
            else
            {
              *(_DWORD *)(v24 + 96) = *(_DWORD *)(v24 + 152);
              v34 = *(_DWORD *)(v24 + 156);
            }
            *(_DWORD *)(v24 + 100) = v34;
          }
          *(_DWORD *)(v24 + 112) = *(_DWORD *)(v24 + 96) * ((unsigned int)GetBitsPerPixel(*(_DWORD *)(v24 + 116)) >> 3);
          v35 = CcdWriteRegistryValues((const WCHAR *)Handle, 0LL, (__int64)&unk_1C006E5C0, 8, v24);
          v37 = v35;
          if ( v35 < 0
            || (*(_DWORD *)(v24 + 96) = v52,
                *(_DWORD *)(v24 + 100) = v53,
                *(_DWORD *)(v24 + 112) = v54,
                v55[0] = 3,
                v38 = CcdWriteRegistryValues((const WCHAR *)Handle, 0LL, (__int64)&unk_1C006E400, 2, (__int64)v55),
                v37 = v38,
                v38 < 0) )
          {
            v47 = (_QWORD *)WdLogNewEntry5_WdError(v22, v36);
            v47[3] = v37;
            v47[4] = Handle;
            v47[5] = 0LL;
            v47[6] = v6;
            goto LABEL_44;
          }
        }
      }
      v39 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
              v22,
              (const WCHAR *)Handle,
              v50,
              (const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)v24);
      v42 = v39;
      if ( v39 < 0 )
      {
        v47 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
        v47[4] = v6;
        v47[5] = v50;
        v47[3] = v42;
LABEL_43:
        v47[6] = a2;
        v47[7] = *((_QWORD *)a2 + 8);
LABEL_44:
        WdLogEvent5_WdError(v47);
        goto LABEL_31;
      }
      if ( !g_IsMobileCore
        && (*(_QWORD *)v24 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(_DWORD *)(v24 + 88))
        && (v43 & 0x200) != 0 )
      {
        v46 = *(_DWORD *)(v24 + 132);
        *((_DWORD *)DXGGLOBAL::GetGlobal() + 202) = v46;
      }
      if ( ++v6 >= v11[16] )
        goto LABEL_31;
    }
    v48 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, 0LL, v15, v16);
    v48[3] = v17;
LABEL_48:
    v48[4] = v6;
    v48[5] = a2;
    v48[6] = *((_QWORD *)a2 + 8);
LABEL_49:
    WdLogEvent5_WdAssertion(v48);
LABEL_31:
    if ( Handle )
      ZwClose(Handle);
  }
  return 0LL;
}
