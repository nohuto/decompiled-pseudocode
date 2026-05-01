/*
 * XREFs of ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180037624
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x1800353C0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x1800371F8 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x180037BF0 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CClassicWindowManager::_HandleActivation(CClassicWindowManager *this, HWND a2)
{
  int ClassicWindow; // esi
  char v4; // al
  char v5; // di
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  unsigned __int64 v7; // r14
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  HWND v10; // rax
  struct IClassicWindow *v11; // rdi
  struct IClassicWindow *v12; // rdi
  unsigned __int64 v14[2]; // [rsp+20h] [rbp-10h] BYREF
  struct IClassicWindow *v15; // [rsp+70h] [rbp+40h] BYREF
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+78h] [rbp+48h] BYREF

  v14[1] = -2LL;
  v15 = 0LL;
  ClassicWindow = CClassicWindowManager::_FindClassicWindow(this, a2, &v15, v14);
  if ( ClassicWindow < 0 )
    goto LABEL_33;
  v4 = (*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v15 + 160LL))(v15);
  v5 = v4;
  v6 = 0LL;
  v16 = 0LL;
  v7 = v14[0];
  if ( !v14[0] )
  {
    if ( !v4 || (*(unsigned __int8 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v15 + 168LL))(v15) )
      goto LABEL_27;
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v15 + 96LL))(v15);
    if ( *v8 )
    {
      v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v8;
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
      v16 = v6;
    }
    if ( (unsigned int)SHIsSameObject(
                         v6,
                         *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 22) + 8LL)) )
      goto LABEL_27;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 22) + 152LL))(**((_QWORD **)this + 22)) )
  {
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 21) + 16LL))((char *)this + 168, 0LL);
    --v7;
  }
  if ( !v5 )
    goto LABEL_19;
  if ( !v6 )
  {
    v9 = (_QWORD *)(*(__int64 (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v15 + 96LL))(v15);
    if ( !*v9 )
      goto LABEL_19;
    v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*v9;
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
    v16 = v6;
  }
  v10 = (HWND)((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[3])(v6);
  CClassicWindowManager::_FindClassicWindow(this, v10, 0LL, v14);
  if ( v7 < v14[0] )
    ++v7;
  if ( v14[0] )
    ClassicWindow = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                      (char *)this + 168,
                      &v16);
  else
    ClassicWindow = 0;
LABEL_19:
  if ( ClassicWindow >= 0 )
  {
    v11 = v15;
    v14[0] = (unsigned __int64)v15;
    if ( v15 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v15 + 8LL))(v15);
    if ( v7 )
      ClassicWindow = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                        (char *)this + 168,
                        v14);
    else
      ClassicWindow = 0;
    if ( v11 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_27:
    if ( ClassicWindow >= 0 )
    {
      if ( v6 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[9])(v6);
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v15 + 72LL))(v15);
    }
  }
  if ( v6 )
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v6)[2])(v6);
LABEL_33:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)ClassicWindow;
}
