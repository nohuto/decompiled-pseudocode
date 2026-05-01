/*
 * XREFs of ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x1800314C8
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180030D80 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x180024D24 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ??0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z @ 0x180026C50 (--0CThreadUseDetector@@QEAA@PEAVCObjectWithThreadUseDetection@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CImmersiveMode::_PrepareDeferredNotifications(unsigned __int64 a1, int a2)
{
  struct IObjectArray *v4; // rbx
  int CallbackArray; // eax
  struct IObjectArray *v6; // rcx
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  int v9; // ecx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  int v11; // [rsp+30h] [rbp-28h]
  struct IObjectArray *v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v14; // [rsp+70h] [rbp+18h]

  CThreadUseDetector::CThreadUseDetector(
    (CThreadUseDetector *)&lpCriticalSection,
    (struct CObjectWithThreadUseDetection *)((a1 + 136) & ((unsigned __int128)-(__int128)a1 >> 64)));
  v4 = 0LL;
  v12 = 0LL;
  if ( a2 )
  {
    CallbackArray = AgileRegistrationList::GetCallbackArray((RTL_SRWLOCK *)(a1 + 248), &v12);
    v4 = v12;
    if ( CallbackArray >= 0
      && (((int (__fastcall *)(struct IObjectArray *, int *))v12->lpVtbl->GetCount)(v12, &v13) < 0 || !v13) )
    {
      v6 = v4;
      v4 = 0LL;
      v12 = 0LL;
      ((void (__fastcall *)(struct IObjectArray *))v6->lpVtbl->Release)(v6);
    }
  }
  v7 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v14 = v7;
  if ( v7 )
  {
    v9 = *(_DWORD *)(a1 + 200);
    *v7 = a2;
    v7[1] = v9;
    *((_QWORD *)v7 + 1) = v4;
    if ( v4 )
      ((void (__fastcall *)(struct IObjectArray *))v4->lpVtbl->AddRef)(v4);
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)(a1 + 304) = v8;
  if ( v4 )
    ((void (__fastcall *)(struct IObjectArray *))v4->lpVtbl->Release)(v4);
  if ( v11 >= 0 )
    LeaveCriticalSection(lpCriticalSection);
}
