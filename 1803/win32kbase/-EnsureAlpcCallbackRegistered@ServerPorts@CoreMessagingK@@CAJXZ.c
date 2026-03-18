/*
 * XREFs of ?EnsureAlpcCallbackRegistered@ServerPorts@CoreMessagingK@@CAJXZ @ 0x1C01668EC
 * Callers:
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C01664E4 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 CoreMessagingK::ServerPorts::EnsureAlpcCallbackRegistered(void)
{
  NTSTATUS v1; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-38h] BYREF

  if ( CoreMessagingK::ServerPorts::s_CallbackObject )
    return 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = ExCreateCallback((PCALLBACK_OBJECT *)&CoreMessagingK::ServerPorts::s_CallbackObject, &ObjectAttributes, 1u, 0);
  if ( v1 >= 0 )
  {
    CoreMessagingK::ServerPorts::s_CallbackRegistration = ExRegisterCallback(
                                                            (PCALLBACK_OBJECT)CoreMessagingK::ServerPorts::s_CallbackObject,
                                                            CoreMessagingK::ServerPorts::PortSignaledCallback,
                                                            0LL);
    if ( !CoreMessagingK::ServerPorts::s_CallbackRegistration )
    {
      ObfDereferenceObject(CoreMessagingK::ServerPorts::s_CallbackObject);
      CoreMessagingK::ServerPorts::s_CallbackObject = 0LL;
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v1;
}
