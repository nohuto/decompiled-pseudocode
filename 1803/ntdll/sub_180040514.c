/*
 * XREFs of sub_180040514 @ 0x180040514
 * Callers:
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_180040D60 @ 0x180040D60 (sub_180040D60.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18002BBDC @ 0x18002BBDC (sub_18002BBDC.c)
 *     sub_18002BF70 @ 0x18002BF70 (sub_18002BF70.c)
 *     sub_18003BC9C @ 0x18003BC9C (sub_18003BC9C.c)
 *     sub_18003FFC8 @ 0x18003FFC8 (sub_18003FFC8.c)
 *     sub_1800404E8 @ 0x1800404E8 (sub_1800404E8.c)
 *     sub_1800413EC @ 0x1800413EC (sub_1800413EC.c)
 *     sub_180070738 @ 0x180070738 (sub_180070738.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 */

__int64 __fastcall sub_180040514(char *Source)
{
  int v1; // eax
  PWCH v3; // rbp
  int v4; // edi
  int v5; // esi
  char v6; // al
  UNICODE_STRING *v7; // rcx
  HANDLE *v8; // rsi
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_DWORD *)Source + 8);
  v3 = (PWCH)*((_QWORD *)Source + 7);
  v4 = -1073741515;
  v5 = v1 & 0x200;
  if ( (v1 & 0x200) != 0 )
    v6 = sub_1800413EC(Source, v10);
  else
    v6 = (v1 & 0x28) == 32;
  v7 = (UNICODE_STRING *)v10;
  if ( !v5 )
    v7 = (UNICODE_STRING *)Source;
  if ( v6 )
  {
    v8 = (HANDLE *)(Source + 24);
    v4 = sub_18003FFC8(v7, (PUNICODE_STRING)(v3 + 44), (PUNICODE_STRING)(v3 + 36), (PHANDLE)Source + 3);
    if ( v4 >= 0 )
    {
      *((_DWORD *)Source + 8) |= 0x100000u;
      sub_18003BC9C(*((_QWORD *)v3 + 6), (__int64)(v3 + 36), 0x14A5u);
      v11 = 0LL;
      *((_DWORD *)v3 + 66) = sub_1800404E8((_UNICODE_STRING *)(v3 + 44));
      RtlAcquireSRWLockExclusive(&stru_18015D070);
      v4 = sub_18002BF70(
             (PUNICODE_STRING)(v3 + 44),
             (PUNICODE_STRING)(v3 + 36),
             *((_DWORD *)Source + 8),
             &v11,
             *((_DWORD *)v3 + 66));
      RtlReleaseSRWLockExclusive(&stru_18015D070);
      if ( v11 )
      {
        sub_180070738(Source, v11);
      }
      else
      {
        sub_18003BC9C(0, (__int64)(v3 + 36), 0x14AAu);
        v4 = sub_18002BBDC((__int64)Source);
      }
      ZwClose(*v8);
      *v8 = 0LL;
    }
  }
  return (unsigned int)v4;
}
