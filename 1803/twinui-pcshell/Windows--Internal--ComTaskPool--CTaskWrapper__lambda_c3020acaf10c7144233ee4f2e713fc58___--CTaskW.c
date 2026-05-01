/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c3020acaf10c7144233ee4f2e713fc58___::CTaskWrapper__lambda_c3020acaf10c7144233ee4f2e713fc58_____lambda_c3020acaf10c7144233ee4f2e713fc58___ @ 0x1800A080C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c3020acaf10c7144233ee4f2e713fc58___ @ 0x1800A0EC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_c3020acaf10c7144233ee4f2e713fc58___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c3020acaf10c7144233ee4f2e713fc58___::CTaskWrapper__lambda_c3020acaf10c7144233ee4f2e713fc58_____lambda_c3020acaf10c7144233ee4f2e713fc58___(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)a1 = off_180321628;
  v4 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( a1 + 24 != a2 + 8 )
  {
    *(_QWORD *)(a1 + 24) = *v4;
    *v4 = 0LL;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 40) = *(_BYTE *)(a2 + 24);
  *(_BYTE *)(a1 + 41) = *(_BYTE *)(a2 + 25);
  return a1;
}
