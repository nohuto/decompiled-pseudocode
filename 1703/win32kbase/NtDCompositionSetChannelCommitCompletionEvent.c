/*
 * XREFs of NtDCompositionSetChannelCommitCompletionEvent @ 0x1C008D510
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z @ 0x1C001D57C (-SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001E6E4 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionSetChannelCommitCompletionEvent(unsigned int a1, void *a2)
{
  DirectComposition::CApplicationChannel *v2; // rdi
  signed int v4; // ebx
  signed int v5; // eax
  struct DirectComposition::CApplicationChannel *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v7 = 0LL;
  v4 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v5 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v7);
    v2 = v7;
    v4 = v5;
  }
  if ( v4 >= 0 )
  {
    v4 = DirectComposition::CApplicationChannel::SetCommitCompletionEvent(v2, a2);
    (**(void (__fastcall ***)(DirectComposition::CApplicationChannel *))v2)(v2);
  }
  return (unsigned int)v4;
}
