/*
 * XREFs of ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18003A87C
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x1800063BC (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009D18 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800602FC (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x18006B4BC (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180089A14 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800B1E90 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     ?Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x1800B4C9C (-Create@InputRedirectionProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x1800B70B0 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSecurityDescriptor::QueryDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  signed int LastError; // ebx
  int TransientObjectSecurityDescriptor; // eax

  *(_BYTE *)(a1 + 8) = 1;
  LastError = 0;
  TransientObjectSecurityDescriptor = QueryTransientObjectSecurityDescriptor(8LL, a3, a1);
  if ( TransientObjectSecurityDescriptor == -1073741772 )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-26"
            "16377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
           1u,
           (PSECURITY_DESCRIPTOR *)a1,
           0LL)
      || ((int)GetLastError() > 0
        ? (LastError = (unsigned __int16)GetLastError() | 0x80070000)
        : (LastError = GetLastError()),
          LastError >= 0) )
    {
      *(_BYTE *)(a1 + 8) = 0;
    }
  }
  else if ( TransientObjectSecurityDescriptor < 0 )
  {
    return (unsigned int)(TransientObjectSecurityDescriptor | 0x10000000);
  }
  return (unsigned int)LastError;
}
