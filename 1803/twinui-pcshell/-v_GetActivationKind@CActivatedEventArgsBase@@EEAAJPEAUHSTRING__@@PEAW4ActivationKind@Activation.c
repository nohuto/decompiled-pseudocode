/*
 * XREFs of ?v_GetActivationKind@CActivatedEventArgsBase@@EEAAJPEAUHSTRING__@@PEAW4ActivationKind@Activation@ApplicationModel@Windows@@@Z @ 0x180071870
 * Callers:
 *     ?Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activation@ApplicationModel@Windows@@EE@Z @ 0x180071B20 (-Initialize@CActivatedEventArgsBase@@UEAAJ_KPEAUHSTRING__@@W4ApplicationExecutionState@Activatio.c)
 * Callees:
 *     ?SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z @ 0x180071C60 (-SplitActionAndServiceId@@YAJPEAUHSTRING__@@PEAPEAU1@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18030C674 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall CActivatedEventArgsBase::v_GetActivationKind(
        CActivatedEventArgsBase *this,
        HSTRING a2,
        enum Windows::ApplicationModel::Activation::ActivationKind *a3)
{
  const WCHAR *StringRawBuffer; // rbp
  HSTRING *v6; // r8
  char v7; // si
  unsigned int v8; // ebx
  unsigned int v10; // ebx
  LPCWCH *v11; // rdi
  __int64 v12; // rcx
  int v13; // [rsp+70h] [rbp+18h]
  HSTRING string; // [rsp+78h] [rbp+20h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgs(this);
  *(_DWORD *)a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v13 = SplitActionAndServiceId(a2, &string, v6);
  if ( v13 >= 0 )
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v7 = 0;
  v8 = 0;
  do
  {
    if ( v8 >= 0x2C )
      break;
    if ( CompareStringOrdinal(StringRawBuffer, -1, (&off_180322D40)[2 * v8], -1, 0) == 2 )
    {
      v7 = 1;
      *(_DWORD *)a3 = *((_DWORD *)&off_180322D40 + 4 * v8 + 2);
    }
    ++v8;
  }
  while ( !v7 );
  if ( !v7 )
  {
    v10 = 0;
    v11 = (LPCWCH *)&off_18034C760;
    while ( CompareStringOrdinal(StringRawBuffer, -1, *v11, -1, 0) != 2 )
    {
      ++v10;
      ++v11;
      if ( v10 >= 0xA )
      {
        MicrosoftTelemetryAssertTriggeredNoArgs(v12);
        break;
      }
    }
  }
  WindowsDeleteString(string);
  return (unsigned int)v13;
}
