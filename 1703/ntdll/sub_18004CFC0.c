/*
 * XREFs of sub_18004CFC0 @ 0x18004CFC0
 * Callers:
 *     sub_18004CE84 @ 0x18004CE84 (sub_18004CE84.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180020280 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180028DE0 (RtlReleaseSRWLockShared.c)
 *     sub_18004D108 @ 0x18004D108 (sub_18004D108.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_18004CFC0(__int16 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // zf
  _DWORD v13[10]; // [rsp+20h] [rbp-38h] BYREF

  LODWORD(v3) = 0;
  RtlAcquireSRWLockShared(&SRWLock);
  if ( (a1 & 0x100) != 0 )
  {
    v13[0] = 5;
    LODWORD(v3) = 1;
  }
  if ( (a1 & 0x200) != 0 )
  {
    v10 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    v13[v10] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v11 = (unsigned int)v3;
    v3 = (unsigned int)(v3 + 1);
    v12 = stru_18015BF60.Length == 0;
    v13[v11] = 6;
    if ( !v12 )
    {
      v13[v3] = 0;
      LODWORD(v3) = v3 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v6 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    v13[v6] = 7;
  }
  LOBYTE(v5) = (NtCurrentPeb()->ProcessParameters->Flags & 0x20000000) != 0 && (a1 & 0x800) != 0;
  if ( DestinationString.Length )
  {
    v9 = (unsigned int)v3;
    LODWORD(v3) = v3 + 1;
    v13[v9] = 8;
  }
  v7 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, __int64))sub_18004D108)(v13, (unsigned int)v3, a2, v5);
  RtlReleaseSRWLockShared(&SRWLock);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 100) = 1;
    if ( !DestinationString.Length )
      *(_QWORD *)(v7 + 88) = 0LL;
  }
  return v7;
}
