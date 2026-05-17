/*
 * XREFs of sub_180038944 @ 0x180038944
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_180038510 @ 0x180038510 (sub_180038510.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180070890 @ 0x180070890 (sub_180070890.c)
 */

__int64 __fastcall sub_180038944(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v8 = 0;
  if ( a1 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, a4);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) || (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      sub_180070890(a1, a2, 0LL, &v8);
      v4 = v8;
    }
    else
    {
      v4 = -1073741515;
    }
    RtlReleaseSRWLockExclusive(&qword_18015D070);
  }
  return v4;
}
