/*
 * XREFs of ndisOidPreQosSetParameters @ 0x1C00DCB30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     ndisValidateQosParameters @ 0x1C0047B00 (ndisValidateQosParameters.c)
 */

unsigned __int8 __fastcall ndisOidPreQosSetParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbp
  unsigned __int8 v5; // bl
  int v6; // eax
  unsigned int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-18h]
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)a1;
  v5 = 0;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0x83u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v4, v2);
  if ( *(_DWORD *)(v2 + 4) != 12 )
  {
    v5 = 1;
    *(_DWORD *)(a1 + 40) = -1073741637;
    goto LABEL_21;
  }
  *(_DWORD *)(a1 + 40) = 0;
  if ( *(_DWORD *)(v2 + 48) >= 0x34u )
  {
    if ( *(_DWORD *)(v2 + 52) < 0x34u )
    {
      *(_DWORD *)(v2 + 68) = 52;
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 68) = 52;
    *(_DWORD *)(a1 + 40) = -1073676268;
  }
  if ( *(_DWORD *)(a1 + 40) )
    goto LABEL_10;
  if ( v4 )
  {
    LOBYTE(a2) = 1;
    v6 = ndisValidateQosParameters(v4, a2, *(_DWORD **)(v2 + 40), *(_DWORD *)(v2 + 48), &v10);
    *(_DWORD *)(a1 + 40) = v6;
    if ( v6 )
    {
      if ( v6 == -1073676268 )
        *(_DWORD *)(v2 + 68) = v10;
LABEL_10:
      v5 = 1;
      goto LABEL_21;
    }
    v7 = v10;
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v2 + 48) >= v7 )
    {
      if ( *(_DWORD *)(v2 + 52) < v7 )
      {
        *(_DWORD *)(v2 + 68) = v7;
        *(_DWORD *)(a1 + 40) = -1073676266;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 68) = v7;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( *(_DWORD *)(a1 + 40) )
      goto LABEL_10;
    *(_DWORD *)(v2 + 60) = 0;
    *(_DWORD *)(v2 + 64) = v10;
  }
LABEL_21:
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    LODWORD(v9) = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0x84u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v4, v5, v9);
  }
  return v5;
}
