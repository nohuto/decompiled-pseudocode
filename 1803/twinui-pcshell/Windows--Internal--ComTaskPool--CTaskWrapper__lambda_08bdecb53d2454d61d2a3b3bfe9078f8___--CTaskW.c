/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_08bdecb53d2454d61d2a3b3bfe9078f8___::CTaskWrapper__lambda_08bdecb53d2454d61d2a3b3bfe9078f8_____lambda_08bdecb53d2454d61d2a3b3bfe9078f8___ @ 0x180277C10
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_08bdecb53d2454d61d2a3b3bfe9078f8___ @ 0x180277DC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_08bdecb53d2454d61d2a3b3bfe9078f8___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_08bdecb53d2454d61d2a3b3bfe9078f8___::CTaskWrapper__lambda_08bdecb53d2454d61d2a3b3bfe9078f8_____lambda_08bdecb53d2454d61d2a3b3bfe9078f8___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rbx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_18033D610;
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != v4 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  return a1;
}
