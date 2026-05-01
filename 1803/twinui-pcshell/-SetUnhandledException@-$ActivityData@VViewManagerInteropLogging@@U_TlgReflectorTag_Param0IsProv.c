/*
 * XREFs of ?SetUnhandledException@?$ActivityData@VViewManagerInteropLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAJXZ @ 0x18008FD2C
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ViewManagerInteropLogging,_TlgReflectorTag_Param0IsProviderType>::SetUnhandledException(
        _DWORD *a1)
{
  unsigned int v1; // r8d
  int v2; // r9d
  __int64 result; // rax

  v1 = -2147024322;
  v2 = a1[18];
  if ( (int)a1[21] < 0 )
    v1 = a1[21];
  if ( v2 < 1 )
    __fastfail(7u);
  result = (unsigned int)a1[19];
  if ( (int)result >= 0 )
  {
    a1[19] = v1;
    result = v1;
  }
  a1[18] = v2 - 1;
  return result;
}
