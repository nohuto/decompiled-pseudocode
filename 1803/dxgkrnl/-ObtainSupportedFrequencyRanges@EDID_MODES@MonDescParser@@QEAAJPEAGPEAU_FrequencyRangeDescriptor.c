/*
 * XREFs of ?ObtainSupportedFrequencyRanges@EDID_MODES@MonDescParser@@QEAAJPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0048C64
 * Callers:
 *     ?EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEAGPEAU_FrequencyRangeDescriptor@@@Z @ 0x1C0047E4C (-EDID_V1_GetSupportedMonitorFrequencyRanges@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@KPEBEPEA.c)
 * Callees:
 *     ?Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z @ 0x1C000315C (-Is18ByteDispDesc@EDID_PARSER@MonDescParser@@QEBA_NH@Z.c)
 */

__int64 __fastcall MonDescParser::EDID_MODES::ObtainSupportedFrequencyRanges(
        MonDescParser::EDID_PARSER **this,
        unsigned __int16 *a2,
        struct _FrequencyRangeDescriptor *a3)
{
  __int64 result; // rax
  MonDescParser::EDID_PARSER *v5; // rdi
  unsigned __int16 v6; // r9
  __int64 v7; // rbp
  unsigned __int16 v8; // r9
  _WORD *v9; // r10
  __int64 v10; // r11
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
  bool v21; // cf
  int v22; // eax
  int v23; // ecx

  if ( !a2 || !a3 && *a2 )
    return 3221225485LL;
  v5 = *this;
  v6 = 0;
  while ( 1 )
  {
    v7 = v6;
    if ( MonDescParser::EDID_PARSER::Is18ByteDispDesc(v5, v6) )
    {
      if ( *(_BYTE *)(*(_QWORD *)v5 + 18LL * v8 + 57) == 0xFD )
        break;
    }
    v6 = v8 + 1;
    if ( v6 >= 4u )
      return 3221226021LL;
  }
  if ( *v9 )
  {
    *(_BYTE *)v10 = *((_BYTE *)this + 8);
    *(_DWORD *)(v10 + 36) = 2;
    v11 = *(_QWORD *)*this;
    v12 = *(unsigned __int8 *)(v11 + 18 * v7 + 59);
    v13 = -((*(_BYTE *)(v11 + 18 * v7 + 58) & 1) != 0);
    *(_DWORD *)(v10 + 8) = 1;
    *(_DWORD *)(v10 + 4) = v12 + (unsigned __int8)v13;
    v14 = *(_QWORD *)*this;
    v15 = *(unsigned __int8 *)(v14 + 18 * v7 + 60);
    v16 = -((*(_BYTE *)(v14 + 18 * v7 + 58) & 2) != 0);
    *(_DWORD *)(v10 + 16) = 1;
    *(_DWORD *)(v10 + 12) = v15 + (unsigned __int8)v16;
    v17 = *(_QWORD *)*this;
    v18 = *(unsigned __int8 *)(v17 + 18 * v7 + 61);
    v19 = -((*(_BYTE *)(v17 + 18 * v7 + 58) & 4) != 0);
    *(_DWORD *)(v10 + 24) = 1;
    *(_DWORD *)(v10 + 20) = 1000 * (v18 + (unsigned __int8)v19);
    v20 = *(_QWORD *)*this;
    v21 = (*(_BYTE *)(v20 + 18 * v7 + 58) & 8) != 0;
    v22 = *(unsigned __int8 *)(v20 + 18 * v7 + 62);
    *(_DWORD *)(v10 + 32) = 1;
    *(_DWORD *)(v10 + 28) = 1000 * (v22 + (unsigned __int8)-v21);
    v23 = 10000000 * *(unsigned __int8 *)(*(_QWORD *)*this + 18LL * v8 + 63);
    *(_QWORD *)(v10 + 40) = 0LL;
    result = 0LL;
    *(_DWORD *)(v10 + 48) = v23;
  }
  else
  {
    *v9 = 1;
    return 3221225507LL;
  }
  return result;
}
