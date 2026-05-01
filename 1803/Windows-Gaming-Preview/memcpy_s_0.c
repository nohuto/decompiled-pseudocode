/*
 * XREFs of memcpy_s_0 @ 0x18004307E
 * Callers:
 *     ?GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z @ 0x18003E4A0 (-GetVersion2Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV2@KnownGameList@@@Z.c)
 *     ?GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z @ 0x18003E520 (-GetVersion3Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV3@KnownGameList@@@Z.c)
 *     ?GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z @ 0x18003E5A0 (-GetVersion4Header@CQueryKnownGameList@@UEAAJPEAUCookedKGLHeaderV4@KnownGameList@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  return memcpy_s(Destination, DestinationSize, Source, SourceSize);
}
