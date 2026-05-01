/*
 * XREFs of ?HideCharm@CCharmsWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x18003CC40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCharmsWindowManager::HideCharm(CCharmsWindowManager *this, HWND a2)
{
  PSRWLOCK v2; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  HWND v8; // rax
  HWND v9; // r14
  DWORD WindowThreadProcessId; // ebx
  __int64 v11; // rcx
  bool v12; // bl
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  CurrentThreadId = GetCurrentThreadId();
  v7 = CurrentThreadId != LODWORD(v2[9].Ptr) ? 0x8001010E : 0;
  if ( LODWORD(v2[9].Ptr) != CurrentThreadId )
    return v7;
  v7 = (*((_DWORD *)this + 16) & 8) != 0 ? 0x80004004 : 0;
  if ( (*((_DWORD *)this + 16) & 8) != 0 )
    return v7;
  v8 = (HWND)(*(__int64 (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this + 1) + 56LL))(
               (char *)this + 8,
               v6,
               CurrentThreadId - LODWORD(v2[9].Ptr));
  v9 = v8;
  v7 = v8 == 0LL ? 0x80070057 : 0;
  if ( !v8 )
    return v7;
  if ( !a2 )
    goto LABEL_8;
  if ( a2 != v8
    || (WindowThreadProcessId = GetWindowThreadProcessId(a2, 0LL), WindowThreadProcessId != GetCurrentThreadId()) )
  {
    v7 = -2147024809;
LABEL_8:
    if ( (v7 & 0x80000000) != 0 )
      return v7;
  }
  v11 = *((_QWORD *)this + 9);
  v14[1] = 0LL;
  v14[0] = v9;
  v12 = (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 56LL))(v11, v14) >= 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 4) + 112LL))(**((_QWORD **)this + 4));
  if ( (v7 & 0x80000000) == 0 )
    *((_DWORD *)this + 16) &= 0xFFFFFFFA;
  if ( v12 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9));
  return v7;
}
