/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4fd3127ed7710849848c55d6ef740a2d___::CTaskWrapper__lambda_4fd3127ed7710849848c55d6ef740a2d_____lambda_4fd3127ed7710849848c55d6ef740a2d___ @ 0x18009EAB0
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_4fd3127ed7710849848c55d6ef740a2d___ @ 0x18009EB1C (Windows--Internal--ComTaskPool--QueueTask__lambda_4fd3127ed7710849848c55d6ef740a2d___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4fd3127ed7710849848c55d6ef740a2d___::CTaskWrapper__lambda_4fd3127ed7710849848c55d6ef740a2d_____lambda_4fd3127ed7710849848c55d6ef740a2d___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // r8

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)a1 = off_180320780;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 16);
  return a1;
}
