/*
 * XREFs of ?VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z @ 0x1C002471C
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C0097064 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchWaitForQueuedPresentLimit(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_DEVICE *a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // r10d

  v4 = a3;
  LOBYTE(a3) = a4;
  return (*(__int64 (__fastcall **)(struct _VIDSCH_DEVICE *, _QWORD, __int64))(*((_QWORD *)this + 1) + 184LL))(
           a2,
           v4,
           a3);
}
