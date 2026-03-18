/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DD2DC
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DCD78 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C000EE80 (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00B8D7C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00E5230 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  unsigned int v3; // ebp
  int v4; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v6; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v7; // rbx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r10^4
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _QWORD *v17; // rax
  int v18; // eax
  _DWORD *v19; // rdi
  int *v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // eax
  char v28; // al
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // [rsp+60h] [rbp+8h] BYREF
  int v34; // [rsp+64h] [rbp+Ch]
  __int64 v35; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v7 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) != v4 )
      goto LABEL_13;
    if ( !*((_BYTE *)PathDescriptor + 129) )
    {
      v18 = *(_DWORD *)PathDescriptor;
      goto LABEL_28;
    }
    v8 = *((_DWORD *)PathDescriptor + 33);
    v35 = *((_QWORD *)PathDescriptor + 12);
    if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(v8) - 2) & 0xFFFFFFFD) != 0 )
    {
      v33 = *((_DWORD *)v7 + 38);
      v13 = *((_DWORD *)v7 + 39);
    }
    else
    {
      v33 = *((_DWORD *)v7 + 39);
      v13 = *((_DWORD *)v7 + 38);
    }
    v34 = v13;
    if ( (*(_DWORD *)v7 & 0x800000) == 0 )
      goto LABEL_15;
    v10 = *((unsigned int *)v7 + 43);
    if ( (int)v10 < 0 )
      break;
    v14 = *((_DWORD *)v7 + 42);
    if ( v14 < 0 )
      break;
    v9 = *((unsigned int *)v7 + 44);
    if ( (int)v9 <= v14 )
      break;
    v15 = *((_DWORD *)v7 + 45);
    if ( v15 <= (int)v10 || (int)v9 > v11 || v15 > v12 )
      break;
LABEL_13:
    if ( ++v3 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (*((_DWORD *)v7 + 2) & 0x800000) == 0 )
  {
LABEL_15:
    v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9);
    v17[3] = v3;
    v17[4] = *((unsigned int *)v7 + 6);
    v17[5] = *((unsigned int *)v7 + 7);
    v6 = 0x40000000000LL;
    if ( (*(_QWORD *)v7 & 0x40000000000LL) == 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(0x40000000000LL);
      WdLogEvent5_WdAssertion(v25);
    }
    v18 = *(_DWORD *)v7;
    if ( *((_DWORD *)v7 + 34) == 1 )
    {
      v19 = (_DWORD *)((char *)v7 + 140);
      if ( (*(_DWORD *)v7 & 0x10000) != 0 )
      {
        if ( *v19 == 5 )
        {
          DxgkGetAdapterDefaultScaling((char *)v7 + 16);
          *((_DWORD *)v7 + 57) |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)v7 + 16);
        *(_QWORD *)v7 |= 0x10000uLL;
        *((_DWORD *)v7 + 57) |= 0x80u;
      }
      v20 = (int *)((char *)v7 + 168);
      v21 = ConvertDmmToDisplayConfigScaling((unsigned int)*v19);
      if ( !CalculateScaling(v21, (unsigned int *)&v35, &v33, (unsigned int *)v7 + 42) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v22);
        *(_QWORD *)(v26 + 24) = (int)*v19;
        WdLogEvent5_WdAssertion(v26);
        DxgkGetAdapterDefaultScaling((char *)v7 + 16);
        v27 = ConvertDmmToDisplayConfigScaling((unsigned int)*v19);
        v28 = CalculateScaling(v27, (unsigned int *)&v35, &v33, (unsigned int *)v7 + 42);
        *((_DWORD *)v7 + 57) |= 0x40u;
        if ( !v28 )
        {
          v30 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v30 + 24) = 3642LL;
          WdLogEvent5_WdAssertion(v30);
        }
      }
LABEL_22:
      *(_QWORD *)v7 |= 0x800000uLL;
      v23 = *((unsigned int *)v7 + 43);
      if ( (int)v23 < 0 || *v20 < 0 || *((_DWORD *)v7 + 44) <= *v20 || *((_DWORD *)v7 + 45) <= (int)v23 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v23);
        *(_QWORD *)(v32 + 24) = 3662LL;
        WdLogEvent5_WdAssertion(v32);
      }
      goto LABEL_13;
    }
LABEL_28:
    if ( (v18 & 0x100) == 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v31);
    }
    *((_DWORD *)v7 + 57) |= 1u;
    v20 = (int *)((char *)v7 + 168);
    *((_DWORD *)v7 + 44) = *((_DWORD *)v7 + 24);
    *((_DWORD *)v7 + 45) = *((_DWORD *)v7 + 25);
    *((_DWORD *)v7 + 42) = 0;
    *((_DWORD *)v7 + 43) = 0;
    goto LABEL_22;
  }
  v24 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v24[3] = v3;
  v24[4] = *((unsigned int *)v7 + 6);
  v24[5] = *((unsigned int *)v7 + 7);
  WdLogEvent5_WdError(v24);
  return 3221225485LL;
}
