/*
 * XREFs of ndisOidPreGetPciDeviceCustomProperties @ 0x1C00DC2B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 */

char __fastcall ndisOidPreGetPciDeviceCustomProperties(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  int v7; // [rsp+20h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(0xC1u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, 0LL, v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x34u )
    {
      *(_DWORD *)(v1 + 56) = 52;
      *(_DWORD *)(a1 + 40) = -1073676268;
    }
    if ( !*(_DWORD *)(a1 + 40) )
    {
      if ( *(_QWORD *)a1 )
      {
        v3 = *(_QWORD *)a1;
      }
      else
      {
        v4 = *(_QWORD *)(a1 + 16);
        if ( v4 )
          v3 = *(_QWORD *)(v4 + 32);
      }
      if ( *(_DWORD *)(v3 + 3736) == 5 )
      {
        v5 = *(_QWORD *)(v1 + 40);
        *(_OWORD *)v5 = *(_OWORD *)(v3 + 3352);
        *(_OWORD *)(v5 + 16) = *(_OWORD *)(v3 + 3368);
        *(_OWORD *)(v5 + 32) = *(_OWORD *)(v3 + 3384);
        *(_DWORD *)(v5 + 48) = *(_DWORD *)(v3 + 3400);
        *(_DWORD *)(a1 + 40) = 0;
        *(_DWORD *)(v1 + 52) = 52;
      }
      else
      {
        *(_DWORD *)(a1 + 40) = -1073741808;
        *(_DWORD *)(v1 + 52) = 0;
      }
      *(_DWORD *)(v1 + 56) = 0;
    }
  }
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
  {
    v7 = *(_DWORD *)(a1 + 40);
    WPP_SF_qdD(0xC2u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, v3, 1, v7);
  }
  return 1;
}
