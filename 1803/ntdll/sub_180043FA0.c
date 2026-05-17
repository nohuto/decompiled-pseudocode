/*
 * XREFs of sub_180043FA0 @ 0x180043FA0
 * Callers:
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     RtlOwnerAcesPresent @ 0x1800DFF50 (RtlOwnerAcesPresent.c)
 * Callees:
 *     RtlEqualSid @ 0x1800442A0 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

char __fastcall sub_180043FA0(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned int v8; // edi
  int v9; // edx
  int v11; // [rsp+20h] [rbp-28h] BYREF
  __int16 v12; // [rsp+24h] [rbp-24h]
  _BYTE v13[8]; // [rsp+28h] [rbp-20h] BYREF
  int v14; // [rsp+30h] [rbp-18h]

  v11 = 0;
  v12 = 768;
  LOBYTE(a3) = 1;
  if ( (int)RtlInitializeSid(v13, &v11, a3) < 0 )
    return 0;
  v14 = 4;
  if ( !a2 )
    return 0;
  v6 = a2 + 8;
  v7 = 0;
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( !v8 )
    return 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v6 + 1) & 8) == 0 )
    {
      LOBYTE(v5) = *(_BYTE *)v6;
      if ( *(_BYTE *)v6 <= 0x10u && (v9 = 104928, _bittest(&v9, v5)) )
      {
        v5 = v6 + ((8LL * (*(_DWORD *)(v6 + 8) & 2)) | 0xC) + 16LL * (*(_DWORD *)(v6 + 8) & 1);
      }
      else if ( (_BYTE)v5 == 4 )
      {
        v5 = v6 + 12;
      }
      else
      {
        v5 = (unsigned __int8)v5 < 0xBu || (unsigned __int8)(v5 - 13) <= 1u ? v6 + 8 : 0LL;
      }
      if ( v5 && (unsigned __int8)RtlEqualSid(v5, v13) && (!a1 || (a1 & *(_BYTE *)(v6 + 1)) != 0) )
        break;
    }
    ++v7;
    v6 += *(unsigned __int16 *)(v6 + 2);
    if ( v7 >= v8 )
      return 0;
  }
  return 1;
}
