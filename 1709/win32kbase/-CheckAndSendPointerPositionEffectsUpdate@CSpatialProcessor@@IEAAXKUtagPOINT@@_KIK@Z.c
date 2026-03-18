/*
 * XREFs of ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00133EC
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4_MouseHitTestOptions@@@Z @ 0x1C0014354 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C01283B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 * Callees:
 *     CoreMsgSend @ 0x1C0011904 (CoreMsgSend.c)
 *     ?CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z @ 0x1C0012EF4 (-CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor@@AEAA_N_K@Z.c)
 */

void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  int v11; // edi
  _DWORD v12[4]; // [rsp+20h] [rbp-108h] BYREF
  __int64 v13; // [rsp+30h] [rbp-F8h]
  struct tagPOINT v14; // [rsp+38h] [rbp-F0h]
  unsigned int v15; // [rsp+40h] [rbp-E8h]
  unsigned int v16; // [rsp+44h] [rbp-E4h]

  v6 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v11 = *(_DWORD *)(v6 + 16);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  if ( v11 == 2 )
  {
    if ( CSpatialProcessor::CheckAndUpdateLastPointerPositionEffectsTimestamp(this, a4) )
    {
      v13 = *((_QWORD *)this + 5);
      v15 = a5;
      v16 = a6;
      v12[0] = 1;
      v12[2] = a2;
      v14 = a3;
      CoreMsgSend(gInputInteropISMConnectionHandle, 0, v12, (const GUID *)0xE8);
    }
  }
}
