/*
 * XREFs of ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800B505C
 * Callers:
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180032340 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x180059B34 (-CreateInstance@-$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVADServer::InternalFinalConstructRelease(CVADServer *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((char *)this + 8);
}
