/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e1669f70f5e626cb13f0ae9b344f394___::CTaskWrapper__lambda_5e1669f70f5e626cb13f0ae9b344f394_____lambda_5e1669f70f5e626cb13f0ae9b344f394___ @ 0x1800A0750
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_5e1669f70f5e626cb13f0ae9b344f394___ @ 0x1800A0DA8 (Windows--Internal--ComTaskPool--QueueTask__lambda_5e1669f70f5e626cb13f0ae9b344f394___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5e1669f70f5e626cb13f0ae9b344f394___::CTaskWrapper__lambda_5e1669f70f5e626cb13f0ae9b344f394_____lambda_5e1669f70f5e626cb13f0ae9b344f394___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)a1 = off_180321768;
  v4 = (_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 20) = *(_BYTE *)(a2 + 4);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  return a1;
}
