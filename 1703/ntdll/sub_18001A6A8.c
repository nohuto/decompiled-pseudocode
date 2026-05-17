/*
 * XREFs of sub_18001A6A8 @ 0x18001A6A8
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 * Callees:
 *     sub_18001B9D8 @ 0x18001B9D8 (sub_18001B9D8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlTryAcquireSRWLockShared @ 0x18007B450 (RtlTryAcquireSRWLockShared.c)
 */

_QWORD *__fastcall sub_18001A6A8(__int64 a1, __int16 a2)
{
  __int64 v2; // rdi
  int v3; // esi
  _QWORD *v4; // rbx
  int v5; // eax
  __int64 v6; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  __int16 v11; // [rsp+28h] [rbp-10h]

  v10 = a1;
  v11 = a2;
  RtlAcquireSRWLockExclusive(&unk_18015C348);
  v2 = qword_18015C338;
  v3 = qword_18015C340 & 1;
  v4 = 0LL;
  while ( v2 )
  {
    v5 = sub_18001B9D8(&v10, v2);
    if ( v5 >= 0 )
    {
      if ( v5 > 0 )
      {
        v6 = *(_QWORD *)(v2 + 8);
        goto LABEL_6;
      }
      v4 = (_QWORD *)v2;
    }
    v6 = *(_QWORD *)v2;
LABEL_6:
    if ( v3 && v6 )
      v2 ^= v6;
    else
      v2 = v6;
  }
  if ( v4 )
  {
    while ( !(unsigned __int8)RtlTryAcquireSRWLockShared(v4 + 9) )
    {
      v8 = (_QWORD *)v4[1];
      v9 = v4;
      if ( v8 )
      {
        do
        {
          v4 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v9 )
            break;
          v9 = v4;
        }
      }
      if ( !v4 || (unsigned int)sub_18001B9D8(&v10, v4) )
        goto LABEL_13;
    }
  }
  else
  {
LABEL_13:
    v4 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&unk_18015C348);
  return v4;
}
