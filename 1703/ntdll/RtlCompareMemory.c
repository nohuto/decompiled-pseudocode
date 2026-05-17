/*
 * XREFs of RtlCompareMemory @ 0x1800A9760
 * Callers:
 *     sub_180023990 @ 0x180023990 (sub_180023990.c)
 *     sub_18003D8E0 @ 0x18003D8E0 (sub_18003D8E0.c)
 *     RtlIsCapabilitySid @ 0x180047BB0 (RtlIsCapabilitySid.c)
 *     RtlGetAppContainerSidType @ 0x180058210 (RtlGetAppContainerSidType.c)
 *     sub_1800610C8 @ 0x1800610C8 (sub_1800610C8.c)
 *     sub_18006128C @ 0x18006128C (sub_18006128C.c)
 *     sub_18007A9C4 @ 0x18007A9C4 (sub_18007A9C4.c)
 *     sub_18007AB6C @ 0x18007AB6C (sub_18007AB6C.c)
 *     RtlIsPackageSid @ 0x180087480 (RtlIsPackageSid.c)
 *     sub_180089C50 @ 0x180089C50 (sub_180089C50.c)
 *     sub_1800E4BB0 @ 0x1800E4BB0 (sub_1800E4BB0.c)
 *     sub_1800F94C0 @ 0x1800F94C0 (sub_1800F94C0.c)
 *     sub_1801003C4 @ 0x1801003C4 (sub_1801003C4.c)
 *     sub_18010CB98 @ 0x18010CB98 (sub_18010CB98.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemory(const void *Source1, const void *Source2, SIZE_T Length)
{
  _BYTE *v3; // rsi
  _BYTE *v4; // rdi
  __int64 v5; // rcx
  bool v6; // zf
  SIZE_T v7; // rcx
  bool v8; // zf
  bool v9; // zf
  SIZE_T v10; // r8
  SIZE_T v11; // rcx
  bool v13; // zf
  SIZE_T v14; // rcx

  v3 = Source1;
  v4 = Source2;
  if ( (((unsigned __int8)Source1 ^ (unsigned __int8)Source2) & 7) != 0 || Length < 8 )
  {
    v13 = Length == 0;
    if ( Length )
    {
      v14 = Length;
      do
      {
        if ( !v14 )
          break;
        v13 = *v3++ == *v4++;
        --v14;
      }
      while ( v13 );
      if ( !v13 )
        Length -= v14 + 1;
    }
    return Length;
  }
  else
  {
    v5 = -(int)Source1 & 7;
    if ( (_DWORD)v5 )
    {
      Length -= (unsigned int)v5;
      v6 = Length == 0;
      do
      {
        if ( !v5 )
          break;
        v6 = *v3++ == *v4++;
        --v5;
      }
      while ( v6 );
      if ( !v6 )
        goto LABEL_19;
    }
    v7 = Length & 0xFFFFFFFFFFFFFFF8uLL;
    if ( (Length & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
    {
      Length -= v7;
      v7 >>= 3;
      v8 = v7 == 0;
      do
      {
        if ( !v7 )
          break;
        v8 = *(_QWORD *)v3 == *(_QWORD *)v4;
        v3 += 8;
        v4 += 8;
        --v7;
      }
      while ( v8 );
      if ( !v8 )
      {
        v3 -= 8;
        v4 -= 8;
        v7 = 8 * (v7 + 1);
      }
    }
    v9 = v7 + Length == 0;
    v10 = v7 + Length;
    if ( v10 )
    {
      v11 = v10;
      do
      {
        if ( !v11 )
          break;
        v9 = *v3++ == *v4++;
        --v11;
      }
      while ( v9 );
      if ( !v9 )
LABEL_19:
        --v4;
    }
    return v4 - (_BYTE *)Source2;
  }
}
