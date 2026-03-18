/*
 * XREFs of ?_RetrieveHDRParamDriverOverrides@DXGMONITOR@@AEAAJXZ @ 0x1C023B5A0
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     DpiGetMonitorColorimetryOverride @ 0x1C020B148 (DpiGetMonitorColorimetryOverride.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveHDRParamDriverOverrides(DXGMONITOR *this)
{
  int MonitorColorimetryOverride; // r8d
  unsigned int v3; // edx
  char v4; // cl
  __int128 v6; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+30h] [rbp-30h]
  int v8; // [rsp+34h] [rbp-2Ch]
  int v9; // [rsp+38h] [rbp-28h]
  int v10; // [rsp+3Ch] [rbp-24h]
  int v11; // [rsp+40h] [rbp-20h]
  int v12; // [rsp+44h] [rbp-1Ch]
  int v13; // [rsp+48h] [rbp-18h]
  unsigned int v14; // [rsp+4Ch] [rbp-14h]
  int v15; // [rsp+50h] [rbp-10h]

  MonitorColorimetryOverride = DpiGetMonitorColorimetryOverride(
                                 *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 192LL),
                                 *((_DWORD *)this + 11),
                                 &v6);
  if ( MonitorColorimetryOverride >= 0 )
  {
    v3 = v14;
    *((_DWORD *)this + 152) = 0;
    *((_WORD *)this + 306) = 0;
    *((_DWORD *)this + 149) = (v3 >> 14) & 0x3F;
    *((_DWORD *)this + 147) = (unsigned __int8)v3 >> 2;
    *((_DWORD *)this + 150) = (v3 >> 20) & 0x3F;
    *((_DWORD *)this + 148) = (v3 >> 8) & 0x3F;
    v4 = v15;
    *((_BYTE *)this + 614) = v15 & 1;
    *((_DWORD *)this + 151) = v3 >> 26;
    *((_BYTE *)this + 615) = (v4 & 2) != 0;
    *(_OWORD *)((char *)this + 616) = v6;
    *((_DWORD *)this + 158) = v7;
    *((_DWORD *)this + 159) = v8;
    *((_DWORD *)this + 160) = v9;
    *((_DWORD *)this + 161) = v10;
    *((_DWORD *)this + 164) = v12;
    *((_DWORD *)this + 163) = v11;
    *((_DWORD *)this + 165) = v13;
    *((_DWORD *)this + 162) = 2;
    *((_BYTE *)this + 668) = 0;
    *((_DWORD *)this + 168) = 2;
    *((_BYTE *)this + 676) = (v4 & 4) != 0;
  }
  return (unsigned int)MonitorColorimetryOverride;
}
