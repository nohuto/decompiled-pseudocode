/*
 * XREFs of ?_Change_array@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@2@_K1@Z @ 0x1800AF8E8
 * Callers:
 *     ??$emplace_back@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@1@@Z @ 0x1800AE9E0 (--$emplace_back@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30 (--1CApplicationSubmix@@QEAA@XZ.c)
 */

CApplicationSubmix **__fastcall std::vector<std::unique_ptr<CApplicationSubmix>>::_Change_array(
        CApplicationSubmix ***a1,
        CApplicationSubmix **a2,
        __int64 a3,
        __int64 a4)
{
  CApplicationSubmix **v4; // rdi
  CApplicationSubmix **v9; // r14
  CApplicationSubmix *v10; // rbp
  CApplicationSubmix **result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    while ( v4 != v9 )
    {
      v10 = *v4;
      if ( *v4 )
      {
        CApplicationSubmix::~CApplicationSubmix(*v4);
        operator delete(v10, (const struct std::nothrow_t *)0x40);
      }
      ++v4;
    }
    std::_Deallocate(*a1, a1[2] - *a1, 8uLL);
  }
  *a1 = a2;
  a1[1] = &a2[a3];
  result = &a2[a4];
  a1[2] = result;
  return result;
}
