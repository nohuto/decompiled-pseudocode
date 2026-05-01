/*
 * XREFs of _std::shared_ptr_DDAScreenCapture_::_Resetp_DDAScreenCapture__::_1_::catch$1 @ 0x1801EC4F9
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDDAScreenCapture@@QEAAPEAXI@Z @ 0x1800E782C (--_GDDAScreenCapture@@QEAAPEAXI@Z.c)
 *     _CxxThrowException_0 @ 0x1801E2E88 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::shared_ptr_DDAScreenCapture_::_Resetp_DDAScreenCapture__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  DDAScreenCapture *v2; // rcx

  v2 = *(DDAScreenCapture **)(a2 + 88);
  if ( v2 )
    DDAScreenCapture::`scalar deleting destructor'(v2);
  throw;
}
