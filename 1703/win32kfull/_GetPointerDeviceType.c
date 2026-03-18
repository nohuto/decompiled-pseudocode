/*
 * XREFs of _GetPointerDeviceType @ 0x1C01A7E5C
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01B64D8 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C01CD820 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01CDCB4 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01CE9A4 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     PHIDTtoPT @ 0x1C0023614 (PHIDTtoPT.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetPointerDeviceType(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // edx

  v1 = HMValidateHandleNoSecure(a1, 19);
  v2 = -1;
  if ( v1 && (*(_DWORD *)(v1 + 200) & 0x80u) != 0 )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v1 + 472));
  return v2;
}
