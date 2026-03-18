/*
 * XREFs of PiDqQueryGetObjectManager @ 0x1404B8F70
 * Callers:
 *     PiDqDispatch @ 0x1404B9020 (PiDqDispatch.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404B95DC (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     <none>
 */

struct _ERESOURCE *__fastcall PiDqQueryGetObjectManager(__int64 a1)
{
  __int64 v1; // r8

  v1 = 0LL;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL) )
  {
    case 1:
      return &PiDqDeviceInterfaceManager;
    case 2:
      return &PiDqDeviceContainerManager;
    case 3:
      return &PiDqDeviceManager;
    case 4:
      return &PiDqDeviceInterfaceClassManager;
    case 7:
      return &PiDqDeviceInstallerClassManager;
  }
  return (struct _ERESOURCE *)v1;
}
