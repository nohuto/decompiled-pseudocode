/*
 * XREFs of EtwpFreeStackCache @ 0x140752884
 * Callers:
 *     EtwpFreeLoggerContext @ 0x14058E0D4 (EtwpFreeLoggerContext.c)
 *     EtwpEnableStackCaching @ 0x14075272C (EtwpEnableStackCaching.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x140188FF0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeStackCache(char *P)
{
  __int64 i; // rsi
  char *v3; // rax
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rbx
  PSLIST_ENTRY v7; // rbx
  PSLIST_ENTRY v8; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 2); i = (unsigned int)(i + 1) )
  {
    while ( 1 )
    {
      v3 = &P[16 * i + 32 + 8 * i];
      if ( *(char **)v3 == v3 )
        break;
      v4 = *(_QWORD **)v3;
      if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
        __fastfail(3u);
      *(_QWORD *)v3 = v5;
      *(_QWORD *)(v5 + 8) = v3;
      do
      {
        v6 = (_QWORD *)v4[2];
        ExFreePoolWithTag(v4, 0);
        v4 = v6;
      }
      while ( v6 );
    }
  }
  v7 = RtlpInterlockedFlushSList((PSLIST_HEADER)P + 1);
  while ( v7 )
  {
    v8 = v7;
    v7 = v7->Next;
    ExFreePoolWithTag(v8, 0);
  }
  ExFreePoolWithTag(P, 0);
}
