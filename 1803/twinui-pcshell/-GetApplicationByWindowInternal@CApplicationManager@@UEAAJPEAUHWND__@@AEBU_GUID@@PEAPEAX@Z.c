/*
 * XREFs of ?GetApplicationByWindowInternal@CApplicationManager@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180043DB0
 * Callers:
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180009F28 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?OnTitleUpdated@CAppViewManager@@UEAAJPEAUHWND__@@@Z @ 0x18000AA20 (-OnTitleUpdated@CAppViewManager@@UEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z @ 0x180049650 (-MatchByWindow@CImmersiveApp@@UEBA_NAEBVCTaskWindowFinder@@W4MatchByWindowFlags@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::GetApplicationByWindowInternal(
        CApplicationManager *this,
        HWND a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rbx
  int v11; // edi
  __int64 (__fastcall *v12)(__int64, HWND *, __int64); // rax
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v18)(_QWORD, const struct _GUID *, void **); // rcx
  HWND v20; // [rsp+38h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+90h] [rbp+8h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, const struct _GUID *, void **); // [rsp+98h] [rbp+10h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+20h]

  *a4 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 49) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 48) + 8 * v9);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v11 = -1;
      v22 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
             v10,
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v22) >= 0 )
      {
        v20 = a2;
        v21 = 0LL;
        v12 = *(__int64 (__fastcall **)(__int64, HWND *, __int64))(*(_QWORD *)v22 + 296LL);
        if ( (char *)v12 == (char *)CImmersiveApp::MatchByWindow )
          v13 = CImmersiveApp::MatchByWindow(v22, &v20, 2LL);
        else
          v13 = v12(v22, &v20, 2LL);
        v11 = -1;
        if ( v13 )
          v11 = 0;
        v14 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
      v15 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( !v11 )
        break;
      if ( (unsigned __int64)++v9 >= *((_QWORD *)this + 49) )
        goto LABEL_24;
    }
    v8 = v9;
    v16 = 0;
  }
  else
  {
LABEL_24:
    v16 = -2147319765;
  }
  if ( v16 >= 0 )
  {
    v17 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 48) + 8 * v8);
    v16 = (**v17)(v17, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v23);
    if ( v16 >= 0 )
      v16 = (**v23)(v23, a3, a4);
  }
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v18)[2])(v18);
  }
  return (unsigned int)v16;
}
