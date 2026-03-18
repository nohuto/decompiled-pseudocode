/*
 * XREFs of ObReferenceObjectByPointer @ 0x1400DE9F0
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1404915C0 (EtwpAddUmRegEntry.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404922C4 (IopAllocateFoExtensionsOnCreate.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     EtwpStopTrace @ 0x1404F0484 (EtwpStopTrace.c)
 *     NtImpersonateAnonymousToken @ 0x140512CF4 (NtImpersonateAnonymousToken.c)
 *     WmipQueryAllData @ 0x14051B564 (WmipQueryAllData.c)
 *     ObpParseSymbolicLinkEx @ 0x14051E840 (ObpParseSymbolicLinkEx.c)
 *     WmipQuerySetExecuteSI @ 0x14051ECEC (WmipQuerySetExecuteSI.c)
 *     WmipRegisterDevice @ 0x14057F3F8 (WmipRegisterDevice.c)
 *     IoRegisterPlugPlayNotification @ 0x140585FB0 (IoRegisterPlugPlayNotification.c)
 *     EtwpRegisterPrivateSession @ 0x14074F4D4 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
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
