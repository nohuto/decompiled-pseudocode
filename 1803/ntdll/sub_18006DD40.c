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

__int64 __fastcall sub_18006DD40(__int16 a1, char *a2, __int64 a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  bool v13; // zf
  _DWORD v14[10]; // [rsp+20h] [rbp-38h] BYREF

  RtlAcquireSRWLockShared(&qword_18015D3E0, a2, a3, a4);
  v6 = v14[0];
  if ( (a1 & 0x100) != 0 )
    v6 = 5;
  v14[0] = v6;
  LODWORD(v7) = (a1 & 0x100) != 0;
  if ( (a1 & 0x200) != 0 )
  {
    LODWORD(v7) = v7 + 1;
    v14[(a1 & 0x100) != 0] = 1;
  }
  if ( (a1 & 0x400) != 0 )
  {
    v12 = (unsigned int)v7;
    v7 = (unsigned int)(v7 + 1);
    v13 = (_WORD)xmmword_18015CFE8 == 0;
    v14[v12] = 6;
    if ( !v13 )
    {
      v14[v7] = 0;
      LODWORD(v7) = v7 + 1;
    }
  }
  if ( (a1 & 0x4800) != 0 )
  {
    v8 = (unsigned int)v7;
    LODWORD(v7) = v7 + 1;
    v14[v8] = 7;
  }
  if ( DestinationString.Length )
  {
    v11 = (unsigned int)v7;
    LODWORD(v7) = v7 + 1;
    v14[v11] = 8;
  }
  v9 = sub_18006DF50(v14, (unsigned int)v7, a2);
  RtlReleaseSRWLockShared(&qword_18015D3E0);
  if ( v9 )
  {
    *(_BYTE *)(v9 + 100) = 1;
    if ( !DestinationString.Length )
      *(_QWORD *)(v9 + 88) = 0LL;
  }
  return v9;
}
