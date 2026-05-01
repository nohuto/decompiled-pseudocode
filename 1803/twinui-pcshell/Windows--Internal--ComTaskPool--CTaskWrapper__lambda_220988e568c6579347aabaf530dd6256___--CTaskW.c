/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_220988e568c6579347aabaf530dd6256___::CTaskWrapper__lambda_220988e568c6579347aabaf530dd6256_____lambda_220988e568c6579347aabaf530dd6256___ @ 0x180294E20
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_220988e568c6579347aabaf530dd6256___ @ 0x1802951C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_220988e568c6579347aabaf530dd6256___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_220988e568c6579347aabaf530dd6256___::CTaskWrapper__lambda_220988e568c6579347aabaf530dd6256_____lambda_220988e568c6579347aabaf530dd6256___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_180342230;
  v4 = a2 + 1;
  a1[2] = *a2;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 2;
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v5;
    *v5 = 0LL;
  }
  v6 = a2 + 3;
  a1[5] = 0LL;
  if ( a1 + 5 != a2 + 3 )
  {
    a1[5] = *v6;
    *v6 = 0LL;
  }
  return a1;
}
