/*
 * XREFs of HMDestroyObject @ 0x1C007A340
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C007A330 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00D8BA0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1C00E65F0 (DestroyBaseWindow.c)
 * Callees:
 *     HMFreeObject @ 0x1C0040150 (HMFreeObject.c)
 *     HMMarkObjectDestroy @ 0x1C007A370 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall HMDestroyObject(_QWORD *BaseAddress)
{
  if ( !(unsigned int)HMMarkObjectDestroy(BaseAddress) )
    return 0LL;
  HMFreeObject(BaseAddress);
  return 1LL;
}
