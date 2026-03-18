/*
 * XREFs of ObReferenceObjectByPointer @ 0x14012B9D0
 * Callers:
 *     EtwpStopTrace @ 0x140434854 (EtwpStopTrace.c)
 *     EtwpAddUmRegEntry @ 0x140480F40 (EtwpAddUmRegEntry.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048BEC8 (IopAllocateFoExtensionsOnCreate.c)
 *     WmipQueryAllData @ 0x1404BE8F4 (WmipQueryAllData.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 *     NtImpersonateAnonymousToken @ 0x14055FD94 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x1405604C0 (ObpParseSymbolicLinkEx.c)
 *     IoRegisterPlugPlayNotification @ 0x140571300 (IoRegisterPlugPlayNotification.c)
 *     WmipQuerySetExecuteSI @ 0x1405807A8 (WmipQuerySetExecuteSI.c)
 *     WmipRegisterDevice @ 0x14059FDA8 (WmipRegisterDevice.c)
 *     EtwpRegisterPrivateSession @ 0x140711984 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  volatile signed __int64 *v4; // rdi
  bool v5; // zf
  signed __int64 BugCheckParameter4; // rbx

  v4 = (volatile signed __int64 *)((char *)Object - 48);
  if ( ObjectType )
    v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v4 + 24) ^ (unsigned __int64)BYTE1(v4)] == (_QWORD)ObjectType;
  else
    v5 = AccessMode == 0;
  if ( !v5 )
    return -1073741788;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v4);
  BugCheckParameter4 = _InterlockedIncrement64(v4);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v4 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
