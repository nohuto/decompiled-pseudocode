/*
 * XREFs of sub_180002524 @ 0x180002524
 * Callers:
 *     sub_1800024A8 @ 0x1800024A8 (sub_1800024A8.c)
 * Callees:
 *     sub_180005A98 @ 0x180005A98 (sub_180005A98.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029AF4 @ 0x180029AF4 (sub_180029AF4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_180002524(__int16 a1)
{
  __int64 v2; // rcx
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  _BYTE *v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  char v9; // si
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm0
  _QWORD v13[15]; // [rsp+20h] [rbp-88h] BYREF

  memset(v13, 0, sizeof(v13));
  LODWORD(v13[3]) = -1;
  LODWORD(v13[9]) = 0;
  LODWORD(v13[14]) = 0;
  v2 = 0LL;
  v13[0] = 0x7800000003LL;
  while ( 1 )
  {
    result = sub_180005A98(v2);
    v8 = result;
    if ( !result )
      return result;
    v3 = (_BYTE *)(result + 150);
    v4 = 0LL;
    v5 = (_BYTE *)(result + 150);
    while ( !*(v5 - 2) || *v5 != (_BYTE)a1 )
    {
      v4 = (unsigned int)(v4 + 1);
      v5 += 24;
      if ( (unsigned int)v4 >= 4 )
      {
        v6 = 0LL;
        goto LABEL_6;
      }
    }
    v6 = v8 + 8 * (v4 + 2 * (v4 + 8));
LABEL_6:
    if ( v6 )
    {
      v9 = 0;
      if ( *(_DWORD *)(v8 + 80) != LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v8 + 64));
        v9 = 1;
        *(_DWORD *)(v8 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
      }
      v10 = 0LL;
      do
      {
        if ( *(v3 - 2) && *v3 == (_BYTE)a1 )
        {
          v11 = v8 + 8 * (3 * v10 + 16);
          goto LABEL_20;
        }
        v10 = (unsigned int)(v10 + 1);
        v3 += 24;
      }
      while ( (unsigned int)v10 < 4 );
      v11 = 0LL;
LABEL_20:
      if ( v11 )
      {
        v12 = *(_OWORD *)(v8 + 32);
        LODWORD(v13[9]) = 0;
        *(_OWORD *)&v13[5] = v12;
        HIWORD(v13[9]) = a1 | 0x8000;
        sub_180029AF4(v8, v13);
      }
      if ( v9 )
      {
        *(_DWORD *)(v8 + 80) = 0;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v8 + 64));
      }
    }
    v2 = v8;
  }
}
