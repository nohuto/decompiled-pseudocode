/*
 * XREFs of ?SetImportanceVectorUsingMask@ViewWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800531D0
 * Callers:
 *     ?SetImportanceVector@ViewWrapperBase@@UEAAJI@Z @ 0x18004EB00 (-SetImportanceVector@ViewWrapperBase@@UEAAJI@Z.c)
 * Callees:
 *     ?SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z @ 0x180055DE0 (-SetImportanceVectorForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@I@Z.c)
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180087F90 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1801E5198 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

__int64 __fastcall ViewWrapperBase::SetImportanceVectorUsingMask(__int64 a1, WINBOOL a2, int a3)
{
  RTL_SRWLOCK *v4; // r14
  __int64 v5; // rbx
  __int16 v7; // dx
  int v8; // r8d
  __int16 v9; // cx
  struct IUnknown *v10; // rdx
  ViewManagerBridge *v11; // rcx
  void (__fastcall *v12)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int); // rax
  __int64 v13; // r8
  _DWORD *v14; // rcx
  ViewManagerInteropTraceLogging *v15; // rcx
  WINBOOL v17; // eax
  char v18; // cl
  char v19; // cl
  LPVOID Context; // [rsp+50h] [rbp+30h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp+38h] BYREF
  WINBOOL v22; // [rsp+60h] [rbp+40h]

  fPending = a2;
  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 144) + 296LL);
  v5 = a3;
  AcquireSRWLockExclusive(v4);
  v22 = a2;
  if ( v5 == -1 )
  {
    v7 = a2;
  }
  else
  {
    v17 = *(_DWORD *)(a1 + 324);
    v22 = v17;
    if ( (v5 & 1) != 0 )
    {
      v7 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)a2) & 1;
      LOWORD(v17) = v7;
    }
    else
    {
      v7 = v22;
    }
    if ( (v5 & 2) != 0 )
    {
      v7 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)a2) & 0xE;
      LOWORD(v17) = v7;
    }
    if ( (v5 & 4) != 0 )
    {
      v7 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)a2) & 0x30;
      LOWORD(v17) = v7;
    }
    if ( (v5 & 8) != 0 )
    {
      v7 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)a2) & 0x40;
      LOWORD(v17) = v7;
    }
    if ( (v5 & 0x10) != 0 )
    {
      v7 = v17 ^ (v17 ^ a2) & 0x80;
      LOWORD(v17) = v7;
    }
    if ( (v5 & 0x20) != 0 )
    {
      v7 = v17 ^ (v17 ^ a2) & 0x100;
      LOWORD(v17) = v7;
    }
    if ( (v5 & 0x40) != 0 )
    {
      v7 = v17 ^ (v17 ^ a2) & 0x200;
      LOWORD(v17) = v7;
    }
    if ( (v5 & 0x80) != 0 )
    {
      v7 = v17 ^ (v17 ^ a2) & 0x400;
      LOWORD(v17) = v7;
    }
    if ( (v5 & 0x100) != 0 )
      v7 = v17 ^ (v17 ^ a2) & 0x800;
    v18 = BYTE2(v22);
    if ( (v5 & 0x200) != 0 )
      v18 = BYTE2(fPending);
    BYTE2(v22) = v18;
    v19 = HIBYTE(v22);
    if ( (v5 & 0x400) != 0 )
      v19 = HIBYTE(fPending);
    HIBYTE(v22) = v19;
  }
  v8 = *(_DWORD *)(a1 + 432);
  if ( (v8 & 4) == 0 )
    v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)*(_WORD *)(a1 + 324)) & 0xF;
  v9 = *(_WORD *)(a1 + 324);
  if ( (v8 & 8) == 0 )
    v7 ^= ((unsigned __int8)v7 ^ (unsigned __int8)v9) & 0x31;
  LOWORD(v22) = (v7 ^ v9) & 0xC0 ^ v7;
  if ( v22 != *(_DWORD *)(a1 + 324) )
  {
    *(_DWORD *)(a1 + 324) = v22;
    v10 = *(struct IUnknown **)(a1 + 168);
    if ( v10 )
    {
      v11 = *(ViewManagerBridge **)(*(_QWORD *)(a1 + 144) + 520LL);
      v12 = *(void (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned int))(*(_QWORD *)v11 + 72LL);
      v13 = *(unsigned int *)(a1 + 324);
      if ( v12 == ViewManagerBridge::SetImportanceVectorForView )
        ViewManagerBridge::SetImportanceVectorForView(v11, v10, v13);
      else
        v12(v11, v10, v13);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        qword_180438968 = &IamTraceLogging::`vftable';
        Context = &qword_180438968;
        atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
        InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
      }
      v14 = (_DWORD *)*((_QWORD *)Context + 1);
      if ( v14 && *v14 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = &qword_180438968;
          qword_180438968 = &IamTraceLogging::`vftable';
          atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
          ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_180438968);
          InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_180438968);
        }
        ViewManagerInteropTraceLogging::CommitImportanceVector_(
          v15,
          *(_DWORD *)(a1 + 124),
          (const union _RM_ACTIVITY_IMPORTANCE *)(a1 + 324));
      }
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
