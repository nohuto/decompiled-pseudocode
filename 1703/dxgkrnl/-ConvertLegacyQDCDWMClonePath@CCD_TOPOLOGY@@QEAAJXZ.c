/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00ECDC8
 * Callers:
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00EA9CC (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0003B58 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C00399D8 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00A3550 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00EA570 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C019578C (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  __int64 v7; // r8
  __int64 v8; // r9
  DXGADAPTERSOURCEHASH *i; // r15
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v11; // rdx
  struct _LUID *v12; // rsi
  __int64 v13; // rdx
  unsigned int j; // r15d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v15; // rsi
  unsigned int v16; // r14d
  unsigned int k; // r12d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int PreferredVidPnSourceList; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r12
  unsigned int m; // r12d
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rax
  int v27; // ecx
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *v28; // rax
  unsigned int v30; // r12d
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int AdapterAndSourceForHash; // r13d
  __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rax
  unsigned int v39; // [rsp+28h] [rbp-69h] BYREF
  struct _LUID v40; // [rsp+30h] [rbp-61h] BYREF
  unsigned int v41[16]; // [rsp+38h] [rbp-59h] BYREF
  unsigned int v42[16]; // [rsp+78h] [rbp-19h] BYREF

  v5 = 0;
  v6 = 0;
  for ( i = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4) + 840);
        v6 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
        ++v6 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v6, v7, v8);
    v12 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 129) )
    {
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i, v11, v7, v8) & *((_DWORD *)PathDescriptor + 7)) != 0 )
      {
        v30 = (unsigned int)v12[3].HighPart >> DXGADAPTERSOURCEHASH::GetHashBitShift(i, v13, v7, v8);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(i, v30, &v40, &v39);
        if ( AdapterAndSourceForHash < 0 )
        {
          v36 = WdLogNewEntry5_WdError(v32, v31);
          *(_QWORD *)(v36 + 24) = v30;
          WdLogEvent5_WdError(v36);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v12[3].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i, v31, v33, v34);
        v12[3].LowPart = v39;
        v12[2] = v40;
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
    v15 = CCD_TOPOLOGY::GetPathDescriptor(this, j, v7, v8);
    if ( (*(_QWORD *)v15 & 0x4000000000000LL) != 0 )
    {
      v16 = 0;
      for ( k = j; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
      {
        v18 = CCD_TOPOLOGY::GetPathDescriptor(this, k, v7, v8);
        if ( *((_DWORD *)v15 + 4) == *((_DWORD *)v18 + 4) )
        {
          v19 = *((unsigned int *)v18 + 5);
          if ( *((_DWORD *)v15 + 5) == (_DWORD)v19 )
          {
            if ( v16 >= 0x10 )
            {
              v37 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
              v37[3] = v16;
              v37[4] = *((int *)v15 + 5);
              v37[5] = *((unsigned int *)v15 + 4);
              v37[6] = -1073741811LL;
              WdLogEvent5_WdError(v37);
              return 3221225485LL;
            }
            v20 = v16;
            if ( *((_BYTE *)v18 + 129) )
              v41[v16] = -1;
            else
              v41[v16] = *((_DWORD *)v18 + 6);
            ++v16;
            v42[v20] = *((_DWORD *)v18 + 7);
          }
        }
      }
      PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList(
                                   (const struct _LUID *)v15 + 2,
                                   v16,
                                   (char *)v42,
                                   (char *)v41);
      v24 = PreferredVidPnSourceList;
      if ( PreferredVidPnSourceList < 0 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
        v38[3] = *((int *)v15 + 5);
        v38[4] = *((unsigned int *)v15 + 4);
        v38[5] = v24;
        WdLogEvent5_WdError(v38);
        return (unsigned int)v24;
      }
      for ( m = j; m < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++m )
      {
        v26 = CCD_TOPOLOGY::GetPathDescriptor(this, m, v7, v8);
        if ( *((_DWORD *)v15 + 4) == *((_DWORD *)v26 + 4) && *((_DWORD *)v15 + 5) == *((_DWORD *)v26 + 5) )
        {
          v27 = 0;
          if ( v16 )
          {
            v7 = *((unsigned int *)v26 + 7);
            while ( v42[v27] != (_DWORD)v7 )
            {
              if ( ++v27 >= v16 )
                goto LABEL_23;
            }
            *((_DWORD *)v26 + 6) = v41[v27];
          }
LABEL_23:
          *(_QWORD *)v26 &= ~0x4000000000000uLL;
        }
      }
    }
  }
  if ( *(_WORD *)(*((_QWORD *)this + 8) + 20LL) )
  {
    do
    {
      v28 = CCD_TOPOLOGY::GetPathDescriptor(this, v5++, v7, v8);
      *(_QWORD *)v28 |= 0x4000000000000uLL;
    }
    while ( v5 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
  }
  return 0LL;
}
