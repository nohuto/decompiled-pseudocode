/*
 * XREFs of GreGetBrushColor @ 0x1C00ED940
 * Callers:
 *     <none>
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C003E210 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0042CA0 (GreReleaseHmgrSemaphore.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00636F8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006373C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetBrushColor(struct HOBJ__ *a1, int a2, int a3)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ecx
  int v7; // r8d
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = -1;
  GreAcquireHmgrSemaphore((int)a1, a2, a3);
  BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v9, a1);
  if ( v9[0] && (unsigned int)(*(_DWORD *)(v9[0] + 24LL) - 6) <= 1 )
    v4 = *(_DWORD *)(v9[0] + 84LL);
  BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v9);
  GreReleaseHmgrSemaphore(v6, v5, v7);
  return v4;
}
