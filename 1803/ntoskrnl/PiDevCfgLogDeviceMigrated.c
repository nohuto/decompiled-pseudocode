/*
 * XREFs of PiDevCfgLogDeviceMigrated @ 0x14072CE3C
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 * Callees:
 *     McTemplateK0zzjzxtq @ 0x14023BB70 (McTemplateK0zzjzxtq.c)
 */

int __fastcall PiDevCfgLogDeviceMigrated(__int64 a1, __int64 a2, int a3)
{
  int result; // eax
  const wchar_t *v6; // r8
  __int64 v7; // rcx
  const wchar_t *v8; // rax
  __int64 v9; // rcx
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  result = Microsoft_Windows_Kernel_PnPEnableBits;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0
    && (Microsoft_Windows_Kernel_PnPEnableBits & 0x200000) != 0
    && (Microsoft_Windows_Kernel_PnPEnableBits & 0x100000) != 0 )
  {
    v6 = (const wchar_t *)&dword_1407FF664;
    if ( a3 < 0 )
    {
      v7 = *(_QWORD *)(a2 + 152);
      v12 = *(_DWORD *)(a2 + 176);
      v11 = *(_QWORD *)(a2 + 184);
      v8 = *(const wchar_t **)(a2 + 32);
      if ( (*(_DWORD *)(a2 + 16) & 3) != 0 )
      {
        if ( v7 )
          v6 = *(const wchar_t **)(a2 + 152);
        v9 = a2 + 80;
        v10 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceMigrate_Warning;
      }
      else
      {
        if ( v7 )
          v6 = *(const wchar_t **)(a2 + 152);
        v9 = a2 + 80;
        v10 = (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceMigrate_Failure;
      }
      return McTemplateK0zzjzxtq(v9, v10, (__int64)v6, *(const wchar_t **)(a1 + 8), v8, v9, v6, v11, v12, a3);
    }
    else
    {
      if ( *(_QWORD *)(a2 + 152) )
        v6 = *(const wchar_t **)(a2 + 152);
      return McTemplateK0zzjzxtq(
               a2 + 80,
               &KMPnPEvt_DeviceMigrate_Success,
               (__int64)v6,
               *(const wchar_t **)(a1 + 8),
               *(const wchar_t **)(a2 + 32),
               a2 + 80,
               v6,
               *(_QWORD *)(a2 + 184),
               *(_DWORD *)(a2 + 176),
               a3);
    }
  }
  return result;
}
