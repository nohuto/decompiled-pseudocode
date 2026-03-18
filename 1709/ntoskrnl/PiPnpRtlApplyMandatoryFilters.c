/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x140528568
 * Callers:
 *     IoGetDeviceInterfaceAlias @ 0x14044B2B0 (IoGetDeviceInterfaceAlias.c)
 *     IopGetDeviceInterfaces @ 0x140519D98 (IopGetDeviceInterfaces.c)
 *     PiCMMandatoryFilterCallback @ 0x140529400 (PiCMMandatoryFilterCallback.c)
 *     PiDqQueryEnumObject @ 0x140529564 (PiDqQueryEnumObject.c)
 *     PiCMValidateDeviceInstance @ 0x140530010 (PiCMValidateDeviceInstance.c)
 *     PiDqQueryApplyObjectEvent @ 0x14054D08C (PiDqQueryApplyObjectEvent.c)
 *     PiUEventApplyAdditionalFilters @ 0x14054D7E8 (PiUEventApplyAdditionalFilters.c)
 *     IopDeviceInterfaceFilterCallback @ 0x140585240 (IopDeviceInterfaceFilterCallback.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x140528408 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x1405286B0 (SeQuerySessionIdTokenEx.c)
 *     PiAuVerifyAccessToObject @ 0x14052894C (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1405297F8 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x1405962D4 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
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
  int v18; // ebx
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
LABEL_12:
        *v14 = 1;
        return (unsigned int)SessionIdToken;
      }
    }
    v14 = a6;
    v15 = a3 - 1;
    if ( v15 )
    {
      v18 = v15 - 2;
      if ( v18 )
      {
        if ( v18 != 2 )
          goto LABEL_12;
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v13, v6, a6);
      }
      else
      {
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, a2, a4, (_DWORD)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)PiPnpRtlApplyMandatoryDeviceFilters(a1, a2, a4, v6, a6);
    }
  }
  return (unsigned int)SessionIdToken;
}
