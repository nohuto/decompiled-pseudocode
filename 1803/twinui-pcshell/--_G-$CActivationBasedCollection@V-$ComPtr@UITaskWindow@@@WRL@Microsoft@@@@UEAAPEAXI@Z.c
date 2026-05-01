/*
 * XREFs of ??_G?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAPEAXI@Z @ 0x18011C780
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800932D0 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicForegroundAssistant@Holographic@Shell@Internal@Win.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  *a1 = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  v4 = (void *)a1[1];
  if ( v4 )
  {
    v5 = 0LL;
    if ( a1[2] )
    {
      do
        IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IHolographicForegroundAssistant>>((__int64 *)(a1[1] + 8 * v5++));
      while ( v5 < a1[2] );
      v4 = (void *)a1[1];
    }
    CoTaskMemFree(v4);
    a1[1] = 0LL;
  }
  a1[2] = 0LL;
  a1[4] = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
