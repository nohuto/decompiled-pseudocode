/*
 * XREFs of memcpy_s @ 0x1800A0EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
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
    sub_180095DE0();
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
  sub_180095DE0();
  return v8;
}
