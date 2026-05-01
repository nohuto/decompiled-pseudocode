/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___::CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa_____lambda_65c0f5c4ae095b6c4d2379132d65e3aa___ @ 0x1800A07AC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___ @ 0x1800A0E38 (Windows--Internal--ComTaskPool--QueueTask__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa___::CTaskWrapper__lambda_65c0f5c4ae095b6c4d2379132d65e3aa_____lambda_65c0f5c4ae095b6c4d2379132d65e3aa___(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)a1 = off_1803216D0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 32);
  return a1;
}
