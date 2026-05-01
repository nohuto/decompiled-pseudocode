/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_114373a7e1561dd71911e06c6b6df4ef___::CTaskWrapper__lambda_114373a7e1561dd71911e06c6b6df4ef_____lambda_114373a7e1561dd71911e06c6b6df4ef___ @ 0x1800A06E0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_114373a7e1561dd71911e06c6b6df4ef___ @ 0x1800A0D18 (Windows--Internal--ComTaskPool--QueueTask__lambda_114373a7e1561dd71911e06c6b6df4ef___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_114373a7e1561dd71911e06c6b6df4ef___::CTaskWrapper__lambda_114373a7e1561dd71911e06c6b6df4ef_____lambda_114373a7e1561dd71911e06c6b6df4ef___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)a1 = off_180321740;
  v4 = (_QWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a2;
  *(_OWORD *)(a1 + 20) = *(_OWORD *)(a2 + 4);
  *(_BYTE *)(a1 + 36) = *(_BYTE *)(a2 + 20);
  *(_BYTE *)(a1 + 37) = *(_BYTE *)(a2 + 21);
  *(_BYTE *)(a1 + 38) = *(_BYTE *)(a2 + 22);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a1 + 40 != a2 + 24 )
  {
    *(_QWORD *)(a1 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  return a1;
}
