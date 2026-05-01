/*
 * XREFs of ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x1801E0A90
 * Callers:
 *     <none>
 * Callees:
 *     __Platform_WindowsSubstringWithSpecifiedLength @ 0x1801E57BE (__Platform_WindowsSubstringWithSpecifiedLength.c)
 */

__int64 __fastcall CActivatedEventArgsBase::v_GetActivationKind(
        CActivatedEventArgsBase *this,
        HSTRING a2,
        enum Windows::ApplicationModel::Activation::ActivationKind *a3)
{
  const WCHAR *StringRawBuffer; // r12
  HSTRING v6; // rbx
  const wchar_t *v7; // rax
  size_t v8; // rax
  UINT32 v9; // esi
  HRESULT v10; // eax
  int v11; // edi
  char v12; // r14
  unsigned int v13; // esi
  HSTRING string[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+50h]
  UINT32 length; // [rsp+98h] [rbp+58h] BYREF

  *(_DWORD *)a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  WindowsDeleteString(0LL);
  v6 = 0LL;
  v7 = WindowsGetStringRawBuffer(a2, &length);
  v8 = wcscspn(v7, &c_szActionServiceDelimiter);
  v9 = v8;
  if ( v8 >= length )
  {
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v10 = WindowsDuplicateString(a2, string);
  }
  else
  {
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v10 = _Platform_WindowsSubstringWithSpecifiedLength(a2, 0, v9, string);
  }
  v16 = v10;
  v11 = v10;
  if ( v10 >= 0 )
  {
    v6 = string[0];
    string[0] = 0LL;
  }
  WindowsDeleteString(0LL);
  WindowsDeleteString(string[0]);
  if ( v11 >= 0 )
    StringRawBuffer = WindowsGetStringRawBuffer(v6, 0LL);
  v12 = 0;
  v13 = 0;
  do
  {
    if ( v13 >= 0x2B )
      break;
    if ( CompareStringOrdinal(StringRawBuffer, -1, (&off_180214AC0)[2 * v13], -1, 0) == 2 )
    {
      v12 = 1;
      *(_DWORD *)a3 = *((_DWORD *)&off_180214AC0 + 4 * v13 + 2);
    }
    ++v13;
  }
  while ( !v12 );
  WindowsDeleteString(v6);
  return v16;
}
