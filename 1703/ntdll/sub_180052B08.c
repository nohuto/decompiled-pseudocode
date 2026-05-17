/*
 * XREFs of sub_180052B08 @ 0x180052B08
 * Callers:
 *     sub_180052A9C @ 0x180052A9C (sub_180052A9C.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001E790 (RtlRbInsertNodeEx.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     memcmp @ 0x180099A70 (memcmp.c)
 */

signed __int64 __fastcall sub_180052B08(unsigned __int64 a1)
{
  bool v2; // bl
  unsigned __int64 v3; // rdi
  int v4; // esi
  unsigned __int64 v5; // rax

  RtlAcquireSRWLockExclusive(&qword_18015C348);
  v2 = 0;
  v3 = qword_18015C328;
  v4 = byte_18015C330 & 1;
  if ( qword_18015C328 )
  {
    while ( 1 )
    {
      if ( memcmp((const void *)(a1 + 24), (const void *)(v3 + 24), 0x10uLL) < 0 )
      {
        v5 = *(_QWORD *)v3;
        if ( v4 )
        {
          if ( !v5 )
            break;
          v5 ^= v3;
        }
        if ( !v5 )
          break;
      }
      else
      {
        v5 = *(_QWORD *)(v3 + 8);
        if ( v4 )
        {
          if ( !v5 )
          {
LABEL_9:
            v2 = 1;
            break;
          }
          v5 ^= v3;
        }
        if ( !v5 )
          goto LABEL_9;
      }
      v3 = v5;
    }
  }
  RtlRbInsertNodeEx((__int64)&qword_18015C328, v3, v2, a1);
  return RtlReleaseSRWLockExclusive(&qword_18015C348);
}
