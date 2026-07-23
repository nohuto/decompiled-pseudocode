/*
 * XREFs of sub_18006DD40 @ 0x18006DD40
 * Callers:
 *     sub_18002534C @ 0x18002534C (sub_18002534C.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010990 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_18006DF50 @ 0x18006DF50 (sub_18006DF50.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18006DD40(__int16 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  bool v11; // zf
  _DWORD v12[10]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&SRWLock);
  v4 = v12[0];
  if ( (a1 & 0x100) != 0 )
    v4 = 5;
  v12[0] = v4;
  LODWORD(v5) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v5) = v5 + 1;
    v12[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v10 = (unsigned int)v5;
    v5 = (unsigned int)(v5 + 1);
    v11 = stru_18015CFE8.Length == 0;
    v12[v10] = 6;
    if ( !v11 )
    {
      v12[v5] = 0;
      LODWORD(v5) = v5 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v6 = (unsigned int)v5;
    LODWORD(v5) = v5 + 1;
    v12[v6] = 7;
  }
  if ( DestinationString.Length )
  {
    v9 = (unsigned int)v5;
    LODWORD(v5) = v5 + 1;
    v12[v9] = 8;
  }
  v7 = sub_18006DF50(v12, (unsigned int)v5, a2);
  RtlReleaseSRWLockShared(&SRWLock);
  if ( v7 )
  {
    *(_BYTE *)(v7 + 100) = 1;
    if ( !DestinationString.Length )
      *(_QWORD *)(v7 + 88) = 0LL;
  }
  return v7;
}
