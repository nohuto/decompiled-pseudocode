/*
 * XREFs of ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x180059B34
 * Callers:
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x180059AB8 (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000B390 (--2@YAPEAX_K@Z.c)
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x180017218 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z @ 0x180059F60 (--0-$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z.c)
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x180059FF4 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18006339C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800B505C (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance()
{
  unsigned int v0; // edi
  LPVOID v1; // rax
  volatile int *v2; // rdx
  __int64 v3; // rbx
  int v4; // eax
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  v6[4] = -2LL;
  g_SingletonAudioSessionManagerProvider = 0LL;
  v0 = -2147024882;
  try
  {
    v1 = operator new(0xA8uLL);
    if ( v1 )
      v3 = ATL::CComObject<CAudioSessionManagerProvider>::CComObject<CAudioSessionManagerProvider>(v1);
    else
      v3 = 0LL;
    v7 = v3;
  }
  catch ( ... )
  {
    v2 = (volatile int *)v6;
    v0 = -2147024882;
    v3 = v7;
  }
  if ( v3 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 8), v2);
    v4 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v3 + 16));
    if ( v4 >= 0 )
    {
      *(_BYTE *)(v3 + 56) = 1;
      v4 = CAudioSessionManagerProvider::FinalConstruct((CAudioSessionManagerProvider *)v3);
    }
    v0 = 0;
    if ( v4 < 0 )
      v0 = v4;
    CVADServer::InternalFinalConstructRelease((CVADServer *)v3);
    if ( v0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 1LL);
      v3 = 0LL;
    }
  }
  g_SingletonAudioSessionManagerProvider = (CAudioSessionManagerProvider *)v3;
  return v0;
}
