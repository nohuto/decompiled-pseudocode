/*
 * XREFs of ConvertVideoSignalInfo @ 0x1C0109E2C
 * Callers:
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C01068A8 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C01E7CD8 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000CE28 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ConvertVideoStandardType @ 0x1C0109EF4 (ConvertVideoStandardType.c)
 */

__int64 __fastcall ConvertVideoSignalInfo(unsigned int *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  memset((void *)a2, 0, 0x38uLL);
  *(_DWORD *)(a2 + 12) = *((unsigned __int16 *)a1 + 10);
  *(_DWORD *)(a2 + 16) = *((unsigned __int16 *)a1 + 11);
  *(_DWORD *)(a2 + 28) = a1[3];
  *(_DWORD *)(a2 + 32) = a1[4];
  *(_DWORD *)(a2 + 20) = a1[1];
  *(_DWORD *)(a2 + 24) = a1[2];
  *(_QWORD *)(a2 + 40) = *a1;
  *(_DWORD *)(a2 + 4) = *((unsigned __int16 *)a1 + 10) + *((unsigned __int16 *)a1 + 12);
  v6 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 8) = *((unsigned __int16 *)a1 + 11) + *((unsigned __int16 *)a1 + 13);
  if ( *((_BYTE *)a1 + 44) )
    v7 = v6 & 0xFFFFFFF8 | 2;
  else
    v7 = v6 & 0xFFFFFFF8 | 1;
  *(_DWORD *)(a2 + 48) = v7;
  result = ConvertVideoStandardType(*((unsigned __int8 *)a1 + 52), a2);
  if ( (int)result >= 0 )
  {
    v10 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(a2, v9);
    v13 = v10;
    if ( v10 < 0 )
    {
      v16 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v16 + 24) = v13;
      WdLogEvent5_WdError(v16);
    }
    return (unsigned int)v13;
  }
  return result;
}
