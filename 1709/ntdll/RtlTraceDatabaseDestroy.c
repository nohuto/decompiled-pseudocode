/*
 * XREFs of RtlTraceDatabaseDestroy @ 0x1800FAF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlDeleteCriticalSection @ 0x180061480 (RtlDeleteCriticalSection.c)
 *     DbgPrint @ 0x18006C5C0 (DbgPrint.c)
 *     RtlpTraceDatabaseFree @ 0x1800FB238 (RtlpTraceDatabaseFree.c)
 */

char __fastcall RtlTraceDatabaseDestroy(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  _QWORD *v5; // rax
  char v6; // di
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi

  RtlDeleteCriticalSection((__int64 *)(a1 + 48), a2, a3, a4);
  v5 = *(_QWORD **)(a1 + 16);
  v6 = 0;
  if ( !v5 )
    goto LABEL_8;
  do
  {
    v7 = (_QWORD *)v5[2];
    v8 = v5 - 24;
    if ( v7 )
      v8 = v5;
    if ( !(unsigned __int8)RtlpTraceDatabaseFree(v8) )
    {
      DbgPrint("Trace database: failed to release segment %p \n", v8);
      v6 = 1;
    }
    v5 = v7;
  }
  while ( v7 );
  if ( !v6 )
LABEL_8:
    LOBYTE(v5) = 1;
  return (char)v5;
}
