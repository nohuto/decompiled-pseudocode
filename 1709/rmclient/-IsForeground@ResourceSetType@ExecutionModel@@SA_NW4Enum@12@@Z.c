/*
 * XREFs of ?IsForeground@ResourceSetType@ExecutionModel@@SA_NW4Enum@12@@Z @ 0x180006FA0
 * Callers:
 *     ?ReadInternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAJPEAUHKEY__@@KPEBGN@Z @ 0x180006A30 (-ReadInternalResourceSetTypeInfo@ResourceSetTypeToInfoConverter@ExecutionModel@@AEAAJPEAUHKEY__@.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSetType::IsForeground(unsigned int a1)
{
  bool result; // al
  unsigned __int64 v2; // rax
  __int64 v3; // rcx

  result = 0;
  if ( a1 <= 0x29 )
  {
    v2 = (int)a1;
    v3 = 0x24704100001LL;
    if ( _bittest64(&v3, v2) )
      return 1;
  }
  return result;
}
