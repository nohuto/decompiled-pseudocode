/*
 * XREFs of ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180033880
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x1800332A4 (-UpdateNavigationState@ControllerProcessor@@AEAAJW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180034D98 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1800351DC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerProcessor::TurnNavigationOn(ControllerProcessor *this)
{
  int v2; // edi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v10; // [rsp+58h] [rbp+10h]

  v9 = 0LL;
  ControllerProcessor::LiftPressedVirtualKeys(this, 1);
  if ( *((_BYTE *)this + 5880) )
  {
    v2 = 0;
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 611) + 40LL))(
           *((_QWORD *)this + 611),
           (char *)this + 4896,
           0LL);
    *((_BYTE *)this + 5880) = v2 >= 0;
  }
  if ( v2 < 0 )
    goto LABEL_22;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  v4 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 72LL))(v3, &v9);
  if ( v2 < 0 )
    goto LABEL_22;
  v5 = v9;
  v6 = *((_QWORD *)this + 861);
  if ( v6 )
  {
    *((_QWORD *)this + 861) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v5 + 48LL))(
         v5,
         *((unsigned int *)this + 1224),
         0LL,
         (char *)this + 6888);
  if ( v2 < 0
    || (v10 = *(struct tagPOINT *)((char *)this + 1956),
        v2 = ControllerProcessor::SetPointerPosition(this, v10, 1),
        v2 < 0)
    || (*((_BYTE *)this + 6896) = 1, (*((_BYTE *)this + 1952) & 0x20) == 0)
    && (v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 884) + 80LL))(
               *((_QWORD *)this + 884),
               0LL,
               *((_QWORD *)this + 887)),
        v2 < 0) )
  {
LABEL_22:
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v2;
}
