/*
 * XREFs of ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800B657C
 * Callers:
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800B5BA8 (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Run@CMit@@AEAAKXZ @ 0x1800B5BEC (-Run@CMit@@AEAAKXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800B6654 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800CBE30 (_lambda_f3dd36a108fc8d7388aafb7b286089e3_--_lambda_invoker_cdecl_.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x180191F70 (-Run@CDWMInputThread@@AEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMmcssTask::IsActive(CMmcssTask *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 5);
  result = 0LL;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 136) )
      return 1LL;
  }
  return result;
}
