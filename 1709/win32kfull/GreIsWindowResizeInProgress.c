/*
 * XREFs of GreIsWindowResizeInProgress @ 0x1C0090F40
 * Callers:
 *     DwmChildRectChange @ 0x1C009BDCC (DwmChildRectChange.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C01DC5F0 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C009205C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreIsWindowResizeInProgress(HWND a1, _DWORD *a2)
{
  int v3; // ebx
  unsigned int v5; // edi
  _DWORD *v6; // rax
  _DWORD *v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 0;
  v9 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v8, a1);
    v6 = v8;
    if ( v8 )
    {
      if ( v8[32] || v8[34] )
        v5 = 1;
      if ( a2 )
      {
        LOBYTE(v3) = v8[33] > 0;
        *a2 = v3;
      }
      _InterlockedDecrement(v6 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v5;
}
