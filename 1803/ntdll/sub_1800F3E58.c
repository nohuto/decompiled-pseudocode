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
  HANDLE Handles; // [rsp+30h] [rbp-18h] BYREF
  __int64 v2; // [rsp+38h] [rbp-10h]
  LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  result = 0;
  Handles = 0LL;
  v2 = 0LL;
  if ( qword_18015D7F0 )
  {
    Handles = (HANDLE)*((_QWORD *)qword_18015D7F0 + 1);
    v2 = *((_QWORD *)qword_18015D7F0 + 3);
    Timeout.QuadPart = -100000000LL;
    ZwSetEvent(*((HANDLE *)qword_18015D7F0 + 2), 0LL);
    if ( ZwWaitForMultipleObjects(2u, &Handles, WaitAny, 0, &Timeout) == 1 )
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
