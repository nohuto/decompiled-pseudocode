/*
 * XREFs of ??0?$GitEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@Internal@Windows@@QEAA@XZ @ 0x1800019A0
 * Callers:
 *     sub_180001040 @ 0x180001040 (sub_180001040.c)
 *     sub_180001060 @ 0x180001060 (sub_180001060.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall Windows::Internal::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::GitEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        RTL_SRWLOCK *a1)
{
  a1->Ptr = 0LL;
  InitializeSRWLock(a1 + 1);
  InitializeSRWLock(a1 + 2);
  return a1;
}
