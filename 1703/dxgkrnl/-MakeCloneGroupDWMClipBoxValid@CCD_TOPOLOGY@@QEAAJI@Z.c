/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00ED014
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00ECAB4 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C00031EC (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00A8A40 (DxgkGetAdapterDefaultScaling.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00AB1D8 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r15d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _LUID *v12; // rbx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r10d
  int v17; // r10^4
  DWORD HighPart; // eax
  int v19; // eax
  int v20; // eax
  _QWORD *v22; // rax
  DWORD v23; // eax
  LONG *p_HighPart; // rdi
  int *v25; // rsi
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned int v35; // eax
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  DWORD LowPart; // [rsp+60h] [rbp+8h] BYREF
  DWORD v42; // [rsp+64h] [rbp+Ch]
  __int64 v43; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v8 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2, a3, a4) + 58);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v5, v6, v7);
    v12 = (struct _LUID *)PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 58) != v8 )
      goto LABEL_13;
    if ( !*((_BYTE *)PathDescriptor + 129) )
    {
      v23 = *(_DWORD *)PathDescriptor;
      goto LABEL_28;
    }
    v13 = *((_DWORD *)PathDescriptor + 33);
    v43 = *((_QWORD *)PathDescriptor + 12);
    if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(v13) - 2) & 0xFFFFFFFD) != 0 )
    {
      LowPart = v12[19].LowPart;
      HighPart = v12[19].HighPart;
    }
    else
    {
      LowPart = v12[19].HighPart;
      HighPart = v12[19].LowPart;
    }
    v42 = HighPart;
    if ( (v12->LowPart & 0x800000) == 0 )
      goto LABEL_15;
    v15 = (unsigned int)v12[21].HighPart;
    if ( (int)v15 < 0 )
      break;
    v19 = v12[21].LowPart;
    if ( v19 < 0 )
      break;
    v14 = v12[22].LowPart;
    if ( (int)v14 <= v19 )
      break;
    v20 = v12[22].HighPart;
    if ( v20 <= (int)v15 || (int)v14 > v16 || v20 > v17 )
      break;
LABEL_13:
    if ( ++v5 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (v12[1].LowPart & 0x800000) == 0 )
  {
LABEL_15:
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v6, v7);
    v22[3] = v5;
    v22[4] = v12[3].LowPart;
    v22[5] = (unsigned int)v12[3].HighPart;
    v11 = 0x40000000000LL;
    if ( (*(_QWORD *)v12 & 0x40000000000LL) == 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(0x40000000000LL, v10, v6, v7);
      WdLogEvent5_WdAssertion(v30);
    }
    v23 = v12->LowPart;
    if ( v12[17].LowPart == 1 )
    {
      p_HighPart = &v12[17].HighPart;
      if ( (v12->LowPart & 0x10000) != 0 )
      {
        if ( *p_HighPart == 5 )
        {
          DxgkGetAdapterDefaultScaling(v12 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v12[17].HighPart);
          v12[24].HighPart |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling(v12 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v12[17].HighPart);
        *(_QWORD *)v12 |= 0x10000uLL;
        v12[24].HighPart |= 0x80u;
      }
      v25 = (int *)&v12[21];
      v26 = ConvertDmmToDisplayConfigScaling((unsigned int)*p_HighPart, v10, v6, v7);
      if ( !CalculateScaling(v26, (unsigned int *)&v43, &LowPart, (unsigned int *)&v12[21]) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v27, v10, v6, v7);
        *(_QWORD *)(v31 + 24) = *p_HighPart;
        WdLogEvent5_WdAssertion(v31);
        DxgkGetAdapterDefaultScaling(v12 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)&v12[17].HighPart);
        v35 = ConvertDmmToDisplayConfigScaling((unsigned int)*p_HighPart, v32, v33, v34);
        v36 = CalculateScaling(v35, (unsigned int *)&v43, &LowPart, (unsigned int *)&v12[21]);
        v12[24].HighPart |= 0x40u;
        if ( !v36 )
        {
          v38 = WdLogNewEntry5_WdAssertion(v37, v10, v6, v7);
          *(_QWORD *)(v38 + 24) = 5802LL;
          WdLogEvent5_WdAssertion(v38);
        }
      }
LABEL_22:
      *(_QWORD *)v12 |= 0x800000uLL;
      v28 = (unsigned int)v12[21].HighPart;
      if ( (int)v28 < 0 || *v25 < 0 || (signed int)v12[22].LowPart <= *v25 || v12[22].HighPart <= (int)v28 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v28, v10, v6, v7);
        *(_QWORD *)(v40 + 24) = 5822LL;
        WdLogEvent5_WdAssertion(v40);
      }
      goto LABEL_13;
    }
LABEL_28:
    if ( (v23 & 0x100) == 0 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v11, v10, v6, v7);
      WdLogEvent5_WdAssertion(v39);
    }
    v12[24].HighPart |= 1u;
    v25 = (int *)&v12[21];
    v12[22].LowPart = v12[12].LowPart;
    v12[22].HighPart = v12[12].HighPart;
    v12[21].LowPart = 0;
    v12[21].HighPart = 0;
    goto LABEL_22;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v15, v14);
  v29[3] = v5;
  v29[4] = v12[3].LowPart;
  v29[5] = (unsigned int)v12[3].HighPart;
  WdLogEvent5_WdError(v29);
  return 3221225485LL;
}
