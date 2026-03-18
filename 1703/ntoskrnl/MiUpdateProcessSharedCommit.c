/*
 * XREFs of MiUpdateProcessSharedCommit @ 0x140549F48
 * Callers:
 *     MiChargeSegmentCommit @ 0x14054A0F0 (MiChargeSegmentCommit.c)
 * Callees:
 *     MiIncludeSharedCommit @ 0x140099540 (MiIncludeSharedCommit.c)
 */

_QWORD *__fastcall MiUpdateProcessSharedCommit(__int64 a1)
{
  _QWORD *result; // rax
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r8
  _QWORD *i; // rcx
  __int64 v6; // rcx
  _QWORD *v7; // rcx

  result = (_QWORD *)MiIncludeSharedCommit(a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD **)v3;
    v4 = 0LL;
    for ( i = *(_QWORD **)(*(_QWORD *)v3 + 72LL); i; i = (_QWORD *)*i )
      v4 = i;
    while ( v4 )
    {
      v6 = v4[3];
      if ( (v6 & 1) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)((v6 & 0xFFFFFFFFFFFFFFFEuLL) + 1320), v2);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 1896), v2);
      result = (_QWORD *)v4[1];
      v7 = v4;
      if ( result )
      {
        do
        {
          v4 = result;
          result = (_QWORD *)*result;
        }
        while ( result );
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v7 )
            break;
          v7 = v4;
        }
      }
    }
  }
  return result;
}
