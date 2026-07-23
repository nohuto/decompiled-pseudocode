/*
 * XREFs of sub_180037618 @ 0x180037618
 * Callers:
 *     sub_180035838 @ 0x180035838 (sub_180035838.c)
 *     sub_18003697C @ 0x18003697C (sub_18003697C.c)
 *     sub_18005C0F4 @ 0x18005C0F4 (sub_18005C0F4.c)
 *     LdrLoadAlternateResourceModule @ 0x180084380 (LdrLoadAlternateResourceModule.c)
 *     RtlGetThreadLangIdByIndex @ 0x1800EBBC0 (RtlGetThreadLangIdByIndex.c)
 * Callees:
 *     sub_180044C70 @ 0x180044C70 (sub_180044C70.c)
 *     RtlLCIDToCultureName @ 0x1800452F0 (RtlLCIDToCultureName.c)
 *     RtlCultureNameToLCID @ 0x180045FF0 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x1800461D0 (RtlInitUnicodeString.c)
 *     sub_180046D4C @ 0x180046D4C (sub_180046D4C.c)
 *     sub_18004A35C @ 0x18004A35C (sub_18004A35C.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall sub_180037618(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 *a4, bool *a5)
{
  unsigned __int64 v5; // r12
  unsigned int v7; // ebx
  _QWORD *v9; // rdi
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  unsigned __int16 v15; // ax
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  DWORD Lcid; // [rsp+20h] [rbp-C1h] BYREF
  __int16 v22; // [rsp+24h] [rbp-BDh] BYREF
  _UNICODE_STRING String; // [rsp+28h] [rbp-B9h] BYREF
  _BYTE v24[176]; // [rsp+40h] [rbp-A1h] BYREF

  v5 = a3;
  v7 = 0;
  Lcid = 0;
  v22 = 0;
  memset(v24, 0, 0xAAuLL);
  if ( !a2 || !a4 || !a5 || (unsigned __int16)v5 >= *(_WORD *)(a2 + 4) )
    return (unsigned int)-1073741811;
  v9 = qword_18015BF90;
  if ( *(_QWORD *)(a2 + 16) )
    v9 = *(_QWORD **)(a2 + 16);
  *a5 = 0;
  v10 = *a4;
  if ( !*a4 )
  {
    *a4 = 0;
    v11 = *(_QWORD *)(a2 + 24);
    switch ( *(_WORD *)(v11 + 6 * v5) )
    {
      case 1:
        v15 = *(_WORD *)(v11 + 6 * v5 + 4);
LABEL_14:
        *a4 = v15;
        goto LABEL_11;
      case 2:
        v12 = *(_WORD *)(28LL * *(__int16 *)(v11 + 6 * v5 + 4) + *(_QWORD *)(v9[3] + 16LL) + 4);
        *a4 = v12;
        if ( v12 )
        {
LABEL_11:
          v13 = *(_QWORD *)(a2 + 32);
          *a5 = !_bittest64(&v13, v5);
          return v7;
        }
        v19 = 28LL * *(__int16 *)(v11 + 6 * v5 + 4);
        v20 = *(_QWORD *)(v9[3] + 16LL);
        if ( *(__int16 *)(v19 + v20 + 6) <= 0 )
          return (unsigned int)-1073741595;
        v18 = *(__int16 *)(v19 + v20 + 6);
        break;
      case 3:
        v18 = *(__int16 *)(v11 + 6 * v5 + 4);
        break;
      default:
        return (unsigned int)-1073741595;
    }
    RtlInitUnicodeString(
      &String,
      (PCWSTR)(*(_QWORD *)(v9[4] + 24LL) + 2LL * *(__int16 *)(*(_QWORD *)(v9[4] + 16LL) + 2 * v18)));
    if ( RtlCultureNameToLCID(&String, &Lcid) )
    {
      v15 = Lcid;
      goto LABEL_14;
    }
    return (unsigned int)-1073741595;
  }
  String.MaximumLength = 170;
  String.Buffer = (PWCH)v24;
  if ( !RtlLCIDToCultureName(v10, &String) )
    return (unsigned int)-1073741823;
  if ( *((_DWORD *)v9 + 30) < 0x3E8u )
  {
    LOBYTE(v16) = 1;
    v17 = sub_180044C70(v9, String.Buffer, v16, &v22);
  }
  else
  {
    if ( (int)sub_180046D4C(v9, String.Buffer) >= 0 )
      return v7;
    v17 = sub_18004A35C(v9, String.Buffer);
  }
  if ( v17 < 0 )
    *a5 = 1;
  return v7;
}
