/*
 * XREFs of ?_OnEnterDisambiguation@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01D27DC
 * Callers:
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C01D297C (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Edgy::_OnEnterDisambiguation(Edgy *this, struct tagEDGY_DATA *a2, const struct Edgy::tagARC_DATA *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx

  EtwTraceEdgyDetectionStart(this, a2, a3);
  *((_QWORD *)this + 23) = *((_QWORD *)a2 + 2);
  *((_QWORD *)this + 26) = *((_QWORD *)a2 + 4);
  *((_DWORD *)this + 54) = *((_DWORD *)a2 + 6);
  *((_QWORD *)this + 24) = *((_QWORD *)a2 + 5);
  *((_DWORD *)this + 50) = *((_DWORD *)a2 + 12);
  v5 = *(_QWORD *)a2;
  if ( (gdwMitConfig & 4) != 0 )
    v6 = *(_QWORD *)(v5 + 64);
  else
    v6 = *(_QWORD *)(v5 + 56);
  *((_QWORD *)this + 22) = v6;
  *((_QWORD *)this + 28) = v5;
}
