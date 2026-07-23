/*
 * XREFs of sub_18001BE0C @ 0x18001BE0C
 * Callers:
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_18001E19C @ 0x18001E19C (sub_18001E19C.c)
 * Callees:
 *     sub_18001BA24 @ 0x18001BA24 (sub_18001BA24.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18001BE0C(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v6 = 0;
  if ( a1 )
  {
    RtlAcquireSRWLockExclusive(&stru_18015C040);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      sub_18001BA24(a1, a2, 0LL, &v6);
      v2 = v6;
    }
    else
    {
      v2 = -1073741515;
    }
    RtlReleaseSRWLockExclusive(&stru_18015C040);
  }
  return v2;
}
