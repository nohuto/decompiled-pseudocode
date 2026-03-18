/*
 * XREFs of CachePTPInertiaInfo @ 0x1C01B0A40
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateInertiaInfo @ 0x1C0008088 (InvalidateInertiaInfo.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     SetRITTimer @ 0x1C00B22B0 (SetRITTimer.c)
 *     ?TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01AC0DC (-TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     QueryInertiaInfo @ 0x1C020A788 (QueryInertiaInfo.c)
 */

__int64 __fastcall CachePTPInertiaInfo(__int64 a1, void *a2)
{
  struct tagHID_POINTER_DEVICE_INFO *v4; // rbp
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int128 v8; // xmm0

  v4 = *(struct tagHID_POINTER_DEVICE_INFO **)(HMValidateHandleNoSecure((unsigned __int64)a2, 19) + 472);
  result = QueryInertiaInfo(&gInertiaInfo, *(_QWORD *)gptCursorAsync, 0LL);
  v6 = result;
  if ( result )
  {
    ghdevTouchpad = a2;
    v7 = SetRITTimer(gtmridTouchpadInertiaTimer, 50, (int)xxxInertiaPTPTimerProc, 1);
    v8 = *(_OWORD *)v6;
    gtmridTouchpadInertiaTimer = v7;
    *(_OWORD *)a1 = v8;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v6 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v6 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v6 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v6 + 128);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)gptCursorAsync;
    TransformTPScreenToHimetric(v4, *(struct tagPOINT *)gptCursorAsync, (struct tagPOINT *)(a1 + 152));
    *(_DWORD *)(a1 + 160) |= 1u;
    EtwTraceTouchpadInertiaContact();
    return InvalidateInertiaInfo(*(_QWORD *)v6, *(_QWORD *)(v6 + 8));
  }
  return result;
}
