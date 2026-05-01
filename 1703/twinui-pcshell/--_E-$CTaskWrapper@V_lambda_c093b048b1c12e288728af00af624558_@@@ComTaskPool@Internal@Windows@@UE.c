/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_c093b048b1c12e288728af00af624558_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180185BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18018B014 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18018B440 (--1-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

char *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c093b048b1c12e288728af00af624558_>::`vector deleting destructor'(
        char *Block,
        char a2)
{
  char *v2; // rbx
  __int64 v5; // rcx

  v2 = Block + 48;
  *((_QWORD *)Block + 6) = &SingleViewExperienceTelemetry::Launch::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(Block + 48);
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(v2);
  WindowsDeleteString(*((HSTRING *)Block + 4));
  *((_QWORD *)Block + 4) = 0LL;
  v5 = *((_QWORD *)Block + 2);
  if ( v5 )
  {
    *((_QWORD *)Block + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
