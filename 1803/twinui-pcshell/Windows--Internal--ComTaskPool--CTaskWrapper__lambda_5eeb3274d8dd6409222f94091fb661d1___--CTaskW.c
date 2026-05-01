/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1___::CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1_____lambda_5eeb3274d8dd6409222f94091fb661d1___ @ 0x1801E2A8C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5eeb3274d8dd6409222f94091fb661d1___ @ 0x1801E2BEC (Windows--Internal--ComTaskPool--QueueTask__lambda_5eeb3274d8dd6409222f94091fb661d1___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1___::CTaskWrapper__lambda_5eeb3274d8dd6409222f94091fb661d1_____lambda_5eeb3274d8dd6409222f94091fb661d1___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_180334FC8;
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  a1[4] = a2[2];
  a1[5] = a2[3];
  return a1;
}
