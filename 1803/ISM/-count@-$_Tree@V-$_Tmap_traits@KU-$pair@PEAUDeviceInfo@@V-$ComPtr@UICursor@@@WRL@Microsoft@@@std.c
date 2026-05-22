/*
 * XREFs of ?count@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800994C0
 * Callers:
 *     ?ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180097850 (-ShouldAttachDevice@MPCMouseProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800978C0 (-OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::count(
        __int64 **a1,
        unsigned int *a2)
{
  __int64 *j; // rax
  __int64 **v4; // r8
  __int64 *v5; // rcx
  __int64 *v6; // r9
  unsigned int v7; // r10d
  unsigned int v8; // edx
  __int64 **v9; // r9
  __int64 v10; // r9
  __int64 **v11; // rcx
  __int64 *v12; // rdx
  __int64 *i; // rcx

  j = *a1;
  v4 = (__int64 **)*a1;
  v5 = (__int64 *)(*a1)[1];
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *((_DWORD *)v6 + 8) >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < *((_DWORD *)v6 + 8) )
          v4 = (__int64 **)v6;
        j = v6;
        v6 = (__int64 *)*v6;
      }
      else
      {
        v6 = (__int64 *)v6[2];
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = *v4;
  while ( !*((_BYTE *)v5 + 25) )
  {
    v8 = *((_DWORD *)v5 + 8);
    v9 = (__int64 **)v5;
    if ( *a2 >= v8 )
      v5 = (__int64 *)v5[2];
    else
      v5 = (__int64 *)*v5;
    if ( *a2 >= v8 )
      v9 = v4;
    v4 = v9;
  }
  v10 = 0LL;
  while ( j != (__int64 *)v4 )
  {
    ++v10;
    if ( !*((_BYTE *)j + 25) )
    {
      v11 = (__int64 **)j[2];
      if ( *((_BYTE *)v11 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v12 = *v11;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
          j = v12;
      }
    }
  }
  return v10;
}
