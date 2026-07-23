/*
 * XREFs of RtlTraceDatabaseEnumerate @ 0x1800FAFF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x1800460E0 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180047C50 (RtlEnterCriticalSection.c)
 */

char __fastcall RtlTraceDatabaseEnumerate(__int64 a1, __int64 a2, _QWORD *a3)
{
  char v6; // si
  unsigned int v7; // eax
  __int64 v8; // rdx

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( *(_QWORD *)a2 )
  {
    if ( *(_QWORD *)a2 != a1 || *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a1 + 88) )
      goto LABEL_4;
  }
  else
  {
    *(_QWORD *)a2 = a1;
    *(_DWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = **(_QWORD **)(a1 + 96);
  }
  v6 = 1;
  if ( !*(_QWORD *)(a2 + 16) )
  {
    do
    {
      v7 = ++*(_DWORD *)(a2 + 8);
      if ( v7 >= *(_DWORD *)(a1 + 88) )
        break;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8LL * v7);
      *(_QWORD *)(a2 + 16) = v8;
    }
    while ( !v8 );
  }
  if ( *(_DWORD *)(a2 + 8) < *(_DWORD *)(a1 + 88) || *(_QWORD *)(a2 + 16) )
  {
    *a3 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 40LL);
    goto LABEL_13;
  }
  *a3 = 0LL;
LABEL_4:
  v6 = 0;
LABEL_13:
  *(_QWORD *)(a1 + 40) = 0LL;
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  return v6;
}
