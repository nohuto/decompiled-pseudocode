/*
 * XREFs of ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C4BD8
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00C49F8 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00AEFD8 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00B3600 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00B3678 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00C3940 (DxgkGetDisplayConfigBufferSizes.c)
 *     DxgkGetPathsModality @ 0x1C00C4CF0 (DxgkGetPathsModality.c)
 */

__int64 __fastcall GetRequestedPathsModality(
        __int64 a1,
        __int64 a2,
        struct _QDC_CONTEXT *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  __int64 v5; // rbx
  int v7; // r12d
  int v8; // ebp
  unsigned __int16 v9; // di
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  __int64 v12; // rdx
  int PathsModality; // ebx
  __int64 v14; // r8
  __int64 v16; // rcx
  int DisplayConfigBufferSizes; // eax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[64]; // [rsp+20h] [rbp-88h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v24; // [rsp+60h] [rbp-48h]
  unsigned int v25; // [rsp+C0h] [rbp+18h] BYREF

  v5 = (unsigned int)a1;
  v7 = a2;
  if ( !*((_DWORD *)a3 + 1) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 1298LL;
    return 3221225507LL;
  }
  v8 = a1 & 0x200000;
  if ( (a1 & 0x200000) != 0 )
  {
    v9 = 2;
    if ( (a1 & 0x10) != 0 )
    {
      v16 = 1LL;
    }
    else if ( (a1 & 0x40) != 0 )
    {
      v16 = 2LL;
    }
    else
    {
      if ( (a1 & 0xF) == 0 )
      {
        v21 = WdLogNewEntry5_WdAssertion(a1);
        *(_QWORD *)(v21 + 24) = v5;
        WdLogEvent5_WdAssertion(v21);
        return 3221225485LL;
      }
      v16 = 4LL;
    }
    DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(v16, &v25, (__int64)a3);
    v19 = DisplayConfigBufferSizes;
    if ( DisplayConfigBufferSizes < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v20 + 24) = v19;
      *(_QWORD *)(v20 + 32) = 2LL;
      WdLogEvent5_WdError(v20);
    }
    else
    {
      v9 = v25;
    }
  }
  else
  {
    v9 = *((_DWORD *)a3 + 1);
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v23, v9, 0);
  if ( v24 )
    v11 = *((_WORD *)v24 + 11);
  else
    v11 = 0;
  if ( (unsigned int)v11 < *((_DWORD *)a3 + 1) )
  {
    v22 = WdLogNewEntry5_WdLowResource(v10);
    *(_QWORD *)(v22 + 24) = *((unsigned int *)a3 + 1);
    WdLogEvent5_WdLowResource(v22);
    PathsModality = -1073741801;
  }
  else
  {
    PathsModality = DxgkGetPathsModality((unsigned int)v5, v24, 0LL);
    if ( PathsModality >= 0 )
    {
      LOBYTE(v14) = v8 != 0;
      LOBYTE(v12) = v7 != 0;
      PathsModality = ConvertPathModalityToDisplayConfig(v24, v12, v14, a3);
      if ( PathsModality >= 0 )
        *(_DWORD *)a4 = *((_DWORD *)v24 + 8);
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v23);
  return (unsigned int)PathsModality;
}
