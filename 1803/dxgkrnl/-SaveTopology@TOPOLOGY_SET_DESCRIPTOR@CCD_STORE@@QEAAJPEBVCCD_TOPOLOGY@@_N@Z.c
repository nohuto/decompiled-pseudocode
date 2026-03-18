/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00B1FC8
 * Callers:
 *     _anonymous_namespace_::_SaveTopologySetCallback @ 0x1C00DF230 (_anonymous_namespace_--_SaveTopologySetCallback.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C000729C (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C000B630 (RtlStringCbPrintfW.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _CcdOpenRegistrySubkey @ 0x1C00B022C (_CcdOpenRegistrySubkey.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C00B1870 (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00B18E4 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1C00B296C (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x1C00B3F08 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdWriteRegistryValues @ 0x1C00DA838 (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 v7; // rcx
  unsigned __int16 *v8; // r14
  int v9; // r12d
  unsigned int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned __int16 v16; // dx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rbx
  NTSTATUS v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // r12
  int v26; // r12d
  int v27; // edx
  int v28; // eax
  unsigned int BitsPerPixel; // eax
  int v30; // edx
  int v31; // eax
  __int64 v32; // r15
  int v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // r15
  __int16 v37; // dx
  __int64 v38; // rcx
  _QWORD *v40; // rax
  int v41; // ebx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v45; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v46; // [rsp+3Ch] [rbp-34h] BYREF
  int v47; // [rsp+40h] [rbp-30h]
  int v48; // [rsp+44h] [rbp-2Ch]
  int v49; // [rsp+48h] [rbp-28h] BYREF
  int v50; // [rsp+4Ch] [rbp-24h]
  ULONG v51; // [rsp+50h] [rbp-20h] BYREF
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v52; // [rsp+58h] [rbp-18h]
  wchar_t pszDest; // [rsp+60h] [rbp-10h] BYREF

  v52 = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v4);
    v40[3] = v5;
LABEL_52:
    v40[4] = a2;
    v40[5] = *((_QWORD *)a2 + 8);
    v40[6] = 1LL;
    WdLogEvent5_WdError(v40);
    return (unsigned int)v5;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(a2);
  v8 = (unsigned __int16 *)ModalitySetId;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v40[3] = *(int *)v8;
    goto LABEL_52;
  }
  v9 = -1;
  Handle = 0LL;
  v10 = 0;
  if ( *((_WORD *)ModalitySetId + 16) )
  {
    while ( 1 )
    {
      v11 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v8, v10, &v46, 0LL, &v45);
      v13 = v11;
      if ( v11 < 0 )
        break;
      if ( *(int *)a2 < 0
        || !*((_WORD *)a2 + 4)
        || ((v14 = *((_QWORD *)a2 + 8)) == 0 ? (v12 = 0LL) : (v12 = *(unsigned __int16 *)(v14 + 20)),
            v10 >= (unsigned __int16)v12) )
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12);
        v43[3] = -1073741823LL;
        goto LABEL_49;
      }
      v15 = *((_QWORD *)a2 + 7);
      if ( v15 )
        v16 = *(_WORD *)(v15 + 2LL * v10);
      else
        v16 = v10;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v16);
      v19 = v46;
      v20 = (__int64)PathDescriptor;
      if ( v9 != v46 )
      {
        v21 = RtlStringCbPrintfW(&pszDest, 6uLL, L"%02x", v46);
        v23 = v21;
        if ( v21 < 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v22);
          v43[3] = v23;
          v43[4] = v10;
          v43[5] = v19;
          v43[6] = a2;
          v43[7] = *((_QWORD *)a2 + 8);
          goto LABEL_50;
        }
        if ( Handle )
          ZwClose(Handle);
        v24 = CcdOpenRegistrySubkey((int)&Handle, 983103, *((_QWORD *)v52 + 8), &pszDest, &v51);
        v25 = v24;
        if ( v24 < 0 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v42[3] = v25;
          v42[4] = v10;
          v42[5] = v19;
          goto LABEL_44;
        }
        v9 = v19;
        v50 = v19;
        if ( !v45 )
        {
          v26 = *(_DWORD *)(v20 + 96);
          v47 = *(_DWORD *)(v20 + 100);
          v48 = *(_DWORD *)(v20 + 112);
          if ( (*(_QWORD *)v20 & 0x20000LL) != 0 )
          {
            if ( (*(_QWORD *)v20 & 0x200LL) != 0 && ((*(_DWORD *)(v20 + 132) - 2) & 0xFFFFFFFD) == 0 )
            {
              v27 = *(_DWORD *)(v20 + 156);
              v28 = *(_DWORD *)(v20 + 152);
            }
            else
            {
              v27 = *(_DWORD *)(v20 + 152);
              v28 = *(_DWORD *)(v20 + 156);
            }
            *(_DWORD *)(v20 + 100) = v28;
            *(_DWORD *)(v20 + 96) = v27;
          }
          BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v20 + 116));
          *(_DWORD *)(v20 + 112) = v30 * (BitsPerPixel >> 3);
          v31 = CcdWriteRegistryValues((int)Handle, 0LL, v20);
          v32 = v31;
          if ( v31 < 0
            || (*(_DWORD *)(v20 + 100) = v47,
                *(_DWORD *)(v20 + 112) = v48,
                *(_DWORD *)(v20 + 96) = v26,
                v49 = 3,
                v33 = CcdWriteRegistryValues((int)Handle, 0LL, (__int64)&v49),
                v32 = v33,
                v33 < 0) )
          {
            v42 = (_QWORD *)WdLogNewEntry5_WdError(v18);
            v42[3] = v32;
            v42[4] = Handle;
            v42[5] = 0LL;
            v42[6] = v10;
            goto LABEL_45;
          }
          v9 = v50;
        }
      }
      v34 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
              v18,
              Handle,
              v45,
              (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v20);
      v36 = v34;
      if ( v34 < 0 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v35);
        v42[4] = v10;
        v42[5] = v45;
        v42[3] = v36;
LABEL_44:
        v42[6] = a2;
        v42[7] = *((_QWORD *)a2 + 8);
LABEL_45:
        WdLogEvent5_WdError(v42);
        goto LABEL_31;
      }
      if ( (*(_QWORD *)v20 & 0x800000000000LL) != 0
        && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v20 + 88))
        && (v37 & 0x200) != 0 )
      {
        v41 = *(_DWORD *)(v20 + 132);
        *((_DWORD *)DXGGLOBAL::GetGlobal(v38) + 222) = v41;
      }
      if ( ++v10 >= v8[16] )
        goto LABEL_31;
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12);
    v43[3] = v13;
LABEL_49:
    v43[4] = v10;
    v43[5] = a2;
    v43[6] = *((_QWORD *)a2 + 8);
LABEL_50:
    WdLogEvent5_WdAssertion(v43);
LABEL_31:
    if ( Handle )
      ZwClose(Handle);
  }
  return 0LL;
}
