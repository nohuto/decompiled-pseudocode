/*
 * XREFs of ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180006D40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z @ 0x180007014 (-NotifyForegroundChange@InputStateManager@@AEAAXPEAUIInputTarget@@0@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180019264 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18002F290 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18002F550 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 *     ?find@?$_Hash@V?$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@DragNDropProcessorLegacy@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18002F784 (-find@-$_Hash@V-$_Umap_traits@KUPointerCache@DragNDropProcessorLegacy@@V-$_Uhash_compare@KU-$has.c)
 *     ?SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180032D74 (-SetControllerVirtualKeyMappingFor@ControllerProcessor@@SAJW4GamepadButtons@Input@Gaming@Windows.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputStateManager::OnTargetWithFocusChanged(
        InputStateManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  char *v6; // rdx
  __int64 v7; // rdi
  int v8; // r9d
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, int *); // r9
  int v13; // eax
  int v14; // esi
  struct BamoControllerNavigationClientProxy **v15; // rcx
  struct ControllerNavigationManager *ControllerNavigationManager; // rbx
  char v17; // di
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  _DWORD *v22; // r8
  int v24[2]; // [rsp+20h] [rbp-E0h] BYREF
  struct BamoControllerNavigationClientProxy **v25; // [rsp+28h] [rbp-D8h] BYREF
  int v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h]
  _QWORD v28[256]; // [rsp+40h] [rbp-C0h]
  wil::details::in1diag3 *retaddr; // [rsp+888h] [rbp+788h]

  v27 = -2LL;
  v6 = (char *)this + 56;
  v7 = 0LL;
  v8 = *((_DWORD *)this + 1038);
  v9 = 256LL;
  do
  {
    if ( *(_DWORD *)v6 != v8 )
    {
      v28[v7] = *((_QWORD *)v6 + 1);
      v7 = (unsigned int)(v7 + 1);
    }
    v6 += 16;
    --v9;
  }
  while ( v9 );
  v10 = 0LL;
  if ( !(_DWORD)v7 )
  {
LABEL_14:
    ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
    v26 = 0;
    v17 = 1;
    if ( a3 )
    {
      v25 = 0LL;
      if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, struct BamoControllerNavigationClientProxy ***))a3)(
             a3,
             &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
             &v25) >= 0 )
      {
        v24[0] = 0;
        v18 = (*((__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy **, int *))*v25 + 4))(v25, &v26);
        if ( v18 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xDB,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavi"
                     "gationmanager.cpp",
            (const char *)(unsigned int)v18);
          __debugbreak();
        }
        v19 = (*((__int64 (__fastcall **)(struct BamoControllerNavigationClientProxy **, int *))*v25 + 6))(v25, v24);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xDD,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavi"
                     "gationmanager.cpp",
            (const char *)(unsigned int)v19);
          goto LABEL_35;
        }
        v17 = v24[0] != 0;
      }
      v15 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*((void (__fastcall **)(struct BamoControllerNavigationClientProxy **))*v15 + 2))(v15);
      }
    }
    if ( *((_BYTE *)ControllerNavigationManager + 228) == v17 )
      goto LABEL_25;
    *((_BYTE *)ControllerNavigationManager + 228) = v17;
    v20 = 196LL;
    if ( !v17 )
      v20 = 27LL;
    v21 = ControllerProcessor::SetControllerVirtualKeyMappingFor(v15, v20);
    if ( v21 >= 0 )
    {
LABEL_25:
      if ( *((_DWORD *)ControllerNavigationManager + 56) != v26 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
          (char *)ControllerNavigationManager + 128,
          &v25);
        if ( v25 != *((struct BamoControllerNavigationClientProxy ***)ControllerNavigationManager + 17) )
          *((_BYTE *)v25[3] + 80) = 1;
        *v22 = v26;
        std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessorLegacy::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessorLegacy::PointerCache>>,0>>::find(
          (char *)ControllerNavigationManager + 128,
          &v25);
        if ( v25 == *((struct BamoControllerNavigationClientProxy ***)ControllerNavigationManager + 17) )
          ControllerNavigationManager::DisableNavigation(ControllerNavigationManager);
        else
          ControllerNavigationManager::SetCurrentStateWithClient(ControllerNavigationManager, v25[3]);
      }
      v14 = 0;
      InputStateManager::NotifyForegroundChange((InputStateManager *)((char *)this - 16), a2, a3);
      return (unsigned int)v14;
    }
LABEL_35:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  while ( 1 )
  {
    v11 = 0LL;
    *(_QWORD *)v24 = 0LL;
    v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, int *))v28[v10];
    if ( v12 )
    {
      v13 = (**v12)(v28[v10], &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, v24);
      v11 = *(_QWORD *)v24;
      if ( v13 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(**(_QWORD **)v24 + 24LL))(
                *(_QWORD *)v24,
                a2,
                a3);
        v11 = *(_QWORD *)v24;
        if ( v14 < 0 )
          break;
      }
    }
    if ( v11 )
    {
      *(_QWORD *)v24 = 0LL;
      (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 16LL))(v11, v6);
    }
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= (unsigned int)v7 )
      goto LABEL_14;
  }
  if ( *(_QWORD *)v24 )
  {
    *(_QWORD *)v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v14;
}
