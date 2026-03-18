/*
 * XREFs of ConvertVideoSignalInfo @ 0x1C01084C4
 * Callers:
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C0108E44 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C0202624 (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000B6A4 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ConvertVideoStandardType @ 0x1C010858C (ConvertVideoStandardType.c)
 */

__int64 __fastcall ConvertVideoSignalInfo(unsigned int *a1, unsigned __int64 a2)
{
  int v4; // eax
  unsigned int v5; // eax
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
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
  v4 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 8) = *((unsigned __int16 *)a1 + 11) + *((unsigned __int16 *)a1 + 13);
  if ( *((_BYTE *)a1 + 44) )
    v5 = v4 & 0xFFFFFFF8 | 2;
  else
    v5 = v4 & 0xFFFFFFF8 | 1;
  *(_DWORD *)(a2 + 48) = v5;
  result = ConvertVideoStandardType(*((unsigned __int8 *)a1 + 52), a2);
  if ( (int)result >= 0 )
  {
    v7 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(a2);
    v9 = v7;
    if ( v7 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v8);
      *(_QWORD *)(v12 + 24) = v9;
      WdLogEvent5_WdError(v12);
    }
    return (unsigned int)v9;
  }
  return result;
}
