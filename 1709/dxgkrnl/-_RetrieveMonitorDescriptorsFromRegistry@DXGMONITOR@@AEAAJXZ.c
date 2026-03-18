/*
 * XREFs of ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C010AE24
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010B884 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C694 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ @ 0x1C010A268 (-_CleanupRegistryOverridedMonitorDescriptors@DXGMONITOR@@AEAAJXZ.c)
 *     ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C0200448 (-_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorDescriptorsFromRegistry(struct _DEVICE_OBJECT **this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  NTSTATUS v3; // eax
  struct _DEVICE_OBJECT *v4; // rcx
  __int64 v5; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  int v13; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v14; // r14
  __int64 v15; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v16; // r14
  int v17; // eax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v18; // r15
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rax
  SIZE_T v22; // rax
  __int64 v23; // rcx
  struct _DEVICE_OBJECT *v24; // r15
  __int64 v25; // rax
  __int64 i; // r8
  int v27; // edx
  struct DXGMONITOR::_MONITORDESCRIPTOR *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  struct DXGMONITOR::_MONITORDESCRIPTOR *v31; // [rsp+20h] [rbp-49h] BYREF
  void *KeyHandle; // [rsp+28h] [rbp-41h] BYREF
  void *DeviceRegKey; // [rsp+30h] [rbp-39h] BYREF
  int v34; // [rsp+38h] [rbp-31h] BYREF
  __int128 *v35; // [rsp+40h] [rbp-29h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-21h] BYREF
  __int128 v37; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+88h] [rbp+1Fh]
  int v39; // [rsp+90h] [rbp+27h]

  if ( ((_BYTE)this[3] & 1) == 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !this[5] )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 104) != 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  v2 = this[5];
  DeviceRegKey = 0LL;
  KeyHandle = 0LL;
  v39 = *(_DWORD *)L"E";
  v37 = *(_OWORD *)L"EDID_OVERRIDE";
  v35 = &v37;
  v38 = *(_QWORD *)L"RRIDE";
  v34 = 1835034;
  v3 = IoOpenDeviceRegistryKey(v2, 1u, 0xF003Fu, &DeviceRegKey);
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_9;
  memset(&ObjectAttributes.RootDirectory, 0, 0x28uLL);
  ObjectAttributes.RootDirectory = DeviceRegKey;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v34;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v5 = v6;
  if ( v6 < 0 )
  {
LABEL_9:
    v7 = WdLogNewEntry5_WdDmmEvent(v4);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v7);
    goto LABEL_10;
  }
  v12 = 0LL;
  if ( *((_DWORD *)this + 28) )
  {
    while ( 1 )
    {
      v31 = 0LL;
      v13 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle, v12, &v31);
      LODWORD(v5) = v13;
      if ( v13 == -1073741801 )
        break;
      if ( v13 >= 0 )
      {
        v14 = v31;
        if ( !v31 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v4);
          WdLogEvent5_WdAssertion(v15);
        }
        v4 = (struct _DEVICE_OBJECT *)*((_QWORD *)&this[15]->Type + v12);
        *(_QWORD *)v14 = v4;
        *((_QWORD *)&this[15]->Type + v12) = v14;
        ++*((_DWORD *)this + 29);
      }
      v12 = (unsigned int)(v12 + 1);
      if ( (unsigned int)v12 >= *((_DWORD *)this + 28) )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v16 = 0LL;
    while ( (unsigned int)v12 <= 0xFE )
    {
      v31 = 0LL;
      v17 = DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(KeyHandle, v12, &v31);
      LODWORD(v12) = v12 + 1;
      LODWORD(v5) = v17;
      if ( v17 < 0 )
      {
        LODWORD(v5) = 0;
        break;
      }
      v18 = v31;
      if ( !v31 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v4);
        WdLogEvent5_WdAssertion(v19);
      }
      *(_QWORD *)v18 = v16;
      v16 = v18;
    }
    v20 = v12 - 1;
    if ( v16 )
    {
      if ( v20 <= *((_DWORD *)this + 28) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v4);
        WdLogEvent5_WdAssertion(v21);
      }
      v22 = 8LL * v20;
      if ( !is_mul_ok(v20, 8uLL) )
        v22 = -1LL;
      v24 = (struct _DEVICE_OBJECT *)operator new(v22, 0x4D677844u, PagedPool);
      if ( !v24 )
      {
        v25 = WdLogNewEntry5_WdError(v23);
        WdLogEvent5_WdError(v25);
        LODWORD(v5) = -1073741801;
        goto LABEL_10;
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 28); i = (unsigned int)(i + 1) )
        *((_QWORD *)&v24->Type + i) = *((_QWORD *)&this[15]->Type + i);
      v27 = 1;
      do
      {
        v28 = v16;
        v29 = v20 - v27++;
        *((_QWORD *)&v24->Type + v29) = v16;
        v16 = *(struct DXGMONITOR::_MONITORDESCRIPTOR **)v16;
        *(_QWORD *)v28 = 0LL;
        ++*((_DWORD *)this + 28);
        ++*((_DWORD *)this + 29);
      }
      while ( v16 );
      v4 = this[15];
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      this[15] = v24;
    }
    if ( v20 != *((_DWORD *)this + 28) )
    {
      v30 = WdLogNewEntry5_WdAssertion(v4);
      WdLogEvent5_WdAssertion(v30);
    }
  }
LABEL_10:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( DeviceRegKey )
    ZwClose(DeviceRegKey);
  if ( (int)v5 < 0 )
    DXGMONITOR::_CleanupRegistryOverridedMonitorDescriptors((DXGMONITOR *)this);
  return (unsigned int)v5;
}
