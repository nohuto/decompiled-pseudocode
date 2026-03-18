/*
 * XREFs of Simulator_RemoveNode @ 0x1C005B900
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C005AFF0 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeNameSpaceObjects @ 0x1C0015460 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
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
