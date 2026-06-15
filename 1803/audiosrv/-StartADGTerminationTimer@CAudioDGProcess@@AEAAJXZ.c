/*
 * XREFs of ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180007CB4
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18002C1E0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18002C760 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002D1A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClien.c)
 *     ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x18002D5E0 (--_GCAPOWrapperClient@@UEAAPEAXI@Z.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@KPEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002F7B0 (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180097734 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     AUDIOSERVER_rundown @ 0x1800C3020 (AUDIOSERVER_rundown.c)
 *     HAUDIOSRVDIAGNOSTICS_rundown @ 0x180107BE0 (HAUDIOSRVDIAGNOSTICS_rundown.c)
 * Callees:
 *     ?SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z @ 0x180035E40 (-SetTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@PEAU_FILETIME@@KK@Z.c)
 *     ?CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z @ 0x180035E60 (-CreateTimer@CAudioThreadPool@@UEAAPEAU_TP_TIMER@@P6AXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU2@@Z1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDGProcess::StartADGTerminationTimer(struct _TP_TIMER **this)
{
  CAudioThreadPool *v2; // rbx
  LSTATUS ValueW; // eax
  unsigned int v4; // ecx
  struct _TP_TIMER *v5; // rdx
  void (__fastcall *v6)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int); // rax
  struct _TP_TIMER *(__fastcall *v8)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *); // rax
  struct _TP_TIMER *Timer; // rax
  unsigned int pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+58h] [rbp+10h] BYREF
  struct _FILETIME v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = ThreadPool;
  if ( !this[16] )
  {
    v8 = *(struct _TP_TIMER *(__fastcall **)(CAudioThreadPool *__hidden, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), void *))(*(_QWORD *)ThreadPool + 8LL);
    if ( v8 == CAudioThreadPool::CreateTimer )
      Timer = CAudioThreadPool::CreateTimer(
                ThreadPool,
                (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                this);
    else
      Timer = v8(
                ThreadPool,
                (void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *))CAudioDGProcess::OnADGInactivityTimerFiredHandler,
                this);
    this[16] = Timer;
  }
  pcbData = 4;
  ValueW = RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
             L"AudioDGInactiveTimeout",
             0x18u,
             0LL,
             &pvData,
             &pcbData);
  v4 = pvData;
  if ( ValueW )
    v4 = 300;
  v5 = this[16];
  pvData = v4;
  if ( v5 )
  {
    v12 = (struct _FILETIME)(-10000000LL * v4);
    v6 = *(void (__fastcall **)(CAudioThreadPool *__hidden, struct _TP_TIMER *, struct _FILETIME *, unsigned int, unsigned int))(*(_QWORD *)v2 + 24LL);
    if ( v6 == CAudioThreadPool::SetTimer )
      CAudioThreadPool::SetTimer(v2, v5, &v12, 0, 0);
    else
      v6(v2, v5, &v12, 0, 0);
  }
  return 0LL;
}
