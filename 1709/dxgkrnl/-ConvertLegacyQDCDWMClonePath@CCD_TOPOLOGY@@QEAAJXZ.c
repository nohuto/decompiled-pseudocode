/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00DD090
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z @ 0x1C00DE7C8 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C01F718C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0008510 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0008560 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00DF6F8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00F68F0 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C01AA6C4 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // r14d
  DXGADAPTERSOURCEHASH *i; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _LUID *v6; // rsi
  unsigned int j; // r15d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v8; // rsi
  unsigned int v9; // r14d
  unsigned int k; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int PreferredVidPnSourceList; // eax
  __int64 v15; // rcx
  __int64 v16; // r12
  unsigned int m; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v19; // rdx
  int v20; // eax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rax
  unsigned int v23; // r12d
  __int64 v24; // rcx
  int AdapterAndSourceForHash; // r13d
  __int64 v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // [rsp+28h] [rbp-69h] BYREF
  struct _LUID v30; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v31[16]; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v32[16]; // [rsp+78h] [rbp-19h] BYREF

  v2 = 0;
  v3 = 0;
  for ( i = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)this) + 840);
        v3 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
        ++v3 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v3);
    v6 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 129) )
    {
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i) & *((_DWORD *)PathDescriptor + 7)) != 0 )
      {
        v23 = (unsigned int)v6[3].HighPart >> DXGADAPTERSOURCEHASH::GetHashBitShift(i);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(i, v23, &v30, &v29);
        if ( AdapterAndSourceForHash < 0 )
        {
          v26 = WdLogNewEntry5_WdError(v24);
          *(_QWORD *)(v26 + 24) = v23;
          WdLogEvent5_WdError(v26);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v6[3].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i);
        v6[3].LowPart = v29;
        v6[2] = v30;
      }
    }
    else
    {
      *(_QWORD *)PathDescriptor &= 0xFFFFFFFFFF7DFFFFuLL;
      *((_QWORD *)PathDescriptor + 1) &= 0xFFFFFFFFFF7DFFFFuLL;
    }
  }
  for ( j = 0; j < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++j )
  {
    v8 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( (*(_QWORD *)v8 & 0x4000000000000LL) != 0 )
    {
      v9 = 0;
      for ( k = j; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
      {
        v11 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
        if ( *((_DWORD *)v8 + 4) == *((_DWORD *)v11 + 4) )
        {
          v12 = *((unsigned int *)v11 + 5);
          if ( *((_DWORD *)v8 + 5) == (_DWORD)v12 )
          {
            if ( v9 >= 0x10 )
            {
              v27 = (_QWORD *)WdLogNewEntry5_WdError(v12);
              v27[3] = v9;
              v27[4] = *((int *)v8 + 5);
              v27[5] = *((unsigned int *)v8 + 4);
              v27[6] = -1073741811LL;
              WdLogEvent5_WdError(v27);
              return 3221225485LL;
            }
            v13 = v9;
            if ( *((_BYTE *)v11 + 129) )
              v31[v9] = -1;
            else
              v31[v9] = *((_DWORD *)v11 + 6);
            ++v9;
            v32[v13] = *((_DWORD *)v11 + 7);
          }
        }
      }
      PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList((const struct _LUID *)v8 + 2, v9, v32, v31);
      v16 = PreferredVidPnSourceList;
      if ( PreferredVidPnSourceList < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdError(v15);
        v28[3] = *((int *)v8 + 5);
        v28[4] = *((unsigned int *)v8 + 4);
        v28[5] = v16;
        WdLogEvent5_WdError(v28);
        return (unsigned int)v16;
      }
      for ( m = j; m < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++m )
      {
        v18 = CCD_TOPOLOGY::GetPathDescriptor(this, m);
        v19 = v18;
        if ( *((_DWORD *)v8 + 4) == *((_DWORD *)v18 + 4) && *((_DWORD *)v8 + 5) == *((_DWORD *)v18 + 5) )
        {
          v20 = 0;
          if ( v9 )
          {
            while ( v32[v20] != *((_DWORD *)v19 + 7) )
            {
              if ( ++v20 >= v9 )
                goto LABEL_22;
            }
            *((_DWORD *)v19 + 6) = v31[v20];
          }
LABEL_22:
          *(_QWORD *)v19 &= ~0x4000000000000uLL;
        }
      }
    }
  }
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    do
    {
      v21 = CCD_TOPOLOGY::GetPathDescriptor(this, v2++);
      *(_QWORD *)v21 |= 0x4000000000000uLL;
    }
    while ( v2 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
  }
  return 0LL;
}
