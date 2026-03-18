/*
 * XREFs of IsPointerInputHookCall @ 0x1C0048F34
 * Callers:
 *     xxxCallHook @ 0x1C0048E7C (xxxCallHook.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C0049424 (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerInputHookCall(int a1, unsigned int *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rdx
  __int16 v4; // dx
  unsigned int v5; // r8d
  int v6; // r9d

  switch ( a1 )
  {
    case 0:
      v2 = *a2;
      goto LABEL_8;
    case 4:
      v2 = a2[4];
      v3 = *((_QWORD *)a2 + 1);
      goto LABEL_9;
    case -1:
    case 3:
    case 6:
      v2 = a2[2];
LABEL_16:
      v3 = *((_QWORD *)a2 + 2);
      goto LABEL_9;
    case 12:
      v2 = a2[6];
      goto LABEL_16;
  }
  v2 = 0;
LABEL_8:
  v3 = 0LL;
LABEL_9:
  if ( (unsigned int)IsPointerInputMessageWithState(v2, v3, 0LL) || v6 == 528 && v4 == 582 )
    return 1;
  return v5;
}
