/*
 * XREFs of ResCKeHitsOpenMapping @ 0x18008ECD8
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18001AFA0 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x18010BBAC (ResCKeCreateRuntimeView.c)
 * Callees:
 *     _ResCMapCMFModule @ 0x18001B470 (_ResCMapCMFModule.c)
 *     ResCHitsCreateAndPopulate @ 0x18008ED3C (ResCHitsCreateAndPopulate.c)
 *     _ResUnmapViewOfFile @ 0x180110624 (_ResUnmapViewOfFile.c)
 */

PVOID ResCKeHitsOpenMapping()
{
  PVOID result; // rax
  void *v1; // rbx
  __int64 v2; // rdi
  ULONG v3; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  result = ResCMapCMFModule(0x140u, 0xFFFFFFFF, &v3, 0LL, 0LL);
  v1 = result;
  if ( result )
  {
    v2 = ResCHitsCreateAndPopulate(result, v3, 3LL);
    if ( !v2 )
      ResUnmapViewOfFile(v1);
    return (PVOID)v2;
  }
  return result;
}
