/*
 * XREFs of IopQueryDeviceState @ 0x1404A792C
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1404A79A4 (PiProcessQueryDeviceState.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14056E6B4 (PnpProcessQueryRemoveAndEject.c)
 *     PiEventRestartRemovalRelations @ 0x14059B460 (PiEventRestartRemovalRelations.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryDeviceState(int a1, _DWORD *a2)
{
  __int64 result; // rax
  _WORD v5[36]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+A0h] [rbp+18h] BYREF

  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  v5[0] = 5147;
  result = IopSynchronousCall(a1, (unsigned int)v5, -1073741637, 0, (__int64)&v6);
  if ( (int)result >= 0 )
    *a2 = v6;
  return result;
}
