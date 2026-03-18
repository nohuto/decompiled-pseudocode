/*
 * XREFs of Simulator_RemoveNode @ 0x1C0044E08
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0044550 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     FreeNameSpaceObjects @ 0x1C004A020 (FreeNameSpaceObjects.c)
 *     GetNameSpaceObject @ 0x1C004A1E0 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_RemoveNode(__int64 a1)
{
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( !RtlUnicodeStringToAnsiString(&DestinationString, *(PCUNICODE_STRING *)(a1 + 16), 1u) )
  {
    GetNameSpaceObject(DestinationString.Buffer);
    RtlFreeAnsiString(&DestinationString);
  }
  return 3221225473LL;
}
