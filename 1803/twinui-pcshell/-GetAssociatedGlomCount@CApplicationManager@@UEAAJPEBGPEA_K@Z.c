/*
 * XREFs of ?GetAssociatedGlomCount@CApplicationManager@@UEAAJPEBGPEA_K@Z @ 0x180043820
 * Callers:
 *     _lambda_aa8acc1eed1698d6ba192654be930d00_::operator() @ 0x18008CF5C (_lambda_aa8acc1eed1698d6ba192654be930d00_--operator().c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18006FD14 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEBGPEAPEAVCGlomCollection@1@PEA_.c)
 */

__int64 __fastcall CApplicationManager::GetAssociatedGlomCount(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 *a3)
{
  __int64 result; // rax
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v5; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  result = CActivationBasedAppAndGlomCollection::_GetGlomCollection(
             (CApplicationManager *)((char *)this + 376),
             a2,
             &v5,
             0LL);
  if ( (int)result >= 0 )
    *a3 = *((_QWORD *)v5 + 1);
  return result;
}
