/*
 * XREFs of ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01EA4E4
 * Callers:
 *     ?GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z @ 0x1C01B6A98 (-GetWindowVisualizationSetting@Feedback@@YAHAEBUtagPOINTER_INFO@@HHHPEAH@Z.c)
 *     FeedbackHidePointerContactVisualization @ 0x1C01B7320 (FeedbackHidePointerContactVisualization.c)
 * Callees:
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01E9DBC (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall PointerList::SetPointerVisualization(PointerList *this, int a2, _DWORD *a3, int *a4)
{
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rcx

  v6 = (int)a4;
  result = (__int64)FindNodeById((unsigned __int16)this, 0, 0);
  v8 = result;
  if ( result )
  {
    *(_DWORD *)(result + 152) ^= (*(_DWORD *)(result + 152) ^ (a2 << 7)) & 0x80;
    if ( a3 )
      *(_DWORD *)(result + 152) ^= ((unsigned __int16)*(_DWORD *)(result + 152) ^ (unsigned __int16)((unsigned __int16)*a3 << 8)) & 0x100;
    result = 1LL;
    *(_DWORD *)(v8 + 152) ^= (*(_DWORD *)(v8 + 152) ^ (v6 << 9)) & 0x200;
  }
  return result;
}
