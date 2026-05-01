/*
 * XREFs of ?compare@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAHAEBV12@@Z @ 0x1800F74E8
 * Callers:
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18024AB14 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::compare(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rax

  v2 = a2;
  if ( a2[3] >= 8uLL )
    v2 = (_QWORD *)*a2;
  v3 = a1;
  if ( a1[3] >= 8uLL )
    v3 = (_QWORD *)*a1;
  return std::_Traits_compare<std::char_traits<unsigned short>>(v3, a1[2], v2, a2[2]);
}
