/*
 * XREFs of ConvertVideoSignalInfo @ 0x1C0238A34
 * Callers:
 *     ?_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ @ 0x1C023959C (-_CreateDefaultMonitorProfileForWDDMv1_0@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C023A998 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00070F8 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ConvertVideoStandardType @ 0x1C0238B20 (ConvertVideoStandardType.c)
 */

__int64 __fastcall ConvertVideoSignalInfo(unsigned int *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // eax
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
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
    v9 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(a2);
    v11 = v9;
    if ( v9 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v12 + 24) = v11;
      WdLogEvent5_WdError(v12);
    }
    return (unsigned int)v11;
  }
  return result;
}
