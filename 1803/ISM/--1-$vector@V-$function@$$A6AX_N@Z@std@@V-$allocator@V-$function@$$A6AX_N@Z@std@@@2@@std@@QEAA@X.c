/*
 * XREFs of ??1?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA@XZ @ 0x180007F80
 * Callers:
 *     ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800079B0 (-FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$0 @ 0x1800E35F3 (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$0.c)
 *     _MPC3DStateHelper::FireEventsOnInputThread_::_1_::dtor$1 @ 0x1800E35FF (_MPC3DStateHelper--FireEventsOnInputThread_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<std::function<void (bool)>>::~vector<std::function<void (bool)>>(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax

  v2 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_QWORD **)(a1 + 8);
    if ( v2 != v4 )
    {
      do
      {
        v5 = (_QWORD *)v2[7];
        if ( v5 )
        {
          LOBYTE(a2) = v5 != v2;
          (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 32LL))(v5, a2);
          v2[7] = 0LL;
        }
        v2 += 8;
      }
      while ( v2 != v4 );
      v2 = *(_QWORD **)a1;
    }
    v6 = (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 6;
    if ( v6 <= 0x3FFFFFFFFFFFFFFLL )
    {
      if ( v6 << 6 < 0x1000 )
      {
LABEL_13:
        operator delete(v2);
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
        return;
      }
      if ( ((unsigned __int8)v2 & 0x1F) == 0 )
      {
        v7 = *(v2 - 1);
        if ( v7 < (unsigned __int64)v2 && (unsigned __int64)v2 - v7 - 8 <= 0x1F )
        {
          v2 = (_QWORD *)*(v2 - 1);
          goto LABEL_13;
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(0x3FFFFFFFFFFFFFFLL, a2);
    JUMPOUT(0x180008044LL);
  }
}
