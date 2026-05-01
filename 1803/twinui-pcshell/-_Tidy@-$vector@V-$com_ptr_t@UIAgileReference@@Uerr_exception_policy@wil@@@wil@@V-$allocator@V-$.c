/*
 * XREFs of ?_Tidy@?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18004E840
 * Callers:
 *     ??_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z @ 0x18001EA00 (--_EAgileCallbackArray@AgileRegistrationList@@UEAAPEAXI@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001EAE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObjectArray@@VF.c)
 *     ??1?$vector@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800F76F4 (--1-$vector@V-$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$com_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>::_Tidy(__int64 a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        if ( *v1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
        ++v1;
      }
      while ( v1 != v3 );
      v1 = *(_QWORD **)a1;
    }
    v4 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v1) >> 3;
    if ( v4 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v4 < 0x1000 )
      {
LABEL_9:
        operator delete(v1);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v1 & 0x1F) == 0 )
      {
        v5 = *(v1 - 1);
        if ( v5 < (unsigned __int64)v1 && (unsigned __int64)v1 - v5 - 8 <= 0x1F )
        {
          v1 = (_QWORD *)*(v1 - 1);
          goto LABEL_9;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL);
    JUMPOUT(0x18004E8DDLL);
  }
}
