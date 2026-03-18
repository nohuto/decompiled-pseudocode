/*
 * XREFs of ?CacheInertiaInfo@@YAXPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUINERTIA_INFO_INTERNAL@@PEAX@Z @ 0x1C01AD8E0
 * Callers:
 *     ?xxxInternalTPProcessing@@YA?AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVICE_INFO@@PEBUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01B2518 (-xxxInternalTPProcessing@@YA-AW4tagTP_PROCESSING_MODE@@HPEAUtagTPSTATE@@PEAUtagHID_POINTER_DEVIC.c)
 * Callees:
 *     InvalidateInertiaInfo @ 0x1C000CCD8 (InvalidateInertiaInfo.c)
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 *     ?TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01AF440 (-TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 */

void __fastcall CacheInertiaInfo(
        struct tagTPSTATE *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        const struct INERTIA_INFO_INTERNAL *a3,
        void *a4)
{
  __int64 v7; // rax
  __int128 v8; // xmm0

  ghdevTouchpad = a4;
  v7 = SetRITTimer(gtmridTouchpadInertiaTimer, 50, (int)xxxInertiaTimerProc, 1);
  v8 = *(_OWORD *)a3;
  gtmridTouchpadInertiaTimer = v7;
  *(_OWORD *)((char *)a1 + 1944) = v8;
  *(_OWORD *)((char *)a1 + 1960) = *((_OWORD *)a3 + 1);
  *(_OWORD *)((char *)a1 + 1976) = *((_OWORD *)a3 + 2);
  *(_OWORD *)((char *)a1 + 1992) = *((_OWORD *)a3 + 3);
  *(_OWORD *)((char *)a1 + 2008) = *((_OWORD *)a3 + 4);
  *(_OWORD *)((char *)a1 + 2024) = *((_OWORD *)a3 + 5);
  *(_OWORD *)((char *)a1 + 2040) = *((_OWORD *)a3 + 6);
  *(_OWORD *)((char *)a1 + 2056) = *((_OWORD *)a3 + 7);
  *(_OWORD *)((char *)a1 + 2072) = *((_OWORD *)a3 + 8);
  *((_QWORD *)a1 + 241) = *(_QWORD *)gptCursorAsync;
  TransformTPScreenToHimetric(a2, *(struct tagPOINT *)gptCursorAsync, (struct tagPOINT *)a1 + 242);
  *((_DWORD *)a1 + 480) = *((_DWORD *)a1 + 480) & 0xFF9FE7FF | 0x600000;
  EtwTraceTouchpadInertiaContact();
  InvalidateInertiaInfo(*(_QWORD *)a3, *((_QWORD *)a3 + 1));
}
