/*
 * XREFs of strcpy_s @ 0x1800964E0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1800F1740 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

errno_t __cdecl strcpy_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  errno_t v3; // ebx
  signed __int64 v4; // rax
  char v5; // r9
  rsize_t v6; // r10
  rsize_t v7; // rax

  if ( Destination && SizeInBytes )
  {
    if ( !Source )
    {
      v3 = 22;
LABEL_12:
      *Destination = 0;
      sub_18008B020();
      return v3;
    }
    v4 = Destination - Source;
    do
    {
      v5 = *Source;
      v6 = SizeInBytes;
      Source[v4] = *Source;
      ++Source;
      if ( !v5 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    v7 = v6 - 1;
    if ( !v5 )
      v7 = v6;
    if ( !v7 )
    {
      v3 = 34;
      goto LABEL_12;
    }
    return 0;
  }
  else
  {
    sub_18008B020();
    return 22;
  }
}
