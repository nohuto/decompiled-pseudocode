/*
 * XREFs of DwmAsyncSetCompositionAttribute @ 0x1C001EC48
 * Callers:
 *     SetWindowCompositionFreezeSWR @ 0x1C0004F60 (SetWindowCompositionFreezeSWR.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 *     SetWindowCompositionNCRenderingExiled @ 0x1C0104380 (SetWindowCompositionNCRenderingExiled.c)
 *     SetWindowCompositionAccentPolicy @ 0x1C010AC38 (SetWindowCompositionAccentPolicy.c)
 *     SetWindowCompositionHasIconicBitmap @ 0x1C010BF00 (SetWindowCompositionHasIconicBitmap.c)
 *     SetWindowCompositionExcludeFromLivePreview @ 0x1C010DA24 (SetWindowCompositionExcludeFromLivePreview.c)
 *     SetWindowCompositionForceActiveWindowAppearance @ 0x1C0113F78 (SetWindowCompositionForceActiveWindowAppearance.c)
 *     SetWindowCompositionForceIconicSWR @ 0x1C0114428 (SetWindowCompositionForceIconicSWR.c)
 *     SetWindowCompositionAllowNCPaint @ 0x1C020AF08 (SetWindowCompositionAllowNCPaint.c)
 *     SetWindowCompositionDisallowPeek @ 0x1C020AFBC (SetWindowCompositionDisallowPeek.c)
 *     SetWindowCompositionExcludedFromDDA @ 0x1C020B070 (SetWindowCompositionExcludedFromDDA.c)
 *     SetWindowCompositionHolographic @ 0x1C020B120 (SetWindowCompositionHolographic.c)
 *     SetWindowCompositionNCRenderPolicy @ 0x1C020B1D4 (SetWindowCompositionNCRenderPolicy.c)
 *     SetWindowCompositionNonClientRTLLayout @ 0x1C020B268 (SetWindowCompositionNonClientRTLLayout.c)
 *     SetWindowCompositionPassiveUpdateMode @ 0x1C020B31C (SetWindowCompositionPassiveUpdateMode.c)
 *     SetWindowCompositionTransitions @ 0x1C020B3CC (SetWindowCompositionTransitions.c)
 *     SetWindowCompositionVideoOverlayActive @ 0x1C020B480 (SetWindowCompositionVideoOverlayActive.c)
 *     SetWindowCompositionVisualOwner @ 0x1C020B534 (SetWindowCompositionVisualOwner.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncSetCompositionAttribute(PVOID Object, __int64 a2, int a3, __int128 *a4)
{
  __int64 v5; // rsi
  unsigned int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v11; // ax
  int v12; // eax
  _OWORD v14[6]; // [rsp+20h] [rbp-49h] BYREF

  v5 = a3;
  v8 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset((char *)v14 + 2, 0, 0x56uLL);
    v9 = *a4;
    v10 = *((_QWORD *)a4 + 2);
    *(_DWORD *)((char *)v14 + 2) = -2147483560;
    *((_QWORD *)&v14[2] + 1) = 1073741867LL;
    *(_QWORD *)&v14[3] = a2;
    DWORD2(v14[3]) = v5;
    v11 = qword_1C02E56B8[2 * v5];
    v14[4] = v9;
    LOWORD(v14[0]) = v11 + 24;
    v12 = qword_1C02E56B8[2 * v5];
    *(_QWORD *)&v14[5] = v10;
    HIDWORD(v14[3]) = v12;
    v8 = LpcRequestPort(Object, v14);
    ObfDereferenceObject(Object);
  }
  return v8;
}
