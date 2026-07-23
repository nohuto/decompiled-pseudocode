/*
 * XREFs of sub_18004C728 @ 0x18004C728
 * Callers:
 *     sub_18004C234 @ 0x18004C234 (sub_18004C234.c)
 *     sub_18005040C @ 0x18005040C (sub_18005040C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_18003888C @ 0x18003888C (sub_18003888C.c)
 *     sub_18003C6D0 @ 0x18003C6D0 (sub_18003C6D0.c)
 */

__int64 __fastcall sub_18004C728(PUNICODE_STRING String1, PUNICODE_STRING a2, char a3, _QWORD *a4)
{
  int v8; // r14d
  _UNICODE_STRING *v9; // rdx
  int v10; // ebx

  *a4 = 0LL;
  v8 = sub_18003C6D0(String1);
  RtlAcquireSRWLockExclusive(&stru_18015C040);
  v9 = 0LL;
  if ( (a3 & 0x20) == 0 )
    v9 = a2;
  v10 = sub_18003888C(String1, v9, a3, a4, v8);
  if ( v10 == -1073741515 && (a3 & 8) != 0 )
  {
    v10 = sub_18003888C(0LL, a2, 0, a4, v8);
    if ( v10 >= 0 )
      *(_DWORD *)(*a4 + 104LL) |= 1u;
  }
  RtlReleaseSRWLockExclusive(&stru_18015C040);
  return (unsigned int)v10;
}
