/*
 * XREFs of ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x180075A64
 * Callers:
 *     ?UpdateMMCSSTask@CMit@@AEAAJXZ @ 0x1800759CC (-UpdateMMCSSTask@CMit@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x180075B38 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800C0D60 (_lambda_f3dd36a108fc8d7388aafb7b286089e3_--_lambda_invoker_cdecl_.c)
 *     ?Run@CMit@@AEAAKXZ @ 0x180119940 (-Run@CMit@@AEAAKXZ.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x1801A0940 (-Run@CDWMInputThread@@AEAAKXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMmcssTask::IsActive(CMmcssTask *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 5);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 136) )
      return 1;
  }
  return result;
}
