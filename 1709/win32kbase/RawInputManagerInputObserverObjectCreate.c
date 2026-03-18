/*
 * XREFs of RawInputManagerInputObserverObjectCreate @ 0x1C0107CA4
 * Callers:
 *     rimObsAddInputObserver @ 0x1C0113DE8 (rimObsAddInputObserver.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C001AF9C (rimAddToObTrackList.c)
 *     rimRegQueryRegistryDWord @ 0x1C008CEA4 (rimRegQueryRegistryDWord.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall RawInputManagerInputObserverObjectCreate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx
  unsigned int v7; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF

  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0xB8uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 3;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL, v6);
    MEMORY[0x28] = KeGetCurrentThread();
    MEMORY[0x80] = 120LL;
    MEMORY[0x78] = 120LL;
    MEMORY[0x90] = 136LL;
    MEMORY[0x88] = 136LL;
    MEMORY[0x98] = 0;
    MEMORY[0x9C] = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows");
    v7 = rimRegQueryRegistryDWord(&DestinationString, L"RimObserverQueueSize", 0x100u);
    if ( v7 > 0xFA00 )
      v7 = 64000;
    MEMORY[0xA0] = v7;
    MEMORY[0xA8] = 0LL;
    MEMORY[0xB0] = 0LL;
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
