/*
 * XREFs of ??1?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@QEAA@XZ @ 0x1800AEE04
 * Callers:
 *     _CProcessSubmixManager::GetAppSubmixClientContext_::_1_::dtor$1 @ 0x1800AF546 (_CProcessSubmixManager--GetAppSubmixClientContext_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30 (--1CApplicationSubmix@@QEAA@XZ.c)
 */

void __fastcall std::unique_ptr<CApplicationSubmix>::~unique_ptr<CApplicationSubmix>(CApplicationSubmix **a1)
{
  CApplicationSubmix *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    CApplicationSubmix::~CApplicationSubmix(*a1);
    operator delete(v1, (const struct std::nothrow_t *)0x40);
  }
}
