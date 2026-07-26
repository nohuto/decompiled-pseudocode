/*
 * XREFs of ndisOidPostPMParameters @ 0x1C0022100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisXlateWakeUpEnableToPMParametersOid @ 0x1C004D0E4 (ndisXlateWakeUpEnableToPMParametersOid.c)
 */

__int64 __fastcall ndisOidPostPMParameters(_QWORD *a1)
{
  __int64 v1; // rbx
  char v3; // si
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 result; // rax

  v1 = a1[4];
  v3 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    result = WPP_SF_qq(54LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, *a1, v1);
    v3 = byte_1C0092612;
  }
  if ( *(_DWORD *)(v1 + 4) == 1 && *(_DWORD *)(v1 + 48) >= 0x10u )
  {
    if ( *(_DWORD *)(v1 + 32) == -50265850 )
      result = ndisXlateWakeUpEnableToPMParametersOid(v1);
    v4 = a1[3];
    if ( v4 )
    {
      v5 = v4 + 308;
    }
    else
    {
      if ( !a1[1] || (*(_DWORD *)(v1 + 88) & 0x4000) != 0 )
        goto LABEL_10;
      v5 = a1[1] + 880LL;
    }
    v6 = *(_OWORD *)v5;
    if ( *(_DWORD *)(v1 + 48) < 0x14u )
    {
      result = *(_QWORD *)(v1 + 40);
      *(_OWORD *)result = v6;
    }
    else
    {
      v7 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v7 = v6;
      result = *(unsigned int *)(v5 + 16);
      *(_DWORD *)(v7 + 16) = result;
    }
  }
LABEL_10:
  if ( (unsigned __int8)v3 >= 4u )
    return WPP_SF_qq(55LL, &WPP_67a444f786a83633dadd9d4483e3f504_Traceguids, *a1, v1);
  return result;
}
