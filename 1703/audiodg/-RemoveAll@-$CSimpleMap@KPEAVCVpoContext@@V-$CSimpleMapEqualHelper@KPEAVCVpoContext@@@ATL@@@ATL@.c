/*
 * XREFs of ?RemoveAll@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAXXZ @ 0x14001CA60
 * Callers:
 *     _dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__ @ 0x140022220 (_dynamic_atexit_destructor_for__CVpoContext--s_mapVpoContext__.c)
 * Callees:
 *     <none>
 */

void ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAll()
{
  if ( CVpoContext::s_mapVpoContext )
  {
    free(CVpoContext::s_mapVpoContext);
    CVpoContext::s_mapVpoContext = 0LL;
  }
  if ( qword_1400862B8 )
  {
    free(qword_1400862B8);
    qword_1400862B8 = 0LL;
  }
  LODWORD(qword_1400862C0) = 0;
}
