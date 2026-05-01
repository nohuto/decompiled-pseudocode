/*
 * XREFs of ?_GetLastActiveModernApp@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18003D0D0
 * Callers:
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x18003D06C (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x18010F918 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationState@CImmersiveApp@@UEBA?AW4IMM_APP_STATE@@XZ @ 0x1800499C0 (-GetApplicationState@CImmersiveApp@@UEBA-AW4IMM_APP_STATE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetLastActiveModernApp(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 i; // rsi
  __int64 v7; // r14
  __int64 (__fastcall *v8)(__int64); // rax
  char ApplicationState; // al
  struct IImmersiveApplicationInternal *v10; // rax
  unsigned int v11; // ebx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  int v16; // [rsp+90h] [rbp+40h] BYREF
  struct IImmersiveApplicationInternal *v17; // [rsp+98h] [rbp+48h] BYREF

  v17 = 0LL;
  v4 = *((_QWORD *)this + 96);
  v15 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = *((_QWORD *)this + 79);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 78) + 8 * i);
    v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 280LL);
    if ( v8 == CImmersiveApp::GetApplicationState )
      ApplicationState = CImmersiveApp::GetApplicationState(v7);
    else
      ApplicationState = v8(v7);
    if ( (ApplicationState & 4) != 0 )
    {
      if ( !v4
        || (v13 = *(_QWORD *)v4,
            v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 384LL))(v7),
            (*(int (__fastcall **)(__int64, __int64, _QWORD, int *))(v13 + 48))(v4, v14, 0LL, &v16) < 0)
        || v16 != 1 )
      {
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v17, v7);
      }
    }
    if ( v17 )
      break;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v10 = v17;
  v17 = 0LL;
  *a2 = v10;
  v11 = v10 == 0LL ? 0x80070490 : 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return v11;
}
