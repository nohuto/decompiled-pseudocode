/*
 * XREFs of RaidBusEnumeratorProcess1667DeviceInquiry @ 0x1C0010520
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x1C000D158 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcess1667DeviceInquiry(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r11
  int v5; // r10d
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  _BYTE *i; // rcx
  __int16 v12; // [rsp+30h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  *a4 = 0;
  v6 = *(_BYTE *)(a2 + 3) & 0x3F;
  if ( v6 != 1 && v6 != 18 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  v7 = *(_DWORD *)(a2 + 16);
  if ( v7 <= 0x3A )
    return 3221225473LL;
  v8 = 8;
  v9 = (v7 - 58) >> 1;
  if ( v9 < 8 )
    v8 = v9;
  if ( v8 )
  {
    for ( i = (_BYTE *)(v4 + 58); ; i += 2 )
    {
      HIBYTE(v12) = *i;
      LOBYTE(v12) = i[1];
      if ( (unsigned __int16)(v12 + 64) <= 2u )
        break;
      if ( ++v5 >= v8 )
        return 0LL;
    }
    *(_BYTE *)(a3 + 56) = 1;
  }
  return 0LL;
}
