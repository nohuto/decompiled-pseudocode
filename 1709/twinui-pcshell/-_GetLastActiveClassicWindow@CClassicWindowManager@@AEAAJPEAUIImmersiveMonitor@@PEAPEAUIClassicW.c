/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180038A8C
 * Callers:
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x180037F80 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180038CC8 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18002BFAC (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IClassicWindow **a3)
{
  struct IImmersiveMonitor *v3; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  struct IClassicWindow *v9; // rbx
  bool v10; // di
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  HWND v12; // rax
  bool v13; // si
  _QWORD *v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  HWND v17; // rdx
  HWND v18; // rdi
  int v19; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v20; // [rsp+38h] [rbp-20h]
  __int64 v21; // [rsp+40h] [rbp-18h]
  struct IClassicWindow *v22; // [rsp+48h] [rbp-10h]
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+48h] BYREF
  struct IImmersiveMonitor *v24; // [rsp+A8h] [rbp+50h]
  struct IClassicWindow **v25; // [rsp+B0h] [rbp+58h]
  unsigned int v26; // [rsp+B8h] [rbp+60h]

  v25 = a3;
  v24 = a2;
  v21 = -2LL;
  v3 = a2;
  *a3 = 0LL;
  result = 2147942487LL;
  v26 = -2147024809;
  v6 = *((_QWORD *)this + 26);
  v7 = v6;
  v8 = 0LL;
  if ( v6 )
  {
    do
    {
      v9 = *(struct IClassicWindow **)(*((_QWORD *)this + 25) + 8 * v8);
      v22 = v9;
      if ( v9 )
        (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 8LL))(v9);
      v10 = 1;
      if ( !v3 )
        goto LABEL_12;
      v23 = 0LL;
      if ( (*(int (__fastcall **)(struct IClassicWindow *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v9 + 80LL))(
             v9,
             &v23) >= 0
        && !(unsigned int)SHIsSameObject((int (__fastcall ***)(_QWORD, GUID *, __int64 *))v3, v23)
        && (*(int (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)this + 34) + 80LL))(
             *((_QWORD *)this + 34),
             v23,
             &v19) >= 0 )
      {
        v10 = v19 == 0;
      }
      v11 = v23;
      if ( v23 )
      {
        v23 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
      }
      if ( v10 )
      {
LABEL_12:
        v12 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 24LL))(v9);
        v13 = v10;
        if ( IsIconic(v12) )
          v13 = 0;
        if ( v13 )
        {
          v14 = (_QWORD *)*((_QWORD *)this + 36);
          v20 = v14;
          if ( v14 )
          {
            LODWORD(v23) = 0;
            v15 = *v14;
            v16 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 24LL))(v9);
            if ( (*(int (__fastcall **)(_QWORD *, __int64, _QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v15 + 48))(
                   v20,
                   v16,
                   0LL,
                   &v23) >= 0
              && (_DWORD)v23 == 1 )
            {
              v13 = 0;
            }
          }
          if ( v13 )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 152LL))(v9)
              || (v18 = (HWND)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 24LL))(v9),
                  v18 == CApplicationManagerUtility::g_pIAMGlobals[10].Ptr)
              || CApplicationManagerUtility::IsValidWindow((CApplicationManagerUtility *)v18, v17)
              && IsWindowVisible(v18) )
            {
              *v25 = v9;
              result = 0LL;
              v26 = 0;
              goto LABEL_30;
            }
            v7 = v8;
          }
        }
        v3 = v24;
      }
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v9 + 16LL))(v9);
      ++v8;
    }
    while ( v8 < v6 );
    result = 2147942487LL;
LABEL_30:
    if ( v7 != v6 )
    {
      (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 24) + 16LL))((char *)this + 192, v7);
      return v26;
    }
  }
  return result;
}
