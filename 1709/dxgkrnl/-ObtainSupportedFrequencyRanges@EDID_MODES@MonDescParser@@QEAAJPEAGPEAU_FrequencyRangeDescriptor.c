/*
 * XREFs of ?ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0011FD4
 * Callers:
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0011F5C (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 * Callees:
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C0009154 (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::ObtainSupportedFrequencyRanges(
        MonDescParser::EDID_PARSER **this,
        unsigned __int16 *a2,
        struct _FrequencyRangeDescriptor *a3)
{
  MonDescParser::EDID_PARSER *v4; // rdi
  unsigned __int16 v5; // r9
  __int64 v6; // rbp
  unsigned __int16 v7; // r9
  _WORD *v8; // r10
  __int64 v9; // r11
  __int64 result; // rax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rdx
  int v21; // eax
  int v22; // ecx
  int v23; // ecx

  if ( !a2 || !a3 && *a2 )
    return 3221225485LL;
  v4 = *this;
  v5 = 0;
  while ( 1 )
  {
    v6 = v5;
    if ( MonDescParser::EDID_PARSER::Is18ByteDispDesc(v4, v5) )
    {
      if ( *(_BYTE *)(*(_QWORD *)v4 + 18LL * v7 + 57) == 0xFD )
        break;
    }
    v5 = v7 + 1;
    if ( v5 >= 4u )
      return 3221226021LL;
  }
  if ( *v8 )
  {
    *(_BYTE *)v9 = *((_BYTE *)this + 8);
    *(_DWORD *)(v9 + 36) = 2;
    v11 = *(_QWORD *)*this;
    v12 = *(unsigned __int8 *)(v11 + 18 * v6 + 59);
    v13 = -((*(_BYTE *)(v11 + 18 * v6 + 58) & 1) != 0);
    *(_DWORD *)(v9 + 8) = 1;
    *(_DWORD *)(v9 + 4) = v12 + (unsigned __int8)v13;
    v14 = *(_QWORD *)*this;
    v15 = *(unsigned __int8 *)(v14 + 18LL * v7 + 60);
    v16 = -((*(_BYTE *)(v14 + 18 * v6 + 58) & 2) != 0);
    *(_DWORD *)(v9 + 16) = 1;
    *(_DWORD *)(v9 + 12) = v15 + (unsigned __int8)v16;
    v17 = *(_QWORD *)*this;
    v18 = *(unsigned __int8 *)(v17 + 18LL * v7 + 61);
    v19 = -((*(_BYTE *)(v17 + 18LL * v7 + 58) & 4) != 0);
    *(_DWORD *)(v9 + 24) = 1;
    *(_DWORD *)(v9 + 20) = 1000 * (v18 + (unsigned __int8)v19);
    v20 = *(_QWORD *)*this;
    v21 = *(unsigned __int8 *)(v20 + 18LL * v7 + 62);
    v22 = -((*(_BYTE *)(v20 + 18LL * v7 + 58) & 8) != 0);
    *(_DWORD *)(v9 + 32) = 1;
    *(_DWORD *)(v9 + 28) = 1000 * (v21 + (unsigned __int8)v22);
    v23 = 10000000 * *(unsigned __int8 *)(*(_QWORD *)*this + 18LL * v7 + 63);
    *(_QWORD *)(v9 + 40) = 0LL;
    result = 0LL;
    *(_DWORD *)(v9 + 48) = v23;
  }
  else
  {
    *v8 = 1;
    return 3221225507LL;
  }
  return result;
}
