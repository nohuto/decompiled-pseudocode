/*
 * XREFs of ?ConvertTwoStringSidsToSids@@YAHPEBG0PEAPEAX1@Z @ 0x18005AEA8
 * Callers:
 *     ?MME_ServiceStart@@YAJXZ @ 0x18005B604 (-MME_ServiceStart@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertTwoStringSidsToSids(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        void **a3,
        void **a4)
{
  unsigned int v4; // ebx

  v4 = ConvertStringSidToSidW(L"S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775", &AudiosrvSid);
  if ( !v4 )
    goto LABEL_5;
  v4 = ConvertStringSidToSidW(
         L"S-1-5-80-1580948945-3239616721-2529237571-3761093093-1214243633",
         &AudioEndpointBuilderSid);
  if ( !v4 )
  {
    LocalFree(AudiosrvSid);
LABEL_5:
    AudiosrvSid = 0LL;
    AudioEndpointBuilderSid = 0LL;
  }
  return v4;
}
