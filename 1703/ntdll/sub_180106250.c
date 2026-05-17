/*
 * XREFs of sub_180106250 @ 0x180106250
 * Callers:
 *     RtlSetIoCompletionCallback @ 0x180105CA0 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     sub_1800102BC @ 0x1800102BC (sub_1800102BC.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlSplay @ 0x180065CB0 (RtlSplay.c)
 *     sub_180105E24 @ 0x180105E24 (sub_180105E24.c)
 */

__int64 __fastcall sub_180106250(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rdi
  int v7; // esi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 *v11; // rax
  unsigned __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  RtlAcquireSRWLockExclusive(&qword_18015C7E8);
  v6 = qword_18015C7F0;
  if ( qword_18015C7F0 )
  {
    while ( 1 )
    {
      v8 = v6 - 96;
      v13 = v6 - 96;
      v9 = *(_QWORD *)(v6 - 96);
      if ( a2 == v9 )
        break;
      if ( a2 >= v9 )
      {
        v10 = *(_QWORD *)(v6 + 16);
        if ( !v10 )
        {
          v7 = sub_180105E24(&v13, a2, a3);
          v8 = v13;
          if ( !v13 )
            goto LABEL_14;
          v11 = (__int64 *)(v13 + 96);
          *(_QWORD *)(v6 + 16) = v13 + 96;
          goto LABEL_13;
        }
      }
      else
      {
        v10 = *(_QWORD *)(v6 + 8);
        if ( !v10 )
        {
          v7 = sub_180105E24(&v13, a2, a3);
          v8 = v13;
          if ( !v13 )
            goto LABEL_14;
          v11 = (__int64 *)(v13 + 96);
          *(_QWORD *)(v6 + 8) = v13 + 96;
LABEL_13:
          *v11 = v6;
          goto LABEL_14;
        }
      }
      v6 = v10;
    }
    v7 = sub_1800102BC(a3, v8 + 8, *(_QWORD *)(v8 + 80));
    if ( v7 >= 0 )
      ++*(_DWORD *)(v8 + 88);
  }
  else
  {
    v7 = sub_180105E24(&v13, a2, a3);
    v8 = v13;
  }
LABEL_14:
  if ( v8 && qword_18015C7F0 != v8 + 96 )
    qword_18015C7F0 = RtlSplay(v8 + 96);
  RtlReleaseSRWLockExclusive(&qword_18015C7E8);
  *a1 = v8;
  return (unsigned int)v7;
}
