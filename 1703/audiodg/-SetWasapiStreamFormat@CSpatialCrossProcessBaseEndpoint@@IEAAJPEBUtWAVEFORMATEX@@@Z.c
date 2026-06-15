/*
 * XREFs of ?SetWasapiStreamFormat@CSpatialCrossProcessBaseEndpoint@@IEAAJPEBUtWAVEFORMATEX@@@Z @ 0x14005CE7C
 * Callers:
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005C820 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEA_K1@Z @ 0x14005EAD0 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::SetWasapiStreamFormat(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct tWAVEFORMATEX *a2)
{
  struct tWAVEFORMATEX **v2; // rbx
  void *v4; // rcx

  v2 = (struct tWAVEFORMATEX **)((char *)this + 152);
  v4 = (void *)*((_QWORD *)this + 19);
  if ( v4 )
  {
    CoTaskMemFree(v4);
    *v2 = 0LL;
  }
  return CloneWaveFormat(a2, v2);
}
