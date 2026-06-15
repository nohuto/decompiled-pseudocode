/*
 * XREFs of ?FindProcess@CApplicationManager@@IEAAJKPEAPEAVCProcess@@@Z @ 0x18001C504
 * Callers:
 *     ?GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x180009130 (-GetApplicationSpecificEndpointInfoForProcess@CWindowsPolicyManager@@UEAAJKPEAPEAUIApplicationSp.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B0A4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::FindProcess(CApplicationManager *this, int a2, struct CProcess **a3)
{
  __int64 v3; // r9
  _QWORD *v4; // r10
  __int64 v5; // rcx

  v3 = 0LL;
  *a3 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)this + 16);
  while ( v4 )
  {
    v5 = v4[2];
    v4 = (_QWORD *)*v4;
    if ( !*(_DWORD *)(v5 + 472) && *(_DWORD *)(v5 + 216) == a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      *a3 = (struct CProcess *)v5;
      v3 = v5;
      return v3 == 0 ? 0x80070490 : 0;
    }
  }
  return v3 == 0 ? 0x80070490 : 0;
}
