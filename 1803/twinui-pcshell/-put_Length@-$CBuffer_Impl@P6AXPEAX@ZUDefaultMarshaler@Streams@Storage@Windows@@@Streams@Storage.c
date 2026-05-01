/*
 * XREFs of ?put_Length@?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@UEAAJI@Z @ 0x1801E15F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Storage::Streams::CBuffer_Impl<void (*)(void *),Windows::Storage::Streams::DefaultMarshaler>::put_Length(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v2; // ebx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  wchar_t v5; // [rsp+30h] [rbp-18h]

  v2 = *(_DWORD *)(a1 + 88) < a2 ? 0x80070057 : 0;
  if ( a2 > *(_DWORD *)(a1 + 88) )
  {
    v5 = aCblength[8];
    v4 = *(_OWORD *)L"cbLength";
    RoOriginateErrorW(2147942487LL, 8LL, &v4);
  }
  else
  {
    *(_DWORD *)(a1 + 92) = a2;
  }
  return v2;
}
