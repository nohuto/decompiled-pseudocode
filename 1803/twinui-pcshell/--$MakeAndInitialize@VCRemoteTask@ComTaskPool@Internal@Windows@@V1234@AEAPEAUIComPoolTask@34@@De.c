/*
 * XREFs of ??$MakeAndInitialize@VCRemoteTask@ComTaskPool@Internal@Windows@@V1234@AEAPEAUIComPoolTask@34@@Details@WRL@Microsoft@@YAJPEAPEAVCRemoteTask@ComTaskPool@Internal@Windows@@AEAPEAUIComPoolTask@56@@Z @ 0x180102A4C
 * Callers:
 *     ?s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z @ 0x180111A9C (-s_AddThreadAffineWrapper@ComTaskPool@Internal@Windows@@CAJPEAUIComPoolTask@23@PEAPEAU423@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z @ 0x18010B1CC (-RuntimeClassInitialize@CRemoteTask@ComTaskPool@Internal@Windows@@QEAAJPEAUIComPoolTask@34@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::ComTaskPool::CRemoteTask,Windows::Internal::IComPoolTask * &>(
        Windows::Internal::ComTaskPool::CRemoteTask **a1,
        struct Windows::Internal::IComPoolTask **a2)
{
  Windows::Internal::ComTaskPool::CRemoteTask *v4; // rax
  Windows::Internal::ComTaskPool::CRemoteTask *v5; // rbx
  int v6; // edi
  Windows::Internal::ComTaskPool::CRemoteTask *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (Windows::Internal::ComTaskPool::CRemoteTask *)operator new(
                                                        0x20uLL,
                                                        (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v4);
    v8 = v5;
    *(_QWORD *)v5 = &Windows::Internal::ComTaskPool::CRemoteTask::`vftable';
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    v6 = Windows::Internal::ComTaskPool::CRemoteTask::RuntimeClassInitialize(v5, *a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(Windows::Internal::ComTaskPool::CRemoteTask *))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
