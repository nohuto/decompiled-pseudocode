/*
 * XREFs of ?IsViewVisible@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJPEAH@Z @ 0x18015CD70
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewHostBase<IAltTabViewHost>::IsViewVisible(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  int v5; // eax

  v4 = (struct _RTL_CRITICAL_SECTION *)((a1 + 24) & -(__int64)(a1 != 0));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  *a2 = *(unsigned __int8 *)(a1 + 112);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
