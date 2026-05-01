/*
 * XREFs of ?SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z @ 0x180071C60
 * Callers:
 *     ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180071870 (-v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation.c)
 * Callees:
 *     __Platform_WindowsSubstringWithSpecifiedLength @ 0x18009BDBE (__Platform_WindowsSubstringWithSpecifiedLength.c)
 */

__int64 __fastcall SplitActionAndServiceId(HSTRING string, HSTRING *a2, HSTRING *a3)
{
  unsigned int v5; // edi
  const wchar_t *StringRawBuffer; // rax
  size_t v7; // r14
  HRESULT v8; // eax
  HSTRING v9; // rax
  HSTRING stringa; // [rsp+58h] [rbp+38h] BYREF
  HSTRING *length; // [rsp+60h] [rbp+40h] BYREF
  HSTRING v13; // [rsp+68h] [rbp+48h]

  length = a3;
  if ( a2 )
    *a2 = 0LL;
  v5 = 0;
  stringa = 0LL;
  v13 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
  v7 = wcscspn(StringRawBuffer, &c_szActionServiceDelimiter);
  if ( a2 )
  {
    if ( v7 < (unsigned int)length )
    {
      WindowsDeleteString(stringa);
      stringa = 0LL;
      v8 = _Platform_WindowsSubstringWithSpecifiedLength(string, 0, v7, &stringa);
    }
    else
    {
      WindowsDeleteString(stringa);
      stringa = 0LL;
      v8 = WindowsDuplicateString(string, &stringa);
    }
    v5 = v8;
    if ( v8 >= 0 )
    {
      v9 = stringa;
      stringa = 0LL;
      *a2 = v9;
    }
  }
  WindowsDeleteString(v13);
  v13 = 0LL;
  WindowsDeleteString(stringa);
  return v5;
}
