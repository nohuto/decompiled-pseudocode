/*
 * XREFs of ValidateDeviceSignature @ 0x1C010F220
 * Callers:
 *     <none>
 * Callees:
 *     ?_SqmTHQA@@YAXGGK@Z @ 0x1C010F3D8 (-_SqmTHQA@@YAXGGK@Z.c)
 *     ?CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z @ 0x1C01A4698 (-CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z.c)
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01A55AC (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 */

__int64 __fastcall ValidateDeviceSignature(
        struct _DEVICE_OBJECT *a1,
        struct _FILE_OBJECT *a2,
        struct _HIDP_PREPARSED_DATA *a3,
        struct _HIDP_CAPS *a4,
        __int64 a5,
        __int64 *a6,
        int a7)
{
  int v9; // r14d
  unsigned int v10; // eax
  unsigned int v11; // edi
  USHORT NumberFeatureValueCaps; // ax
  __int64 *v13; // r13
  __int64 v14; // rsi
  struct _HIDP_VALUE_CAPS *ValueCaps; // r15
  NTSTATUS SpecificValueCaps; // ebx
  bool v17; // zf
  USHORT v18; // dx
  unsigned __int16 v20; // cx
  __int64 v21; // xmm0_8
  unsigned __int16 v22[2]; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v23; // [rsp+5Ch] [rbp-2Dh] BYREF
  int v24; // [rsp+60h] [rbp-29h] BYREF
  int v25; // [rsp+64h] [rbp-25h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-21h] BYREF
  int SystemInformation; // [rsp+70h] [rbp-19h] BYREF
  char v28; // [rsp+74h] [rbp-15h]
  _HID_COLLECTION_INFORMATION v29; // [rsp+78h] [rbp-11h] BYREF
  USHORT ValueCapsLength; // [rsp+F0h] [rbp+67h] BYREF

  v22[0] = 0;
  EtwTraceTHQAStart();
  SystemInformation = 8;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength) < 0
    || (v9 = 1, (v28 & 2) == 0) )
  {
    v9 = 0;
  }
  v24 = 0;
  v25 = 4;
  v23 = 0;
  if ( (int)ZwQueryLicenseValue(&szTHQAPolicyName, &v24, &v23, 4LL, &v25) < 0 )
  {
    v10 = 0;
  }
  else
  {
    v10 = v23;
    if ( v24 != 4 )
      v10 = 0;
  }
  v11 = 0;
  if ( v9 )
    v11 = 4;
  if ( v10 )
  {
    if ( a7 )
      v11 = 5;
  }
  else
  {
    v11 = 3;
  }
  NumberFeatureValueCaps = a4->NumberFeatureValueCaps;
  v13 = a6;
  v14 = a5;
  v23 = v11;
  ValueCapsLength = NumberFeatureValueCaps;
  if ( NumberFeatureValueCaps )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * NumberFeatureValueCaps, 1668707157LL);
    if ( ValueCaps )
    {
      SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Feature, 0, 0, 0xC5u, ValueCaps, &ValueCapsLength, a3);
      if ( SpecificValueCaps >= 0 )
      {
        v20 = 197;
      }
      else
      {
        v17 = *(_DWORD *)(v14 + 24) == 7;
        v18 = a4->NumberFeatureValueCaps;
        ValueCapsLength = v18;
        if ( !v17
          || (SpecificValueCaps = CheckForSegmentedSignatureBlob(a3, v18, ValueCaps, v22), SpecificValueCaps < 0) )
        {
          SpecificValueCaps = -1073741668;
LABEL_15:
          Win32FreePool(ValueCaps);
          goto LABEL_16;
        }
        v20 = 199;
      }
      v21 = *v13;
      *(_DWORD *)&v29.ProductID = *((_DWORD *)v13 + 2);
      *(_QWORD *)&v29.DescriptorSize = v21;
      RetrieveAndVerifySignature(a1, a2, v20, ValueCaps, a4, a3, &v29, v22[0], &v23);
      v11 = v23;
      goto LABEL_15;
    }
  }
  SpecificValueCaps = -1073741668;
LABEL_16:
  if ( v11 == 1 || v11 == 2 && *(_DWORD *)(v14 + 24) == 7 || v9 )
    *(_DWORD *)(v14 + 260) |= 0x400u;
  _SqmTHQA(*((_WORD *)v13 + 3), *((_WORD *)v13 + 4), v11);
  EtwTraceTHQAStop();
  if ( v9 )
    return 0LL;
  if ( SpecificValueCaps < 0 )
  {
    if ( *(_DWORD *)(v14 + 24) != 7 )
      return 0LL;
    if ( a4->Usage == 5 )
      UserLogError(3221225742LL);
  }
  UserLogError(1073742091LL);
  return (unsigned int)SpecificValueCaps;
}
