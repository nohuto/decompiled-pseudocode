/*
 * XREFs of ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C008BB84
 * Callers:
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C008CFA8 (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 *     GreDwmStartup @ 0x1C00DEA90 (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C00E3A28 (GreDwmShutdown.c)
 *     GreDesktopSwitch @ 0x1C011DD78 (GreDesktopSwitch.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C002B184 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C008D104 (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpRenderHint(struct PDEVOBJ *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // ebx
  _BYTE v10[80]; // [rsp+30h] [rbp-58h] BYREF

  v8 = -1073741822;
  if ( (unsigned int)bNeedRenderHint(a1) )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v10, a1);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)a1 + 3448LL))(
           *(_QWORD *)(*(_QWORD *)a1 + 1816LL),
           a2,
           a3,
           a4);
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v10);
  }
  return v8;
}
