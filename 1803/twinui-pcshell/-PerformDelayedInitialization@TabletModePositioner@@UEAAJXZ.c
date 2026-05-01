/*
 * XREFs of ?PerformDelayedInitialization@TabletModePositioner@@UEAAJXZ @ 0x1802C92E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_836355970810da4d6888afdea5197ae5__&___ptr64_ @ 0x1802C3514 (Windows--Internal--ComTaskPool--QueueTask__lambda_836355970810da4d6888afdea5197ae5__-___ptr64_.c)
 */

__int64 __fastcall TabletModePositioner::PerformDelayedInitialization(TabletModePositioner *this)
{
  char *v1; // rbx
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (char *)this - 24;
  v7 = (char *)this - 24;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
  v7 = v1;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v7);
  v3 = Windows::Internal::ComTaskPool::QueueTask__lambda_836355970810da4d6888afdea5197ae5______ptr64_(
         v2,
         (__int64 *)&v7);
  v4 = v3;
  if ( v3 >= 0 )
    v4 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v3);
  if ( v1 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return v4;
}
