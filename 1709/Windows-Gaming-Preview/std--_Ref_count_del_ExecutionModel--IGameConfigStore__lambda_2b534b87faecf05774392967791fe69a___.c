/*
 * XREFs of std::_Ref_count_del_ExecutionModel::IGameConfigStore__lambda_2b534b87faecf05774392967791fe69a___::_Get_deleter @ 0x18000E9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_del_ExecutionModel::IGameConfigStore__lambda_2b534b87faecf05774392967791fe69a___::_Get_deleter(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx

  v3 = __std_type_info_compare(a2 + 8, &qword_18005B228);
  v4 = 0LL;
  if ( !v3 )
    return a1 + 16;
  return v4;
}
