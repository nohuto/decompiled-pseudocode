/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0108180
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01089B4 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0109488 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C0107B84 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z @ 0x1C010A064 (-DxgkOpenRegistrySubkey@@YAJPEAPEAXKPEAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C01E5E90 (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(
        struct _DEVICE_OBJECT **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  struct _DEVICE_OBJECT *v8; // rcx
  __int64 i; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v20; // r14
  __int64 v21; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v22; // r14
  int v23; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v24; // r15
  __int64 v25; // rax
  unsigned int v26; // edi
  __int64 v27; // rax
  SIZE_T v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct _DEVICE_OBJECT *v31; // r15
  __int64 v32; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v36; // [rsp+20h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-48h] BYREF
  void *DeviceRegKey; // [rsp+30h] [rbp-40h] BYREF
  struct _UNICODE_STRING v39; // [rsp+38h] [rbp-38h] BYREF
  __int128 v40; // [rsp+48h] [rbp-28h] BYREF
  __int64 v41; // [rsp+58h] [rbp-18h]
  int v42; // [rsp+60h] [rbp-10h]

  if ( ((_BYTE)this[3] & 1) == 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !this[5] )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *((_DWORD *)this + 94) != 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  v5 = this[5];
  DeviceRegKey = 0LL;
  Handle = 0LL;
  v42 = *(_DWORD *)L"E";
  v40 = *(_OWORD *)L"EDID_OVERRIDE";
  v39.Buffer = (wchar_t *)&v40;
  v41 = *(_QWORD *)L"RRIDE";
  *(_DWORD *)&v39.Length = 1835034;
  v6 = IoOpenDeviceRegistryKey(v5, 1u, 0xF003Fu, &DeviceRegKey);
  v11 = v6;
  if ( v6 < 0 || (v12 = DxgkOpenRegistrySubkey(&Handle, 0x20019u, DeviceRegKey, &v39), v11 = v12, v12 < 0) )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v8, v7, i, v10);
    *(_QWORD *)(v13 + 24) = v11;
    WdLogEvent5_WdDmmEvent(v13);
    goto LABEL_10;
  }
  v18 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( 1 )
    {
      v36 = 0LL;
      v19 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(Handle, v18, &v36);
      LODWORD(v11) = v19;
      if ( v19 == -1073741801 )
        break;
      if ( v19 >= 0 )
      {
        v20 = v36;
        if ( !v36 )
        {
          v21 = WdLogNewEntry5_WdAssertion(v8, v7, i, v10);
          WdLogEvent5_WdAssertion(v21);
        }
        v8 = (struct _DEVICE_OBJECT *)*((_QWORD *)&this[15]->Type + v18);
        *(_QWORD *)v20 = v8;
        *((_QWORD *)&this[15]->Type + v18) = v20;
        ++*((_DWORD *)this + 29);
      }
      v18 = (unsigned int)(v18 + 1);
      if ( (unsigned int)v18 >= *((_DWORD *)this + 28) )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v22 = 0LL;
    while ( (unsigned int)v18 <= 0xFE )
    {
      v36 = 0LL;
      v23 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(Handle, v18, &v36);
      LODWORD(v18) = v18 + 1;
      LODWORD(v11) = v23;
      if ( v23 < 0 )
      {
        LODWORD(v11) = 0;
        break;
      }
      v24 = v36;
      if ( !v36 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v8, v7, i, v10);
        WdLogEvent5_WdAssertion(v25);
      }
      *(_QWORD *)v24 = v22;
      v22 = v24;
    }
    v26 = v18 - 1;
    if ( v22 )
    {
      if ( v26 <= *((_DWORD *)this + 28) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v8, v7, i, v10);
        WdLogEvent5_WdAssertion(v27);
      }
      v28 = 8LL * v26;
      if ( !is_mul_ok(v26, 8uLL) )
        v28 = -1LL;
      v31 = (struct _DEVICE_OBJECT *)operator new(v28, 0x4D677844u, PagedPool);
      if ( !v31 )
      {
        v32 = WdLogNewEntry5_WdError(v30, v29);
        WdLogEvent5_WdError(v32);
        LODWORD(v11) = -1073741801;
        goto LABEL_10;
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
        *((_QWORD *)&v31->Type + i) = *((_QWORD *)&this[15]->Type + i);
      LODWORD(v7) = 1;
      do
      {
        v33 = v22;
        v34 = v26 - (unsigned int)v7;
        v7 = (unsigned int)(v7 + 1);
        *((_QWORD *)&v31->Type + v34) = v22;
        v22 = *(struct DXGMONITOR::_MONITORDESCRIPTOR **)v22;
        *(_QWORD *)v33 = 0LL;
        ++*((_DWORD *)this + 28);
        ++*((_DWORD *)this + 29);
      }
      while ( v22 );
      v8 = this[15];
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      this[15] = v31;
    }
    if ( v26 != *((_DWORD *)this + 28) )
    {
      v35 = WdLogNewEntry5_WdAssertion(v8, v7, i, v10);
      WdLogEvent5_WdAssertion(v35);
    }
  }
LABEL_10:
  if ( Handle )
    ZwClose(Handle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( (int)v11 < 0 )
    DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors((DXGMONITOR *)this, v7, i, v10);
  return (unsigned int)v11;
}
