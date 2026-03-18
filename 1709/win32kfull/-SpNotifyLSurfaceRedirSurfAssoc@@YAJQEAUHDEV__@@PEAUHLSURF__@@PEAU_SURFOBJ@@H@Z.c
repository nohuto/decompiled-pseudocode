/*
 * XREFs of ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C008CFA8
 * Callers:
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C008EBA0 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C008BB84 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 */

__int64 __fastcall SpNotifyLSurfaceRedirSurfAssoc(_QWORD *a1, HLSURF a2, struct _SURFOBJ *a3, int a4)
{
  HSURF hsurf; // rax
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a1;
  GreAcquireSemaphore(a1[5]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", a1[5], 11LL);
  hsurf = a3->hsurf;
  v10[0] = a3;
  v10[1] = hsurf;
  v10[2] = a2;
  LODWORD(a3) = SpRenderHint((struct PDEVOBJ *)&v11, 65543 - (unsigned int)(a4 != 0), 24LL, (__int64)v10);
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", a1[5]);
  GreReleaseSemaphoreInternal(a1[5]);
  return (unsigned int)a3;
}
