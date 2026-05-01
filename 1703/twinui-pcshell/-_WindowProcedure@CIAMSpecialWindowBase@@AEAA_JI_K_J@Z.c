/*
 * XREFs of ?_WindowProcedure@CIAMSpecialWindowBase@@AEAA_JI_K_J@Z @ 0x18002CAF8
 * Callers:
 *     ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18002CA60 (-s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

LRESULT __fastcall CIAMSpecialWindowBase::_WindowProcedure(CIAMSpecialWindowBase *this, UINT a2, WPARAM a3, LPARAM a4)
{
  __int64 v4; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)this;
  v12 = 0;
  v9 = (*(__int64 (__fastcall **)(CIAMSpecialWindowBase *))(v4 + 48))(this);
  if ( v12 )
    return v9;
  if ( a2 != 6 )
  {
    if ( a2 != 16 )
    {
      if ( a2 != 70 )
      {
LABEL_12:
        v10 = *((_QWORD *)this + 3);
        if ( v10 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, WPARAM, LPARAM, char *))(*(_QWORD *)v10 + 24LL))(
                 v10,
                 a2,
                 a3,
                 a4,
                 &v12);
          goto LABEL_14;
        }
        return DefWindowProcW(*((HWND *)this + 1), a2, a3, a4);
      }
      *(_DWORD *)(a4 + 24) = 0;
      *(_DWORD *)(a4 + 28) = 0;
    }
    return 0LL;
  }
  if ( !*((_QWORD *)this + 4) )
    goto LABEL_12;
  if ( a3 != 1 )
    return DefWindowProcW(*((HWND *)this + 1), a2, a3, a4);
  if ( *((_DWORD *)this + 4) != 12 || *((HWND *)this + 1) == GetForegroundWindow() )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 4) + 40LL))(
      *((_QWORD *)this + 4),
      19LL,
      *((_QWORD *)this + 1));
LABEL_14:
  if ( !v12 )
    return DefWindowProcW(*((HWND *)this + 1), a2, a3, a4);
  return v9;
}
