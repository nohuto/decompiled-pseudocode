/*
 * XREFs of ??1ControllerProcessor@@MEAA@XZ @ 0x18003D2D8
 * Callers:
 *     ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x18003D294 (--_GControllerProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003BFD0 (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ?UnregisterControllerProcessor@ControllerNavigationManager@@QEAAJK@Z @ 0x18003C220 (-UnregisterControllerProcessor@ControllerNavigationManager@@QEAAJK@Z.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x18003E9A4 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x180040938 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x18006D66C (--1NonPointerProcessor@@MEAA@XZ.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x1800C047C (--1ManipulationInjector@@QEAA@XZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
void __fastcall ControllerProcessor::~ControllerProcessor(ControllerProcessor *this)
{
  _WORD *v2; // r14
  unsigned int v3; // edi
  _WORD *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // r8
  unsigned int v7; // esi
  int v8; // eax
  __int64 v9; // rcx
  int v10; // r9d
  ControllerNavigationManager *Instance; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _WORD v24[24]; // [rsp+48h] [rbp-50h] BYREF

  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 7) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  if ( *((_DWORD *)this + 59) != 2 )
    ControllerProcessor::NavigationDisable(this);
  if ( *((_BYTE *)this + 3856) )
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 3) + 56LL))(
      *((_QWORD *)this + 3),
      (char *)this + 1232);
  memset(v24, 0, sizeof(v24));
  v2 = (_WORD *)((char *)this + 64);
  v3 = 0;
  v4 = (_WORD *)((char *)this + 64);
  v5 = 24LL;
  v6 = 24LL;
  do
  {
    if ( *v4 != *((_WORD *)this + 80) )
      v24[v3++] = *v4;
    v4 += 2;
    --v6;
  }
  while ( v6 );
  v7 = 0;
  if ( v3 )
  {
    do
    {
      v8 = ControllerProcessor::BuildAndSendKeyboardInputInfo(this, v24[v7], 0);
      if ( v8 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v10 = 2698;
          goto LABEL_15;
        }
LABEL_16:
        if ( IsDebuggerPresent() )
          __debugbreak();
        __fastfail(7u);
      }
      ++v7;
    }
    while ( v7 < v3 );
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 96LL))(*((_QWORD *)this + 35));
    if ( v8 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v10 = 2703;
LABEL_15:
        McTemplateU0qqq(v9, &MinInput_Warning_CheckResult, 12, v10, v8);
      }
      goto LABEL_16;
    }
  }
  do
  {
    *v2 = *((_WORD *)this + 80);
    v2 += 2;
    --v5;
  }
  while ( v5 );
  Instance = ControllerNavigationManager::GetInstance();
  if ( Instance )
    ControllerNavigationManager::UnregisterControllerProcessor(Instance, **((_DWORD **)this + 4));
  v12 = *((_QWORD *)this + 513);
  if ( v12 )
  {
    *((_QWORD *)this + 513) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = *((_QWORD *)this + 512);
  if ( v13 )
  {
    *((_QWORD *)this + 512) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 511);
  if ( v14 )
  {
    *((_QWORD *)this + 511) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = *((_QWORD *)this + 504);
  if ( v15 )
  {
    *((_QWORD *)this + 504) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *((_QWORD *)this + 503);
  if ( v16 )
  {
    *((_QWORD *)this + 503) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  ManipulationInjector::~ManipulationInjector((ControllerProcessor *)((char *)this + 400));
  v17 = *((_QWORD *)this + 36);
  if ( v17 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = *((_QWORD *)this + 35);
  if ( v18 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = *((_QWORD *)this + 34);
  if ( v19 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v20 = *((_QWORD *)this + 33);
  if ( v20 )
  {
    *((_QWORD *)this + 33) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  v21 = *((_QWORD *)this + 32);
  if ( v21 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v22 = *((_QWORD *)this + 31);
  if ( v22 )
  {
    *((_QWORD *)this + 31) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v23 = *((_QWORD *)this + 30);
  if ( v23 )
  {
    *((_QWORD *)this + 30) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  NonPointerProcessor::~NonPointerProcessor(this);
}
