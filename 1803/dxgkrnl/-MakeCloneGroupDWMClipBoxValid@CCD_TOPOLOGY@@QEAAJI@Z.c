/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00B505C
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B4AFC (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000731C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x1C000BE64 (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1C00D8450 (DxgkGetAdapterDefaultScaling.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00DED6C (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
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
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  int v14; // r10^4
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _QWORD *v18; // rax
  __int64 v19; // rax
  _DWORD *v20; // rsi
  unsigned int *v21; // rdi
  unsigned int v22; // eax
  int v23; // eax
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int v29; // eax
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // [rsp+60h] [rbp+8h] BYREF
  int v35; // [rsp+64h] [rbp+Ch]
  __int64 v36; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  if ( !*(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
    return 0LL;
  while ( 1 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v7 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) != v4 )
      goto LABEL_26;
    if ( !*((_BYTE *)PathDescriptor + 129) )
    {
      if ( (*(_DWORD *)PathDescriptor & 0x100LL) == 0 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v32);
      }
      *((_DWORD *)v7 + 59) |= 1u;
      v21 = (unsigned int *)((char *)v7 + 168);
      *((_DWORD *)v7 + 44) = *((_DWORD *)v7 + 24);
      *((_DWORD *)v7 + 45) = *((_DWORD *)v7 + 25);
      v23 = 0;
      *((_DWORD *)v7 + 43) = 0;
      *((_DWORD *)v7 + 42) = 0;
      goto LABEL_22;
    }
    v8 = *((_DWORD *)PathDescriptor + 33);
    v36 = *((_QWORD *)PathDescriptor + 12);
    if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(v8) - 2) & 0xFFFFFFFD) != 0 )
    {
      v34 = *((_DWORD *)v7 + 38);
      v15 = *((_DWORD *)v7 + 39);
    }
    else
    {
      v34 = *((_DWORD *)v7 + 39);
      v15 = *((_DWORD *)v7 + 38);
    }
    v35 = v15;
    if ( (*(_DWORD *)v7 & 0x800000) == 0 )
      goto LABEL_14;
    v10 = *((unsigned int *)v7 + 43);
    if ( (int)v10 < 0 )
      break;
    v16 = *((_DWORD *)v7 + 42);
    if ( v16 < 0 )
      break;
    v9 = *((unsigned int *)v7 + 44);
    if ( (int)v9 <= v16 )
      break;
    v17 = *((_DWORD *)v7 + 45);
    if ( v17 <= (int)v10 || (int)v9 > v13 || v17 > v14 )
      break;
LABEL_26:
    if ( ++v3 >= *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) )
      return 0LL;
  }
  if ( (*((_DWORD *)v7 + 2) & 0x800000) == 0 )
  {
LABEL_14:
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v18[3] = v3;
    v18[4] = *((unsigned int *)v7 + 6);
    v18[5] = *((unsigned int *)v7 + 7);
    v6 = 0x40000000000LL;
    v19 = *(_QWORD *)v7;
    if ( (*(_QWORD *)v7 & 0x40000000000LL) == 0 )
    {
      v26 = WdLogNewEntry5_WdAssertion(0x40000000000LL);
      WdLogEvent5_WdAssertion(v26);
      v19 = *(_QWORD *)v7;
    }
    if ( *((_DWORD *)v7 + 34) == 1 )
    {
      v20 = (_DWORD *)((char *)v7 + 140);
      if ( (v19 & 0x10000) != 0 )
      {
        if ( *v20 == 5 )
        {
          DxgkGetAdapterDefaultScaling((char *)v7 + 16);
          *((_DWORD *)v7 + 59) |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)v7 + 16);
        *(_QWORD *)v7 |= 0x10000uLL;
        *((_DWORD *)v7 + 59) |= 0x80u;
      }
      v21 = (unsigned int *)((char *)v7 + 168);
      v22 = ConvertDmmToDisplayConfigScaling((unsigned int)*v20);
      if ( !CalculateScaling(v22, (unsigned int *)&v36, &v34, (unsigned int *)v7 + 42) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v28 + 24) = (int)*v20;
        WdLogEvent5_WdAssertion(v28);
        DxgkGetAdapterDefaultScaling((char *)v7 + 16);
        v29 = ConvertDmmToDisplayConfigScaling((unsigned int)*v20);
        v30 = CalculateScaling(v29, (unsigned int *)&v36, &v34, (unsigned int *)v7 + 42);
        *((_DWORD *)v7 + 59) |= 0x40u;
        if ( !v30 )
        {
          v31 = WdLogNewEntry5_WdAssertion(v6);
          *(_QWORD *)(v31 + 24) = 3666LL;
          WdLogEvent5_WdAssertion(v31);
        }
      }
    }
    else
    {
      if ( (v19 & 0x100) == 0 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v6);
        WdLogEvent5_WdAssertion(v27);
      }
      *((_DWORD *)v7 + 59) |= 1u;
      v21 = (unsigned int *)((char *)v7 + 168);
      *((_DWORD *)v7 + 44) = *((_DWORD *)v7 + 24);
      *((_DWORD *)v7 + 45) = *((_DWORD *)v7 + 25);
      *((_DWORD *)v7 + 43) = 0;
      *((_DWORD *)v7 + 42) = 0;
    }
    v23 = *((_DWORD *)v7 + 43);
LABEL_22:
    *(_QWORD *)v7 |= 0x800000uLL;
    if ( v23 < 0 || (v6 = *v21, (int)v6 < 0) || *((_DWORD *)v7 + 44) <= (int)v6 || *((_DWORD *)v7 + 45) <= v23 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v33 + 24) = 3686LL;
      WdLogEvent5_WdAssertion(v33);
    }
    goto LABEL_26;
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v10);
  v25[3] = v3;
  v25[4] = *((unsigned int *)v7 + 6);
  v25[5] = *((unsigned int *)v7 + 7);
  WdLogEvent5_WdError(v25);
  return 3221225485LL;
}
