/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f0bf810a5d9c986258710a4a09c5f600___::CTaskWrapper__lambda_f0bf810a5d9c986258710a4a09c5f600_____lambda_f0bf810a5d9c986258710a4a09c5f600___ @ 0x1800A0870
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_f0bf810a5d9c986258710a4a09c5f600___ @ 0x1800A0F50 (Windows--Internal--ComTaskPool--QueueTask__lambda_f0bf810a5d9c986258710a4a09c5f600___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f0bf810a5d9c986258710a4a09c5f600___::CTaskWrapper__lambda_f0bf810a5d9c986258710a4a09c5f600_____lambda_f0bf810a5d9c986258710a4a09c5f600___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_180321680;
  v4 = a2 + 2;
  a1[2] = *a2;
  a1[3] = a2[1];
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v4;
    *v4 = 0LL;
  }
  a1[5] = a2[3];
  return a1;
}
