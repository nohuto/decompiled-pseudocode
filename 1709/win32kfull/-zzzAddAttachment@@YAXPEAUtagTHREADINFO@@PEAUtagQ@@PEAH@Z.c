/*
 * XREFs of ?zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z @ 0x1C00CAE8C
 * Callers:
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00CADA4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall zzzAddAttachment(struct tagTHREADINFO *a1, struct tagQ *a2, int *a3)
{
  struct tagQ *v3; // rax

  v3 = (struct tagQ *)*((_QWORD *)a1 + 79);
  if ( v3 != a2 )
  {
    *((_QWORD *)a1 + 79) = a2;
    if ( v3 )
      zzzDestroyQueue(v3, a1);
    ++*((_DWORD *)a2 + 96);
    *a3 = 1;
  }
}
