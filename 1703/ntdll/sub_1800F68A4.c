/*
 * XREFs of sub_1800F68A4 @ 0x1800F68A4
 * Callers:
 *     sub_1800F65B0 @ 0x1800F65B0 (sub_1800F65B0.c)
 *     sub_1800F679C @ 0x1800F679C (sub_1800F679C.c)
 * Callees:
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 *     ZwWaitForMultipleObjects @ 0x1800A5E50 (ZwWaitForMultipleObjects.c)
 */

char sub_1800F68A4()
{
  char result; // al

  result = 0;
  if ( qword_18015C7A8 )
  {
    ZwSetEvent();
    if ( (unsigned int)ZwWaitForMultipleObjects() == 1 )
    {
      return 1;
    }
    else
    {
      byte_18015C7B8 = 1;
      return 0;
    }
  }
  else
  {
    byte_18015C7B8 = 1;
  }
  return result;
}
