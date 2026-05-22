/*
 * XREFs of ??1?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18005689C
 * Callers:
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x180057664 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18005911C (--1MPCGestureHandler@@UEAA@XZ.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$5 @ 0x1800E68DF (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$5.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax

  v3 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD **)(a1 + 8);
    if ( v3 != v4 )
    {
      do
      {
        if ( *v3 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
        ++v3;
      }
      while ( v3 != v4 );
      v3 = *(_QWORD **)a1;
    }
    v5 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v3) >> 3;
    if ( v5 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v5 < 0x1000 )
      {
LABEL_13:
        operator delete(v3);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v3 & 0x1F) == 0 )
      {
        v6 = *(v3 - 1);
        if ( v6 < (unsigned __int64)v3 && (unsigned __int64)v3 - v6 - 8 <= 0x1F )
        {
          v3 = (_QWORD *)*(v3 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x1FFFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x180056961LL);
  }
}
