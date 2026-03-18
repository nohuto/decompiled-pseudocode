/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00DAEF8
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00DB780 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00E0B7C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00B5194 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, __int64 a2)
{
  char v3; // r12
  __int64 v4; // rcx
  __int16 v5; // ax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned int i; // esi
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v13; // rdx
  SESSION_VIEW *v15; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int j; // ebp
  __int64 v20; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rdx
  __int64 v22; // rax
  unsigned int k; // ebp
  __int64 v24; // rax
  unsigned __int16 v25; // ax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  char v31; // [rsp+58h] [rbp+10h]

  v31 = a2;
  v3 = a2;
  v4 = *((_QWORD *)*this + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 20);
  else
    v5 = 0;
  if ( !v5 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v4, a2);
  if ( Current )
  {
    v8 = *((_QWORD *)Current + 12);
    if ( v8 )
    {
      for ( i = 0; ; ++i )
      {
        v10 = *((_QWORD *)*this + 8);
        if ( v10 )
          v11 = *(_WORD *)(v10 + 20);
        else
          v11 = 0;
        if ( i >= v11 )
          return 0LL;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i);
        v13 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          if ( (v13 & 0x1000000000LL) != 0 )
          {
            *((_DWORD *)PathDescriptor + 46) = i | 0xFE5A0000;
            goto LABEL_14;
          }
          if ( v13 >= 0 )
          {
            *((_DWORD *)PathDescriptor + 46) = i | 0xFE580000;
LABEL_14:
            *(_QWORD *)PathDescriptor = v13 | 0x4000000000000LL;
            continue;
          }
          v15 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 31);
          if ( v15 )
          {
            PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v15);
            v17 = *((unsigned int *)PathDescriptor + 6);
            if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v17 )
            {
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v8 + 304))(
                      (__int64)PathDescriptor + 16,
                      v17,
                      (__int64)PathDescriptor + 144) )
              {
                v27 = (_QWORD *)WdLogNewEntry5_WdError(v18);
                v27[3] = *((int *)PathDescriptor + 5);
                v27[4] = *((unsigned int *)PathDescriptor + 4);
                v27[5] = *((unsigned int *)PathDescriptor + 6);
                v27[6] = *this;
                v27[7] = *((_QWORD *)*this + 8);
                WdLogEvent5_WdError(v27);
              }
              *(_QWORD *)PathDescriptor |= 0x4000000000800uLL;
              *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
              for ( j = 0; ; ++j )
              {
                v20 = *((_QWORD *)*this + 8);
                if ( v20 )
                  LOWORD(v20) = *(_WORD *)(v20 + 20);
                if ( j >= (unsigned __int16)v20 )
                  break;
                v21 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v22 = *(_QWORD *)v21;
                if ( (*(_QWORD *)v21 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 31) == *((_QWORD *)v21 + 31) )
                {
                  *((_DWORD *)v21 + 46) = i | 0xFE590000;
                  *(_QWORD *)v21 = v22 | 0x4000000000800LL;
                  *((_QWORD *)v21 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
              v3 = v31;
            }
          }
          else
          {
            if ( !v3 )
              return 3221225473LL;
            for ( k = i; ; ++k )
            {
              v24 = *((_QWORD *)*this + 8);
              v25 = v24 ? *(_WORD *)(v24 + 20) : 0;
              if ( k >= v25 )
                break;
              v26 = CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( *((_DWORD *)PathDescriptor + 6) == *((_DWORD *)v26 + 6)
                && *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v26 + 4)
                && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v26 + 5) )
              {
                *(_QWORD *)v26 |= 0x4000000000000uLL;
                *((_DWORD *)v26 + 46) = i | 0xFE580000;
              }
            }
          }
        }
      }
    }
  }
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v28[3] = PsGetCurrentProcess(v30, v29);
  v28[4] = *this;
  v28[5] = *((_QWORD *)*this + 8);
  WdLogEvent5_WdError(v28);
  return 3221225473LL;
}
