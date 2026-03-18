/*
 * XREFs of GreGetBrushColor @ 0x1C00E8260
 * Callers:
 *     <none>
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0037AD0 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0037B60 (GreAcquireHmgrSemaphore.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C0059178 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C00591BC (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBrushColor(HBRUSH a1, int a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = -1;
  GreAcquireHmgrSemaphore((__int64)a1, a2, a3);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v7, a1);
  if ( v7[0] && (unsigned int)(*(_DWORD *)(v7[0] + 24LL) - 6) <= 1 )
    v4 = *(_DWORD *)(v7[0] + 84LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v7);
  GreReleaseHmgrSemaphore(v5);
  return v4;
}
