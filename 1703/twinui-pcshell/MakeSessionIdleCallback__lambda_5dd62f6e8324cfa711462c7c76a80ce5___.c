/*
 * XREFs of MakeSessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___ @ 0x18018E5D0
 * Callers:
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x18018DF2C (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____lambda_5dd62f6e8324cfa711462c7c76a80ce5__&___ptr64_ @ 0x18018E668 (Microsoft--WRL--Details--Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____l.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MakeSessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx

  Microsoft::WRL::Details::Make_SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5_____lambda_5dd62f6e8324cfa711462c7c76a80ce5______ptr64_();
  v4 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
