/*
 * XREFs of ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C001B0EC
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C00375F0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C011E9A0 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     ?CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z @ 0x1C001B19C (-CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z.c)
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  CInputThread *v6; // rsi
  int v11; // edi
  int v12; // eax
  __int64 v14; // rcx
  _DWORD v15[4]; // [rsp+20h] [rbp-118h] BYREF
  __int64 v16; // [rsp+30h] [rbp-108h]
  struct tagPOINT v17; // [rsp+38h] [rbp-100h]
  unsigned int v18; // [rsp+40h] [rbp-F8h]
  unsigned int v19; // [rsp+44h] [rbp-F4h]

  v6 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v11 = *((_DWORD *)v6 + 4);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 == 2 )
  {
    v12 = *((_DWORD *)this + 16);
    if ( v12 == a2
      && (v12 != 2 || *((_DWORD *)this + 17) == a5)
      && CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(this, a4) )
    {
      v16 = *((_QWORD *)this + 5);
      v19 = a6;
      v15[0] = 1;
      v15[2] = a2;
      v17 = a3;
      v18 = a5;
      ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
        v14,
        5LL,
        v15,
        248LL);
    }
  }
}
