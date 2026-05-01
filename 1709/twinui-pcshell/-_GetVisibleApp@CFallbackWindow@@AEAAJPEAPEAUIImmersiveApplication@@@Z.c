/*
 * XREFs of ?_GetVisibleApp@CFallbackWindow@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18002EE4C
 * Callers:
 *     ?GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z @ 0x18002F030 (-GetPropertyValue@CFallbackWindow@@UEAAJHPEAUtagVARIANT@@@Z.c)
 *     ?Invoke@CFallbackWindow@@UEAAJXZ @ 0x18002F1C0 (-Invoke@CFallbackWindow@@UEAAJXZ.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFallbackWindow::_GetVisibleApp(CFallbackWindow *this, struct IImmersiveApplication **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall **v4)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // esi
  unsigned int v7; // r14d
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rcx
  __int64 v16[3]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+80h] [rbp+38h] BYREF
  int v18; // [rsp+88h] [rbp+40h] BYREF
  __int64 v19; // [rsp+90h] [rbp+48h] BYREF
  __int64 *v20; // [rsp+98h] [rbp+50h] BYREF

  v16[1] = -2LL;
  *a2 = 0LL;
  v16[0] = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  v4 = *v3;
  v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v16);
  v6 = (*v4)(v3, &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a, v5);
  if ( v6 >= 0 )
  {
    v20 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v16[0] + 24LL))(v16[0], &v20);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v20 + 24))(v20, &v17);
      if ( v6 >= 0 )
      {
        v6 = -2147023728;
        v7 = 0;
        if ( v17 )
        {
          while ( 1 )
          {
            v19 = 0LL;
            v8 = v20;
            v9 = *v20;
            v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v19);
            if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v9 + 32))(
                   v8,
                   v7,
                   &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                   v10) >= 0
              && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 64LL))(v19, &v18) >= 0
              && v18 )
            {
              break;
            }
            v11 = v19;
            if ( v19 )
            {
              v19 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            if ( ++v7 >= v17 )
              goto LABEL_14;
          }
          v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v19)(
                 v19,
                 &GUID_8b14e88b_5663_4caf_b196_c31479262831,
                 a2);
          v12 = v19;
          if ( v19 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
      }
    }
LABEL_14:
    v13 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
    }
  }
  v14 = v16[0];
  if ( v16[0] )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return (unsigned int)v6;
}
