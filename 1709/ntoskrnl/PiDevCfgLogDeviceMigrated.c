/*
 * XREFs of PiDevCfgLogDeviceMigrated @ 0x1406C6380
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 * Callees:
 *     McTemplateK0zzjzxtq @ 0x1401FF140 (McTemplateK0zzjzxtq.c)
 */

int __fastcall PiDevCfgLogDeviceMigrated(__int64 a1, __int64 a2, int a3)
{
  int result; // eax
  const wchar_t *v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax

  result = Microsoft_Windows_Kernel_PnPEnableBits;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x80000) != 0
    && (Microsoft_Windows_Kernel_PnPEnableBits & 0x200000) != 0
    && (Microsoft_Windows_Kernel_PnPEnableBits & 0x100000) != 0 )
  {
    v6 = (const wchar_t *)&dword_140792EA4;
    v7 = a2 + 80;
    if ( a3 < 0 )
    {
      v8 = *(_QWORD *)(a2 + 152);
      if ( (*(_DWORD *)(a2 + 16) & 3) != 0 )
      {
        if ( v8 )
          v6 = *(const wchar_t **)(a2 + 152);
        return McTemplateK0zzjzxtq(
                 v7,
                 &KMPnPEvt_DeviceMigrate_Warning,
                 (__int64)v6,
                 *(const wchar_t **)(a1 + 8),
                 *(const wchar_t **)(a2 + 32),
                 v7,
                 v6,
                 *(_QWORD *)(a2 + 184),
                 *(_DWORD *)(a2 + 176),
                 a3);
      }
      else
      {
        if ( v8 )
          v6 = *(const wchar_t **)(a2 + 152);
        return McTemplateK0zzjzxtq(
                 v7,
                 &KMPnPEvt_DeviceMigrate_Failure,
                 (__int64)v6,
                 *(const wchar_t **)(a1 + 8),
                 *(const wchar_t **)(a2 + 32),
                 v7,
                 v6,
                 *(_QWORD *)(a2 + 184),
                 *(_DWORD *)(a2 + 176),
                 a3);
      }
    }
    else
    {
      if ( *(_QWORD *)(a2 + 152) )
        v6 = *(const wchar_t **)(a2 + 152);
      return McTemplateK0zzjzxtq(
               v7,
               &KMPnPEvt_DeviceMigrate_Success,
               (__int64)v6,
               *(const wchar_t **)(a1 + 8),
               *(const wchar_t **)(a2 + 32),
               v7,
               v6,
               *(_QWORD *)(a2 + 184),
               *(_DWORD *)(a2 + 176),
               a3);
    }
  }
  return result;
}
