/*
 * XREFs of WPP_SF_SSd @ 0x1800DAED8
 * Callers:
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800DA724 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_SSd(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // rax

  v6 = -1LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( *(_WORD *)(a5 + 2 * v7) );
  }
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, &WPP_917ef38764913c31df93337219a3aa90_Traceguids, 12LL, a4);
}
