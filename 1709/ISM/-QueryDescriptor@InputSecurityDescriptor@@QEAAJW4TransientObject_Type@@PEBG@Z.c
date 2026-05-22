/*
 * XREFs of ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180006028 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009EE8 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x180024DBC (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x1800277FC (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     ?Initialize@InputEdgyNotifier@@QEAAJXZ @ 0x18002E488 (-Initialize@InputEdgyNotifier@@QEAAJXZ.c)
 *     ?Initialize@MobileCursorBroker@@QEAAJXZ @ 0x18002F1CC (-Initialize@MobileCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@ControllerNavigationManager@@AEAAJXZ @ 0x18003C350 (-Initialize@ControllerNavigationManager@@AEAAJXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x180068C8C (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?InitializeCoreMessaging@TouchProcessor@@QEAAJXZ @ 0x180073594 (-InitializeCoreMessaging@TouchProcessor@@QEAAJXZ.c)
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x1800864BC (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     ?Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x1800A6D14 (-Initialize@InputRedirectionComponent@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 */

__int64 __fastcall InputSecurityDescriptor::QueryDescriptor(__int64 a1, unsigned int a2, __int64 a3)
{
  int LastError; // ebx
  int TransientObjectSecurityDescriptor; // eax
  __int64 v6; // rcx
  int v7; // r9d

  *(_BYTE *)(a1 + 8) = 1;
  LastError = 0;
  TransientObjectSecurityDescriptor = QueryTransientObjectSecurityDescriptor(a2, a3, a1);
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
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 73;
LABEL_13:
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, v7, LastError);
    }
  }
  else if ( TransientObjectSecurityDescriptor < 0 )
  {
    LastError = TransientObjectSecurityDescriptor | 0x10000000;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v7 = 80;
      goto LABEL_13;
    }
  }
  return (unsigned int)LastError;
}
