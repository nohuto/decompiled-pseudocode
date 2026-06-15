/*
 * XREFs of memcpy_s_0 @ 0x180033A54
 * Callers:
 *     ?ConvertToBaseType@?$ChTraitsCRT@G@ATL@@SAXPEAGHPEBGH@Z @ 0x180070778 (-ConvertToBaseType@-$ChTraitsCRT@G@ATL@@SAXPEAGHPEBGH@Z.c)
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
