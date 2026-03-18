/*
 * XREFs of IoDevObjCreateDeviceSecure @ 0x1C01EB690
 * Callers:
 *     <none>
 * Callees:
 *     IopDevObjApplyPostCreationSettings @ 0x1C01EB824 (IopDevObjApplyPostCreationSettings.c)
 *     SeSddlSecurityDescriptorFromSDDL @ 0x1C01EB8F4 (SeSddlSecurityDescriptorFromSDDL.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C01EC5C8 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x1C01EC710 (PpRegStateUpdateStackCreationSettings.c)
 */

__int64 __fastcall IoDevObjCreateDeviceSecure(
        struct _DRIVER_OBJECT *a1,
        __int64 a2,
        struct _UNICODE_STRING *a3,
        ULONG a4,
        ULONG a5,
        BOOLEAN a6,
        __int64 a7,
        __int64 a8,
        PDEVICE_OBJECT DeviceObject)
{
  PDEVICE_OBJECT v9; // r13
  __int64 result; // rax
  ULONG v11; // r15d
  PVOID v12; // rsi
  ULONG v13; // r12d
  char v14; // di
  NTSTATUS updated; // ebx
  ULONG v16; // r9d
  ULONG DeviceCharacteristics; // edx
  void *v19; // [rsp+40h] [rbp-40h] BYREF
  ULONG DeviceType[2]; // [rsp+48h] [rbp-38h] BYREF
  PVOID P; // [rsp+50h] [rbp-30h]
  ULONG v22[2]; // [rsp+58h] [rbp-28h]
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
    result = PpRegStateReadCreateClassCreationSettings(a8, a1, DeviceType);
    if ( (int)result < 0 )
      return result;
    v11 = v22[0];
    v12 = P;
    v13 = DeviceType[1];
    v14 = DeviceType[0];
  }
  else
  {
    v14 = 0;
    *(_QWORD *)DeviceType = 0LL;
    v12 = 0LL;
    P = 0LL;
    v13 = 0;
    *(_QWORD *)v22 = 0LL;
    v11 = 0;
  }
  if ( (v14 & 2) != 0 )
    goto LABEL_12;
  updated = SeSddlSecurityDescriptorFromSDDL(a7, a2, &v19);
  if ( updated >= 0 )
  {
    v12 = v19;
    v14 = 2;
    DeviceType[0] = 2;
    P = v19;
    if ( !a8
      || (v23[0] = 2LL,
          v23[2] = 0LL,
          v23[1] = v19,
          updated = PpRegStateUpdateStackCreationSettings(a8, v23),
          updated >= 0) )
    {
LABEL_12:
      v16 = a4;
      DeviceCharacteristics = a5;
      if ( (DeviceType[0] & 1) != 0 )
        v16 = v13;
      if ( (DeviceType[0] & 4) != 0 )
        DeviceCharacteristics = v11;
      if ( (DeviceType[0] & 8) != 0 )
        a6 = v22[1];
      updated = IoCreateDevice(a1, DeviceExtensionSize, a3, v16, DeviceCharacteristics, a6, &DeviceObject);
      if ( updated >= 0 )
      {
        updated = IopDevObjApplyPostCreationSettings(DeviceObject);
        if ( updated >= 0 )
          *(_QWORD *)&v9->Type = DeviceObject;
        else
          IoDeleteDevice(DeviceObject);
      }
    }
  }
  if ( (v14 & 2) != 0 )
    ExFreePoolWithTag(v12, 0);
  return (unsigned int)updated;
}
