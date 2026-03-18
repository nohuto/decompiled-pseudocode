/*
 * XREFs of ObReferenceObjectByPointerWithTag @ 0x1400F0E30
 * Callers:
 *     NtOpenProcessTokenEx @ 0x14059A540 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x14059A7F0 (ObOpenObjectByPointer.c)
 *     IoRegisterPlugPlayNotification @ 0x1405E22E0 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointerWithTag(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag)
{
  signed __int64 BugCheckParameter4; // rbx

  if ( ObjectType )
  {
    if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] != ObjectType )
      return -1073741788;
  }
  else if ( AccessMode )
  {
    return -1073741788;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)Object - 6);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 0x10uLL, BugCheckParameter4);
  return 0;
}
