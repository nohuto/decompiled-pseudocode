/*
 * XREFs of ??1?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x18005BEE8
 * Callers:
 *     _ATL::CDacl::AddAllowedAce_::_1_::dtor$0 @ 0x180039EF7 (_ATL--CDacl--AddAllowedAce_--_1_--dtor$0.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$1 @ 0x180080E78 (_ATL--CDacl--Copy_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAutoPtr<ATL::CDacl::CAccessAce>::~CAutoPtr<ATL::CDacl::CAccessAce>(void ***a1)
{
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(a1);
}
