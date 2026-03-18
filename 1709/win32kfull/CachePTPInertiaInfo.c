/*
 * XREFs of CachePTPInertiaInfo @ 0x1C01B3E30
 * Callers:
 *     <none>
 * Callees:
 *     InvalidateInertiaInfo @ 0x1C000CCD8 (InvalidateInertiaInfo.c)
 *     SetRITTimer @ 0x1C00874B0 (SetRITTimer.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z @ 0x1C01AF440 (-TransformTPScreenToHimetric@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@PEAU2@@Z.c)
 *     QueryInertiaInfo @ 0x1C020D930 (QueryInertiaInfo.c)
 */

__int64 __fastcall CachePTPInertiaInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v4; // rdi
  unsigned __int64 v6; // rcx
  __m128i *v7; // rbp
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int128 v11; // xmm0

  v4 = (void *)a2;
  v6 = a2;
  LOBYTE(a2) = 19;
  v7 = *(__m128i **)(HMValidateHandleNoSecure(v6, a2, a3, a4) + 472);
  result = QueryInertiaInfo(&gInertiaInfo, *(_QWORD *)gptCursorAsync, 0LL);
  v9 = result;
  if ( result )
  {
    ghdevTouchpad = v4;
    v10 = SetRITTimer(gtmridTouchpadInertiaTimer, 50, (int)xxxInertiaPTPTimerProc, 1);
    v11 = *(_OWORD *)v9;
    gtmridTouchpadInertiaTimer = v10;
    *(_OWORD *)a1 = v11;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(v9 + 16);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v9 + 32);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v9 + 48);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v9 + 64);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v9 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v9 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v9 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v9 + 128);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)gptCursorAsync;
    TransformTPScreenToHimetric(v7, *(struct tagPOINT *)gptCursorAsync, (struct tagPOINT *)(a1 + 152));
    *(_DWORD *)(a1 + 160) |= 1u;
    EtwTraceTouchpadInertiaContact();
    return InvalidateInertiaInfo(*(_QWORD *)v9, *(_QWORD *)(v9 + 8));
  }
  return result;
}
