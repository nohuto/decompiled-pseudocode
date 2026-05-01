/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180074450
 * Callers:
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18007451C (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsPr.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180074650 (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0I.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked *a1)
{
  void (*v1)(void); // rax

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
  if ( (char *)v1 == (char *)CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StopActivity )
  {
    CortanaProactiveTelemetry::CortanaExperienceManager_ShowDocked::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)CortanaProactiveTelemetry::CortanaExperienceManager_Hide::StopActivity )
  {
    CortanaProactiveTelemetry::CortanaExperienceManager_Hide::StopActivity(a1);
  }
  else
  {
    v1();
  }
}
