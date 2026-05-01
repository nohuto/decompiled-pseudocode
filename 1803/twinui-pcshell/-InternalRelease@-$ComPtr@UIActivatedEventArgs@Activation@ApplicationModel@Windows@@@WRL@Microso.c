/*
 * XREFs of ?InternalRelease@?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180080150
 * Callers:
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18007FCC0 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundati.c)
 *     _lambda_5d878536394a9e5d6c15e6b3f5940618_::operator() @ 0x18007FFAC (_lambda_5d878536394a9e5d6c15e6b3f5940618_--operator().c)
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@$$QEAPEAUHSTRING__@@1@Z @ 0x180080070 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@PEAUHSTRING__@@PEAU2@@Details@WRL@Microsoft@.c)
 *     ??1?$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FB22C (--1-$ComPtr@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@AEAPEAUHSTRING__@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchActivatedEventArgs@@AEAPEAUHSTRING__@@1@Z @ 0x180305B10 (--$MakeAndInitialize@VCLaunchActivatedEventArgs@@V1@AEAPEAUHSTRING__@@AEAPEAU2@@Details@WRL@Micr.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c8d4362bec1eb1c88240d8b1e321cf76___::Run @ 0x1803064A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c8d4362bec1eb1c88240d8b1e321cf76___--Run.c)
 *     ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x180306520 (-_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@.c)
 * Callees:
 *     ?Release@CLaunchActivatedEventArgs@@UEAAKXZ @ 0x180027820 (-Release@CLaunchActivatedEventArgs@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::ApplicationModel::Activation::IActivatedEventArgs>::InternalRelease(
        CLaunchActivatedEventArgs **a1)
{
  __int64 result; // rax
  CLaunchActivatedEventArgs *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CLaunchActivatedEventArgs::Release )
      return CLaunchActivatedEventArgs::Release(v3);
    else
      return v4();
  }
  return result;
}
