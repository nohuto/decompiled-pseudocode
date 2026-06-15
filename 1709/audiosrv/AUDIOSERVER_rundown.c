/*
 * XREFs of AUDIOSERVER_rundown @ 0x18002B350
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x18001D870 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x18002B050 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x18002B404 (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qd @ 0x180067C30 (WPP_SF_qd.c)
 *     WPP_SF_q @ 0x18007DC24 (WPP_SF_q.c)
 */

__int64 __fastcall AUDIOSERVER_rundown(void *a1)
{
  __int64 (__fastcall *v2)(volatile signed __int32 *); // rax
  int v3; // eax
  CAudioDGProcess *v4; // rcx
  _BYTE v6[16]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v7[16]; // [rsp+40h] [rbp-28h] BYREF

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v6, a1);
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 60LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, a1);
  }
  v2 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL);
  if ( v2 == ATL::CComObject<CVADServer>::Release )
    v3 = ATL::CComObject<CVADServer>::Release((volatile signed __int32 *)a1);
  else
    v3 = v2((volatile signed __int32 *)a1);
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(*((_QWORD *)WPP_GLOBAL_Control + 2), 61LL, &WPP_cdc5f6c5d0f339869e28fa9670aa29b0_Traceguids, a1, v3);
  }
  CAudioDGProcess::UnlockADGProcess(v4);
  return EtwEventActivityIdControl(4LL, v7);
}
