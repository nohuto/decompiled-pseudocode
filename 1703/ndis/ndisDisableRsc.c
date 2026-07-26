/*
 * XREFs of ndisDisableRsc @ 0x1C00E3340
 * Callers:
 *     ndisUpdateMinimumStackVersion @ 0x1C00B5194 (ndisUpdateMinimumStackVersion.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C0009F4C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 */

__int64 __fastcall ndisDisableRsc(_QWORD *a1)
{
  __int64 result; // rax
  _BYTE v3[248]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v4[8]; // [rsp+130h] [rbp+30h] BYREF

  memset(v3, 0, sizeof(v3));
  memset(v4, 0, sizeof(v4));
  result = a1[515];
  if ( result && !*(_BYTE *)(result + 5) )
  {
    if ( (*(_BYTE *)(result + 5) = 1, result = a1[515], *(_WORD *)(result + 10) >= 0x9Cu)
      && *(_BYTE *)(result + 9) >= 3u
      && (*(_BYTE *)(result + 152) || *(_BYTE *)(result + 153))
      || *(_WORD *)(result + 198) >= 0x9Cu
      && *(_BYTE *)(result + 197) >= 3u
      && (*(_BYTE *)(result + 340) || *(_BYTE *)(result + 341)) )
    {
      v4[4] |= 1u;
      v4[0] = 1704832;
      HIWORD(v4[5]) = 257;
      memset(v3, 0, sizeof(v3));
      *(_DWORD *)&v3[88] |= 8u;
      *(_DWORD *)&v3[8] = 0;
      *(_QWORD *)&v3[104] = &ndisIntReqGeneric;
      *(_DWORD *)v3 = 15466902;
      *(_QWORD *)&v3[40] = v4;
      *(_DWORD *)&v3[32] = -67042804;
      *(_DWORD *)&v3[4] = 1;
      *(_DWORD *)&v3[48] = 32;
      return ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v3, 0LL, 0LL);
    }
  }
  return result;
}
