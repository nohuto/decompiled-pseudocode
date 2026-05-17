/*
 * XREFs of memmove_s @ 0x1800A0F90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180095DE0 @ 0x180095DE0 (sub_180095DE0.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
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
      sub_180095DE0();
      return 22;
    }
    if ( !Source )
    {
      v5 = 22;
LABEL_8:
      sub_180095DE0();
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
