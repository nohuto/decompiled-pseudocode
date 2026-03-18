/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0038F34
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0038D60 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     ??0FxIrpPreprocessInfo@@QEAA@XZ @ 0x1C0065560 (--0FxIrpPreprocessInfo@@QEAA@XZ.c)
 *     ??0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z @ 0x1C0081C90 (--0FxTagTracker@@AEAA@PEAU_FX_DRIVER_GLOBALS@@W4FxTagTrackerType@@EPEAVFxObject@@PEAX@Z.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0087410 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C008D7E0 (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C0091878 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU_IRP@@2@Z2@Z @ 0x1C0095660 (-ConfigureDynamicDispatching@FxPkgIo@@QEAAJEPEAUFxCxDeviceInfo@@P6AJPEAUWDFDEVICE__@@EEKPEAXPEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall `vector constructor iterator'(
        char *__t,
        unsigned __int64 __s,
        unsigned __int64 __n,
        void *(__fastcall *__f)(void *))
{
  do
  {
    __f(__t);
    __t += __s;
    --__n;
  }
  while ( __n );
}
