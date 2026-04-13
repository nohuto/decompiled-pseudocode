/*
 * XREFs of ??1?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180046518
 * Callers:
 *     ??1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@QEAA@XZ @ 0x180045DB0 (--1HandleResumableTaskNotificationActivity@MobilityExperienceTelemetry@Telemetry@MobilityExperie.c)
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800261B4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VMobilityExperienceLogging@Telemetry@MobilityExperience@@$00$0IAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800465CC (--1-$ActivityData@VMobilityExperienceLogging@Telemetry@MobilityExperience@@U_TlgReflectorTag_Par.c)
 */

__int64 *__fastcall wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  volatile signed __int32 *v2; // rcx
  char *v3; // rdi
  __int64 *result; // rax
  __int64 **v5; // rbx
  void *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(volatile signed __int32 **)(a1 + 304);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      v3 = *(char **)(a1 + 304);
      if ( v3 )
      {
        wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(v3 + 8);
        operator delete(v3);
      }
    }
    *(_QWORD *)(a1 + 304) = 0LL;
  }
  result = (__int64 *)wil::ActivityBase<MobilityExperience::Telemetry::MobilityExperienceLogging,1,140737488355328,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<MobilityExperience::Telemetry::MobilityExperienceLogging,_TlgReflectorTag_Param0IsProviderType>(a1 + 56);
  v5 = (__int64 **)(a1 + 8);
  if ( *((_DWORD *)v5 + 6) )
  {
    if ( *((_DWORD *)v5 + 6) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v6, v7, (const char *)0x8007029CLL);
    *((_DWORD *)v5 + 6) = 0;
    for ( result = *v5; *result; *v5 = result )
    {
      v8 = **v5;
      if ( (__int64 **)v8 == v5 )
      {
        result = v5[2];
        **v5 = (__int64)result;
        break;
      }
      result = (__int64 *)(v8 + 16);
    }
    *v5 = 0LL;
  }
  return result;
}
