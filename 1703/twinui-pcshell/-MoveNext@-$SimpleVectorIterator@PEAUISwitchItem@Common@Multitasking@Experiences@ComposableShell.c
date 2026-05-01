/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$Vector@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@U?$DefaultVectorOptions@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@89Foundation@Windows@@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180161BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::Vector<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,XWinRT::IntVersionTag,0>::MoveNext(
        __int64 a1,
        bool *a2)
{
  int v3; // ebx
  __int64 v4; // rsi
  unsigned int v5; // ecx
  unsigned __int32 v6; // r8d
  bool v7; // zf
  signed __int32 v8; // eax

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v3 < 0 )
  {
    RoOriginateError((unsigned int)v3, 0LL);
    return (unsigned int)v3;
  }
  if ( *(_BYTE *)(a1 + 56) )
  {
    v5 = *(_DWORD *)(a1 + 40);
    *a2 = 0;
    if ( v5 < *(_DWORD *)(a1 + 44) )
    {
      *(_DWORD *)(a1 + 40) = v5 + 1;
      v3 = 0;
      *a2 = v5 + 1 < *(_DWORD *)(a1 + 44);
      goto LABEL_11;
    }
  }
  else
  {
    v6 = *(_DWORD *)(a1 + 40);
    while ( 1 )
    {
      *a2 = 0;
      if ( v6 >= *(_DWORD *)(a1 + 44) )
        break;
      v3 = 0;
      *a2 = v6 + 1 < *(_DWORD *)(a1 + 44);
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v6 + 1, v6);
      v7 = v6 == v8;
      v6 = v8;
      if ( v7 )
        goto LABEL_11;
      *a2 = 0;
    }
  }
  v3 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
LABEL_11:
  if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v4 + 88) )
  {
    *(_DWORD *)(a1 + 48) = -2147483636;
    if ( v3 < 0 )
    {
      RoTransformError((unsigned int)v3, 2147483660LL, 0LL);
    }
    else
    {
      RoOriginateError(2147483660LL, 0LL);
      *a2 = 0;
    }
    return (unsigned int)-2147483636;
  }
  return (unsigned int)v3;
}
