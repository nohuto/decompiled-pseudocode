/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1800380F0
 * Callers:
 *     RtlCapabilityCheck @ 0x180043D40 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x180040B10 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     sub_180044814 @ 0x180044814 (sub_180044814.c)
 *     sub_180044954 @ 0x180044954 (sub_180044954.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // r8
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int v11; // edi
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // r8
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v18[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v19; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v20; // [rsp+B0h] [rbp+27h]

  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  memset((void *)a3, 0, 0x30uLL);
  memset((void *)a2, 0, 0x2CuLL);
  LOBYTE(v6) = 1;
  result = RtlUpcaseUnicodeString(&UnicodeString, a1, v6);
  if ( (int)result >= 0 )
  {
    v18[8] = 0;
    v18[9] = 0;
    v18[0] = 1779033703;
    v18[1] = -1150833019;
    v18[2] = 1013904242;
    v18[3] = -1521486534;
    v18[4] = 1359893119;
    v18[5] = -1694144372;
    v18[6] = 528734635;
    v18[7] = 1541459225;
    sub_180044954(v18, UnicodeString.Buffer, UnicodeString.Length);
    sub_180044814(v18, &v19);
    LOBYTE(v8) = 9;
    RtlInitializeSid(a2, &unk_180114790, v8);
    v9 = v19;
    *(_DWORD *)(a2 + 8) = 32;
    v10 = v20;
    *(_OWORD *)(a2 + 12) = v9;
    *(_OWORD *)(a2 + 28) = v10;
    v11 = 0;
    while ( 1 )
    {
      v12 = v11 + 1;
      if ( (unsigned __int8)RtlEqualUnicodeString(&UnicodeString, (char *)&unk_180110260 + 16 * v11, 0LL) )
        break;
      ++v11;
      if ( v12 >= 0xC )
        goto LABEL_8;
    }
    LOBYTE(v13) = 2;
    RtlInitializeSid(a3, &unk_180114628, v13);
    *(_DWORD *)(a3 + 8) = 3;
    *(_DWORD *)(a3 + 12) = v12;
LABEL_8:
    RtlFreeUnicodeString(&UnicodeString);
    if ( v11 == 12 )
    {
      LOBYTE(v14) = 10;
      RtlInitializeSid(a3, &unk_180114628, v14);
      v15 = v19;
      *(_DWORD *)(a3 + 8) = 3;
      v16 = v20;
      *(_DWORD *)(a3 + 12) = 1024;
      *(_OWORD *)(a3 + 16) = v15;
      *(_OWORD *)(a3 + 32) = v16;
    }
    return 0LL;
  }
  return result;
}
