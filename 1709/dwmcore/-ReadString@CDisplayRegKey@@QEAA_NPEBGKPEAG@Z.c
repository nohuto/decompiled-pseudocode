/*
 * XREFs of ?ReadString@CDisplayRegKey@@QEAA_NPEBGKPEAG@Z @ 0x180192250
 * Callers:
 *     ?RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ @ 0x1801914C8 (-RecordDisplayDriverName@CDwmCoreWinSqm@@SAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplayRegKey::ReadString(HKEY *this, const unsigned __int16 *a2, DWORD a3, BYTE *a4)
{
  char v5; // dl
  DWORD v7[6]; // [rsp+30h] [rbp-18h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  v7[0] = 520;
  v5 = 0;
  if ( *(_BYTE *)this )
  {
    if ( !RegQueryValueExW(this[1], L"DriverVersion", 0LL, &v8, a4, v7) && ((v5 = 1, v8 == 1) || v8 == 7) )
      *(_WORD *)&a4[2 * ((unsigned __int64)v7[0] >> 1) - 2] = 0;
    else
      return 0;
  }
  return v5;
}
