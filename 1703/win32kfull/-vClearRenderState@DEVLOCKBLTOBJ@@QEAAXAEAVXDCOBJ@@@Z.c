/*
 * XREFs of ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00733A4
 * Callers:
 *     NtGdiBitBltInternal @ 0x1C006FAB0 (NtGdiBitBltInternal.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C007316C (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00731EC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0073288 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00732F0 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C007B200 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::vClearRenderState(DEVLOCKBLTOBJ *this, DC **a2)
{
  DC *v4; // rdx
  _QWORD *v5; // rcx
  int v6; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax

  v4 = *a2;
  if ( v4 )
  {
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 12);
      if ( !v5 || (v10 = (_QWORD *)*((_QWORD *)this + 10)) == 0LL || *v5 != *v10 )
      {
        v6 = *((_DWORD *)v4 + 9);
        if ( (v6 & 0x200) != 0 )
        {
          if ( (v6 & 0x4000) == 0 )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( ThreadWin32Thread )
            {
              v8 = *ThreadWin32Thread;
              if ( v8 )
                *(_BYTE *)(v8 + 328) = 0;
            }
          }
          v9 = (_QWORD *)*((_QWORD *)this + 10);
          if ( v9 && *(_QWORD *)*a2 == *v9 && !*((_QWORD *)this + 15)
            || (v11 = (_QWORD *)*((_QWORD *)this + 12)) != 0LL && *(_QWORD *)*a2 == *v11 && !*((_QWORD *)this + 19) )
          {
            GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
            EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
            DC::vClearRendering(*a2);
            EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
            GreReleaseSemaphoreInternal(ghsemDCVisRgn);
          }
        }
      }
    }
  }
}
