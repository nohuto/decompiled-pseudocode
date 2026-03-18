/*
 * XREFs of ?ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0010120
 * Callers:
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C00100A8 (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 * Callees:
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0004800 (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::ObtainSupportedFrequencyRanges(
        MonDescParser::EDID_PARSER **this,
        unsigned __int16 *a2,
        struct _FrequencyRangeDescriptor *a3)
{
  MonDescParser::EDID_PARSER *v4; // rbx
  unsigned __int16 v5; // r10
  _WORD *v6; // r9
  unsigned __int16 v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  __int64 result; // rax

  if ( !a2 || !a3 && *a2 )
    return 3221225485LL;
  v4 = *this;
  v5 = 0;
  while ( !(unsigned __int8)MonDescParser::EDID_PARSER::Is18ByteDispDesc(v4, v5)
       || *(_BYTE *)(*(_QWORD *)v4 + 18LL * v7 + 57) != 0xFD )
  {
    v5 = v7 + 1;
    if ( v5 >= 4u )
      return 3221226021LL;
  }
  if ( *v6 )
  {
    *(_BYTE *)v8 = *((_BYTE *)this + 8);
    *(_DWORD *)(v8 + 36) = 2;
    v9 = *(_QWORD *)*this;
    v10 = *(unsigned __int8 *)(v9 + 18LL * v7 + 59);
    v11 = -((*(_BYTE *)(v9 + 18LL * v7 + 58) & 1) != 0);
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 4) = (unsigned __int8)v11 + v10;
    v12 = *(_QWORD *)*this;
    v13 = *(unsigned __int8 *)(v12 + 18LL * v7 + 60);
    v14 = -((*(_BYTE *)(v12 + 18LL * v7 + 58) & 2) != 0);
    *(_DWORD *)(v8 + 16) = 1;
    *(_DWORD *)(v8 + 12) = (unsigned __int8)v14 + v13;
    v15 = *(_QWORD *)*this;
    v16 = *(unsigned __int8 *)(v15 + 18LL * v7 + 61);
    v17 = -((*(_BYTE *)(v15 + 18LL * v7 + 58) & 4) != 0);
    *(_DWORD *)(v8 + 24) = 1;
    *(_DWORD *)(v8 + 20) = 1000 * ((unsigned __int8)v17 + v16);
    v18 = (unsigned __int8)-((*(_BYTE *)(*(_QWORD *)*this + 18LL * v7 + 58) & 8) != 0)
        + *(unsigned __int8 *)(*(_QWORD *)*this + 18LL * v7 + 62);
    *(_DWORD *)(v8 + 32) = 1;
    *(_DWORD *)(v8 + 28) = 1000 * v18;
    v19 = 10000000 * *(unsigned __int8 *)(*(_QWORD *)*this + 18LL * v7 + 63);
    *(_QWORD *)(v8 + 40) = 0LL;
    result = 0LL;
    *(_DWORD *)(v8 + 48) = v19;
  }
  else
  {
    *v6 = 1;
    return 3221225507LL;
  }
  return result;
}
