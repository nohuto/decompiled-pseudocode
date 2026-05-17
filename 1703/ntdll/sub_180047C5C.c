/*
 * XREFs of sub_180047C5C @ 0x180047C5C
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     RtlOwnerAcesPresent @ 0x1800E55A0 (RtlOwnerAcesPresent.c)
 * Callees:
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlEqualSid @ 0x18004A290 (RtlEqualSid.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

char __fastcall sub_180047C5C(unsigned __int8 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // edi
  int v8; // edx
  int v10; // [rsp+20h] [rbp-28h] BYREF
  __int16 v11; // [rsp+24h] [rbp-24h]
  _BYTE v12[8]; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+30h] [rbp-18h]

  v10 = 0;
  v11 = 768;
  if ( (int)RtlInitializeSid((__int64)v12, (__int64)&v10, 1u) < 0 )
    return 0;
  v13 = 4;
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
      if ( *(_BYTE *)v5 <= 0x10u && (v8 = 104928, _bittest(&v8, v4)) )
      {
        v4 = v5 + ((16LL * (*(_DWORD *)(v5 + 8) & 1)) | 0xC) + 8LL * (*(_DWORD *)(v5 + 8) & 2);
      }
      else if ( (_BYTE)v4 == 4 )
      {
        v4 = v5 + 12;
      }
      else
      {
        v4 = (unsigned __int8)v4 <= 0xAu || (unsigned __int8)(v4 - 13) <= 1u ? v5 + 8 : 0LL;
      }
      if ( v4 && (unsigned __int8)RtlEqualSid(v4, v12) && (!a1 || (a1 & *(_BYTE *)(v5 + 1)) != 0) )
        break;
    }
    ++v6;
    v5 += *(unsigned __int16 *)(v5 + 2);
    if ( v6 >= v7 )
      return 0;
  }
  return 1;
}
