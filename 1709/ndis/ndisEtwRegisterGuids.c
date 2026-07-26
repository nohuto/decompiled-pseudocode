/*
 * XREFs of ndisEtwRegisterGuids @ 0x1C00C93AC
 * Callers:
 *     ndisDriverSystemDispatch @ 0x1C00C9310 (ndisDriverSystemDispatch.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_d @ 0x1C0040950 (WPP_SF_d.c)
 */

__int64 __fastcall ndisEtwRegisterGuids(char *a1, unsigned int a2, unsigned int *a3)
{
  int Length; // esi
  unsigned int v7; // ebp
  GUID v8; // xmm0
  char *v9; // rcx
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x4Au, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids);
  if ( !a3 || !a1 || a2 < 4 )
    return 3221225485LL;
  Length = ndisRegistryPath.Length;
  *a3 = 0;
  v7 = Length + 90;
  if ( Length + 90 > a2 )
  {
    *(_DWORD *)a1 = v7;
    result = 3221225507LL;
    *a3 = 4;
  }
  else
  {
    memset(a1, 0, v7);
    *(_DWORD *)a1 = v7;
    *((_DWORD *)a1 + 3) = Length + 58;
    *((_DWORD *)a1 + 4) = 1;
    *((_DWORD *)a1 + 2) = 56;
    v8 = ndisControlGuid;
    *((_DWORD *)a1 + 10) |= 0x81000u;
    *((_DWORD *)a1 + 11) = 0;
    *((_QWORD *)a1 + 6) = 0LL;
    *(GUID *)(a1 + 24) = v8;
    *((_WORD *)a1 + 28) = ndisRegistryPath.Length;
    memmove(a1 + 58, ndisRegistryPath.Buffer, ndisRegistryPath.Length);
    v9 = &a1[*((unsigned int *)a1 + 3)];
    *a3 = v7;
    *(_WORD *)v9 = 30;
    *(_OWORD *)(v9 + 2) = *(_OWORD *)L"MofResourceName";
    *(_QWORD *)(v9 + 18) = *(_QWORD *)L"rceName";
    *(_DWORD *)(v9 + 26) = *(_DWORD *)L"ame";
    *((_WORD *)v9 + 15) = aMofresourcenam[14];
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_d(0x4Bu, &WPP_46b787ea35393f9b78a3e543862c6c95_Traceguids, 0);
    return 0LL;
  }
  return result;
}
