/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C02337FC
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236E24 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0236F48 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C02322F4 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C0232BD4 (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(DXGMONITOR *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  struct _DEVICE_OBJECT *v5; // rcx
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  NTSTATUS v10; // eax
  __int64 v11; // rdi
  int v12; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v13; // r14
  __int64 v14; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v15; // r14
  int v16; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v17; // r15
  __int64 v18; // rax
  unsigned int v19; // edi
  __int64 v20; // rax
  SIZE_T v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r15
  __int64 v24; // rax
  __int64 i; // r8
  int v26; // edx
  struct DXGMONITOR::_MONITORDESCRIPTOR *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v31; // [rsp+20h] [rbp-49h] BYREF
  void *KeyHandle; // [rsp+28h] [rbp-41h] BYREF
  void *DeviceRegKey; // [rsp+30h] [rbp-39h] BYREF
  int v34; // [rsp+38h] [rbp-31h] BYREF
  __int128 *v35; // [rsp+40h] [rbp-29h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  __int128 v37; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+88h] [rbp+1Fh]
  int v39; // [rsp+90h] [rbp+27h]

  if ( (*((_BYTE *)this + 40) & 1) == 0 )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  if ( !*((_QWORD *)this + 7) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 7);
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v39 = *(_DWORD *)L"E";
  v37 = *(_OWORD *)L"EDID_OVERRIDE";
  v35 = &v37;
  v38 = *(_QWORD *)L"RRIDE";
  v34 = 1835034;
  v6 = IoOpenDeviceRegistryKey(v5, 1u, 0xF003Fu, &DeviceRegKey);
  v8 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v34;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v10;
  if ( v10 < 0 )
  {
LABEL_8:
    v9 = WdLogNewEntry5_WdDmmEvent(v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdDmmEvent(v9);
    goto LABEL_39;
  }
  v11 = 0LL;
  if ( *((_DWORD *)this + 32) )
  {
    while ( 1 )
    {
      v31 = 0LL;
      v12 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle, v11, &v31);
      LODWORD(v8) = v12;
      if ( v12 == -1073741801 )
        break;
      if ( v12 >= 0 )
      {
        v13 = v31;
        if ( !v31 )
        {
          v14 = WdLogNewEntry5_WdAssertion(v7);
          WdLogEvent5_WdAssertion(v14);
        }
        v7 = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v11);
        *(_QWORD *)v13 = v7;
        *(_QWORD *)(*((_QWORD *)this + 17) + 8 * v11) = v13;
        ++*((_DWORD *)this + 33);
      }
      v11 = (unsigned int)(v11 + 1);
      if ( (unsigned int)v11 >= *((_DWORD *)this + 32) )
        goto LABEL_17;
    }
  }
  else
  {
LABEL_17:
    v15 = 0LL;
    while ( (unsigned int)v11 <= 0xFE )
    {
      v31 = 0LL;
      v16 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle, v11, &v31);
      LODWORD(v11) = v11 + 1;
      LODWORD(v8) = v16;
      if ( v16 < 0 )
      {
        LODWORD(v8) = 0;
        break;
      }
      v17 = v31;
      if ( !v31 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v7);
        WdLogEvent5_WdAssertion(v18);
      }
      *(_QWORD *)v17 = v15;
      v15 = v17;
    }
    v19 = v11 - 1;
    if ( v15 )
    {
      if ( v19 <= *((_DWORD *)this + 32) )
      {
        v20 = WdLogNewEntry5_WdAssertion(v7);
        WdLogEvent5_WdAssertion(v20);
      }
      v21 = 8LL * v19;
      if ( !is_mul_ok(v19, 8uLL) )
        v21 = -1LL;
      v23 = operator new[](v21, 0x4D677844u, PagedPool);
      if ( !v23 )
      {
        v24 = WdLogNewEntry5_WdError(v22);
        WdLogEvent5_WdError(v24);
        LODWORD(v8) = -1073741801;
        goto LABEL_39;
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 32); i = (unsigned int)(i + 1) )
        v23[i] = *(_QWORD *)(*((_QWORD *)this + 17) + 8 * i);
      v26 = 1;
      do
      {
        v27 = v15;
        v28 = v19 - v26++;
        v23[v28] = v15;
        v15 = *(struct DXGMONITOR::_MONITORDESCRIPTOR **)v15;
        *(_QWORD *)v27 = 0LL;
        ++*((_DWORD *)this + 32);
        ++*((_DWORD *)this + 33);
      }
      while ( v15 );
      operator delete[](*((void **)this + 17));
      *((_QWORD *)this + 17) = v23;
    }
    if ( v19 != *((_DWORD *)this + 32) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v29);
    }
  }
LABEL_39:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( (int)v8 < 0 )
    DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors(this);
  return (unsigned int)v8;
}
