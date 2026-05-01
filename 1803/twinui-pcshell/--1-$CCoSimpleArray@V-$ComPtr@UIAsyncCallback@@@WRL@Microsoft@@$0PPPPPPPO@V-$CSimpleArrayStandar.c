/*
 * XREFs of ??1?$CCoSimpleArray@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@@@@@QEAA@XZ @ 0x1800F9060
 * Callers:
 *     _NotificationDispatcher::WndProc_::_1_::dtor$1 @ 0x1800B16EC (_NotificationDispatcher--WndProc_--_1_--dtor$1.c)
 *     _NotificationDispatcher::DispatchNotifications_::_1_::dtor$0 @ 0x1800F480B (_NotificationDispatcher--DispatchNotifications_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800167C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAs_ea_1800167C0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCoSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>::~CCoSimpleArray<Microsoft::WRL::ComPtr<IAsyncCallback>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAsyncCallback>>>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  char *v4; // rcx
  unsigned int (__fastcall *v5)(char *, volatile int *); // rax

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      do
      {
        v4 = *(char **)(*(_QWORD *)a1 + 8 * v3);
        if ( v4 )
        {
          *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) = 0LL;
          v5 = *(unsigned int (__fastcall **)(char *, volatile int *))(*(_QWORD *)v4 + 16LL);
          if ( v5 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release )
            Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release(
              v4,
              (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallback,Microsoft::WRL::FtmBase>::Release);
          else
            ((void (__fastcall *)(char *))v5)(v4);
        }
        ++v3;
      }
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
