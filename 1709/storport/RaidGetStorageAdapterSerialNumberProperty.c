/*
 * XREFs of RaidGetStorageAdapterSerialNumberProperty @ 0x1C006091C
 * Callers:
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C005F458 (RaidAdapterStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0011DF0 (RaCallMiniportAdapterControl.c)
 *     RaidIsAdapterControlSupported @ 0x1C00127FC (RaidIsAdapterControlSupported.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RtlUnicodeStringCopyString @ 0x1C0030870 (RtlUnicodeStringCopyString.c)
 */

signed int __fastcall RaidGetStorageAdapterSerialNumberProperty(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  signed int result; // eax
  unsigned __int64 v7; // rax
  void *v8; // r14
  __int64 v9; // rdi
  _WORD *v10; // rax
  __int64 v11; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  struct _STRING SourceString; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v14[68]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v14, 0, 0x10CuLL);
  if ( !(unsigned int)RaidIsAdapterControlSupported(a1, 17) )
    return -1073741637;
  v7 = *a3;
  if ( *a3 < 8 )
  {
    result = -1073741789;
LABEL_20:
    *a3 = 264LL;
    return result;
  }
  *a2 = 264;
  a2[1] = 264;
  if ( v7 < 0x108 )
  {
    *a3 = 8LL;
    return 0;
  }
  v8 = a2 + 2;
  *a3 = 0LL;
  v9 = 256LL;
  memset(v8, 0, 0x100uLL);
  v14[0] = 1;
  v14[1] = 268;
  result = RaCallMiniportAdapterControl(a1 + 296);
  if ( result >= 0 )
  {
    v10 = (_WORD *)((char *)&v14[2] + 1);
    *(_DWORD *)&DestinationString.Length = 0x1000000;
    DestinationString.Buffer = (wchar_t *)v8;
    if ( LOBYTE(v14[2]) == 1 )
    {
      v11 = 128LL;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v11;
      }
      while ( v11 );
      result = v11 == 0 ? 0xC000000D : 0;
      if ( !v11 )
        return result;
      result = RtlUnicodeStringCopyString(&DestinationString, (NTSTRSAFE_PCWSTR)((char *)&v14[2] + 1));
    }
    else
    {
      do
      {
        if ( !*(_BYTE *)v10 )
          break;
        v10 = (_WORD *)((char *)v10 + 1);
        --v9;
      }
      while ( v9 );
      result = v9 == 0 ? 0xC000000D : 0;
      if ( !v9 )
        return result;
      *(_QWORD *)&SourceString.Length = 0LL;
      SourceString.Buffer = 0LL;
      RtlInitAnsiString(&SourceString, (PCSZ)&v14[2] + 1);
      result = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
    }
    if ( result >= 0 )
      goto LABEL_20;
  }
  return result;
}
