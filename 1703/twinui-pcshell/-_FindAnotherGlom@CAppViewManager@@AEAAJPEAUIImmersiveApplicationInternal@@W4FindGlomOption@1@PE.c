/*
 * XREFs of ?_FindAnotherGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@W4FindGlomOption@1@PEAPEAU2@@Z @ 0x180042F34
 * Callers:
 *     ?StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180042350 (-StealForegroundActivateGlom@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x180042500 (-AcquireForegroundRightForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::_FindAnotherGlom(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        unsigned int a3,
        _QWORD *a4)
{
  __int64 (__fastcall **v7)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v8; // rax
  int v9; // esi
  unsigned int v10; // r14d
  __int64 *v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  __int64 *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20[2]; // [rsp+38h] [rbp-28h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+50h] BYREF
  __int64 *v24; // [rsp+B8h] [rbp+58h] BYREF

  v23 = a3;
  v20[1] = -2LL;
  *a4 = 0LL;
  v20[0] = 0LL;
  v7 = *a2;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(v20);
  v9 = (*v7)(a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v8);
  if ( v9 >= 0 )
  {
    pv[0] = 0LL;
    pv[1] = (LPVOID)-1LL;
    pv[2] = (LPVOID)-1LL;
    v9 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v20[0] + 32LL))(v20[0], pv);
    if ( v9 >= 0 )
    {
      v19 = 0LL;
      v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 112))(
             *(_QWORD *)(a1 + 112),
             &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f,
             &v19);
      if ( v9 >= 0 )
      {
        v24 = 0LL;
        v9 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 **))(*(_QWORD *)v19 + 104LL))(v19, pv[0], &v24);
        if ( v9 >= 0 )
        {
          v9 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v24 + 24))(v24, &v23);
          if ( v9 >= 0 )
          {
            v9 = -2147023728;
            if ( v23 > 1 )
            {
              v10 = 0;
              if ( v23 )
              {
                while ( 1 )
                {
                  v22 = 0LL;
                  v11 = v24;
                  v12 = *v24;
                  v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v22);
                  if ( (*(int (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v12 + 32))(
                         v11,
                         v10,
                         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                         v13) >= 0
                    && !(unsigned int)SHIsSameObject((int (__fastcall ***)(_QWORD, GUID *, __int64 *))a2, v22)
                    && ((unsigned __int8 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v22)[52])(v22) )
                  {
                    break;
                  }
                  v14 = v22;
                  if ( v22 )
                  {
                    v22 = 0LL;
                    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v14)[2])(v14);
                  }
                  if ( ++v10 >= v23 )
                    goto LABEL_16;
                }
                *a4 = v22;
                v9 = 0;
              }
            }
          }
        }
LABEL_16:
        v15 = v24;
        if ( v24 )
        {
          v24 = 0LL;
          (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
        }
      }
      v16 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  v17 = v20[0];
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v9;
}
