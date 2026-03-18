/*
 * XREFs of ??0CPortClient@@QEAA@IPEAX@Z @ 0x1400015E0
 * Callers:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x140001130 (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?LpcSyncFlush@CDwmAppHost@@AEAAJXZ @ 0x140001E70 (-LpcSyncFlush@CDwmAppHost@@AEAAJXZ.c)
 *     ?StartKernelRedirection@CDwmAppHost@@AEAAJXZ @ 0x140001F10 (-StartKernelRedirection@CDwmAppHost@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

CPortClient *__fastcall CPortClient::CPortClient(CPortClient *this, __int64 a2, void *a3)
{
  __int64 (__usercall *v4)@<rax>(CPortClient *__hidden@<rcx>, unsigned int@<edx>, const void *@<r8>, __int16@<r9w>, void *, __int16, int *); // rax
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)this = &CPortClient::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = GetProcessHeap();
  GetNativeSystemInfo(&SystemInfo);
  if ( SystemInfo.wProcessorArchitecture != 9 )
  {
    if ( !SystemInfo.wProcessorArchitecture || SystemInfo.wProcessorArchitecture == 5 )
    {
      *((_QWORD *)this + 1) = CPortClient::ConnectWithNameNative;
      *((_QWORD *)this + 2) = CPortClient::SendSimpleAsyncRequestNative;
      *((_QWORD *)this + 3) = CPortClient::SendComplexAsyncRequestNative;
      v4 = CPortClient::SendComplexSyncRequestNative;
      goto LABEL_3;
    }
    if ( SystemInfo.wProcessorArchitecture != 12 )
      return this;
  }
  *((_QWORD *)this + 1) = CPortClient::ConnectWithNameNative;
  *((_QWORD *)this + 2) = CPortClient::SendSimpleAsyncRequestWow64;
  *((_QWORD *)this + 3) = CPortClient::SendComplexAsyncRequestWow64;
  v4 = CPortClient::SendComplexSyncRequestWow64;
LABEL_3:
  *((_QWORD *)this + 4) = v4;
  return this;
}
