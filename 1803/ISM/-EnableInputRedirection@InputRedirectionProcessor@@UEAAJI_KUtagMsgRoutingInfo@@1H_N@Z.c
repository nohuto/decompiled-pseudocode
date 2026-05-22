/*
 * XREFs of ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800B50E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1800B53D8 (-CallCallbackWithResult@InputRedirectionProcessor@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x1800B5974 (-Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionProcessor::EnableInputRedirection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  __int64 v7; // rbx
  unsigned int v9; // edi
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rbx
  char v15; // cl
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD v19[2]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]

  v19[1] = -2LL;
  v7 = a4;
  v9 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 || a6 == 0x4000 )
  {
    a4 = 0LL;
    v10 = (_DWORD *)(a1 + 72);
    while ( (a6 & *v10) == 0 )
    {
      a4 = (unsigned int)(a4 + 1);
      v10 += 4;
      if ( (unsigned int)a4 >= 4 )
      {
        v19[0] = 0LL;
        v12 = InputRedirectionTarget::Create(a2, a3, v7, v19, a6, a7);
        if ( v12 < 0 )
        {
          v14 = v19[0];
        }
        else
        {
          v13 = v19[0];
          v14 = 0LL;
          a4 = 0LL;
          v15 = 0;
          if ( a6 )
          {
            v16 = 0LL;
            v12 = 0;
            v11 = (_DWORD *)(a1 + 72);
            do
            {
              if ( *v11 == a6 )
              {
                v17 = 2 * v16;
                goto LABEL_22;
              }
              if ( (a6 & *v11) != 0 )
                goto LABEL_8;
              if ( !v15 && !*v11 )
              {
                a4 = (unsigned int)v16;
                v15 = 1;
              }
              v16 = (unsigned int)(v16 + 1);
              v11 += 4;
            }
            while ( (unsigned int)v16 < 4 );
            if ( v15 )
            {
              v17 = 2LL * (unsigned int)a4;
              *(_DWORD *)(a1 + 16LL * (unsigned int)a4 + 72) = a6;
LABEL_22:
              *(_QWORD *)(a1 + 8 * v17 + 80) = v13;
              goto LABEL_24;
            }
            v12 = -2147467259;
            if ( IsDebuggerPresent() )
              __debugbreak();
            RaiseFailFastException(0LL, 0LL, 0);
          }
          else
          {
LABEL_8:
            v12 = -2147024809;
          }
        }
LABEL_24:
        if ( v14 )
          (*(void (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*(_QWORD *)v14 + 16LL))(v14, v11, v13, a4);
        goto LABEL_27;
      }
    }
  }
  v12 = -2147024891;
LABEL_27:
  if ( *(_DWORD *)a5 )
  {
    v20[0] = *(_OWORD *)a5;
    v20[1] = *(_OWORD *)(a5 + 16);
    v21 = *(_QWORD *)(a5 + 32);
    return (unsigned int)InputRedirectionProcessor::CallCallbackWithResult(a1 - 8, v20, (unsigned int)v12, a4);
  }
  return v9;
}
