/*
 * XREFs of sub_180011D94 @ 0x180011D94
 * Callers:
 *     LdrUnloadDll @ 0x180011CF0 (LdrUnloadDll.c)
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     sub_18001E19C @ 0x18001E19C (sub_18001E19C.c)
 *     sub_1800874C4 @ 0x1800874C4 (sub_1800874C4.c)
 * Callees:
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180079080 @ 0x180079080 (sub_180079080.c)
 */

__int64 __fastcall sub_180011D94(__int64 a1, int a2)
{
  bool v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // edx
  __int64 v10; // rcx
  int v11; // eax

  v4 = 0;
  if ( a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  v5 = 0;
  RtlAcquireSRWLockExclusive(&stru_18015C040);
  v6 = *(_QWORD *)(a1 + 152);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 != -1 && (*(_BYTE *)(*(_QWORD *)v6 - 56LL) & 0x20) == 0 )
  {
    if ( v7 < (unsigned int)(*(_QWORD *)(v6 + 48) != 0LL) + 1 )
    {
      if ( !v7 && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
      {
        v11 = *(_DWORD *)(v6 + 28);
        if ( v11 )
          *(_DWORD *)(v6 + 28) = v11 - 1;
      }
    }
    else if ( v7 <= 1 && a2 )
    {
      v5 = -1073741267;
    }
    else
    {
      *(_DWORD *)(v6 + 24) = v7 - 1;
      v4 = v7 == 1;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_18015C040);
  if ( v4 )
  {
    sub_180019FC0();
    sub_180011E90(v6);
    if ( byte_18015B26C )
      sub_180079080(a1);
    sub_18001A028(v10, 8LL);
  }
  return v5;
}
