/*
 * XREFs of ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800151F8
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x18000C370 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x180015364 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetLastActiveModernApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  __int64 *v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 i; // rbp
  struct IImmersiveApplicationInternal *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  struct IImmersiveApplicationInternal *v10; // rcx
  struct IImmersiveApplicationInternal *v11; // rax
  int v13; // [rsp+80h] [rbp+8h] BYREF
  struct IImmersiveApplicationInternal *v14; // [rsp+88h] [rbp+10h]

  v14 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 89);
  if ( v4 )
    (*(void (__fastcall **)(__int64 *))(*v4 + 8))(v4);
  v5 = *((_QWORD *)this + 72);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(struct IImmersiveApplicationInternal **)(*((_QWORD *)this + 71) + 8 * i);
    if ( ((*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v7 + 280LL))(v7) & 4) != 0 )
    {
      if ( !v4
        || (v8 = *v4,
            v9 = (*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v7 + 384LL))(v7),
            (*(int (__fastcall **)(__int64 *, __int64, _QWORD, int *))(v8 + 48))(v4, v9, 0LL, &v13) < 0)
        || v13 != 1 )
      {
        if ( v14 != v7 )
        {
          (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v7 + 8LL))(v7);
          v10 = v14;
          v14 = v7;
          if ( v10 )
            (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    if ( v14 )
      break;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64 *))(*v4 + 16))(v4);
  v11 = v14;
  *a2 = v14;
  return v11 == 0LL ? 0x80070490 : 0;
}
