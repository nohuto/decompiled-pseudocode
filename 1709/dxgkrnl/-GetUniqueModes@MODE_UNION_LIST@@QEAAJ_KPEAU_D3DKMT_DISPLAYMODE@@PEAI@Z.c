/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00D61F0
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00D5738 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C01A1324 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000D7D8 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C000D80C (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     _UpgradeDispModeFlags @ 0x1C01A3778 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        MODE_UNION_LIST *this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  unsigned int *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  unsigned int *v15; // rbp
  unsigned int v16; // ebx
  _DWORD *v17; // rdi
  struct _D3DKMT_DISPLAYMODE *v18; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  _BYTE v28[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a4;
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v28,
    (union _LARGE_INTEGER *)Global + 11);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v28);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v9) + 7);
  v12 = *((unsigned int *)this + 4);
  v13 = 0;
  v14 = 0;
  if ( !(_DWORD)v12 )
  {
LABEL_13:
    *v4 = v13;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v12) + 2, v13);
    return 0LL;
  }
  while ( 1 )
  {
    v15 = (unsigned int *)(*((_QWORD *)this + 1) + 44LL * v14);
    if ( *v15 )
      break;
LABEL_11:
    v12 = *((unsigned int *)this + 4);
    if ( ++v14 >= (unsigned int)v12 )
    {
      v4 = a4;
      goto LABEL_13;
    }
  }
  v16 = v14 + 1;
  if ( v14 + 1 < (unsigned int)v12 )
  {
    do
    {
      v17 = (_DWORD *)(*((_QWORD *)this + 1) + 44LL * v16);
      if ( *v17 )
      {
        if ( *v15 == *v17
          && v15[1] == v17[1]
          && v15[2] == v17[2]
          && v15[3] == v17[3]
          && v15[7] == v17[7]
          && v15[8] == v17[8]
          && v15[6] == v17[6] )
        {
          v12 = v15[10] ^ v17[10];
          if ( ((*((_BYTE *)v15 + 40) ^ *((_BYTE *)v17 + 40)) & 0x10) == 0 )
          {
            if ( v15[4] != v17[4] || v15[5] != v17[5] )
            {
              v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v12);
              v20[3] = *v15;
              v20[4] = v15[1];
              v20[5] = (int)v15[2];
              v20[6] = v15[3];
              WdLogEvent5_WdDmmEvent(v20);
              v22 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21);
              v22[3] = v15[4];
              v22[4] = v15[5];
              v22[5] = (unsigned int)v17[4];
              v22[6] = (unsigned int)v17[5];
              WdLogEvent5_WdDmmEvent(v22);
            }
            UpgradeDispModeFlags(v15, v17, v10, v11);
            v12 = v15[9];
            if ( (v12 & 2) != 0 )
              goto LABEL_11;
            *v17 = 0;
          }
        }
      }
      ++v16;
    }
    while ( v16 < *((_DWORD *)this + 4) );
  }
  if ( !a3 )
  {
LABEL_10:
    ++v13;
    goto LABEL_11;
  }
  if ( v13 < a2 )
  {
    v18 = &a3[v13];
    *(_OWORD *)&v18->Width = *(_OWORD *)v15;
    *(_OWORD *)&v18->RefreshRate.Numerator = *((_OWORD *)v15 + 1);
    *(_QWORD *)&v18->DisplayFixedOutput = *((_QWORD *)v15 + 4);
    *((_DWORD *)&v18->Flags + 1) = v15[10];
    goto LABEL_10;
  }
  v23 = WdLogNewEntry5_WdError(v12);
  *(_QWORD *)(v23 + 24) = 1876LL;
  WdLogEvent5_WdError(v23);
  v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
  *(_QWORD *)(v27 + 24) = a2;
  WdLogEvent5_WdWarning(v27);
  return 3221225507LL;
}
