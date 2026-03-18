/*
 * XREFs of ?DxgkpCopyMonitorLinkInfoToFlags@@YAJPEAXPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00AA29C
 * Callers:
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00A9130 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     MonitorGetLinkInfoFromTarget @ 0x1C00AA2F0 (MonitorGetLinkInfoFromTarget.c)
 */

__int64 __fastcall DxgkpCopyMonitorLinkInfoToFlags(void *a1, struct _DISPLAYCONFIG_GET_DISPLAY_INFO *a2)
{
  __int64 result; // rax
  int v4; // edx
  unsigned int v5; // ecx
  int v6; // edx
  _BYTE v7[4]; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+24h] [rbp-14h]

  LODWORD(result) = MonitorGetLinkInfoFromTarget(a1, *((unsigned int *)a2 + 479), v7);
  v4 = *((_DWORD *)a2 + 510);
  if ( (int)result >= 0 )
  {
    v6 = v4 | 0x20;
    v5 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((_BYTE)v8 << 6)) & 0x40 ^ ((unsigned __int8)(v6 ^ (v6 ^ ((_BYTE)v8 << 6)) & 0x40) ^ (unsigned __int8)(32 * v8)) & 0x80 ^ ((unsigned __int16)(v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((_BYTE)v8 << 6)) & 0x40 ^ ((unsigned __int8)(v6 ^ (v6 ^ ((_BYTE)v8 << 6)) & 0x40) ^ (unsigned __int8)(32 * v8)) & 0x80) ^ (unsigned __int16)((_WORD)v8 << 7)) & 0x100 ^ ((unsigned __int16)(v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((_BYTE)v8 << 6)) & 0x40 ^ ((unsigned __int8)(v6 ^ (v6 ^ ((_BYTE)v8 << 6)) & 0x40) ^ (unsigned __int8)(32 * v8)) & 0x80 ^ (v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)((_BYTE)v8 << 6)) & 0x40 ^ ((unsigned __int8)(v6 ^ (v6 ^ ((_BYTE)v8 << 6)) & 0x40) ^ (unsigned __int8)(32 * v8)) & 0x80 ^ ((_WORD)v8 << 7)) & 0x100) ^ (unsigned __int16)(4 * v8)) & 0x800;
  }
  else
  {
    v5 = v4 & 0xFFFFF61F;
  }
  *((_DWORD *)a2 + 510) = v5;
  return (unsigned int)result;
}
