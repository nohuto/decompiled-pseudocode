/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@V?$Vector@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@U?$DefaultEqualityPredicate@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@U?$DefaultVectorOptions@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@@2Collections@Foundation@7@U?$DefaultLifetimeTraits@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@29Foundation@7@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18001AF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::Vector<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>,XWinRT::IntVersionTag,0>::MoveNext(
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
