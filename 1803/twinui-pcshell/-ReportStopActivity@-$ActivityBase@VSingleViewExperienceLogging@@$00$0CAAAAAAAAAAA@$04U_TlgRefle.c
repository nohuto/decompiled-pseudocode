/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18006E32C
 * Callers:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x180069C38 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18006B1D0 (-OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventAr.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006E21C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18006E568 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        SingleViewExperienceTelemetry::OnPropertyChanged *a1)
{
  void (*v1)(void); // rax

  v1 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
  if ( (char *)v1 == (char *)SingleViewExperienceTelemetry::OnPropertyChanged::StopActivity )
  {
    SingleViewExperienceTelemetry::OnPropertyChanged::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StopActivity )
  {
    SingleViewExperienceTelemetry::CancelWaitForWindowReadyForPresentation::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)SingleViewExperienceTelemetry::Uncloak::StopActivity )
  {
    SingleViewExperienceTelemetry::Uncloak::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)SingleViewExperienceTelemetry::RemoveKeepAlive::StopActivity )
  {
    SingleViewExperienceTelemetry::RemoveKeepAlive::StopActivity(a1);
  }
  else if ( (char *)v1 == (char *)SingleViewExperienceTelemetry::Launch::StopActivity )
  {
    SingleViewExperienceTelemetry::Launch::StopActivity(a1);
  }
  else
  {
    v1();
  }
}
