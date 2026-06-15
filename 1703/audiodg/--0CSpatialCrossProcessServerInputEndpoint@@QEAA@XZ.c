/*
 * XREFs of ??0CSpatialCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x140057A8C
 * Callers:
 *     ??0?$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400574C8 (--0-$CComAggObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14005765C (--0-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 *     ??0CSpatialCrossProcessServerEndpoint@@QEAA@XZ @ 0x140057998 (--0CSpatialCrossProcessServerEndpoint@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSpatialCrossProcessServerInputEndpoint *__fastcall CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint(
        CSpatialCrossProcessServerInputEndpoint *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 274) = 0;
  v2 = (char *)this + 1104;
  memset((char *)this + 1104, 0, 0x28uLL);
  v2[40] = 0;
  CSpatialCrossProcessServerEndpoint::CSpatialCrossProcessServerEndpoint(this);
  *((_DWORD *)this + 288) = 0;
  *((_DWORD *)this + 289) = 0;
  *((_WORD *)this + 580) = 0;
  *((_DWORD *)this + 291) = -2147418113;
  return this;
}
