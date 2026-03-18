/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C0191E2C
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C018F320 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018FFB8 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C00300E0 (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C0030114 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     _IsDisplayModeMatch @ 0x1C0194020 (_IsDisplayModeMatch.c)
 *     _UpgradeDispModeFlags @ 0x1C01941C4 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        MODE_UNION_LIST *this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  unsigned int *v12; // rbx
  unsigned int v13; // esi
  _DWORD *v14; // rdi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  _BYTE v25[56]; // [rsp+20h] [rbp-38h] BYREF

  Global = DXGGLOBAL::GetGlobal((__int64)this);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v25,
    (union _LARGE_INTEGER *)Global + 11);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v25);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v8) + 7);
  v9 = *((unsigned int *)this + 4);
  v10 = 0;
  v11 = 0;
  if ( !(_DWORD)v9 )
  {
LABEL_17:
    *a4 = v10;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v9) + 2, v10);
    return 0LL;
  }
  while ( 1 )
  {
    v12 = (unsigned int *)(*((_QWORD *)this + 1) + 44LL * v11);
    if ( *v12 )
      break;
LABEL_16:
    v9 = *((unsigned int *)this + 4);
    if ( ++v11 >= (unsigned int)v9 )
      goto LABEL_17;
  }
  v13 = v11 + 1;
  if ( v11 + 1 < (unsigned int)v9 )
  {
    do
    {
      v14 = (_DWORD *)(*((_QWORD *)this + 1) + 44LL * v13);
      if ( *v14 && (unsigned __int8)IsDisplayModeMatch(v12, *((_QWORD *)this + 1) + 44LL * v13) )
      {
        if ( v12[4] != v14[4] || v12[5] != v14[5] )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9);
          v15[3] = *v12;
          v15[4] = v12[1];
          v15[5] = (int)v12[2];
          v15[6] = v12[3];
          WdLogEvent5_WdDmmEvent(v15);
          v17 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
          v17[3] = v12[4];
          v17[4] = v12[5];
          v17[5] = (unsigned int)v14[4];
          v17[6] = (unsigned int)v14[5];
          WdLogEvent5_WdDmmEvent(v17);
        }
        UpgradeDispModeFlags(v12, v14);
        if ( (v12[9] & 2) != 0 )
          goto LABEL_16;
        *v14 = 0;
      }
      ++v13;
    }
    while ( v13 < *((_DWORD *)this + 4) );
  }
  if ( !a3 )
  {
LABEL_15:
    ++v10;
    goto LABEL_16;
  }
  if ( v10 < a2 )
  {
    v18 = v10;
    *(_OWORD *)&a3[v18].Width = *(_OWORD *)v12;
    *(_OWORD *)&a3[v18].RefreshRate.Numerator = *((_OWORD *)v12 + 1);
    *(_QWORD *)&a3[v18].DisplayFixedOutput = *((_QWORD *)v12 + 4);
    *((_DWORD *)&a3[v18].Flags + 1) = v12[10];
    goto LABEL_15;
  }
  v20 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v20 + 24) = 1855LL;
  WdLogEvent5_WdError(v20);
  v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
  *(_QWORD *)(v24 + 24) = a2;
  WdLogEvent5_WdWarning(v24);
  return 3221225507LL;
}
