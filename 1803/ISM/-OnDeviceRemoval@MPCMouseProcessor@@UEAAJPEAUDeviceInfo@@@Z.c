/*
 * XREFs of ?OnDeviceRemoval@MPCMouseProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800978C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z @ 0x180049EA0 (-OnDeviceRemoval@MPCInputProviderBase@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?GetInstance@MPCConstantManager@@SAPEAV1@XZ @ 0x18004BB24 (-GetInstance@MPCConstantManager@@SAPEAV1@XZ.c)
 *     ?RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18004BDB8 (-RemoveDeviceId@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?count@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800994C0 (-count@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU?$pair@PEAUDeviceInfo@@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x180099764 (-erase@-$_Tree@V-$_Tmap_traits@KU-$pair@PEAUDeviceInfo@@V-$ComPtr@UICursor@@@WRL@Microsoft@@@std.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::OnDeviceRemoval(MPCMouseProcessor *this, struct DeviceInfo *a2)
{
  char *v2; // rsi
  const char *v5; // r9
  __int64 **v6; // r8
  __int64 **v7; // r9
  __int64 *v8; // rcx
  __int64 *v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 **v13; // r10
  __int64 *j; // rax
  __int64 v15; // rbx
  __int64 **v16; // rcx
  __int64 *v17; // rdx
  __int64 *i; // rdx
  const char *v19; // r9
  MPCConstantManager *v20; // rax
  int v21; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v24; // [rsp+30h] [rbp+8h] BYREF

  v2 = (char *)this + 3424;
  if ( !std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::count(
          (char *)this + 3424,
          a2) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      v5);
    __debugbreak();
  }
  v6 = *(__int64 ***)v2;
  v7 = *(__int64 ***)v2;
  v8 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
  v9 = v8;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v10 = *(_DWORD *)a2;
    do
    {
      if ( *((_DWORD *)v9 + 8) >= v10 )
      {
        if ( *((_BYTE *)v7 + 25) && v10 < *((_DWORD *)v9 + 8) )
          v7 = (__int64 **)v9;
        v6 = (__int64 **)v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  if ( !*((_BYTE *)v7 + 25) )
    v8 = *v7;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v11 = *(_DWORD *)a2;
    do
    {
      v12 = *((_DWORD *)v8 + 8);
      v13 = (__int64 **)v8;
      if ( v11 >= v12 )
        v8 = (__int64 *)v8[2];
      else
        v8 = (__int64 *)*v8;
      if ( v11 >= v12 )
        v13 = v7;
      v7 = v13;
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  j = (__int64 *)v6;
  v15 = 0LL;
  if ( v6 != v7 )
  {
    do
    {
      ++v15;
      if ( !*((_BYTE *)j + 25) )
      {
        v16 = (__int64 **)j[2];
        if ( *((_BYTE *)v16 + 25) )
        {
          for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
            j = i;
          j = i;
        }
        else
        {
          v17 = *v16;
          for ( j = (__int64 *)j[2]; !*((_BYTE *)v17 + 25); v17 = (__int64 *)*v17 )
            j = v17;
        }
      }
    }
    while ( j != (__int64 *)v7 );
  }
  std::_Tree<std::_Tmap_traits<unsigned long,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::pair<DeviceInfo *,Microsoft::WRL::ComPtr<ICursor>>>>,0>>::erase(
    v2,
    &v24);
  if ( !v15 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      v19);
    __debugbreak();
  }
  MPCConstantManager::GetInstance();
  MPCConstantManager::RemoveDeviceId(
    v20,
    (struct IMPCInputProviderBase *)(((unsigned __int64)this + 24) & -(__int64)(this != (MPCMouseProcessor *)16)));
  if ( *((_QWORD *)this + 429) )
    return 0LL;
  v21 = MPCInputProviderBase::OnDeviceRemoval(this, *((struct DeviceInfo **)this + 6));
  if ( v21 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x161,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 289) + 40LL))(
             *((_QWORD *)this + 289),
             *((_QWORD *)this + 6));
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x163,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)result);
    JUMPOUT(0x180097AA2LL);
  }
  return result;
}
