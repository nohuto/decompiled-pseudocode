/*
 * XREFs of ?CollapseAllViewsForApp@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18003F630
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAppViewManager::CollapseAllViewsForApp(
        CAppViewManager *this,
        __int64 (__fastcall ***a2)(struct IImmersiveApplication *, GUID *, __int64 *))
{
  int v4; // ebx
  __int64 (__fastcall **v5)(struct IImmersiveApplication *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  unsigned int i; // esi
  __int64 *v8; // rbx
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rcx
  __int64 *v13; // rcx
  __int64 v14; // rcx
  __int64 *v16; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-28h] BYREF
  LPVOID pv[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+98h] [rbp+38h] BYREF
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp+40h] BYREF
  int (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+A8h] [rbp+48h] BYREF

  v17[1] = -2LL;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  v4 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *), LPVOID *))(*a2)[4])(
         a2,
         pv);
  if ( v4 >= 0 )
  {
    v17[0] = 0LL;
    v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 11))(
           *((_QWORD *)this + 11),
           &GUID_237c07c9_313b_4b5a_b98d_4f613da23e8f,
           v17);
    if ( v4 >= 0 )
    {
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v16 = 0LL;
      v4 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, __int64 **))(*(_QWORD *)v17[0] + 104LL))(v17[0], pv[0], &v16);
      if ( v4 >= 0 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v16 + 24))(v16, &v19);
        if ( v4 >= 0 && v19 > 1 )
        {
          v21 = 0LL;
          v5 = *a2;
          v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v21);
          v4 = (*v5)((struct IImmersiveApplication *)a2, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v6);
          for ( i = 0; v4 >= 0; ++i )
          {
            if ( i >= v19 )
              break;
            v20 = 0LL;
            v8 = v16;
            v9 = *v16;
            v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v20);
            v4 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v9 + 32))(
                   v8,
                   i,
                   &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                   v10);
            if ( v4 >= 0 && !(unsigned int)SHIsSameObject(v21, v20) )
              v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(**((_QWORD **)this + 11) + 96LL))(
                     *((_QWORD *)this + 11),
                     v20,
                     v21,
                     0LL);
            v11 = v20;
            if ( v20 )
            {
              v20 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v11)[2])(v11);
            }
          }
          v12 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
          }
        }
      }
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v13 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
      }
    }
    v14 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  return (unsigned int)v4;
}
