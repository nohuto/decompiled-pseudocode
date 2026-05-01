/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18003734C
 * Callers:
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x180036840 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180037554 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002A6B4 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IClassicWindow **a3)
{
  struct IImmersiveMonitor *v4; // rax
  unsigned int v6; // r12d
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  struct IClassicWindow *v10; // rbx
  bool v11; // bp
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  HWND v13; // rax
  BOOL v14; // eax
  bool v15; // cl
  HWND v16; // rdx
  HWND v17; // rbp
  int v19; // [rsp+80h] [rbp+8h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+88h] [rbp+10h]
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+18h] BYREF
  struct IClassicWindow *v22; // [rsp+98h] [rbp+20h]

  v20 = a2;
  v4 = a2;
  *a3 = 0LL;
  v6 = -2147024809;
  v7 = *((_QWORD *)this + 23);
  v8 = v7;
  v9 = 0LL;
  if ( !v7 )
    return v6;
  while ( 1 )
  {
    v10 = *(struct IClassicWindow **)(*((_QWORD *)this + 22) + 8 * v9);
    v22 = v10;
    if ( v10 )
    {
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 8LL))(v10);
      v4 = v20;
    }
    v11 = 1;
    if ( !v4 )
      goto LABEL_14;
    v21 = 0LL;
    if ( (*(int (__fastcall **)(struct IClassicWindow *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v10 + 80LL))(
           v10,
           &v21) >= 0
      && !(unsigned int)SHIsSameObject((int (__fastcall ***)(_QWORD, GUID *, __int64 *))v20, v21)
      && (*(int (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 31) + 80LL))(
           *((_QWORD *)this + 31),
           v21,
           &v19) >= 0 )
    {
      v11 = v19 == 0;
    }
    v12 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
    }
    if ( v11 )
    {
LABEL_14:
      v13 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 24LL))(v10);
      v14 = IsIconic(v13);
      v15 = v11;
      if ( v14 )
        v15 = 0;
      if ( v15 )
        break;
    }
LABEL_20:
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 16LL))(v10);
    if ( ++v9 >= v7 )
      goto LABEL_23;
    v4 = v20;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 152LL))(v10) )
  {
    v17 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v10 + 24LL))(v10);
    if ( v17 != CApplicationManagerUtility::g_pIAMGlobals[10].Ptr
      && (!CApplicationManagerUtility::IsValidWindow((CApplicationManagerUtility *)v17, v16) || !IsWindowVisible(v17)) )
    {
      v8 = v9;
      goto LABEL_20;
    }
  }
  *a3 = v10;
  v6 = 0;
LABEL_23:
  if ( v8 != v7 )
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 21) + 16LL))((char *)this + 168, v8);
  return v6;
}
