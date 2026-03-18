/*
 * XREFs of ?_CheckResolvedTopologyForVirtualModeConsistency@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C00EE134
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00EBBE8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_CheckResolvedTopologyForVirtualModeConsistency(
        CCD_TOPOLOGY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r12d
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  unsigned int i; // edi
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  unsigned int k; // ebx
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v17; // r14
  __int64 v18; // r15
  unsigned int j; // ebp
  __int64 v20; // rax
  unsigned __int16 v21; // cx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v23; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v27; // rdi
  char v28; // al
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax

  v4 = 0;
  v6 = 0;
LABEL_2:
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    v8 = *(_WORD *)(v7 + 20);
  else
    v8 = 0;
  if ( v6 >= v8 )
  {
    for ( i = 0; ; ++i )
    {
      v10 = *((_QWORD *)this + 8);
      if ( v10 )
        v11 = *(_WORD *)(v10 + 20);
      else
        v11 = 0;
      if ( i >= v11 )
        goto LABEL_9;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, i, a3, a4);
      v23 = PathDescriptor;
      if ( !*((_BYTE *)PathDescriptor + 129) )
      {
        v31 = *(_QWORD *)PathDescriptor;
        if ( (*(_QWORD *)PathDescriptor & 0x20100LL) == 0x20100 )
        {
          if ( (v31 & 0x200) == 0 || ((*((_DWORD *)PathDescriptor + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            v32 = *((unsigned int *)PathDescriptor + 38);
            if ( *((_QWORD *)PathDescriptor + 12) == *((_QWORD *)PathDescriptor + 19) )
              continue;
            v33 = *((_DWORD *)PathDescriptor + 39);
          }
          else
          {
            v32 = *((unsigned int *)PathDescriptor + 39);
            if ( __PAIR64__(*((_DWORD *)PathDescriptor + 24), *((_DWORD *)PathDescriptor + 25)) == *((_QWORD *)PathDescriptor + 19) )
              continue;
            v33 = *((_DWORD *)PathDescriptor + 38);
          }
          v34 = v31 & 0xFFFFFFFFFF7DFF78uLL;
          *((_DWORD *)v23 + 25) = v33;
          *((_QWORD *)v23 + 1) &= 0xFFFFFFFFFF7DFF78uLL;
          *(_QWORD *)v23 = v34;
          *((_DWORD *)v23 + 24) = v32;
          v35 = WdLogNewEntry5_WdWarning(v32, v34, a3, a4);
          *(_QWORD *)(v35 + 24) = *((unsigned int *)v23 + 7);
          *(_QWORD *)(v35 + 32) = *((_QWORD *)v23 + 2);
          WdLogEvent5_WdWarning(v35);
        }
      }
    }
  }
  v16 = CCD_TOPOLOGY::GetPathDescriptor(this, v6, a3, a4);
  v17 = v16;
  if ( (*(_QWORD *)v16 & 0x8000000000000LL) == 0 )
    goto LABEL_20;
  v18 = *((unsigned int *)v16 + 58);
  for ( j = v6 + 1; ; ++j )
  {
    v20 = *((_QWORD *)this + 8);
    if ( v20 )
      v21 = *(_WORD *)(v20 + 20);
    else
      v21 = 0;
    if ( j >= v21 )
      goto LABEL_19;
    v27 = CCD_TOPOLOGY::GetPathDescriptor(this, j, a3, a4);
    if ( *((_DWORD *)v27 + 58) != (_DWORD)v18 )
      continue;
    *(_QWORD *)v27 &= ~0x8000000000000uLL;
    v28 = *((_BYTE *)v17 + 129);
    if ( v28 != *((_BYTE *)v27 + 129) )
      break;
    if ( !v28 && *((_QWORD *)v17 + 2) != *((_QWORD *)v27 + 2) )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(*((unsigned int *)v27 + 4), v25, a3, a4);
      v29[3] = v6;
      v29[4] = *((_QWORD *)v17 + 2);
      v29[5] = j;
      v29[6] = *((_QWORD *)v27 + 2);
      WdLogEvent5_WdWarning(v29);
      v4 = -1073741823;
LABEL_19:
      if ( v4 < 0 )
        goto LABEL_9;
LABEL_20:
      ++v6;
      goto LABEL_2;
    }
  }
  v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, a3, a4);
  v30[3] = v6;
  v30[4] = j;
  v30[5] = v18;
  WdLogEvent5_WdWarning(v30);
LABEL_9:
  for ( k = 0; ; ++k )
  {
    v13 = *((_QWORD *)this + 8);
    v14 = v13 ? *(_WORD *)(v13 + 20) : 0;
    if ( k >= v14 )
      break;
    v15 = CCD_TOPOLOGY::GetPathDescriptor(this, k, a3, a4);
    *(_QWORD *)v15 |= 0x8000000000000uLL;
  }
  return 0LL;
}
