/*
 * XREFs of ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C0010C9C
 * Callers:
 *     ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C00225FC (-PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ??0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0010E10 (--0FxIoResReqList@@IEAA@PEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x1C0011BFC (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 *     ??0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z @ 0x1C0011CF8 (--0FxIoResList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxIoResReqList@@@Z.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0020188 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0031E50 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 */

FxIoResReqList *__fastcall FxIoResReqList::_CreateFromWdmList(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IO_RESOURCE_REQUIREMENTS_LIST *WdmRequirementsList,
        unsigned __int8 a3)
{
  FxIoResReqList *v5; // rax
  unsigned __int8 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // ebp
  FxIoResList *v10; // rax
  FxIoResList *v11; // rax
  FxIoResList *v12; // rsi
  int v13; // eax
  _IO_RESOURCE_LIST *pWdmResourceList; // [rsp+78h] [rbp+20h] BYREF

  v5 = (FxIoResReqList *)FxObjectHandleAlloc(
                           FxDriverGlobals,
                           ExDefaultNonPagedPoolType,
                           0xA0uLL,
                           0,
                           0LL,
                           0,
                           FxObjectTypeExternal);
  if ( v5 )
  {
    FxIoResReqList::FxIoResReqList(v5, FxDriverGlobals, v6);
    v8 = v7;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    if ( WdmRequirementsList )
    {
      v9 = 0;
      pWdmResourceList = WdmRequirementsList->List;
      *(_DWORD *)(v8 + 156) = WdmRequirementsList->InterfaceType;
      *(_DWORD *)(v8 + 152) = WdmRequirementsList->SlotNumber;
      if ( WdmRequirementsList->AlternativeLists )
      {
        while ( 1 )
        {
          v10 = (FxIoResList *)FxObjectHandleAlloc(
                                 FxDriverGlobals,
                                 ExDefaultNonPagedPoolType,
                                 0xA0uLL,
                                 0,
                                 0LL,
                                 0,
                                 FxObjectTypeExternal);
          if ( v10 )
          {
            FxIoResList::FxIoResList(v10, FxDriverGlobals, (FxIoResReqList *)v8);
            v12 = v11;
          }
          else
          {
            v12 = 0LL;
          }
          if ( v12 )
          {
            FxObject::AssignParentObject(v12, (FxObject *)v8);
            v13 = FxIoResList::BuildFromWdmList(v12, &pWdmResourceList);
          }
          else
          {
            v13 = -1073741670;
          }
          if ( v13 < 0 )
            break;
          if ( ++v9 >= WdmRequirementsList->AlternativeLists )
            return (FxIoResReqList *)v8;
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
        return 0LL;
      }
    }
  }
  return (FxIoResReqList *)v8;
}
