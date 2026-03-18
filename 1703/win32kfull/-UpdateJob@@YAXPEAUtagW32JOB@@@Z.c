/*
 * XREFs of ?UpdateJob@@YAXPEAUtagW32JOB@@@Z @ 0x1C0017268
 * Callers:
 *     UserJobCallout @ 0x1C001A230 (UserJobCallout.c)
 * Callees:
 *     ?JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017110 (-JobCalloutAddProcess@@YAHPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 *     ?SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z @ 0x1C0017198 (-SetProcessFlags@@YAXPEAUtagW32JOB@@PEAUtagPROCESSINFO@@@Z.c)
 */

void __fastcall UpdateJob(struct tagW32JOB *a1)
{
  struct tagPROCESSINFO *i; // rbx

  for ( i = (struct tagPROCESSINFO *)gppiList; i; i = (struct tagPROCESSINFO *)*((_QWORD *)i + 43) )
  {
    if ( PsGetProcessJob(*(_QWORD *)i) == *((_QWORD *)a1 + 1) )
    {
      if ( *((_QWORD *)i + 90) )
        SetProcessFlags(a1, i);
      else
        JobCalloutAddProcess(a1, i);
    }
  }
}
