/*
 * XREFs of SdbpQueryAppCompatFlagsByExeID @ 0x14061FB08
 * Callers:
 *     SdbGetEntryFlags @ 0x14061FA54 (SdbGetEntryFlags.c)
 * Callees:
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     AslRegistryGetKey @ 0x14061FB84 (AslRegistryGetKey.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslRegistryGetUInt32 @ 0x1407D94A0 (AslRegistryGetUInt32.c)
 */

__int64 __fastcall SdbpQueryAppCompatFlagsByExeID(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  int Key; // eax
  unsigned int v7; // ebx
  bool v8; // zf
  int UInt32; // eax
  int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+50h] [rbp+8h] BYREF
  int v14; // [rsp+54h] [rbp+Ch]
  HANDLE Handle; // [rsp+68h] [rbp+20h] BYREF

  v14 = HIDWORD(a1);
  v13 = 0;
  Handle = 0LL;
  Key = AslRegistryGetKey(
          &Handle,
          L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
          2147483904LL,
          a3);
  v7 = Key;
  if ( Key >= 0 )
  {
    UInt32 = AslRegistryGetUInt32(&v13, Handle, a2);
    v7 = UInt32;
    if ( UInt32 >= 0 )
    {
      v7 = 0;
    }
    else if ( UInt32 != -1073741772 )
    {
      v12 = UInt32;
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpQueryAppCompatFlagsByExeID",
        75,
        (unsigned int)"AslRegistryGetUInt32 failed for key: '%ws' [%x]",
        L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags",
        v12);
    }
  }
  else if ( Key != -1073741772 )
  {
    v11 = Key;
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpQueryAppCompatFlagsByExeID",
      64,
      (unsigned int)"AslRegistryGetKey failed [%x]",
      v11);
  }
  v8 = Handle == 0LL;
  *a4 = v13;
  if ( !v8 )
    ZwClose(Handle);
  return v7;
}
