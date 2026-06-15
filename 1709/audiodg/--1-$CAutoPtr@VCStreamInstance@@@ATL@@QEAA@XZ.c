/*
 * XREFs of ??1?$CAutoPtr@VCStreamInstance@@@ATL@@QEAA@XZ @ 0x140031424
 * Callers:
 *     _CSubmixImpl::CreateStream_::_1_::dtor$6 @ 0x1400214B8 (_CSubmixImpl--CreateStream_--_1_--dtor$6.c)
 *     _CStreamGroup::CreateBridgeStream_::_1_::dtor$5 @ 0x140044878 (_CStreamGroup--CreateBridgeStream_--_1_--dtor$5.c)
 *     _CStreamGroup::CreateStream_::_1_::dtor$3 @ 0x140044B4A (_CStreamGroup--CreateStream_--_1_--dtor$3.c)
 * Callees:
 *     ??_GCStreamInstance@@QEAAPEAXI@Z @ 0x140030BF8 (--_GCStreamInstance@@QEAAPEAXI@Z.c)
 */

CStreamInstance *__fastcall ATL::CAutoPtr<CStreamInstance>::~CAutoPtr<CStreamInstance>(CStreamInstance **a1)
{
  CStreamInstance *v2; // rcx
  CStreamInstance *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CStreamInstance::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
