/*
 * XREFs of PiPnpRtlApplyMandatoryFilters @ 0x140489ECC
 * Callers:
 *     IopDeviceInterfaceFilterCallback @ 0x140447190 (IopDeviceInterfaceFilterCallback.c)
 *     PiUEventApplyAdditionalFilters @ 0x1404A6BE8 (PiUEventApplyAdditionalFilters.c)
 *     PiDqQueryApplyObjectEvent @ 0x1404B83D4 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x1404B9B98 (PiDqQueryEnumObject.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x1404E6C28 (PiCMValidateDeviceInstance.c)
 *     PiCMMandatoryFilterCallback @ 0x1404E7D30 (PiCMMandatoryFilterCallback.c)
 *     IoGetDeviceInterfaceAlias @ 0x14056BDA0 (IoGetDeviceInterfaceAlias.c)
 * Callees:
 *     PiPnpRtlApplyMandatoryDeviceContainerFilters @ 0x14041FD94 (PiPnpRtlApplyMandatoryDeviceContainerFilters.c)
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x140489D6C (PiPnpRtlApplyMandatoryDeviceFilters.c)
 *     SeQuerySessionIdTokenEx @ 0x14048A010 (SeQuerySessionIdTokenEx.c)
 *     PiAuVerifyAccessToObject @ 0x1404E4EF4 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1404E6AE8 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 */

__int64 __fastcall PiPnpRtlApplyMandatoryFilters(
        __int64 a1,
        const wchar_t *a2,
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
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceContainerFilters(a1, a2, v13, (__int64)v6, a6);
      }
      else
      {
        return (unsigned int)PiPnpRtlApplyMandatoryDeviceInterfaceFilters(a1, (_DWORD)a2, a4, (_DWORD)v6, (__int64)a6);
      }
    }
    else
    {
      return (unsigned int)PiPnpRtlApplyMandatoryDeviceFilters(a1, (__int64)a2, a4, v6, a6);
    }
  }
  return (unsigned int)SessionIdToken;
}
