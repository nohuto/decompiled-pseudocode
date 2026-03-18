/*
 * XREFs of ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0062DA4
 * Callers:
 *     GdiProcessCallout @ 0x1C0060F90 (GdiProcessCallout.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C0062E9C (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@@@Z @ 0x1C00C56FC (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00C5C08 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C00C5DB4 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z.c)
 */

void __fastcall COPM::DestroyProtectedOutputsOwnedByProcess(COPM *this, void *a2)
{
  char *v2; // rdi
  char i; // al
  struct _KMUTANT *v5; // rcx
  COPM *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = this;
  v2 = (char *)P;
  CMutex::Lock((CMutex *)((char *)P + 32));
  for ( i = CList<COPMProtectedOutput>::GetFirstElementIndex(v2, &v6);
        i;
        i = CList<COPMProtectedOutput>::GetNextElementIndex(v2, (unsigned int)v6, &v6) )
  {
    v7 = 0LL;
    CList<COPMProtectedOutput>::GetElement(v2, (unsigned int)v6, &v7);
    if ( a2 == *(void **)(v7 + 56) )
      CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(v2, v7, (unsigned int)v6, v2 + 24);
  }
  v5 = (struct _KMUTANT *)*((_QWORD *)v2 + 4);
  if ( v5 )
    KeReleaseMutex(v5, 0);
}
