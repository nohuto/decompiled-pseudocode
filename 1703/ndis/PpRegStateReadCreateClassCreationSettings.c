/*
 * XREFs of PpRegStateReadCreateClassCreationSettings @ 0x1C00F3B14
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C00A8400 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C00787C8 (WdmlibRtlInitUnicodeStringEx.c)
 *     PiRegStateOpenClassKey @ 0x1C00F37D8 (PiRegStateOpenClassKey.c)
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00F395C (PiRegStateReadStackCreationSettingsFromKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x1C00F3EF8 (CmRegUtilOpenExistingWstrKey.c)
 *     CmRegUtilUcValueSetUcString @ 0x1C00F40C0 (CmRegUtilUcValueSetUcString.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00F4218 (CmRegUtilWstrValueSetWstrString.c)
 */

__int64 __fastcall PpRegStateReadCreateClassCreationSettings(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  NTSTATUS inited; // ebx
  NTSTATUS StackCreationSettingsFromKey; // eax
  void *v8; // rcx
  HANDLE v9; // rdi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+60h] [rbp+20h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+28h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0LL;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 16) = 0;
  *(_DWORD *)(a3 + 20) = 0;
  Handle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  result = PiRegStateOpenClassKey(a1, a2, 1, &v11, &Handle);
  if ( (int)result >= 0 )
  {
    if ( v11 == 2 )
    {
      inited = CmRegUtilOpenExistingWstrKey(Handle, L"Properties", 131097LL, &DestinationString);
      ZwClose(Handle);
      if ( inited < 0 )
      {
        if ( inited == -1073741772 )
          return 0;
        return (unsigned int)inited;
      }
      StackCreationSettingsFromKey = PiRegStateReadStackCreationSettingsFromKey(
                                       *(HANDLE *)&DestinationString.Length,
                                       a3);
      v8 = *(void **)&DestinationString.Length;
      inited = StackCreationSettingsFromKey;
    }
    else
    {
      v9 = Handle;
      if ( *(_QWORD *)(a2 + 48) == -24LL )
      {
        inited = -1073741670;
      }
      else
      {
        inited = WdmlibRtlInitUnicodeStringEx(&DestinationString, L"Class");
        if ( inited >= 0 )
          inited = CmRegUtilUcValueSetUcString(v9, &DestinationString);
        if ( inited >= 0 )
        {
          v11 = 49;
          inited = CmRegUtilWstrValueSetWstrString(v9, L"NoDisplayClass", &v11);
          if ( inited >= 0 )
            inited = CmRegUtilWstrValueSetWstrString(v9, L"NoUseClass", &v11);
        }
      }
      v8 = v9;
    }
    ZwClose(v8);
    return (unsigned int)inited;
  }
  return result;
}
