/*
 * XREFs of ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0014B0C
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011898 (VidSchiSubmitPresentHistoryToken.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N3@Z @ 0x1C0011AB0 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_IN.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiCheckTokenIndependentFlipCondition(
        struct _VIDSCH_GLOBAL *a1,
        const struct VIDSCH_SUBMIT_DATA2 *a2)
{
  __int64 v4; // r8
  bool v5; // zf
  int v6; // ecx
  char v7; // dl
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v12; // rax

  if ( (*(_DWORD *)a2 & 0x1000000) != 0 )
  {
    v4 = *((unsigned int *)a2 + 29);
    v5 = !_BitScanForward((unsigned int *)&v6, *((_DWORD *)a2 + 110) & 0x3FF);
    v7 = -1;
    if ( !v5 )
      v7 = v6;
    v8 = 0;
    if ( v7 != -1 )
      v8 = v7;
    v9 = 280LL * (unsigned int)v8;
    v10 = *((_QWORD *)a1 + v4 + 376);
    if ( *(_DWORD *)(v9 + v10 + 148) == *((_DWORD *)a2 + 38)
      && *(_DWORD *)(v9 + v10 + 152) == *((_DWORD *)a2 + 39)
      && *(_QWORD *)(v9 + v10 + 160) == *((_QWORD *)a2 + 20)
      && *(_QWORD *)(v9 + v10 + 168) == *((_QWORD *)a2 + 21) )
    {
      return 1;
    }
    v12 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v10, v9);
    v12[3] = *((_QWORD *)a2 + 13);
    v12[4] = *((unsigned int *)a2 + 28);
    v12[5] = *((_QWORD *)a2 + 19);
    v12[6] = *((_QWORD *)a2 + 20);
    v12[7] = *((_QWORD *)a2 + 21);
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    v12[3] = *((_QWORD *)a2 + 13);
    v12[4] = *((unsigned int *)a2 + 28);
  }
  WdLogEvent5_WdPresentTokenEvent(v12);
  return 0;
}
