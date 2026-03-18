/*
 * XREFs of _lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator() @ 0x180145EB4
 * Callers:
 *     std::_Remove_if_unchecked_CProcessAttributionManager::Record_____ptr64_____ptr64__lambda_25a6e35ac28882ed86e8364a912a7bf9___ @ 0x180145BC4 (std--_Remove_if_unchecked_CProcessAttributionManager--Record_____ptr64_____ptr64__lambda_25a6e35.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

char __fastcall lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator()(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 124) && !*(_QWORD *)(a2 + 112) )
  {
    v2 = 1;
    operator delete((void *)a2);
  }
  return v2;
}
