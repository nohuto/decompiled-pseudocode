/*
 * XREFs of ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180038D98
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180036AE0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x180038938 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x1800393C0 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::_HandleActivation(CClassicWindowManager *this, HWND a2)
{
  int ClassicWindow; // esi
  char v4; // al
  char v5; // di
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  unsigned __int64 v7; // r14
  char v8; // al
  bool v9; // cl
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  HWND v12; // rax
  struct IClassicWindow *v13; // rdi
  struct IClassicWindow *v14; // rdi
  unsigned __int64 v16[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IClassicWindow *v17; // [rsp+70h] [rbp+40h] BYREF
  int (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF

  v16[1] = -2LL;
  v17 = 0LL;
  ClassicWindow = CClassicWindowManager::_FindClassicWindow(this, a2, &v17, v16);
  if ( ClassicWindow < 0 )
    goto LABEL_34;
  v4 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 160LL))(v17);
  v5 = v4;
  v6 = 0LL;
  v18 = 0LL;
  v7 = v16[0];
  if ( !v16[0] )
  {
    if ( !v4 )
      goto LABEL_28;
    v8 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 168LL))(v17);
    v9 = v8 == 0;
    if ( !v8 )
    {
      v10 = (_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 96LL))(v17);
      if ( *v10 )
      {
        v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v10;
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 8LL))(*v10);
        v18 = v6;
      }
      v9 = (unsigned int)SHIsSameObject(
                           v6,
                           *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 25) + 8LL)) == 0;
    }
    if ( !v9 )
      goto LABEL_28;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 25) + 152LL))(**((_QWORD **)this + 25)) )
  {
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 24) + 16LL))((char *)this + 192, 0LL);
    --v7;
  }
  if ( !v5 )
    goto LABEL_20;
  if ( !v6 )
  {
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 96LL))(v17);
    if ( !*v11 )
      goto LABEL_20;
    v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v11;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 8LL))(*v11);
    v18 = v6;
  }
  v12 = (HWND)((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[3])(v6);
  CClassicWindowManager::_FindClassicWindow(this, v12, 0LL, v16);
  if ( v7 < v16[0] )
    ++v7;
  if ( v16[0] )
    ClassicWindow = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                      (char *)this + 192,
                      &v18);
  else
    ClassicWindow = 0;
LABEL_20:
  if ( ClassicWindow >= 0 )
  {
    v13 = v17;
    v16[0] = (unsigned __int64)v17;
    if ( v17 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 8LL))(v17);
    if ( v7 )
      ClassicWindow = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                        (char *)this + 192,
                        v16);
    else
      ClassicWindow = 0;
    if ( v13 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_28:
    if ( ClassicWindow >= 0 )
    {
      if ( v6 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[9])(v6);
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v17 + 72LL))(v17);
    }
  }
  if ( v6 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
LABEL_34:
  v14 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)ClassicWindow;
}
