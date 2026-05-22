/*
 * XREFs of ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x180039640
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180039208 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1800395B0 (-ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::OnDeviceArrival(HeatProcessor *this, struct DeviceInfo *a2)
{
  __int64 v4; // rcx
  int v6; // [rsp+20h] [rbp-38h] BYREF
  __int16 v7; // [rsp+24h] [rbp-34h]
  __int16 v8; // [rsp+26h] [rbp-32h]
  __int16 v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]
  __int64 v11; // [rsp+3Ch] [rbp-1Ch]
  int v12; // [rsp+44h] [rbp-14h]

  if ( !a2 )
  {
    if ( IsDebuggerPresent() )
      __debugbreak();
    RaiseFailFastException(0LL, 0LL, 0);
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    v6 = *(_DWORD *)a2;
    v7 = *((_WORD *)a2 + 18);
    v8 = *((_WORD *)a2 + 19);
    v9 = *((_WORD *)a2 + 20);
    v11 = *((_QWORD *)a2 + 3);
    v12 = *((_DWORD *)a2 + 8);
    v10 = 1;
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v4 + 24LL))(v4, &v6);
  }
  return 0LL;
}
