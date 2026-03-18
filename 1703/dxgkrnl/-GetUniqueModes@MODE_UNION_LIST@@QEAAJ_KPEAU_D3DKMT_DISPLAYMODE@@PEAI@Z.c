/*
 * XREFs of ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00F5F70
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C00F54D0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C018CBB0 (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C000380C (--0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z.c)
 *     ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C0003840 (--1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _UpgradeDispModeFlags @ 0x1C018EF30 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall MODE_UNION_LIST::GetUniqueModes(
        MODE_UNION_LIST *this,
        unsigned __int64 a2,
        struct _D3DKMT_DISPLAYMODE *a3,
        unsigned int *a4)
{
  unsigned int *v4; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // r15d
  unsigned int v18; // r14d
  unsigned int *v19; // rbp
  unsigned int v20; // ebx
  _DWORD *v21; // rdi
  struct _D3DKMT_DISPLAYMODE *v22; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _BYTE v36[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a4;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, (__int64)a3, (__int64)a4);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
    (DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v36,
    (union _LARGE_INTEGER *)Global + 11);
  DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE((DXGGLOBAL::COUNT_TICKS_IN_SCOPE *)v36);
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal(v10, v9, v11, v12) + 7);
  v16 = *((unsigned int *)this + 4);
  v17 = 0;
  v18 = 0;
  if ( !(_DWORD)v16 )
  {
LABEL_13:
    *v4 = v17;
    _InterlockedExchangeAdd64((volatile signed __int64 *)DXGGLOBAL::GetGlobal(v16, v13, v14, v15) + 2, v17);
    return 0LL;
  }
  while ( 1 )
  {
    v19 = (unsigned int *)(*((_QWORD *)this + 1) + 44LL * v18);
    if ( *v19 )
      break;
LABEL_11:
    v16 = *((unsigned int *)this + 4);
    if ( ++v18 >= (unsigned int)v16 )
    {
      v4 = a4;
      goto LABEL_13;
    }
  }
  v20 = v18 + 1;
  if ( v18 + 1 < (unsigned int)v16 )
  {
    do
    {
      v21 = (_DWORD *)(*((_QWORD *)this + 1) + 44LL * v20);
      if ( *v21 )
      {
        if ( *v19 == *v21
          && v19[1] == v21[1]
          && v19[2] == v21[2]
          && v19[3] == v21[3]
          && v19[7] == v21[7]
          && v19[8] == v21[8]
          && v19[6] == v21[6] )
        {
          v16 = v19[10] ^ v21[10];
          if ( ((*((_BYTE *)v19 + 40) ^ *((_BYTE *)v21 + 40)) & 0x10) == 0 )
          {
            if ( v19[4] != v21[4] || v19[5] != v21[5] )
            {
              v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16, v13, v14, v15);
              v24[3] = *v19;
              v24[4] = v19[1];
              v24[5] = (int)v19[2];
              v24[6] = v19[3];
              WdLogEvent5_WdDmmEvent(v24);
              v29 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26, v25, v27, v28);
              v29[3] = v19[4];
              v29[4] = v19[5];
              v29[5] = (unsigned int)v21[4];
              v29[6] = (unsigned int)v21[5];
              WdLogEvent5_WdDmmEvent(v29);
            }
            UpgradeDispModeFlags(v19, v21, v14, v15);
            v16 = v19[9];
            if ( (v16 & 2) != 0 )
              goto LABEL_11;
            *v21 = 0;
          }
        }
      }
      ++v20;
    }
    while ( v20 < *((_DWORD *)this + 4) );
  }
  if ( !a3 )
  {
LABEL_10:
    ++v17;
    goto LABEL_11;
  }
  if ( v17 < a2 )
  {
    v22 = &a3[v17];
    *(_OWORD *)&v22->Width = *(_OWORD *)v19;
    *(_OWORD *)&v22->RefreshRate.Numerator = *((_OWORD *)v19 + 1);
    *(_QWORD *)&v22->DisplayFixedOutput = *((_QWORD *)v19 + 4);
    *((_DWORD *)&v22->Flags + 1) = v19[10];
    goto LABEL_10;
  }
  v30 = WdLogNewEntry5_WdError(v16, v13);
  *(_QWORD *)(v30 + 24) = 1896LL;
  WdLogEvent5_WdError(v30);
  v35 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
  *(_QWORD *)(v35 + 24) = a2;
  WdLogEvent5_WdWarning(v35);
  return 3221225507LL;
}
