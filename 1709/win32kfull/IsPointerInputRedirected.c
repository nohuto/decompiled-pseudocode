/*
 * XREFs of IsPointerInputRedirected @ 0x1C01CE4A0
 * Callers:
 *     EditionIsPointerInputRedirected @ 0x1C01CE210 (EditionIsPointerInputRedirected.c)
 *     IsPointerInputTypeRedirected @ 0x1C01CE540 (IsPointerInputTypeRedirected.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01F6604 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     UpdatePointerRedirIsAlive @ 0x1C0060760 (UpdatePointerRedirIsAlive.c)
 */

__int64 __fastcall IsPointerInputRedirected(int a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rbx
  __int64 v10; // rbx

  v5 = 0;
  v6 = 0LL;
  UpdatePointerRedirIsAlive(a2);
  if ( a3 == 2 )
  {
    v10 = 208LL;
  }
  else
  {
    if ( a3 != 3 )
      goto LABEL_8;
    v10 = 216LL;
  }
  v6 = *(_QWORD *)(v10 + a2);
  if ( v6 && a1 == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 400LL) + 56LL) )
    v6 = 0LL;
LABEL_8:
  if ( a4 )
    *a4 = v6;
  LOBYTE(v5) = v6 != 0;
  return v5;
}
