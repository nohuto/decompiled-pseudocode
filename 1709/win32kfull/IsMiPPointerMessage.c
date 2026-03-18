/*
 * XREFs of IsMiPPointerMessage @ 0x1C000CB10
 * Callers:
 *     xxxPointerCallHook @ 0x1C000CA90 (xxxPointerCallHook.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00A10A8 (IsPointerInputMessage.c)
 */

__int64 IsMiPPointerMessage()
{
  int v0; // eax
  unsigned __int64 v1; // rdx
  int v2; // ecx
  unsigned int v3; // r8d

  v0 = IsPointerInputMessage();
  v3 = 0;
  if ( v0 )
    goto LABEL_2;
  if ( v2 == 528 && (_WORD)v1 == 582 )
  {
    v1 >>= 16;
LABEL_2:
    LOBYTE(v3) = (_WORD)v1 == 1;
    return v3;
  }
  return 0LL;
}
