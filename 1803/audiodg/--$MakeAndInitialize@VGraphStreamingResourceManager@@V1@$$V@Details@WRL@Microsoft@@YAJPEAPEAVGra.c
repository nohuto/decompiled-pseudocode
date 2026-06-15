/*
 * XREFs of ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140002E34
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140002DA0 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140002FD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudi.c)
 *     ??0GraphStreamingResourceManager@@QEAA@XZ @ 0x140003E40 (--0GraphStreamingResourceManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001C338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14002E470 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnk_ea_14002E470.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<GraphStreamingResourceManager,GraphStreamingResourceManager,>(
        GraphStreamingResourceManager **a1)
{
  unsigned int v2; // ebx
  GraphStreamingResourceManager *v3; // rax
  GraphStreamingResourceManager *v4; // rax
  GraphStreamingResourceManager *v5; // rdi
  void (__fastcall *v6)(GraphStreamingResourceManager *); // rax
  void (__fastcall *v7)(GraphStreamingResourceManager *); // rax

  v2 = 0;
  *a1 = 0LL;
  v3 = (GraphStreamingResourceManager *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v4 = GraphStreamingResourceManager::GraphStreamingResourceManager(v3);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v4 + 8LL);
      if ( (char *)v6 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::AddRef )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::AddRef(v5);
      else
        v6(v5);
    }
    *a1 = v5;
    if ( v5 )
    {
      v7 = *(void (__fastcall **)(GraphStreamingResourceManager *))(*(_QWORD *)v5 + 16LL);
      if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::Release(v5);
      else
        v7(v5);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
