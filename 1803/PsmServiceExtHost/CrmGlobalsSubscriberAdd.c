/*
 * XREFs of CrmGlobalsSubscriberAdd @ 0x180039414
 * Callers:
 *     CrmSubscriberStart @ 0x180039328 (CrmSubscriberStart.c)
 * Callees:
 *     CrmGlobalsSubscriberTreeCompareRoutine @ 0x180039500 (CrmGlobalsSubscriberTreeCompareRoutine.c)
 */

__int64 __fastcall CrmGlobalsSubscriberAdd(__int64 a1)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // r8
  unsigned __int64 v4; // rbx
  int v5; // edi
  unsigned __int64 v6; // rax

  RtlAcquireSRWLockExclusive(&unk_180092A18);
  CurrentThreadId = GetCurrentThreadId();
  v4 = xmmword_180092A28;
  dword_180092A20 = CurrentThreadId;
  if ( (BYTE8(xmmword_180092A28) & 1) != 0 && (_QWORD)xmmword_180092A28 )
    v4 = (unsigned __int64)&xmmword_180092A28 ^ xmmword_180092A28;
  LOBYTE(v3) = 0;
  v5 = BYTE8(xmmword_180092A28) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      if ( (int)CrmGlobalsSubscriberTreeCompareRoutine(a1 + 32, v4, v3) < 0 )
      {
        v6 = *(_QWORD *)v4;
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_16;
          v6 ^= v4;
        }
        if ( !v6 )
        {
LABEL_16:
          LOBYTE(v3) = 0;
          break;
        }
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 8);
        if ( v5 )
        {
          if ( !v6 )
            goto LABEL_10;
          v6 ^= v4;
        }
        if ( !v6 )
        {
LABEL_10:
          LOBYTE(v3) = 1;
          break;
        }
      }
      v4 = v6;
    }
  }
  RtlRbInsertNodeEx(&xmmword_180092A28, v4, v3, a1 + 40);
  dword_180092A20 = 0;
  return RtlReleaseSRWLockExclusive(&unk_180092A18);
}
