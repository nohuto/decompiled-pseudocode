/*
 * XREFs of ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0254F18
 * Callers:
 *     ?iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0254FCC (-iOpenGLExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C0075304 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     UserGetHwnd @ 0x1C01C2D20 (UserGetHwnd.c)
 */

__int64 __fastcall LookUpWndobjs(struct DCOBJ *a1, DC **a2, HDC *a3, int a4)
{
  unsigned int v4; // esi
  int v5; // ebp
  __int64 v9; // r15
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( a4 <= 0 )
    return v4;
  while ( 1 )
  {
    XDCOBJ::vLock(a2, *a3);
    if ( !*a2 )
      break;
    if ( *((_QWORD *)*a2 + 6) == v9 )
    {
      if ( !(unsigned int)UserGetHwnd((__int64 *)*a3, &v11, (__int64 *)a3) )
        return 0xFFFFFFFFLL;
      v4 |= 1 << v5;
    }
    else
    {
      XDCOBJ::vUnlock((XDCOBJ *)a2);
      *a3 = 0LL;
    }
    ++a3;
    a2 += 2;
    if ( ++v5 >= a4 )
      return v4;
  }
  return 0xFFFFFFFFLL;
}
