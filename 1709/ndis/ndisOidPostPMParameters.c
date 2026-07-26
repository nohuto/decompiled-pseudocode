/*
 * XREFs of ndisOidPostPMParameters @ 0x1C001DC50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisXlateWakeUpEnableToPMParametersOid @ 0x1C004A998 (ndisXlateWakeUpEnableToPMParametersOid.c)
 */

__int64 __fastcall ndisOidPostPMParameters(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int128 *v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // rcx
  __int64 result; // rax

  v1 = a1[4];
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    result = WPP_SF_qq(54LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, *a1, v1);
  if ( *(_DWORD *)(v1 + 4) == 1 && *(_DWORD *)(v1 + 48) >= 0x10u )
  {
    if ( *(_DWORD *)(v1 + 32) == -50265850 )
      result = ndisXlateWakeUpEnableToPMParametersOid(v1);
    v3 = a1[3];
    if ( v3 )
    {
      v5 = (__int128 *)(v3 + 308);
    }
    else
    {
      v4 = a1[1];
      if ( !v4 || (*(_DWORD *)(v1 + 88) & 0x4000) != 0 )
        goto LABEL_10;
      v5 = (__int128 *)(v4 + 880);
    }
    v6 = *v5;
    if ( *(_DWORD *)(v1 + 48) < 0x14u )
    {
      result = *(_QWORD *)(v1 + 40);
      *(_OWORD *)result = v6;
    }
    else
    {
      v7 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v7 = v6;
      result = *((unsigned int *)v5 + 4);
      *(_DWORD *)(v7 + 16) = result;
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    return WPP_SF_qq(55LL, &WPP_02d7300eb5383415542bdbf7dfb5e076_Traceguids, *a1, v1);
  return result;
}
