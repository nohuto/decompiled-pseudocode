/*
 * XREFs of ObReferenceObjectByPointerWithTag @ 0x140088FC0
 * Callers:
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     NtOpenProcessTokenEx @ 0x1404C5240 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointerWithTag(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag)
{
  volatile signed __int64 *v5; // rdi
  signed __int64 BugCheckParameter4; // rbx

  v5 = (volatile signed __int64 *)((char *)Object - 48);
  if ( ObjectType )
  {
    if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v5 + 24) ^ (unsigned __int64)BYTE1(v5)] != ObjectType )
      return -1073741788;
  }
  else if ( AccessMode )
  {
    return -1073741788;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v5);
  BugCheckParameter4 = _InterlockedIncrement64(v5);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v5 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
