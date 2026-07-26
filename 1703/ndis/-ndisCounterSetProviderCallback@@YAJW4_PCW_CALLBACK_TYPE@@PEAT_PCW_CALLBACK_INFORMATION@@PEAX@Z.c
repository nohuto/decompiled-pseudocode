/*
 * XREFs of ?ndisCounterSetProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C00E4980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCounterSetProviderCallback(
        enum _PCW_CALLBACK_TYPE a1,
        union _PCW_CALLBACK_INFORMATION *a2,
        void *a3)
{
  int v3; // ecx
  int v4; // ecx

  if ( (unsigned int)((_DWORD)a3 - 1) > 1 )
    return 3221225485LL;
  if ( a1 == PcwCallbackAddCounter )
    return ndisPcwAddCounter((unsigned int)a3, a2);
  v3 = a1 - 1;
  if ( !v3 )
    return ndisPcwRemoveCounter((unsigned int)a3, a2);
  v4 = v3 - 1;
  if ( !v4 )
    return ndisPcwEnumerateInstances(a2->EnumerateInstances.Buffer);
  if ( v4 == 1 )
    return ndisPcwCollectData(a2->EnumerateInstances.Buffer);
  return 0LL;
}
