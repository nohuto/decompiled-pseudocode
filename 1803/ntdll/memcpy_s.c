/*
 * XREFs of memcpy_s @ 0x180096220
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

errno_t __cdecl memcpy_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v8; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
  {
    sub_18008B020();
    return 22;
  }
  if ( Source && DestinationSize >= SourceSize )
  {
    memmove(Destination, Source, SourceSize);
    return 0;
  }
  memset(Destination, 0, DestinationSize);
  if ( Source )
  {
    if ( DestinationSize >= SourceSize )
      return 22;
    v8 = 34;
  }
  else
  {
    v8 = 22;
  }
  sub_18008B020();
  return v8;
}
