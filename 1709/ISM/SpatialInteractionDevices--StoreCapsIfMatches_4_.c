/*
 * XREFs of SpatialInteractionDevices::StoreCapsIfMatches_4_ @ 0x18007A678
 * Callers:
 *     ?PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z @ 0x180079430 (-PrepareSpatialInteractionDeviceParsing@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevices::StoreCapsIfMatches_4_(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v6; // r8
  _WORD *i; // rcx
  __int16 v8; // ax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 8) == 4 )
  {
    *a4 = 0;
    v6 = 0LL;
    for ( i = *(_WORD **)a1; ; i += 8 )
    {
      if ( !*i || *(_WORD *)(a2 + 10) == *i )
      {
        v8 = i[1];
        if ( (!v8 || *(_WORD *)(a2 + 8) == v8)
          && *(_WORD *)a2 == i[2]
          && !*(_BYTE *)(a2 + 12)
          && *(_WORD *)(a2 + 56) == i[3] )
        {
          break;
        }
      }
      if ( (unsigned __int64)++v6 >= 4 )
        return 0LL;
    }
    *(_QWORD *)(a3 + 8 * v6) = a2;
    *a4 = 1;
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
