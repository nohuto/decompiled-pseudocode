/*
 * XREFs of ?EnableInputRedirection@InputRedirectionComponent@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1800A73B0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1800A7674 (-CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?SetValueForBitFlags@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJKAEBQEAVInputRedirectionTarget@@@Z @ 0x1800A7864 (-SetValueForBitFlags@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJKAEBQEAVInputRe.c)
 *     ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x1800A7AD0 (-Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionComponent::EnableInputRedirection(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char a7)
{
  unsigned int v9; // esi
  unsigned int v10; // r9d
  _DWORD *v11; // rax
  int v12; // edi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  _QWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v19[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v20; // [rsp+60h] [rbp-18h]

  v18[1] = -2LL;
  v9 = 0;
  if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 || a6 == 0x4000 )
  {
    v10 = 0;
    v11 = (_DWORD *)(a1 + 72);
    while ( (a6 & *v11) == 0 )
    {
      ++v10;
      v11 += 4;
      if ( v10 >= 4 )
      {
        v18[0] = 0LL;
        v12 = InputRedirectionTarget::Create(a2, a3, a4, v18, a6, a7);
        if ( v12 < 0 )
        {
          v13 = v18[0];
        }
        else
        {
          v13 = 0LL;
          v12 = FixedSizeBitFlagMap<InputRedirectionTarget *,4>::SetValueForBitFlags(a1 + 72, a6, v18);
        }
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        goto LABEL_12;
      }
    }
  }
  v12 = -2147024891;
LABEL_12:
  if ( *(_DWORD *)a5 )
  {
    v19[0] = *(_OWORD *)a5;
    v19[1] = *(_OWORD *)(a5 + 16);
    v20 = *(_QWORD *)(a5 + 32);
    v14 = InputRedirectionComponent::CallCallbackWithResult(a1 - 8, v19, (unsigned int)v12);
    v9 = v14;
    if ( v14 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 345, v14);
  }
  return v9;
}
