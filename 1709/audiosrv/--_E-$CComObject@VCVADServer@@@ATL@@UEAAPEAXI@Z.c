/*
 * XREFs of ??_E?$CComObject@VCVADServer@@@ATL@@UEAAPEAXI@Z @ 0x18002AFC0
 * Callers:
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18002B050 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComObject@VCVADServer@@@ATL@@UEAA@XZ @ 0x18002AFF4 (--1-$CComObject@VCVADServer@@@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CVADServer *__fastcall ATL::CComObject<CVADServer>::`vector deleting destructor'(CVADServer *a1, char a2)
{
  ATL::CComObject<CVADServer>::~CComObject<CVADServer>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x1C8);
  return a1;
}
