/*
 * XREFs of ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C00143F0
 * Callers:
 *     imp_WdfTimerCreate @ 0x1C00142C0 (imp_WdfTimerCreate.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00045A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0006850 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0018490 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0018788 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0018820 (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     ??0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0018A3C (--0FxTimer@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0065088 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxTimer::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        WDFTIMER__ **Timer)
{
  ULONG Tag; // ebp
  _POOL_TYPE v7; // esi
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v13; // rax
  FxTimer *v14; // rax
  FxTimer *v15; // rax
  FxTimer *v16; // rbx
  int v17; // edi
  unsigned __int64 Size[5]; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  Tag = FxDriverGlobals->Tag;
  v7 = ExDefaultNonPagedPoolType;
  ContextSize = FxGetContextSize(Attributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x160u, 0, ContextSize, Size) >= 0
    && (FxDriverGlobals->FxPoolTrackingOn ? (Caller = retaddr) : (Caller = 0LL),
        (v13 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, v7, Size[0], Tag, Caller)) != 0LL
     && (v14 = (FxTimer *)FxObjectAndHandleHeaderInit(FxDriverGlobals, v13, 0x160u, Attributes, FxObjectTypeExternal)) != 0LL) )
  {
    FxTimer::FxTimer(v14, FxDriverGlobals);
    v16 = v15;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v16 )
    return 3221225626LL;
  v17 = FxTimer::Initialize(v16, Attributes, Config, ParentObject, Timer);
  if ( v17 < 0 )
    FxObject::DeleteFromFailedCreate(v16);
  return (unsigned int)v17;
}
