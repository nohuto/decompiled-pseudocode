/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_d190757c23000f52f2ae5d43357c90b2_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x18001DA30
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___ @ 0x180016210 (Windows--Internal--ComTaskPool--QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___ @ 0x18003A420 (Windows--Internal--ComTaskPool--QueueTask__lambda_33ae1f57d3bf46c1270e08142e9d9c0c___.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003BB30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     ?_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x18003D440 (-_HandleMonitorChanged@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z @ 0x180042770 (-OnMessage@CApplicationManager@@UEAA_JI_K_JPEA_N@Z.c)
 *     ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180084070 (-s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Release@?$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@UEAAKXZ @ 0x18001D590 (-Release@-$CRefCountedObject@USERVICE_AVAILABILITY_CHANGED_DATA@@@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_d190757c23000f52f2ae5d43357c90b2_>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx
  __int64 (__fastcall *v5)(void *, const struct std::nothrow_t *); // rax

  v4 = (void *)a1[2];
  if ( v4 )
  {
    a1[2] = 0LL;
    v5 = *(__int64 (__fastcall **)(void *, const struct std::nothrow_t *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::Release )
      CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::Release(
        v4,
        (const struct std::nothrow_t *)CRefCountedObject<SERVICE_AVAILABILITY_CHANGED_DATA>::Release);
    else
      ((void (__fastcall *)(void *))v5)(v4);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
