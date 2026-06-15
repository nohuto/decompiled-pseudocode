/*
 * XREFs of ?CreateInstance@?$CComObject@VCAudioSessionManagerProvider@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800377A8
 * Callers:
 *     ?CreateAudioSessionManagerProvider@@YAJXZ @ 0x18003772C (-CreateAudioSessionManagerProvider@@YAJXZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1800238D0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180025D60 (--2@YAPEAX_K@Z.c)
 *     ??0?$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z @ 0x18003784C (--0-$CComObject@VCAudioSessionManagerProvider@@@ATL@@QEAA@PEAX@Z.c)
 *     ?FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ @ 0x1800378E0 (-FinalConstruct@CAudioSessionManagerProvider@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ATL::CComObject<CAudioSessionManagerProvider>::CreateInstance()
{
  unsigned int v0; // edi
  LPVOID v1; // rax
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h]

  g_SingletonAudioSessionManagerProvider = 0LL;
  v0 = -2147024882;
  try
  {
    v1 = operator new(0xA8uLL);
    if ( v1 )
      v2 = ATL::CComObject<CAudioSessionManagerProvider>::CComObject<CAudioSessionManagerProvider>(v1);
    else
      v2 = 0LL;
    v5 = v2;
  }
  catch ( ... )
  {
    v0 = -2147024882;
    v2 = v5;
  }
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v3 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)(v2 + 16));
    if ( v3 >= 0 )
    {
      *(_BYTE *)(v2 + 56) = 1;
      v3 = CAudioSessionManagerProvider::FinalConstruct((CAudioSessionManagerProvider *)v2);
    }
    v0 = 0;
    if ( v3 < 0 )
      v0 = v3;
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 8));
    if ( v0 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
      v2 = 0LL;
    }
  }
  g_SingletonAudioSessionManagerProvider = (CMonitor *)v2;
  return v0;
}
