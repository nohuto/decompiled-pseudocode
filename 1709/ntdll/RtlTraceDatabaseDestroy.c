/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x1800FAF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpTraceDatabaseFree @ 0x1800FB238 (RtlpTraceDatabaseFree.c)
 */

char __fastcall RtlTraceDatabaseDestroy(__int64 a1)
{
  _QWORD *v2; // rax
  char v3; // di
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi

  RtlDeleteCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 48));
  v2 = *(_QWORD **)(a1 + 16);
  v3 = 0;
  if ( !v2 )
    goto LABEL_8;
  do
  {
    v4 = (_QWORD *)v2[2];
    v5 = v2 - 24;
    if ( v4 )
      v5 = v2;
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v5) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v5);
      v3 = 1;
    }
    v2 = v4;
  }
  while ( v4 );
  if ( !v3 )
LABEL_8:
    LOBYTE(v2) = 1;
  return (char)v2;
}
