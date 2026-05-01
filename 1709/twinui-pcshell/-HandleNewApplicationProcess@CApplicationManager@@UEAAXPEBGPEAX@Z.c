/*
 * XREFs of ?HandleNewApplicationProcess@CApplicationManager@@UEAAXPEBGPEAX@Z @ 0x18000A3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::HandleNewApplicationProcess(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        void *a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 *v10; // rcx
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF
  int v12; // [rsp+60h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+78h] [rbp+38h] BYREF

  v11[1] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = 0LL;
  if ( (*(int (__fastcall **)(char *, const unsigned __int16 *, __int64 **))(*((_QWORD *)this + 12) + 104LL))(
         (char *)this + 96,
         a2,
         &v13) >= 0
    && (*(int (__fastcall **)(__int64 *, int *))(*v13 + 24))(v13, &v12) >= 0
    && v12 == 1 )
  {
    v11[0] = 0LL;
    v6 = v13;
    v7 = *v13;
    v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v11);
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64))(v7 + 32))(
           v6,
           0LL,
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           v8) >= 0 )
      (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)v11[0] + 128LL))(v11[0], a3);
    v9 = v11[0];
    if ( v11[0] )
    {
      v11[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64 *))(*v10 + 16))(v10);
  }
}
