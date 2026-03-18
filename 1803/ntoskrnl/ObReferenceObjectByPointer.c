/*
 * XREFs of ObReferenceObjectByPointer @ 0x140073920
 * Callers:
 *     IopAllocateFoExtensionsOnCreate @ 0x1404E36C8 (IopAllocateFoExtensionsOnCreate.c)
 *     WmipQueryAllData @ 0x14051A7B0 (WmipQueryAllData.c)
 *     WmipQuerySetExecuteSI @ 0x14051B0F8 (WmipQuerySetExecuteSI.c)
 *     ObpParseSymbolicLinkEx @ 0x14051B890 (ObpParseSymbolicLinkEx.c)
 *     NtImpersonateAnonymousToken @ 0x14051C480 (NtImpersonateAnonymousToken.c)
 *     EtwpStopTrace @ 0x140589108 (EtwpStopTrace.c)
 *     EtwpAddUmRegEntry @ 0x1405909C0 (EtwpAddUmRegEntry.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     WmipRegisterDevice @ 0x140600958 (WmipRegisterDevice.c)
 *     EtwpRegisterPrivateSession @ 0x1407B0348 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  bool v5; // zf
  signed __int64 BugCheckParameter4; // rbx

  if ( ObjectType )
    v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] == (_QWORD)ObjectType;
  else
    v5 = AccessMode == 0;
  if ( !v5 )
    return -1073741788;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)Object - 6);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 0x10uLL, BugCheckParameter4);
  return 0;
}
