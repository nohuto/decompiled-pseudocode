/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x1405017B8
 * Callers:
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     PiDqQueryEnumObject @ 0x1404FDAD4 (PiDqQueryEnumObject.c)
 *     PiUEventApplyAdditionalFilters @ 0x14051FCFC (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x140573630 (IopDeviceInterfaceFilterCallback.c)
 *     PiCMMandatoryFilterCallback @ 0x140586140 (PiCMMandatoryFilterCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x1405C1E50 (IoGetDeviceInterfaceAlias.c)
 *     PiCMValidateDeviceInstance @ 0x1405C664C (PiCMValidateDeviceInstance.c)
 *     PiDqQueryApplyObjectEvent @ 0x1405DD894 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x140501658 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x140501900 (SeQuerySessionIdTokenEx.c)
 *     PiAuVerifyAccessToObject @ 0x14056D570 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405817B0 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x140586510 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        struct _SECURITY_SUBJECT_CONTEXT *IsServiceSession,
        _BYTE *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT *v6; // rdi
  PACCESS_TOKEN ClientToken; // rcx
  NTSTATUS SessionIdToken; // ecx
  __int64 v13; // r8
  _BYTE *v14; // rax
  int v15; // ebx
  int v16; // ebx
  ULONG SessionId[10]; // [rsp+30h] [rbp-28h] BYREF

  v6 = IsServiceSession;
  ClientToken = IsServiceSession->ClientToken;
  if ( !IsServiceSession->ClientToken )
    ClientToken = IsServiceSession->PrimaryToken;
  SessionIdToken = SeQuerySessionIdTokenEx(ClientToken, SessionId, (PBOOLEAN)&IsServiceSession);
  if ( SessionIdToken >= 0 )
  {
    if ( (_BYTE)IsServiceSession )
    {
      LOBYTE(IsServiceSession) = 0;
      SessionIdToken = PiAuVerifyAccessToObject(
                         0xF0000u,
                         PiAuLocalSystemSecurityObject,
                         (PGENERIC_MAPPING)&PiAuLocalSystemSecurityMapping,
                         v6,
                         (__int64)&IsServiceSession);
      if ( SessionIdToken < 0 )
        return (unsigned int)SessionIdToken;
      if ( (_BYTE)IsServiceSession )
      {
        v14 = a6;
LABEL_13:
        *v14 = 1;
        return (unsigned int)SessionIdToken;
      }
    }
    v14 = a6;
    v15 = a3 - 1;
    if ( v15 )
    {
      v16 = v15 - 2;
      if ( v16 )
      {
        if ( v16 != 2 )
          goto LABEL_13;
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v13, v6, a6);
      }
      else
      {
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, a2, a4, (_DWORD)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)PiPnpRtlApplyMandatoryDeviceFilters(a1, a2, a4, (__int64)v6, a6);
    }
  }
  return (unsigned int)SessionIdToken;
}
