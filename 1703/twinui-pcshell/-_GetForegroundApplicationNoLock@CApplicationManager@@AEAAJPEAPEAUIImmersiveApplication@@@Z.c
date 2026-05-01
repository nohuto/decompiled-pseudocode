/*
 * XREFs of ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18000918C
 * Callers:
 *     ?GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180009140 (-GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     _lambda_8d0ab586cd065271f427bd7ab75519d7_::operator() @ 0x18000F544 (_lambda_8d0ab586cd065271f427bd7ab75519d7_--operator().c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetForegroundApplicationNoLock(
        CApplicationManager *this,
        struct IImmersiveApplication **a2)
{
  unsigned int v4; // esi
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF

  *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 64) + 24LL))(*((_QWORD *)this + 64), &v13);
  v4 = 0;
  if ( !v13 )
    return *a2 == 0LL ? 0x8002802B : 0;
  while ( 1 )
  {
    v15 = 0LL;
    v5 = (__int64 *)*((_QWORD *)this + 64);
    v6 = *v5;
    v7 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v15);
    if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64))(v6 + 32))(
           v5,
           v4,
           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
           v7) >= 0 )
      break;
LABEL_7:
    v9 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( ++v4 >= v13 )
      return *a2 == 0LL ? 0x8002802B : 0;
  }
  v14 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, &v14) < 0
    || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 280LL))(v14) & 2) == 0 )
  {
    v8 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    goto LABEL_7;
  }
  (**(void (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v14)(
    v14,
    &GUID_8b14e88b_5663_4caf_b196_c31479262831,
    a2);
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return *a2 == 0LL ? 0x8002802B : 0;
}
