/*
 * XREFs of HMDestroyObject @ 0x1C00727A0
 * Callers:
 *     ?HMNullFnDestroy@@YAXPEAX@Z @ 0x1C0072780 (-HMNullFnDestroy@@YAXPEAX@Z.c)
 *     ?DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00DEED0 (-DestroyHandleFirstPass@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     DestroyBaseWindow @ 0x1C00EBC40 (DestroyBaseWindow.c)
 * Callees:
 *     HMFreeObject @ 0x1C003E4A0 (HMFreeObject.c)
 *     HMMarkObjectDestroy @ 0x1C00727D0 (HMMarkObjectDestroy.c)
 */

__int64 __fastcall HMDestroyObject(_QWORD *BaseAddress)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( !(unsigned int)HMMarkObjectDestroy(BaseAddress) )
    return 0LL;
  HMFreeObject(BaseAddress, v2, v3);
  return 1LL;
}
