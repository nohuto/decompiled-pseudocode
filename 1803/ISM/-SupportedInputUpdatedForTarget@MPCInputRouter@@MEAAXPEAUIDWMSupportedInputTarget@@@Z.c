/*
 * XREFs of ?SupportedInputUpdatedForTarget@MPCInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180086480
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180044860 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18004A1E8 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z @ 0x180080A80 (-SupportedInputUpdatedForTarget@DWMInputRouter@@MEAAXPEAUIDWMSupportedInputTarget@@@Z.c)
 *     ?MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z @ 0x18008469C (-MPCInputRouter_SupportedInputUpdatedForTarget_@ISMTracing@@QEAAXKPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::SupportedInputUpdatedForTarget(
        MPCInputRouter *this,
        struct IDWMSupportedInputTarget *a2)
{
  int v3; // eax
  __int64 (__fastcall **v4)(struct IDWMSupportedInputTarget *, GUID *, __int64 *); // rbx
  __int64 *v5; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  unsigned int v9; // r14d
  __int64 *v10; // rdi
  __int64 *v11; // rbx
  int v12; // eax
  __int64 **v13; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rcx
  ISMTracing *v18; // rcx
  __int64 v19[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  unsigned int v21; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+48h] BYREF

  v19[1] = -2LL;
  DWMInputRouter::SupportedInputUpdatedForTarget(this, a2);
  if ( !MPCManager::s_instance )
    return;
  v21 = 0;
  v3 = (*(__int64 (__fastcall **)(struct IDWMSupportedInputTarget *, unsigned int *))(*(_QWORD *)a2 + 40LL))(a2, &v21);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x33C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_28;
  }
  if ( (v21 & 0x18040) != 0 )
  {
    v19[0] = 0LL;
    v4 = *(__int64 (__fastcall ***)(struct IDWMSupportedInputTarget *, GUID *, __int64 *))a2;
    v5 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IFocusInputTarget>>(v19);
    v6 = (*v4)(a2, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v5);
    v7 = retaddr;
    if ( v6 >= 0 )
    {
      v22 = 0;
      v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19[0] + 32LL))(v19[0], &v22);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x346,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          (const char *)(unsigned int)v8);
        JUMPOUT(0x180086663LL);
      }
      v9 = v22;
      if ( v22 )
      {
        v10 = (__int64 *)*((_QWORD *)MPCManager::s_instance + 8);
        v11 = (__int64 *)*v10;
        while ( v11 != v10 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11[5] + 56LL))(v11[5], v9);
          if ( v12 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x10D,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
              (const char *)(unsigned int)v12);
          if ( !*((_BYTE *)v11 + 25) )
          {
            v13 = (__int64 **)v11[2];
            if ( *((_BYTE *)v13 + 25) )
            {
              for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25) && v11 == (__int64 *)i[2]; i = (__int64 *)i[1] )
                v11 = i;
              v11 = i;
            }
            else
            {
              v11 = (__int64 *)v11[2];
              for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
                v11 = j;
            }
          }
        }
      }
      v16 = v19[0];
      if ( v19[0] )
      {
        v19[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      goto LABEL_23;
    }
LABEL_28:
    wil::details::in1diag3::FailFast_Hr(
      v7,
      (void *)0x342,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
LABEL_23:
  v17 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v17 )
  {
    if ( *v17 )
    {
      ISMTracing::Instance();
      ISMTracing::MPCInputRouter_SupportedInputUpdatedForTarget_(v18, v21, (struct IUnknown *)a2);
    }
  }
}
