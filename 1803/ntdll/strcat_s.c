/*
 * XREFs of strcat_s @ 0x180096430
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 */

errno_t __cdecl strcat_s(char *Destination, rsize_t SizeInBytes, const char *Source)
{
  char *v4; // rax
  errno_t v5; // ebx
  signed __int64 v6; // rax
  char v7; // r9
  rsize_t v8; // r10
  rsize_t v9; // rax

  if ( !Destination || !SizeInBytes )
    goto LABEL_5;
  if ( !Source )
  {
    *Destination = 0;
LABEL_5:
    sub_18008B020();
    return 22;
  }
  v4 = Destination;
  do
  {
    if ( !*v4 )
      break;
    ++v4;
    --SizeInBytes;
  }
  while ( SizeInBytes );
  if ( !SizeInBytes )
  {
    v5 = 22;
LABEL_18:
    *Destination = 0;
    sub_18008B020();
    return v5;
  }
  v6 = v4 - Source;
  do
  {
    v7 = *Source;
    v8 = SizeInBytes;
    Source[v6] = *Source;
    ++Source;
    if ( !v7 )
      break;
    --SizeInBytes;
  }
  while ( SizeInBytes );
  v9 = v8 - 1;
  if ( !v7 )
    v9 = v8;
  if ( !v9 )
  {
    v5 = 34;
    goto LABEL_18;
  }
  return 0;
}
