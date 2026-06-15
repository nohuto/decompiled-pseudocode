/*
 * XREFs of ??$_Uninitialized_move_al_unchecked1@PEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@PEAV12@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@0@PEAV10@00AEAU?$_Wrap_alloc@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@std@@@0@U_General_ptr_iterator_tag@0@U_Any_tag@0@@Z @ 0x1800AE650
 * Callers:
 *     ??$emplace_back@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@QEAAX$$QEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@1@@Z @ 0x1800AE9E0 (--$emplace_back@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix@@@std@@.c)
 * Callees:
 *     <none>
 */

CApplicationSubmix **__fastcall std::_Uninitialized_move_al_unchecked1<std::unique_ptr<CApplicationSubmix> *,std::unique_ptr<CApplicationSubmix> *,std::allocator<std::unique_ptr<CApplicationSubmix>>>(
        unsigned __int64 a1,
        unsigned __int64 a2,
        CApplicationSubmix **a3)
{
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  CApplicationSubmix *v6; // rax
  CApplicationSubmix **v8; // [rsp+50h] [rbp+18h]
  CApplicationSubmix **v9; // [rsp+58h] [rbp+20h]

  v8 = a3;
  v9 = a3;
  try
  {
    v3 = 0LL;
    v4 = (a2 - a1 + 7) >> 3;
    if ( a1 > a2 )
      v4 = 0LL;
    if ( v4 )
    {
      v5 = a1 - (_QWORD)a3;
      do
      {
        if ( a3 )
        {
          v6 = *(CApplicationSubmix **)((char *)a3 + v5);
          *(CApplicationSubmix **)((char *)a3 + v5) = 0LL;
          *a3 = v6;
        }
        v8 = ++a3;
        ++v3;
      }
      while ( v3 != v4 );
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::unique_ptr<CApplicationSubmix>>,std::unique_ptr<CApplicationSubmix> *>(
      v9,
      v8);
    throw;
  }
  return a3;
}
