/*
 * XREFs of IoDevObjCreateDeviceSecure @ 0x1C00C6CD0
 * Callers:
 *     <none>
 * Callees:
 *     IopDevObjApplyPostCreationSettings @ 0x1C00C6E0C (IopDevObjApplyPostCreationSettings.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C00C6FAC (SeSddlSecurityDescriptorFromSDDL.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00FD008 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C00FD150 (PpRegStateUpdateStackCreationSettings.c)
 */

__int64 __fastcall IoDevObjCreateDeviceSecure(
        struct _DRIVER_OBJECT *a1,
        __int64 a2,
        _UNICODE_STRING *a3,
        ULONG a4,
        ULONG a5,
        BOOLEAN a6,
        __int64 a7,
        __int64 a8,
        PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v9; // r13
  char v10; // di
  void *v11; // rsi
  ULONG v12; // r12d
  ULONG v13; // r15d
  NTSTATUS updated; // ebx
  ULONG v15; // r9d
  ULONG DeviceCharacteristics; // edx
  __int64 result; // rax
  void *v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  void *v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  _QWORD v23[4]; // [rsp+60h] [rbp-20h] BYREF
  ULONG DeviceExtensionSize; // [rsp+C8h] [rbp+48h]

  DeviceExtensionSize = a2;
  v9 = DeviceObject;
  DeviceObject = 0LL;
  *(_QWORD *)&v9->Type = 0LL;
  if ( !a3 && (a5 & 0x80u) == 0 )
    return 3221225485LL;
  if ( a8 )
  {
    result = PpRegStateReadCreateClassCreationSettings(a8, a1, &v20);
    if ( (int)result < 0 )
      return result;
    v13 = v22;
    v11 = v21;
    v12 = HIDWORD(v20);
    v10 = v20;
  }
  else
  {
    v10 = 0;
    v20 = 0LL;
    v11 = 0LL;
    v21 = 0LL;
    v12 = 0;
    v22 = 0LL;
    v13 = 0;
  }
  if ( (v10 & 2) != 0 )
    goto LABEL_7;
  updated = SeSddlSecurityDescriptorFromSDDL(a7, a2, &v19);
  if ( updated >= 0 )
  {
    v11 = v19;
    v10 = 2;
    LODWORD(v20) = 2;
    v21 = v19;
    if ( !a8
      || (v23[0] = 2LL,
          v23[2] = 0LL,
          v23[1] = v19,
          updated = PpRegStateUpdateStackCreationSettings(a8, v23),
          updated >= 0) )
    {
LABEL_7:
      v15 = a4;
      DeviceCharacteristics = a5;
      if ( (v20 & 1) != 0 )
        v15 = v12;
      if ( (v20 & 4) != 0 )
        DeviceCharacteristics = v13;
      if ( (v20 & 8) != 0 )
        a6 = BYTE4(v22);
      updated = IoCreateDevice(a1, DeviceExtensionSize, a3, v15, DeviceCharacteristics, a6, &DeviceObject);
      if ( updated >= 0 )
      {
        updated = IopDevObjApplyPostCreationSettings(DeviceObject);
        if ( updated < 0 )
          IoDeleteDevice(DeviceObject);
        else
          *(_QWORD *)&v9->Type = DeviceObject;
      }
    }
  }
  if ( (v10 & 2) != 0 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)updated;
}
