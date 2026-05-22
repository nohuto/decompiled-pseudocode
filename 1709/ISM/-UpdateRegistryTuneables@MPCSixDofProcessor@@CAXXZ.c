/*
 * XREFs of ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x180051180
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180052360 (--$_Callback_once@V-$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@st.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_8a62f5b69e88a23bdde8affb13e85828__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_wil::RegistryChangeKind_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800524E0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_8a62f5b69e88a23bdde8affb13e85828__0__wistd--detai.c)
 * Callees:
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180049F08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCSixDofProcessor_HomeEventTuneablesChanged_@ISMTracing@@QEAAXMMMMMMMMMMMMMMMMMMMK@Z @ 0x18004D230 (-MPCSixDofProcessor_HomeEventTuneablesChanged_@ISMTracing@@QEAAXMMMMMMMMMMMMMMMMMMMK@Z.c)
 *     _lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator() @ 0x1800514E8 (_lambda_c7f0c5c3b28e0e6d5f38edbc00079334_--operator().c)
 */

void MPCSixDofProcessor::UpdateRegistryTuneables(void)
{
  LSTATUS ValueW; // eax
  int v1; // ecx
  _DWORD *v2; // rcx
  ISMTracing *v3; // rcx
  _QWORD v4[2]; // [rsp+B0h] [rbp+47h] BYREF
  int pvData; // [rsp+D0h] [rbp+67h] BYREF
  DWORD pcbData; // [rsp+D8h] [rbp+6Fh] BYREF

  pvData = 0;
  v4[0] = &pvData;
  pcbData = 4;
  v4[1] = &pcbData;
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(
    v4,
    L"HomeMaxLinearVelocity_X",
    &MPCSixDofProcessor::s_homeMaximumLinearVelocity);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxLinearVelocity_Y", &flt_18010E4FC);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxLinearVelocity_Z", &flt_18010E500);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(
    v4,
    L"HomeMaxAngularVelocity_X",
    &MPCSixDofProcessor::s_homeMaximumAngularVelocity);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxAngularVelocity_Y", &flt_18010E4CC);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxAngularVelocity_Z", &flt_18010E4D0);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(
    v4,
    L"HomeMaxLinearAcceleration_X",
    &MPCSixDofProcessor::s_homeMaximumLinearAcceleration);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxLinearAcceleration_Y", &flt_18010E4DC);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxLinearAcceleration_Z", &flt_18010E4E0);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(
    v4,
    L"HomeMaxAngularAcceleration_X",
    &MPCSixDofProcessor::s_homeMaximumAngularAcceleration);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxAngularAcceleration_Y", &flt_18010E50C);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxAngularAcceleration_Z", &flt_18010E510);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(
    v4,
    L"HomeMaxWeightedDistance_X",
    &MPCSixDofProcessor::s_homeMaximumWeightedDistance);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxWeightedDistance_Y", &flt_18010E4EC);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(v4, L"HomeMaxWeightedDistance_Z", &flt_18010E4F0);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(
    v4,
    L"HomeDistanceWeight",
    &MPCSixDofProcessor::s_homeDistanceWeight);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(
    v4,
    L"HomeAllowTimeBetweenClicksInMS",
    &MPCSixDofProcessor::s_homeAllowTimeBetweenClicksInSec);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(
    v4,
    L"HomeSecondClickLinearMultiplier",
    &MPCSixDofProcessor::s_homeSecondClickLinearMultiplier);
  lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(
    v4,
    L"HomeSecondClickAngularMultiplier",
    &MPCSixDofProcessor::s_homeSecondClickAngularMultiplier);
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\ISM\\6dof",
             L"HomeCancelExceedThresholdMaxCount",
             0x10u,
             0LL,
             &pvData,
             &pcbData);
  v1 = *(_DWORD *)MPCSixDofProcessor::s_homeCancelExceedThresholdMaxCount;
  if ( !ValueW )
    v1 = pvData;
  *(_DWORD *)MPCSixDofProcessor::s_homeCancelExceedThresholdMaxCount = v1;
  v2 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v2 )
  {
    if ( *v2 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged_(
        v3,
        MPCSixDofProcessor::s_homeMaximumAngularVelocity,
        flt_18010E4CC,
        flt_18010E4D0,
        MPCSixDofProcessor::s_homeMaximumLinearVelocity,
        flt_18010E4FC,
        flt_18010E500,
        MPCSixDofProcessor::s_homeMaximumAngularAcceleration,
        flt_18010E50C,
        flt_18010E510,
        MPCSixDofProcessor::s_homeMaximumLinearAcceleration,
        flt_18010E4DC,
        flt_18010E4E0,
        MPCSixDofProcessor::s_homeMaximumWeightedDistance,
        flt_18010E4EC,
        flt_18010E4F0,
        MPCSixDofProcessor::s_homeDistanceWeight,
        MPCSixDofProcessor::s_homeAllowTimeBetweenClicksInSec,
        MPCSixDofProcessor::s_homeSecondClickLinearMultiplier,
        MPCSixDofProcessor::s_homeSecondClickAngularMultiplier,
        MPCSixDofProcessor::s_homeCancelExceedThresholdMaxCount[0]);
    }
  }
}
