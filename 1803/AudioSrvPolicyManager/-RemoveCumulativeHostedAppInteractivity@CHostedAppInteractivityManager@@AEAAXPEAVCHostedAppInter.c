/*
 * XREFs of ?RemoveCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAXPEAVCHostedAppInteractivity@@@Z @ 0x180020AEC
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180020880 (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000F880 (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CHostedAppInteractivityManager::RemoveCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        LPVOID *a2)
{
  __int64 v3; // rcx
  bool v4; // zf

  v3 = qword_18004F0B8;
  if ( qword_18004F0B8 )
  {
    while ( *(LPVOID **)(v3 + 16) != a2 )
    {
      v3 = *(_QWORD *)v3;
      if ( !v3 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v3 = 0LL;
  }
  if ( v3 )
  {
    if ( v3 == qword_18004F0B8 )
      qword_18004F0B8 = *(_QWORD *)v3;
    else
      **(_QWORD **)(v3 + 8) = *(_QWORD *)v3;
    if ( v3 == (_QWORD)xmmword_18004F0C0 )
      *(_QWORD *)&xmmword_18004F0C0 = *(_QWORD *)(v3 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v3 + 8LL) = *(_QWORD *)(v3 + 8);
    *(_QWORD *)v3 = *((_QWORD *)&xmmword_18004F0D0 + 1);
    v4 = (*((_QWORD *)&xmmword_18004F0C0 + 1))-- == 1LL;
    *((_QWORD *)&xmmword_18004F0D0 + 1) = v3;
    if ( v4 )
      ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll((__int64)&qword_18004F0B8);
    if ( a2 )
    {
      if ( *a2 )
      {
        CoTaskMemFree(*a2);
        *a2 = 0LL;
      }
      operator delete(a2, (const struct std::nothrow_t *)0x18);
    }
  }
}
