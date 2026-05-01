/*
 * XREFs of CrmGlobalsSubscriberRemoveAll @ 0x180069E6C
 * Callers:
 *     CrmGlobalsCleanup @ 0x180069D80 (CrmGlobalsCleanup.c)
 * Callees:
 *     CrmGlobalsSubscribersDeleteRoutine @ 0x180069F74 (CrmGlobalsSubscribersDeleteRoutine.c)
 */

__int64 CrmGlobalsSubscriberRemoveAll()
{
  DWORD CurrentThreadId; // eax
  unsigned __int64 v1; // rcx
  int v2; // edi
  _QWORD *v3; // rdx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  bool v7; // zf
  char v8; // dl

  RtlAcquireSRWLockExclusive(&unk_180092A18);
  CurrentThreadId = GetCurrentThreadId();
  v1 = xmmword_180092A28;
  dword_180092A20 = CurrentThreadId;
  if ( (BYTE8(xmmword_180092A28) & 1) != 0 && (_QWORD)xmmword_180092A28 )
    v1 = (unsigned __int64)&xmmword_180092A28 ^ xmmword_180092A28;
  v2 = BYTE8(xmmword_180092A28) & 1;
  if ( v1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v1 )
        {
          v3 = (_QWORD *)v1;
          if ( v2 )
            v1 ^= *(_QWORD *)v1;
          else
            v1 = *(_QWORD *)v1;
          *v3 = 0LL;
        }
        v4 = *(_QWORD *)(v1 + 8);
        if ( !v4 )
          break;
        v5 = v1;
        if ( v2 )
          v1 ^= v4;
        else
          v1 = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v5 + 8) = 0LL;
      }
      v6 = *(_QWORD *)(v1 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v2 && v6 )
        v6 ^= v1;
      CrmGlobalsSubscribersDeleteRoutine(v1, 0LL);
      if ( !v6 )
        break;
      v1 = v6;
    }
  }
  v7 = (BYTE8(xmmword_180092A28) & 1) == 0;
  xmmword_180092A28 = 0LL;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  if ( !v7 )
    v8 = 1;
  dword_180092A20 = 0;
  BYTE8(xmmword_180092A28) = v8;
  return RtlReleaseSRWLockExclusive(&unk_180092A18);
}
