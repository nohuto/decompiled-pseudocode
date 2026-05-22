/*
 * XREFs of ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x180007DF0
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x180007AB0 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$0 @ 0x1800CC73E (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$1 @ 0x1800CC74A (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(
        unsigned __int64 *a1,
        __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax

  v2 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    while ( v2 != v4 )
    {
      v5 = *(_QWORD *)(v2 + 56);
      if ( v5 )
      {
        LOBYTE(a2) = v5 != v2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a2);
        *(_QWORD *)(v2 + 56) = 0LL;
      }
      v2 += 64LL;
    }
    v6 = *a1;
    v7 = (__int64)(a1[2] - *a1) >> 6;
    if ( v7 <= 0x3FFFFFFFFFFFFFFLL )
    {
      if ( v7 << 6 < 0x1000 )
      {
LABEL_13:
        operator delete((void *)v6);
        *a1 = 0LL;
        a1[1] = 0LL;
        a1[2] = 0LL;
        return;
      }
      if ( (v6 & 0x1F) == 0 )
      {
        v8 = *(_QWORD *)(v6 - 8);
        if ( v8 < v6 )
        {
          v6 = v6 - v8 - 8;
          if ( v6 <= 0x1F )
          {
            v6 = v8;
            goto LABEL_13;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v6);
    JUMPOUT(0x180007EAELL);
  }
}
