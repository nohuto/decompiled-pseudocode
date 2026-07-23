/*
 * XREFs of sub_18003AC90 @ 0x18003AC90
 * Callers:
 *     sub_18001AA5C @ 0x18001AA5C (sub_18001AA5C.c)
 *     sub_180041A60 @ 0x180041A60 (sub_180041A60.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_180038B4C @ 0x180038B4C (sub_180038B4C.c)
 *     sub_18003ADA8 @ 0x18003ADA8 (sub_18003ADA8.c)
 *     sub_18003C6D0 @ 0x18003C6D0 (sub_18003C6D0.c)
 *     sub_18003CA5C @ 0x18003CA5C (sub_18003CA5C.c)
 *     sub_180050570 @ 0x180050570 (sub_180050570.c)
 *     sub_180076BC4 @ 0x180076BC4 (sub_180076BC4.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 */

__int64 __fastcall sub_18003AC90(_BYTE *a1)
{
  int v1; // eax
  __int64 v2; // rdi
  __int64 v3; // rbp
  int v4; // ebx
  char v5; // al
  int v6; // ebx
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 6);
  v2 = (__int64)a1;
  v3 = *((_QWORD *)a1 + 6);
  v4 = -1073741515;
  if ( (v1 & 0x200) != 0 )
  {
    v5 = sub_180076BC4(a1, v8);
    a1 = v8;
  }
  else
  {
    v5 = (v1 & 0x28) == 32;
  }
  if ( v5 )
  {
    v4 = sub_18003ADA8((PCUNICODE_STRING)a1, (PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), &Handle);
    if ( v4 >= 0 )
    {
      sub_18003CA5C(*(_QWORD *)(v3 + 48), v3 + 72, 5285LL);
      v9 = 0LL;
      v6 = sub_18003C6D0(v3 + 88);
      RtlAcquireSRWLockExclusive(&stru_18015C040);
      v4 = sub_18003888C((PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), *(_DWORD *)(v2 + 24), &v9, v6);
      RtlReleaseSRWLockExclusive(&stru_18015C040);
      if ( v9 )
      {
        sub_180050570(v2);
      }
      else
      {
        sub_18003CA5C(0LL, v3 + 72, 5290LL);
        v4 = sub_180038B4C(v2);
      }
      ZwClose(Handle);
    }
  }
  return (unsigned int)v4;
}
