/*
 * XREFs of ?DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x1800A74F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z @ 0x1800A7674 (-CallCallbackWithResult@InputRedirectionComponent@@AEAAJUtagMsgRoutingInfo@@J@Z.c)
 *     ?GetValueForBitFlags@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJKPEAPEAVInputRedirectionTarget@@@Z @ 0x1800A7804 (-GetValueForBitFlags@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJKPEAPEAVInputRe.c)
 *     ?RemoveValue@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJAEBQEAVInputRedirectionTarget@@@Z @ 0x1800A795C (-RemoveValue@-$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$03@@QEAAJAEBQEAVInputRedirection.c)
 *     ?IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z @ 0x1800A7D6C (-IsTargetForRoutingInfoAndHwnd@InputRedirectionTarget@@QEAA_NUtagMsgRoutingInfo@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputRedirectionComponent::DisableInputRedirection(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int128 *a4,
        unsigned int a5)
{
  __int64 v5; // r15
  unsigned int v6; // ebx
  unsigned int v7; // edi
  _DWORD *v9; // rax
  unsigned int v10; // r9d
  __int128 v13; // xmm1
  int v14; // eax
  __int64 v15; // rcx
  int ValueForBitFlags; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int128 v20; // xmm1
  _QWORD v21[2]; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+60h] [rbp-10h]

  v5 = a1 + 72;
  v6 = 0;
  v7 = 0;
  v9 = (_DWORD *)(a1 + 72);
  v10 = 0;
  while ( (a5 & *v9) == 0 )
  {
    ++v10;
    v9 += 4;
    if ( v10 >= 4 )
      goto LABEL_4;
  }
  v21[0] = 0LL;
  ValueForBitFlags = FixedSizeBitFlagMap<InputRedirectionTarget *,4>::GetValueForBitFlags(a1 + 72, a5, v21);
  v6 = ValueForBitFlags;
  if ( ValueForBitFlags < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 366, ValueForBitFlags);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v19 = v21[0];
  if ( !v21[0]
    || (v20 = a3[1],
        v22 = *a3,
        v24 = *((_QWORD *)a3 + 4),
        v23 = v20,
        !(unsigned __int8)InputRedirectionTarget::IsTargetForRoutingInfoAndHwnd(v21[0], &v22, a2)) )
  {
LABEL_4:
    v7 = -2147024891;
    goto LABEL_5;
  }
  FixedSizeBitFlagMap<InputRedirectionTarget *,4>::RemoveValue(v5, v21);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_5:
  if ( *(_DWORD *)a4 )
  {
    v13 = a4[1];
    v22 = *a4;
    v24 = *((_QWORD *)a4 + 4);
    v23 = v13;
    v14 = InputRedirectionComponent::CallCallbackWithResult(a1 - 8, &v22, v7);
    v6 = v14;
    if ( v14 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 385, v14);
  }
  return v6;
}
