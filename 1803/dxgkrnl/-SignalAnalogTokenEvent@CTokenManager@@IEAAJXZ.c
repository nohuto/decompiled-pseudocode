/*
 * XREFs of ?SignalAnalogTokenEvent@CTokenManager@@IEAAJXZ @ 0x1C004AB38
 * Callers:
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C000FAB0 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTokenManager::SignalAnalogTokenEvent(CTokenManager *this)
{
  void *v1; // rcx
  __int64 result; // rax
  LONG PreviousState; // [rsp+30h] [rbp+8h] BYREF

  v1 = (void *)*((_QWORD *)this + 9);
  result = 0LL;
  PreviousState = 0;
  if ( v1 )
  {
    ZwSetEvent(v1, &PreviousState);
    return (unsigned int)PreviousState;
  }
  return result;
}
