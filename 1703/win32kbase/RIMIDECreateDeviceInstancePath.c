/*
 * XREFs of RIMIDECreateDeviceInstancePath @ 0x1C01093AC
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0109F10 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C010A148 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     RtlUnicodeStringPrintf @ 0x1C010B90C (RtlUnicodeStringPrintf.c)
 */

__int64 __fastcall RIMIDECreateDeviceInstancePath(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        __int64 a4)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  NTSTATUS v7; // eax
  PWSTR Buffer; // r9
  PWSTR v9; // rax
  __int64 v10; // rdx
  __int16 v11; // r8
  unsigned int v13; // [rsp+28h] [rbp-140h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-138h] BYREF
  char v15; // [rsp+40h] [rbp-128h] BYREF

  *(_DWORD *)&DestinationString.Length = 0x1000000;
  DestinationString.Buffer = (PWSTR)&v15;
  v5 = -1073741823;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v7 = RtlUnicodeStringPrintf(
             &DestinationString,
             L"\\??\\Microsoft Keyboard RID\\%u",
             (unsigned int)dword_1C018FB4C);
    }
    else
    {
      if ( a1 != 2 )
      {
        v6 = 14;
        v13 = a1;
        goto LABEL_5;
      }
      v7 = RtlUnicodeStringPrintf(
             &DestinationString,
             L"\\??\\Microsoft HID RID\\%04X_%04X\\%u",
             a2,
             a3,
             dword_1C018FB4C);
    }
  }
  else
  {
    v7 = RtlUnicodeStringPrintf(&DestinationString, L"\\??\\Microsoft Mouse RID\\%u", (unsigned int)dword_1C018FB4C);
  }
  v5 = v7;
  if ( v7 >= 0 )
  {
    Buffer = DestinationString.Buffer;
    v5 = 0;
    *(_DWORD *)a4 = 0;
    *(_QWORD *)(a4 + 8) = 0LL;
    if ( Buffer )
    {
      v9 = Buffer;
      v10 = 0x7FFFLL;
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v10;
      }
      while ( v10 );
      v5 = v10 == 0 ? 0xC000000D : 0;
      if ( v10 )
        v11 = 0x7FFF - v10;
      else
        v11 = 0;
      if ( v10 )
      {
        *(_QWORD *)(a4 + 8) = Buffer;
        *(_WORD *)a4 = 2 * v11;
        *(_WORD *)(a4 + 2) = 2 * v11 + 2;
      }
    }
    if ( (v5 & 0x80000000) == 0 )
    {
      ++dword_1C018FB4C;
      return v5;
    }
    v6 = 16;
    v13 = v5;
  }
  else
  {
    v6 = 15;
    v13 = v7;
  }
LABEL_5:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    0x11u,
    v6,
    (__int64)&WPP_fda5dd94230439844a6c55081ca9359e_Traceguids,
    v13,
    *(_QWORD *)&DestinationString.Length);
  return v5;
}
