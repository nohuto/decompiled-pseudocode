/*
 * XREFs of ?OnButtonRegistryKeyChange@ButtonProcessor@@AEAAXPEAUHKEY__@@@Z @ 0x18003ABF4
 * Callers:
 *     ?OnButtonRegistryKeyChangeStatic@ButtonProcessor@@SAXPEAXPEAUHKEY__@@@Z @ 0x18003ABE0 (-OnButtonRegistryKeyChangeStatic@ButtonProcessor@@SAXPEAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ButtonProcessor::OnButtonRegistryKeyChange(ButtonProcessor *this, HKEY a2)
{
  LSTATUS v4; // eax
  signed int v5; // ecx
  LSTATUS v6; // eax
  signed int v7; // ecx
  DWORD cbData[4]; // [rsp+30h] [rbp-10h] BYREF
  DWORD Type; // [rsp+60h] [rbp+20h] BYREF
  int Data; // [rsp+68h] [rbp+28h] BYREF

  Type = 0;
  Data = 0;
  cbData[0] = 4;
  v4 = RegQueryValueExW(a2, L"ButtonsAsVKeys", 0LL, &Type, (LPBYTE)&Data, cbData);
  v5 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 <= 0 )
    v5 = v4;
  *((_BYTE *)this + 80) = v5 >= 0 && Type == 4 && Data;
  Type = 0;
  Data = 0;
  cbData[0] = 4;
  v6 = RegQueryValueExW(a2, L"HardwareButtonsAsVKeys", 0LL, &Type, (LPBYTE)&Data, cbData);
  v7 = (unsigned __int16)v6 | 0x80070000;
  if ( v6 <= 0 )
    v7 = v6;
  if ( v7 >= 0 && Type == 4 )
  {
    if ( Data )
      *((_BYTE *)this + 81) = 1;
  }
}
