/*
 * XREFs of sub_1800241D0 @ 0x1800241D0
 * Callers:
 *     EtwNotificationRegister @ 0x1800296B0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180021C90 (RtlRbInsertNodeEx.c)
 *     sub_1800242B4 @ 0x1800242B4 (sub_1800242B4.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_1800241D0(unsigned __int64 a1)
{
  __int64 v2; // rdi
  bool v3; // bl
  int v4; // esi
  __int64 v5; // rax
  unsigned __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int16 v8; // [rsp+28h] [rbp-10h]

  v7 = a1 + 32;
  v8 = *(_WORD *)(a1 + 96);
  RtlAcquireSRWLockExclusive(&unk_18015D380);
  v2 = qword_18015D370;
  v3 = 0;
  if ( (qword_18015D378 & 1) != 0 )
  {
    if ( qword_18015D370 )
      v2 = (unsigned __int64)&qword_18015D370 ^ qword_18015D370;
    else
      v2 = 0LL;
  }
  v4 = qword_18015D378 & 1;
  if ( v2 )
  {
    while ( 1 )
    {
      if ( (int)sub_1800242B4(&v7, v2) < 0 )
      {
        v5 = *(_QWORD *)v2;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= v2;
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)(v2 + 8);
        if ( v4 )
        {
          if ( !v5 )
            goto LABEL_11;
          v5 ^= v2;
        }
        if ( !v5 )
        {
LABEL_11:
          v3 = 1;
          break;
        }
      }
      v2 = v5;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64)&qword_18015D370, v2, v3, a1);
  return RtlReleaseSRWLockExclusive(&unk_18015D380);
}
