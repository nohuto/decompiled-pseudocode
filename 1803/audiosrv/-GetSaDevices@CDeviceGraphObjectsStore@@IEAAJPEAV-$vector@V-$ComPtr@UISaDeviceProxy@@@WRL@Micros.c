/*
 * XREFs of ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800CD19C
 * Callers:
 *     ?GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CCA30 (-GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Mic.c)
 *     ?GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CD190 (-GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL.c)
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800CD290 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 * Callees:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_0e41d75607236968788bdd59460e85d3___ @ 0x1800CC21C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::GetSaDevices(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  const char *v7; // r9
  __int64 j; // rdi
  int *i; // rax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+60h] [rbp+18h] BYREF
  char v13; // [rsp+64h] [rbp+1Ch] BYREF
  __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  try
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
    v12 = 0;
    if ( (int)v3 >= 4 )
    {
      for ( i = &v12; i != (int *)&v13; i = (int *)((char *)i + 1) )
        *(_BYTE *)i = 1;
    }
    else
    {
      *((_BYTE *)&v12 + v3) = 1;
    }
    for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
    {
      if ( *((_BYTE *)&v12 + j) )
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_0e41d75607236968788bdd59460e85d3___(
          &v14,
          *(_QWORD **)(a1 + 24 * j + 88),
          *(_QWORD **)(a1 + 24 * j + 96),
          a2);
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1EA,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v7);
  }
  return result;
}
