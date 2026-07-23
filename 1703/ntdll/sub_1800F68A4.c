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
  HANDLE Handles; // [rsp+30h] [rbp-18h] BYREF
  __int64 v2; // [rsp+38h] [rbp-10h]
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  result = 0;
  Handles = 0LL;
  v2 = 0LL;
  if ( qword_18015C7A8 )
  {
    Handles = (HANDLE)*((_QWORD *)qword_18015C7A8 + 1);
    v2 = *((_QWORD *)qword_18015C7A8 + 3);
    Timeout.QuadPart = -100000000LL;
    ZwSetEvent(*((HANDLE *)qword_18015C7A8 + 2), 0LL);
    if ( ZwWaitForMultipleObjects(2u, &Handles, WaitAny, 0, &Timeout) == 1 )
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
