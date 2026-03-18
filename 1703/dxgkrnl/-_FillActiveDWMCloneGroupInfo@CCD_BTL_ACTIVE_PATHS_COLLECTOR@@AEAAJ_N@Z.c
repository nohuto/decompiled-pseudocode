/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00EF5B0
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00EFC44 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00EFD48 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z @ 0x1C0003A50 (-IsMatchingSource@CCD_TOPOLOGY@@SA_NAEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_LUID@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00F8DD4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  char v3; // r12
  __int64 v4; // rcx
  __int16 v5; // ax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r13
  unsigned int i; // esi
  __int64 v13; // rax
  unsigned __int16 v14; // ax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v16; // rax
  SESSION_VIEW *v18; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int j; // ebp
  __int64 v24; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rdx
  __int64 v26; // rax
  unsigned int k; // ebp
  __int64 v28; // rax
  unsigned __int16 v29; // ax
  const struct _LUID *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rcx

  v3 = a2;
  v4 = *((_QWORD *)*this + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 20);
  else
    v5 = 0;
  if ( !v5 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    v11 = *((_QWORD *)Current + 9);
    if ( v11 )
    {
      for ( i = 0; ; ++i )
      {
        v13 = *((_QWORD *)*this + 8);
        v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
        if ( i >= v14 )
          break;
        PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*this, i, v9, v10);
        v16 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x4000000000000LL) == 0 )
        {
          if ( v16 < 0 )
          {
            v18 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 27);
            if ( v18 )
            {
              PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v18);
              v20 = *((unsigned int *)PathDescriptor + 6);
              if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v20 )
              {
                if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v11 + 304))(
                        (__int64)PathDescriptor + 16,
                        v20,
                        (__int64)PathDescriptor + 144) )
                {
                  v31 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
                  v31[3] = *((int *)PathDescriptor + 5);
                  v31[4] = *((unsigned int *)PathDescriptor + 4);
                  v31[5] = *((unsigned int *)PathDescriptor + 6);
                  v31[6] = *this;
                  v31[7] = *((_QWORD *)*this + 8);
                  WdLogEvent5_WdError(v31);
                }
                *(_QWORD *)PathDescriptor |= 0x4000000000800uLL;
                *((_DWORD *)PathDescriptor + 58) = i | 0xFE590000;
                for ( j = 0; ; ++j )
                {
                  v24 = *((_QWORD *)*this + 8);
                  if ( v24 )
                    LOWORD(v24) = *(_WORD *)(v24 + 20);
                  if ( j >= (unsigned __int16)v24 )
                    break;
                  v25 = CCD_TOPOLOGY::GetPathDescriptor(*this, j, v9, v10);
                  v26 = *(_QWORD *)v25;
                  v9 = 0x8000000000000000uLL;
                  if ( (*(_QWORD *)v25 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                    && *((_QWORD *)PathDescriptor + 27) == *((_QWORD *)v25 + 27) )
                  {
                    *((_DWORD *)v25 + 58) = i | 0xFE590000;
                    *(_QWORD *)v25 = v26 | 0x4000000000800LL;
                    *((_QWORD *)v25 + 18) = *((_QWORD *)PathDescriptor + 18);
                  }
                }
                v3 = a2;
              }
            }
            else
            {
              if ( !v3 )
                return 3221225473LL;
              for ( k = i; ; ++k )
              {
                v28 = *((_QWORD *)*this + 8);
                v29 = v28 ? *(_WORD *)(v28 + 20) : 0;
                if ( k >= v29 )
                  break;
                v30 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(*this, k, v9, v10);
                if ( CCD_TOPOLOGY::IsMatchingSource(PathDescriptor, v30 + 2, v30[3].LowPart) )
                {
                  *(_QWORD *)v10 |= 0x4000000000000uLL;
                  *(_DWORD *)(v10 + 232) = i | 0xFE580000;
                }
              }
            }
          }
          else
          {
            *((_DWORD *)PathDescriptor + 58) = i | 0xFE580000;
            *(_QWORD *)PathDescriptor = v16 | 0x4000000000000LL;
          }
        }
      }
      return 0LL;
    }
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7);
  v32[3] = PsGetCurrentProcess(v33);
  v32[4] = *this;
  v32[5] = *((_QWORD *)*this + 8);
  WdLogEvent5_WdError(v32);
  return 3221225473LL;
}
