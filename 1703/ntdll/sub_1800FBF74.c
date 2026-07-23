/*
 * XREFs of sub_1800FBF74 @ 0x1800FBF74
 * Callers:
 *     sub_1800FC568 @ 0x1800FC568 (sub_1800FC568.c)
 * Callees:
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_1800FB4E4 @ 0x1800FB4E4 (sub_1800FB4E4.c)
 */

__int64 __fastcall sub_1800FBF74(__int64 a1, __int64 a2, unsigned int a3, const WCHAR *a4)
{
  __int64 v4; // rsi
  unsigned int v8; // edx
  __int16 v9; // r9
  __int64 v10; // rcx
  int v11; // r10d
  __int16 v12; // r11
  _WORD *v13; // r8
  int v14; // ecx
  DWORD Lcid; // [rsp+20h] [rbp-38h] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-30h] BYREF
  __int16 v18; // [rsp+60h] [rbp+8h] BYREF

  v4 = a3;
  Lcid = 0;
  v18 = -1;
  if ( !a1 || !a2 || a3 >= 4 || !a4 || !*a4 )
    return 3221225485LL;
  RtlInitUnicodeString(&String, a4);
  if ( !RtlCultureNameToLCID(&String, &Lcid) )
    return (unsigned int)-1073741823;
  v8 = sub_1800FB4E4(a1, a4, 1, &v18);
  if ( (v8 & 0x80000000) != 0 )
    return (unsigned int)-1073741823;
  v9 = v18;
  if ( v18 < 0 )
    return (unsigned int)-1073741823;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = 0;
  v12 = Lcid;
  v13 = *(_WORD **)(v10 + 16);
  v14 = *(unsigned __int16 *)(v10 + 6);
  if ( v14 <= 0 )
  {
LABEL_19:
    if ( (_WORD)Lcid )
    {
      *(_WORD *)(a2 + 8) = *(_WORD *)(a2 + 8) & ~(3 << (2 * v4)) | (1 << (2 * v4));
      *(_WORD *)(a2 + 2 * v4 + 12) = v12;
      return v8;
    }
    if ( v18 > 0 )
    {
      *(_WORD *)(a2 + 8) = (3 << (2 * v4)) | *(_WORD *)(a2 + 8) & ~(3 << (2 * v4));
      *(_WORD *)(a2 + 2 * v4 + 12) = v9;
      return v8;
    }
    return (unsigned int)-1073741823;
  }
  while ( 1 )
  {
    if ( (*v13 & 0x3024) != 0x20 )
      goto LABEL_18;
    if ( (((unsigned __int16)Lcid - 4096) & 0xFFFFFBFF) != 0 )
      break;
    if ( v13[3] == v18 )
      goto LABEL_15;
LABEL_18:
    ++v11;
    v13 += 14;
    if ( v11 >= v14 )
      goto LABEL_19;
  }
  if ( v13[2] != (_WORD)Lcid )
    goto LABEL_18;
  if ( (__int16)v13[3] >= 0 && v13[3] != v18 )
    return (unsigned int)-1073741823;
LABEL_15:
  if ( (v11 & 0x8000u) != 0 )
    goto LABEL_19;
  *(_WORD *)(a2 + 8) = (2 << (2 * v4)) | *(_WORD *)(a2 + 8) & ~(3 << (2 * v4));
  *(_WORD *)(a2 + 2 * v4 + 12) = v11;
  return v8;
}
