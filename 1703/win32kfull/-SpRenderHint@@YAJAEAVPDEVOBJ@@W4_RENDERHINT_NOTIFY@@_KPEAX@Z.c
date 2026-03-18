/*
 * XREFs of ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x1C001521C
 * Callers:
 *     GreDwmStartup @ 0x1C00148E8 (GreDwmStartup.c)
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z @ 0x1C0028540 (-SpNotifyLSurfaceRedirSurfAssoc@@YAJQEAUHDEV__@@PEAUHLSURF__@@PEAU_SURFOBJ@@H@Z.c)
 *     GreDwmShutdown @ 0x1C00A2448 (GreDwmShutdown.c)
 *     GreDesktopSwitch @ 0x1C00BAF04 (GreDesktopSwitch.c)
 * Callees:
 *     ?bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z @ 0x1C002869C (-bNeedRenderHint@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0074420 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0074884 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
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
