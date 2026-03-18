/*
 * XREFs of ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00D7EE4
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(_QWORD *a1)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // r9
  __int64 v4; // r8
  _QWORD *v5; // rdx
  _QWORD *result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = ThreadWin32Thread;
  if ( *a1 )
  {
    v4 = a1[1];
    v5 = (_QWORD *)a1[2];
    if ( *(_QWORD **)(v4 + 8) != a1 + 1 || (_QWORD *)*v5 != a1 + 1 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  result = *(_QWORD **)(ThreadWin32Thread + 1344);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v3 + 1344) = result;
  }
  return result;
}
