/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1800478B0
 * Callers:
 *     RtlCapabilityCheck @ 0x180047640 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     RtlInitializeSid @ 0x180047610 (RtlInitializeSid.c)
 *     RtlUpcaseUnicodeString @ 0x18004A6F0 (RtlUpcaseUnicodeString.c)
 *     sub_18004D914 @ 0x18004D914 (sub_18004D914.c)
 *     sub_18004DA54 @ 0x18004DA54 (sub_18004DA54.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 Length; // r15
  wchar_t *Buffer; // r14
  __int128 v11; // xmm0
  unsigned __int16 *v12; // r8
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  wchar_t *v16; // rcx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-79h] BYREF
  _DWORD v18[7]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v19; // [rsp+4Ch] [rbp-4Dh]
  int v20; // [rsp+54h] [rbp-45h]
  __int128 v21; // [rsp+A0h] [rbp+7h] BYREF
  __int128 v22; // [rsp+B0h] [rbp+17h]

  v3 = 0;
  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  memset((void *)a3, 0, 0x30uLL);
  memset((void *)a2, 0, 0x2CuLL);
  LOBYTE(v7) = 1;
  result = RtlUpcaseUnicodeString(&UnicodeString, a1, v7);
  if ( (int)result < 0 )
    return result;
  Length = UnicodeString.Length;
  Buffer = UnicodeString.Buffer;
  v18[0] = 1779033703;
  v18[1] = -1150833019;
  v18[2] = 1013904242;
  v18[3] = -1521486534;
  v18[4] = 1359893119;
  v18[5] = -1694144372;
  v18[6] = 528734635;
  v19 = 1541459225LL;
  v20 = 0;
  sub_18004DA54(v18, UnicodeString.Buffer, UnicodeString.Length);
  sub_18004D914(v18, &v21);
  RtlInitializeSid(a2, (__int64)&unk_18011476C, 9u);
  v11 = v21;
  *(_DWORD *)(a2 + 8) = 32;
  v12 = (unsigned __int16 *)&unk_180110000;
  v13 = v22;
  *(_OWORD *)(a2 + 12) = v11;
  *(_OWORD *)(a2 + 28) = v13;
  while ( (_DWORD)Length != *v12 )
  {
LABEL_7:
    ++v3;
    v12 += 8;
    if ( v3 >= 0xC )
      goto LABEL_8;
  }
  v16 = Buffer;
  if ( Buffer < (wchar_t *)((char *)Buffer + Length) )
  {
    while ( *v16 == *(wchar_t *)((char *)v16 + *((_QWORD *)v12 + 1) - (_QWORD)Buffer) )
    {
      if ( ++v16 >= (wchar_t *)((char *)Buffer + Length) )
        goto LABEL_15;
    }
    goto LABEL_7;
  }
LABEL_15:
  RtlInitializeSid(a3, (__int64)&unk_180114734, 2u);
  *(_DWORD *)(a3 + 8) = 3;
  *(_DWORD *)(a3 + 12) = v3 + 1;
LABEL_8:
  RtlFreeUnicodeString(&UnicodeString);
  if ( v3 == 12 )
  {
    RtlInitializeSid(a3, (__int64)&unk_180114734, 0xAu);
    v14 = v21;
    *(_DWORD *)(a3 + 8) = 3;
    v15 = v22;
    *(_DWORD *)(a3 + 12) = 1024;
    *(_OWORD *)(a3 + 16) = v14;
    *(_OWORD *)(a3 + 32) = v15;
  }
  return 0LL;
}
