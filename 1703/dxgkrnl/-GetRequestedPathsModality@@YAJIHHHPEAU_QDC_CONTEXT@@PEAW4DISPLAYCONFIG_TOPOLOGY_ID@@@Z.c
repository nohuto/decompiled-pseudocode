/*
 * XREFs of ?GetRequestedPathsModality@@YAJIHHHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00A9978
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INFO@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00A954C (-QueryDisplayConfigInternal@@YAJ_NIIPEAIPEAUDISPLAYCONFIG_PATH_INFO@@1PEAUDISPLAYCONFIG_MODE_INF.c)
 * Callees:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00AA7F4 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00EA5C0 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00EA638 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     DxgkGetPathsModality @ 0x1C00EE510 (DxgkGetPathsModality.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00F0CD0 (DxgkGetDisplayConfigBufferSizes.c)
 */

__int64 __fastcall GetRequestedPathsModality(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct _QDC_CONTEXT *a5,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a6)
{
  struct _QDC_CONTEXT *v6; // rsi
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rdi
  int v10; // r13d
  unsigned __int16 v11; // bx
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  int PathsModality; // ebx
  unsigned int v16; // ecx
  int DisplayConfigBufferSizes; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24[4]; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v25[64]; // [rsp+50h] [rbp-88h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v26; // [rsp+90h] [rbp-48h]

  v6 = a5;
  v7 = a4;
  v8 = a3;
  v9 = (unsigned int)a1;
  v10 = a2;
  if ( !*((_DWORD *)a5 + 1) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 1874LL;
    return 3221225507LL;
  }
  if ( (a1 & 0x200000) != 0 )
  {
    v11 = 2;
    if ( (a1 & 0x10) != 0 )
    {
      v16 = 1;
    }
    else if ( (a1 & 0x40) != 0 )
    {
      v16 = 2;
    }
    else
    {
      if ( (a1 & 0xF) == 0 )
      {
        v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
        *(_QWORD *)(v22 + 24) = v9;
        WdLogEvent5_WdAssertion(v22);
        return 3221225485LL;
      }
      v16 = 4;
    }
    DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(v16, (unsigned int *)&a5, v24);
    v20 = DisplayConfigBufferSizes;
    if ( DisplayConfigBufferSizes < 0 )
    {
      v21 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v21 + 24) = v20;
      *(_QWORD *)(v21 + 32) = 2LL;
      WdLogEvent5_WdError(v21);
    }
    else
    {
      v11 = (unsigned __int16)a5;
    }
  }
  else
  {
    v11 = *((_DWORD *)a5 + 1);
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v25, v11, 0);
  if ( v26 )
    v13 = *((_WORD *)v26 + 11);
  else
    v13 = 0;
  if ( (unsigned int)v13 < *((_DWORD *)v6 + 1) )
  {
    v23 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v23 + 24) = *((unsigned int *)v6 + 1);
    WdLogEvent5_WdLowResource(v23);
    PathsModality = -1073741801;
  }
  else
  {
    PathsModality = DxgkGetPathsModality((unsigned int)v9, v26, 0LL);
    if ( PathsModality >= 0 )
    {
      PathsModality = ConvertPathModalityToDisplayConfig(v26, (v9 & 0xF) == 15, v10, v8, v7, (v9 & 0x200000) != 0, v6);
      if ( PathsModality >= 0 )
        *(_DWORD *)a6 = *((_DWORD *)v26 + 8);
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v25);
  return (unsigned int)PathsModality;
}
