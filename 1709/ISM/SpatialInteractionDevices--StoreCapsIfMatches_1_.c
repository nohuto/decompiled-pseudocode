/*
 * XREFs of SpatialInteractionDevices::StoreCapsIfMatches_1_ @ 0x18007A5E4
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::StoreCapsIfMatches_1_(__int64 a1, __int64 a2, _QWORD *a3, _BYTE *a4)
{
  _WORD *v5; // rcx
  __int16 v6; // ax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    *a4 = 0;
    v5 = *(_WORD **)a1;
    if ( !*v5 || *(_WORD *)(a2 + 10) == *v5 )
    {
      v6 = v5[1];
      if ( (!v6 || *(_WORD *)(a2 + 8) == v6)
        && *(_WORD *)a2 == v5[2]
        && !*(_BYTE *)(a2 + 12)
        && *(_WORD *)(a2 + 56) == v5[3] )
      {
        *a3 = a2;
        *a4 = 1;
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41D,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractionhidparser.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
