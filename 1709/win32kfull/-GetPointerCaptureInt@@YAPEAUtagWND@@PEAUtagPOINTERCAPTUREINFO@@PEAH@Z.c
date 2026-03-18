/*
 * XREFs of ?GetPointerCaptureInt@@YAPEAUtagWND@@PEAUtagPOINTERCAPTUREINFO@@PEAH@Z @ 0x1C01F5FB4
 * Callers:
 *     ?GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z @ 0x1C01F5F6C (-GetPointerCapture@PointerList@@YAX_KHPEAPEAUtagWND@@PEAH@Z.c)
 * Callees:
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01F61C0 (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 */

struct tagWND *__fastcall GetPointerCaptureInt(struct tagPOINTERCAPTUREINFO *a1, int *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)a1 + 1);
  if ( v2 && (*(char *)(v2 + 60) < 0 || *(char *)(v2 + 59) < 0) )
  {
    if ( ExIsResourceAcquiredExclusiveLite(gpresUser) == 1 )
      ReleasePointerCaptureInt(a1);
    if ( a2 )
      *a2 = 0;
    return 0LL;
  }
  else
  {
    if ( a2 )
      *a2 = *((_DWORD *)a1 + 4);
    return (struct tagWND *)*((_QWORD *)a1 + 1);
  }
}
