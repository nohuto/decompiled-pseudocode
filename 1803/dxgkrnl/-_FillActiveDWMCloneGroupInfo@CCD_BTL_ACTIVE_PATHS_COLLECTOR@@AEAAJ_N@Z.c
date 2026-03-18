/*
 * XREFs of ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C00B6CD4
 * Callers:
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B0A28 (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C00B75A8 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00AA3F4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(CCD_TOPOLOGY **this, char a2)
{
  __int64 v4; // rcx
  __int16 v5; // ax
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // r13
  unsigned int i; // edi
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rbx
  __int64 v13; // rax
  unsigned int v14; // eax
  SESSION_VIEW *v16; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int j; // ebp
  __int64 v21; // rax
  unsigned __int16 v22; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rbx
  unsigned int k; // ebp
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax

  v4 = *((_QWORD *)*this + 8);
  if ( v4 )
    v5 = *(_WORD *)(v4 + 20);
  else
    v5 = 0;
  if ( !v5 )
    return 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v8 = *((_QWORD *)Current + 13);
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
          *(_QWORD *)PathDescriptor = v13 | 0x4000000000000LL;
          if ( (v13 & 0x1000000000LL) != 0 )
          {
            v14 = i | 0xFE5A0000;
            goto LABEL_14;
          }
          if ( v13 >= 0 )
          {
            v14 = i | 0xFE580000;
LABEL_14:
            *((_DWORD *)PathDescriptor + 46) = v14;
            continue;
          }
          v16 = (SESSION_VIEW *)*((_QWORD *)PathDescriptor + 32);
          *((_DWORD *)PathDescriptor + 46) = i | 0xFE590000;
          if ( v16 )
          {
            PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v16);
            v18 = *((unsigned int *)PathDescriptor + 6);
            if ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v18 )
            {
              if ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(v8 + 304))(
                      (__int64)PathDescriptor + 16,
                      v18,
                      (__int64)PathDescriptor + 144) )
              {
                v31 = (_QWORD *)WdLogNewEntry5_WdError(v19);
                v31[3] = *((int *)PathDescriptor + 5);
                v31[4] = *((unsigned int *)PathDescriptor + 4);
                v31[5] = *((unsigned int *)PathDescriptor + 6);
                v31[6] = *this;
                v31[7] = *((_QWORD *)*this + 8);
                WdLogEvent5_WdError(v31);
              }
              *(_QWORD *)PathDescriptor |= 0x800uLL;
              for ( j = 0; ; ++j )
              {
                v21 = *((_QWORD *)*this + 8);
                v22 = v21 ? *(_WORD *)(v21 + 20) : 0;
                if ( j >= v22 )
                  break;
                v23 = CCD_TOPOLOGY::GetPathDescriptor(*this, j);
                v24 = *(_QWORD *)v23;
                if ( (*(_QWORD *)v23 & 0x8004000000000000uLL) == 0x8000000000000000uLL
                  && *((_QWORD *)PathDescriptor + 32) == *((_QWORD *)v23 + 32) )
                {
                  *((_DWORD *)v23 + 46) = i | 0xFE590000;
                  *(_QWORD *)v23 = v24 | 0x4000000000800LL;
                  *((_QWORD *)v23 + 18) = *((_QWORD *)PathDescriptor + 18);
                }
              }
            }
          }
          else if ( a2 )
          {
            for ( k = i; ; ++k )
            {
              v27 = *((_QWORD *)*this + 8);
              v28 = v27 ? *(_WORD *)(v27 + 20) : 0;
              if ( k >= v28 )
                break;
              v29 = CCD_TOPOLOGY::GetPathDescriptor(*this, k);
              if ( *((_DWORD *)PathDescriptor + 6) == *((_DWORD *)v29 + 6)
                && *((_DWORD *)PathDescriptor + 4) == *((_DWORD *)v29 + 4)
                && *((_DWORD *)PathDescriptor + 5) == *((_DWORD *)v29 + 5) )
              {
                *(_QWORD *)v29 |= 0x4000000000000uLL;
                *((_DWORD *)v29 + 46) = i | 0xFE580000;
              }
            }
          }
          else
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(0LL);
            v30[3] = *((int *)PathDescriptor + 5);
            v30[4] = *((unsigned int *)PathDescriptor + 4);
            v30[5] = *((unsigned int *)PathDescriptor + 6);
            v30[6] = *((unsigned int *)PathDescriptor + 7);
            WdLogEvent5_WdError(v30);
          }
        }
      }
    }
  }
  v25 = (_QWORD *)WdLogNewEntry5_WdError(v7);
  v25[3] = PsGetCurrentProcess();
  v25[4] = *this;
  v25[5] = *((_QWORD *)*this + 8);
  WdLogEvent5_WdError(v25);
  return 3221225473LL;
}
