/*
 * XREFs of ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C002AB24
 * Callers:
 *     ?DpiDdiResetVirtualFunction@@YAJPEAXG@Z @ 0x1C0041BF0 (-DpiDdiResetVirtualFunction@@YAJPEAXG@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0028D34 (-DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 *     ?NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ @ 0x1C01A1E9C (-NotifyResetVirtualGpu@DXGPROCESS@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::ResetVirtualFunction(
        struct DXGADAPTER **this,
        struct _DXGKARG_RESETVIRTUALFUNCTION *a2)
{
  __int64 v4; // rbx
  unsigned int v6; // ebx
  __int64 v7; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v9[32]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v10[40]; // [rsp+48h] [rbp-30h] BYREF

  if ( a2->VirtualFunctionIndex < *((_DWORD *)this + 282)
    && (v4 = *((_QWORD *)this[142] + a2->VirtualFunctionIndex)) != 0 )
  {
    if ( *(_BYTE *)(v4 + 121) )
    {
      if ( *(_BYTE *)(v4 + 136) )
      {
        VmbChannelDisable(*(_QWORD *)(v4 + 128));
        *(_BYTE *)(v4 + 136) = 0;
      }
      DXGPROCESS::NotifyResetVirtualGpu(*(DXGPROCESS **)(v4 + 88));
      return 0LL;
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v8, this[2], 0LL);
      if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v8) >= 0 )
        v6 = ADAPTER_RENDER::DdiResetVirtualFunction((ADAPTER_RENDER *)this, a2);
      else
        v6 = -1073741130;
      COREACCESS::~COREACCESS((COREACCESS *)v10);
      COREACCESS::~COREACCESS((COREACCESS *)v9);
      return v6;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v7 + 24) = a2->VirtualFunctionIndex;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
