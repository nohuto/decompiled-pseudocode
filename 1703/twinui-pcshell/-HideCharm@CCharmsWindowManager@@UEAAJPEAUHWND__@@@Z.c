/*
 * XREFs of ?HideCharm@CCharmsWindowManager@@UEAAJPEAUHWND__@@@Z @ 0x18003B9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCharmsWindowManager::HideCharm(CCharmsWindowManager *this, HWND a2)
{
  PSRWLOCK v2; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  signed int v8; // ebx
  HWND v9; // rax
  HWND v10; // rbp
  DWORD WindowThreadProcessId; // ebx
  __int64 v12; // rcx
  bool v13; // si
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  CurrentThreadId = GetCurrentThreadId();
  v7 = CurrentThreadId - LODWORD(v2[9].Ptr);
  v8 = CurrentThreadId != LODWORD(v2[9].Ptr) ? 0x8001010E : 0;
  if ( v8 < 0 )
    return (unsigned int)v8;
  v8 = (*((_DWORD *)this + 16) & 8) != 0 ? 0x80004004 : 0;
  if ( (*((_DWORD *)this + 16) & 8) != 0 )
    return (unsigned int)v8;
  v9 = (HWND)(*(__int64 (__fastcall **)(char *, __int64, __int64))(*((_QWORD *)this + 1) + 56LL))(
               (char *)this + 8,
               v6,
               v7);
  v10 = v9;
  v8 = v9 == 0LL ? 0x80070057 : 0;
  if ( !v9 )
    return (unsigned int)v8;
  if ( !a2 )
    goto LABEL_8;
  if ( a2 != v9
    || (WindowThreadProcessId = GetWindowThreadProcessId(a2, 0LL), WindowThreadProcessId != GetCurrentThreadId()) )
  {
    v8 = -2147024809;
LABEL_8:
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  v12 = *((_QWORD *)this + 9);
  v15[1] = 0LL;
  v15[0] = v10;
  v13 = (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 56LL))(v12, v15) >= 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 4) + 112LL))(**((_QWORD **)this + 4));
  if ( v8 >= 0 )
    *((_DWORD *)this + 16) &= 0xFFFFFFFA;
  if ( v13 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 64LL))(*((_QWORD *)this + 9));
  return (unsigned int)v8;
}
