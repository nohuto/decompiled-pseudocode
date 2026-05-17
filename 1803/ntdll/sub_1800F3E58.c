/*
 * XREFs of sub_1800F3E58 @ 0x1800F3E58
 * Callers:
 *     sub_1800F3B70 @ 0x1800F3B70 (sub_1800F3B70.c)
 *     sub_1800F3D68 @ 0x1800F3D68 (sub_1800F3D68.c)
 * Callees:
 *     ZwSetEvent @ 0x18009AC80 (ZwSetEvent.c)
 *     ZwWaitForMultipleObjects @ 0x18009B610 (ZwWaitForMultipleObjects.c)
 */

char sub_1800F3E58()
{
  char result; // al

  result = 0;
  if ( qword_18015D7F0 )
  {
    ZwSetEvent();
    if ( (unsigned int)ZwWaitForMultipleObjects() == 1 )
    {
      return 1;
    }
    else
    {
      byte_18015D810 = 1;
      return 0;
    }
  }
  else
  {
    byte_18015D810 = 1;
  }
  return result;
}
