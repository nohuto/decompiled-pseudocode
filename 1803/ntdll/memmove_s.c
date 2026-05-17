/*
 * XREFs of memmove_s @ 0x1800962D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 */

errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t v5; // ebx

  if ( SourceSize )
  {
    if ( !Destination )
    {
      sub_18008B020();
      return 22;
    }
    if ( !Source )
    {
      v5 = 22;
LABEL_8:
      sub_18008B020();
      return v5;
    }
    if ( DestinationSize < SourceSize )
    {
      v5 = 34;
      goto LABEL_8;
    }
    memmove(Destination, Source, SourceSize);
  }
  return 0;
}
