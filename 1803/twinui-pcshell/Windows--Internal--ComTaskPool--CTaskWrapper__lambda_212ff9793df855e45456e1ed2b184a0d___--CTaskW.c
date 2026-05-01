/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_212ff9793df855e45456e1ed2b184a0d___::CTaskWrapper__lambda_212ff9793df855e45456e1ed2b184a0d_____lambda_212ff9793df855e45456e1ed2b184a0d___ @ 0x180054760
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_212ff9793df855e45456e1ed2b184a0d___ @ 0x1800931F4 (Windows--Internal--ComTaskPool--QueueTask__lambda_212ff9793df855e45456e1ed2b184a0d___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_212ff9793df855e45456e1ed2b184a0d___::CTaskWrapper__lambda_212ff9793df855e45456e1ed2b184a0d_____lambda_212ff9793df855e45456e1ed2b184a0d___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)a1 = off_18031AF70;
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 28);
  return a1;
}
