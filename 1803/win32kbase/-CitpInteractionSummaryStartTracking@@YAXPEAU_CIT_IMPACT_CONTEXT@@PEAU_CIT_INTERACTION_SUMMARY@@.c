/*
 * XREFs of ?CitpInteractionSummaryStartTracking@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0068750
 * Callers:
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@G@Z @ 0x1C003BEF8 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C0040BD8 (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall CitpInteractionSummaryStartTracking(
        struct _CIT_IMPACT_CONTEXT *a1,
        struct _CIT_INTERACTION_SUMMARY *a2)
{
  __int16 v4; // ax
  struct _CIT_IMPACT_CONTEXT **v5; // rcx
  unsigned __int64 v6; // rcx

  if ( (*((_BYTE *)a2 + 84) & 2) != 0 )
  {
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_QWORD *)a2 + 2) = 0LL;
    *(_QWORD *)((char *)a2 + 86) = 0LL;
    *(_DWORD *)((char *)a2 + 94) = 0;
    *((_WORD *)a2 + 49) = 0;
    *(_QWORD *)((char *)a2 + 116) = 0LL;
    *(_QWORD *)((char *)a2 + 124) = 0LL;
    *(_QWORD *)((char *)a2 + 132) = 0LL;
    memset(*((void **)a2 + 18), 0, *((_QWORD *)a2 + 19));
    *((_DWORD *)a2 + 25) &= 0xFF000000;
    *((_DWORD *)a2 + 27) &= 0xFF000000;
    v4 = *((_WORD *)a2 + 42);
  }
  else
  {
    v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_WORD *)a2 + 42) |= 2u;
    v4 = *((_WORD *)a2 + 42);
    *((_DWORD *)a2 + 19) = v6;
  }
  if ( (v4 & 1) == 0 )
    *((_QWORD *)a2 + 2) = **((_QWORD **)a2 + 3);
  v5 = (struct _CIT_IMPACT_CONTEXT **)*((_QWORD *)a1 + 99);
  if ( *v5 != (struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 784) )
    __fastfail(3u);
  *(_QWORD *)a2 = (char *)a1 + 784;
  *((_QWORD *)a2 + 1) = v5;
  *v5 = a2;
  *((_QWORD *)a1 + 99) = a2;
}
