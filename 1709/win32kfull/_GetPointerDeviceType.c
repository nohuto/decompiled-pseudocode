/*
 * XREFs of _GetPointerDeviceType @ 0x1C01CA9E0
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01BB688 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01D19B8 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D1E4C (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01D2B58 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x1C00B16A0 (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // edx

  LOBYTE(a2) = 19;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v5 = -1;
  if ( v4 && (*(_DWORD *)(v4 + 200) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v4 + 472));
  return v5;
}
