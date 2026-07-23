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

char __fastcall sub_180043FA0(unsigned __int8 a1, __int64 a2)
{
  void *v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // edi
  int v8; // edx
  _SID_IDENTIFIER_AUTHORITY v10; // [rsp+20h] [rbp-28h] BYREF
  _BYTE Sid2[8]; // [rsp+28h] [rbp-20h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  *(_DWORD *)v10.Value = 0;
  *(_WORD *)&v10.Value[4] = 768;
  if ( RtlInitializeSid(Sid2, &v10, 1u) < 0 )
    return 0;
  v12 = 4;
  if ( !a2 )
    return 0;
  v5 = a2 + 8;
  v6 = 0;
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v5 + 1) & 8) == 0 )
    {
      LOBYTE(v4) = *(_BYTE *)v5;
      if ( *(_BYTE *)v5 <= 0x10u && (v8 = 104928, _bittest(&v8, (unsigned int)v4)) )
      {
        v4 = (void *)(v5 + ((8LL * (*(_DWORD *)(v5 + 8) & 2)) | 0xC) + 16LL * (*(_DWORD *)(v5 + 8) & 1));
      }
      else if ( (_BYTE)v4 == 4 )
      {
        v4 = (void *)(v5 + 12);
      }
      else
      {
        v4 = (unsigned __int8)v4 < 0xBu || (unsigned __int8)((_BYTE)v4 - 13) <= 1u ? (void *)(v5 + 8) : 0LL;
      }
      if ( v4 && RtlEqualSid(v4, Sid2) && (!a1 || (a1 & *(_BYTE *)(v5 + 1)) != 0) )
        break;
    }
    ++v6;
    v5 += *(unsigned __int16 *)(v5 + 2);
    if ( v6 >= v7 )
      return 0;
  }
  return 1;
}
