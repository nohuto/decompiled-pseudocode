/*
 * XREFs of ?CreateCallInstance@TelephonyController@@UEAAJPEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x1800ED3C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?ObtainKsControl@TelephonyController@@AEAAJIPEAPEAUIKsControl@@@Z @ 0x1800EE978 (-ObtainKsControl@TelephonyController@@AEAAJIPEAPEAUIKsControl@@@Z.c)
 *     ?CreateInstance@TelephonyControllerCallInstance@@SAJ_KPEAUIKsControl@@PEAU_TelephonyInstanceData@@PEAPEAUITelephonyControllerCallInstance@@@Z @ 0x1800EEFB8 (-CreateInstance@TelephonyControllerCallInstance@@SAJ_KPEAUIKsControl@@PEAU_TelephonyInstanceData.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyController::CreateCallInstance(
        TelephonyController *this,
        struct _TelephonyInstanceData *a2,
        struct ITelephonyControllerCallInstance **a3)
{
  struct IKsControl *v6; // rbx
  int v7; // edi
  unsigned __int64 v8; // rcx
  int Instance; // eax
  struct IKsControl *v11[2]; // [rsp+20h] [rbp-468h] BYREF
  _BYTE v12[1056]; // [rsp+30h] [rbp-458h] BYREF

  v11[1] = (struct IKsControl *)-2LL;
  v6 = 0LL;
  v11[0] = 0LL;
  memset(v12, 0, 0x418uLL);
  if ( a3 )
  {
    v7 = (*(__int64 (__fastcall **)(TelephonyController *, _BYTE *))(*(_QWORD *)this + 56LL))(this, v12);
    if ( v7 >= 0 )
    {
      v7 = TelephonyController::ObtainKsControl(this, *((_DWORD *)a2 + 1), v11);
      v6 = v11[0];
      if ( v7 >= 0 )
      {
        Instance = TelephonyControllerCallInstance::CreateInstance(v8, v11[0], a2, a3);
        v7 = 0;
        if ( Instance < 0 )
          v7 = Instance;
      }
    }
  }
  else
  {
    v7 = -2147467261;
  }
  if ( v6 )
    ((void (__fastcall *)(struct IKsControl *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v7;
}
