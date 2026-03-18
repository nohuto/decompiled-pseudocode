/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00B4E1C
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00B64BC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C0224D50 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0002CCC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0002D44 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00B35B8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00DC0B4 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C019E680 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  DXGADAPTERSOURCEHASH *i; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _LUID *v8; // rdi
  unsigned int v9; // r14d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v10; // rdi
  unsigned int v11; // r15d
  unsigned int j; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int PreferredVidPnSourceList; // eax
  __int64 v17; // rcx
  __int64 v18; // r12
  unsigned int k; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v20; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rax
  unsigned int v26; // r12d
  __int64 v27; // rcx
  int AdapterAndSourceForHash; // r13d
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  unsigned int v32; // [rsp+28h] [rbp-69h] BYREF
  struct _LUID v33; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v34[16]; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v35[16]; // [rsp+78h] [rbp-19h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  v5 = 0;
  for ( i = (struct DXGGLOBAL *)((char *)Global + 920); v5 < *(unsigned __int16 *)(v3 + 20); ++v5 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v5);
    v8 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 129) )
    {
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i) & *((_DWORD *)PathDescriptor + 7)) != 0 )
      {
        v26 = (unsigned int)v8[3].HighPart >> DXGADAPTERSOURCEHASH::GetHashBitShift(i);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(i, v26, &v33, &v32);
        if ( AdapterAndSourceForHash < 0 )
        {
          v29 = WdLogNewEntry5_WdError(v27);
          *(_QWORD *)(v29 + 24) = v26;
          WdLogEvent5_WdError(v29);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v8[3].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i);
        v8[3].LowPart = v32;
        v8[2] = v33;
      }
    }
    else
    {
      *(_QWORD *)PathDescriptor &= 0xFFFFFFFFFF7DFFFFuLL;
      *((_QWORD *)PathDescriptor + 1) &= 0xFFFFFFFFFF7DFFFFuLL;
    }
    v3 = *((_QWORD *)this + 8);
  }
  v9 = 0;
  if ( !*(_WORD *)(v3 + 20) )
    return 0LL;
  while ( 1 )
  {
    v10 = CCD_TOPOLOGY::GetPathDescriptor(this, v9);
    if ( (*(_QWORD *)v10 & 0x4000000000000LL) != 0 )
      break;
LABEL_24:
    v23 = *((_QWORD *)this + 8);
    if ( ++v9 >= *(unsigned __int16 *)(v23 + 20) )
    {
      if ( *(_WORD *)(v23 + 20) )
      {
        do
        {
          v24 = CCD_TOPOLOGY::GetPathDescriptor(this, v4++);
          *(_QWORD *)v24 |= 0x4000000000000uLL;
        }
        while ( v4 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
      }
      return 0LL;
    }
  }
  v11 = 0;
  for ( j = v9; j < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++j )
  {
    v13 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v10 + 4) == *((_DWORD *)v13 + 4) )
    {
      v14 = *((unsigned int *)v13 + 5);
      if ( *((_DWORD *)v10 + 5) == (_DWORD)v14 )
      {
        if ( v11 >= 0x10 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v14);
          v30[3] = v11;
          v30[4] = *((int *)v10 + 5);
          v30[5] = *((unsigned int *)v10 + 4);
          v30[6] = -1073741811LL;
          WdLogEvent5_WdError(v30);
          return 3221225485LL;
        }
        v15 = v11;
        if ( *((_BYTE *)v13 + 129) )
          v34[v11] = -1;
        else
          v34[v11] = *((_DWORD *)v13 + 6);
        ++v11;
        v35[v15] = *((_DWORD *)v13 + 7);
      }
    }
  }
  PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList((const struct _LUID *)v10 + 2, v11, v35, v34);
  v18 = PreferredVidPnSourceList;
  if ( PreferredVidPnSourceList >= 0 )
  {
    for ( k = v9; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
    {
      v20 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
      v21 = v20;
      if ( *((_DWORD *)v10 + 4) == *((_DWORD *)v20 + 4) && *((_DWORD *)v10 + 5) == *((_DWORD *)v20 + 5) )
      {
        v22 = 0;
        if ( v11 )
        {
          while ( v35[v22] != *((_DWORD *)v21 + 7) )
          {
            if ( ++v22 >= v11 )
              goto LABEL_22;
          }
          *((_DWORD *)v21 + 6) = v34[v22];
        }
LABEL_22:
        *(_QWORD *)v21 &= ~0x4000000000000uLL;
      }
    }
    goto LABEL_24;
  }
  v31 = (_QWORD *)WdLogNewEntry5_WdError(v17);
  v31[3] = *((int *)v10 + 5);
  v31[4] = *((unsigned int *)v10 + 4);
  v31[5] = v18;
  WdLogEvent5_WdError(v31);
  return (unsigned int)v18;
}
