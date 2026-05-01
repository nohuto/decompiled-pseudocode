/*
 * XREFs of ?RuntimeClassInitialize@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x1800A2320
 * Callers:
 *     ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@QEAV23@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@@012@$$QEBQEAVDebounceDetection@CPeopleBarFlyoutExperienceManager@@@Z @ 0x1800A3F40 (--$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@QEA.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(
        CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *this,
        struct CPeopleBarFlyoutExperienceManager::DebounceDetection *a2)
{
  __int64 *ppv; // rax
  HRESULT Instance; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v14);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)ppv);
  v6 = Instance;
  if ( Instance < 0 )
  {
    v7 = 323LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarflyoutexperiencemanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_11;
  }
  v8 = v14;
  v9 = (_QWORD *)((char *)this + 48);
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    *v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  Instance = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, char *))(*(_QWORD *)v8 + 24LL))(
               v8,
               &SID_ImmersiveRawInputProvider,
               &GUID_c1235996_b084_4af2_8663_28f19352097e,
               (char *)this + 48);
  v6 = Instance;
  if ( Instance < 0 )
  {
    v7 = 324LL;
    goto LABEL_9;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *, __int64, char *))(*(_QWORD *)*v9 + 24LL))(
               *v9,
               this,
               1LL,
               (char *)this + 56);
  v6 = Instance;
  if ( Instance < 0 )
  {
    v7 = 326LL;
    goto LABEL_9;
  }
  *((_QWORD *)this + 5) = a2;
  v6 = 0;
LABEL_11:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v6;
}
