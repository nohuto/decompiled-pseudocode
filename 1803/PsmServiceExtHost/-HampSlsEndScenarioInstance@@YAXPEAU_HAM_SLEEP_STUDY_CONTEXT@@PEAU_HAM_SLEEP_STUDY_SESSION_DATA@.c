/*
 * XREFs of ?HampSlsEndScenarioInstance@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_SESSION_DATA@@@Z @ 0x1800691F8
 * Callers:
 *     ?HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800697B0 (-HampSlsScenarioChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

void __fastcall HampSlsEndScenarioInstance(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _HAM_SLEEP_STUDY_SESSION_DATA *a2)
{
  _OWORD *Heap; // rax
  _QWORD *v5; // rbx
  __int128 v6; // xmm0
  struct _HAM_SLEEP_STUDY_CONTEXT **v7; // rdx
  int v8; // eax
  __int64 v9; // rcx

  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x30uLL);
  v5 = (_QWORD *)((char *)a1 + 24);
  v6 = *(_OWORD *)((char *)a1 + 24);
  if ( Heap )
  {
    Heap[1] = v6;
    Heap[2] = *(_OWORD *)((char *)a1 + 40);
    v7 = (struct _HAM_SLEEP_STUDY_CONTEXT **)*((_QWORD *)a1 + 8);
    if ( *v7 != (struct _HAM_SLEEP_STUDY_CONTEXT *)((char *)a1 + 56) )
      __fastfail(3u);
    *(_QWORD *)Heap = (char *)a1 + 56;
    *((_QWORD *)Heap + 1) = v7;
    *v7 = (struct _HAM_SLEEP_STUDY_CONTEXT *)Heap;
    *((_QWORD *)a1 + 8) = Heap;
    v8 = *((_DWORD *)a1 + 25);
    if ( (v8 & 2) == 0 )
    {
      v9 = *((_QWORD *)a1 + 10);
      *((_DWORD *)a1 + 25) = v8 | 2;
      TpPostWork(v9);
    }
  }
  else
  {
    *(_OWORD *)a2 = v6;
    *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)a1 + 40);
    memset_0((char *)a1 + 24, 0, 0x20uLL);
    *v5 = a1;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_QWORD *)a1 + 5) = 0LL;
  }
  memset_0((char *)a1 + 24, 0, 0x20uLL);
  *v5 = a1;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  *((_DWORD *)a1 + 25) &= ~1u;
}
