/*
 * XREFs of _lambda_4e68ad2abbd0bb666338069fbee19963_::operator() @ 0x18008B674
 * Callers:
 *     std::_Invoker_functor::_Call__lambda_4e68ad2abbd0bb666338069fbee19963__&___ptr64_ParsedPenWorkspaceLayout_const_&___ptr64_ @ 0x18008D30C (std--_Invoker_functor--_Call__lambda_4e68ad2abbd0bb666338069fbee19963__-___ptr64_ParsedPenWorksp.c)
 * Callees:
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18008AE6C (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_4e68ad2abbd0bb666338069fbee19963_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  *(_DWORD *)a2 = 0;
  *(_WORD *)(a2 + 4) = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_DWORD *)(a2 + 56) = 0;
  *(_WORD *)(a2 + 60) = 0;
  *(_DWORD *)(a2 + 64) = 0;
  StartLayout::SelectionData::Copy(
    (StartLayout::SelectionData *)a2,
    (const struct StartLayout::SelectionData *)(a3 + 32));
  return a2;
}
