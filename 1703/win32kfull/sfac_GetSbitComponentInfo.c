/*
 * XREFs of sfac_GetSbitComponentInfo @ 0x1C02CA210
 * Callers:
 *     GetSbitComponent @ 0x1C02C1E60 (GetSbitComponent.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C02C8F8C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C02C9974 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetSbitComponentInfo(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        int a4,
        _WORD *a5,
        _WORD *a6,
        _WORD *a7)
{
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  result = sfac_GetDataPtr(a1, a3, a4, 16, 1, v11);
  if ( !(_DWORD)result )
  {
    v10 = v11[0];
    *a5 = __ROR2__(*(_WORD *)(v11[0] + 4LL * a2 + 2), 8);
    *a6 = *(unsigned __int8 *)(v10 + 4LL * a2 + 4);
    *a7 = *(unsigned __int8 *)(v10 + 4LL * a2 + 5);
    InvokeReleaseSfntFrag(*(_DWORD *)(a1 + 12));
    return 0LL;
  }
  return result;
}
