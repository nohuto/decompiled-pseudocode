/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3468ccb19a16dff0d3ecf886d749dae3___::CTaskWrapper__lambda_3468ccb19a16dff0d3ecf886d749dae3_____lambda_3468ccb19a16dff0d3ecf886d749dae3___ @ 0x180305158
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3468ccb19a16dff0d3ecf886d749dae3___ @ 0x1803051C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_3468ccb19a16dff0d3ecf886d749dae3___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0CMarshaledInterface@@QEAA@$$QEAV0@@Z @ 0x1800F89D8 (--0CMarshaledInterface@@QEAA@$$QEAV0@@Z.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3468ccb19a16dff0d3ecf886d749dae3___::CTaskWrapper__lambda_3468ccb19a16dff0d3ecf886d749dae3_____lambda_3468ccb19a16dff0d3ecf886d749dae3___(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_18034B6F8;
  CMarshaledInterface::CMarshaledInterface(a1 + 2, (_QWORD *)a2);
  *(_QWORD *)(v4 + 8) = 0LL;
  v5 = (_QWORD *)(a2 + 8);
  if ( v4 + 8 != a2 + 8 )
  {
    *(_QWORD *)(v4 + 8) = *v5;
    *v5 = 0LL;
  }
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v4 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(v4 + 24) = *(_DWORD *)(a2 + 24);
  return a1;
}
