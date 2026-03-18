/*
 * XREFs of RawInputManagerDeviceObjectCreate @ 0x1C0053FE4
 * Callers:
 *     rimCreateDev @ 0x1C00540FC (rimCreateDev.c)
 * Callees:
 *     rimAddToObTrackList @ 0x1C00521D8 (rimAddToObTrackList.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, PHANDLE Handle)
{
  NTSTATUS Object; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  LOBYTE(a1) = 1;
  Object = ObCreateObject(a1, ExRawInputManagerObjectType, 0LL);
  if ( Object >= 0 )
  {
    memset(0LL, 0, 0x340uLL);
    MEMORY[0] = gSessionId;
    MEMORY[4] = 2;
    MEMORY[0x18] = 16LL;
    MEMORY[0x10] = 16LL;
    MEMORY[0xE0] = 216LL;
    MEMORY[0xD8] = 216LL;
    MEMORY[0xD0] = 200LL;
    MEMORY[0xC8] = 200LL;
    MEMORY[0x20] = PsGetCurrentProcess(0LL, v6, v7, v8, 0LL);
    MEMORY[0x28] = KeGetCurrentThread();
    Object = ObInsertObject(0LL, 0LL, 3u, 0, 0LL, Handle);
    if ( Object >= 0 )
      rimAddToObTrackList(0LL);
  }
  return (unsigned int)Object;
}
