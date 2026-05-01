/*
 * XREFs of _IsComponentAppView_::_1_::catch$2 @ 0x1801D68D2
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall IsComponentAppView_::_1_::catch_2(__int64 a1, __int64 a2)
{
  const char *v2; // r9

  v2 = (const char *)*(unsigned int *)(*(_QWORD *)(a2 + 48) + 28LL);
  *(_DWORD *)(a2 + 96) = (_DWORD)v2;
  if ( (int)v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      *(wil::details::in1diag3 **)(a2 + 72),
      384LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.h",
      v2);
  return &loc_1801D684A;
}
