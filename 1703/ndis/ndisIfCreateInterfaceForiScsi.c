/*
 * XREFs of ndisIfCreateInterfaceForiScsi @ 0x1C00D0F3C
 * Callers:
 *     ?ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETERS@@@Z @ 0x1C00DF0F0 (-ndisReadAddDeviceParametersV1@@YA_NPEAU_DEVICE_OBJECT@@AEAVKRegKey@@AEAUNDIS_ADDDEVICE_PARAMETE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     ndisIfCreatePersistedInterface @ 0x1C00449D0 (ndisIfCreatePersistedInterface.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0044BC0 (ndisIfDeletePersistedInterface.c)
 *     ndisCreateAdapterInstanceName @ 0x1C00A9D44 (ndisCreateAdapterInstanceName.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B7034 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00BF2D0 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfCreateInterfaceForiScsi(
        WCHAR *KeyHandle,
        _DEVICE_OBJECT *a2,
        unsigned __int16 a3,
        __int128 *a4,
        UINT32 *a5)
{
  _UNICODE_STRING *v5; // rdi
  NTSTATUS v10; // eax
  PVOID v11; // rcx
  unsigned int PersistedInterface; // ebx
  UINT32 v13; // ebx
  int v14; // eax
  unsigned __int16 Length; // ax
  __int128 v16; // xmm0
  UINT32 NetLuidIndex; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  __int64 Context; // [rsp+40h] [rbp-C0h] BYREF
  _UNICODE_STRING *v21; // [rsp+48h] [rbp-B8h] BYREF
  UINT32 v22; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v23; // [rsp+54h] [rbp-ACh]
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-A8h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  union _NET_LUID_LH v29[146]; // [rsp+E0h] [rbp-20h] BYREF

  ValueName.Buffer = L"NetLuidIndex";
  P = 0LL;
  v5 = 0LL;
  NetLuidIndex = 0;
  v21 = 0LL;
  *(_DWORD *)&ValueName.Length = 1703960;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qq(0xD5u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, KeyHandle, a2);
  *a5 = -1;
  QueryTable.Flags = 16;
  Context = 0LL;
  QueryTable.DefaultType = 0;
  QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))ndisReadParameter;
  v26 = 0LL;
  QueryTable.Name = L"BootNic";
  v27 = 0;
  QueryTable.EntryContext = &P;
  v28 = 0LL;
  v10 = RtlQueryRegistryValuesEx(0x40000000u, KeyHandle, &QueryTable, &Context, 0LL);
  v11 = P;
  if ( v10 >= 0 && P && (_DWORD)Context == 4 && *(_DWORD *)P == 1 )
  {
    PersistedInterface = ndisIfAllocateAndVerifyNetLuidIndex(a3, &NetLuidIndex, 1u, 1);
    if ( !PersistedInterface )
    {
      v13 = NetLuidIndex;
      *a5 = NetLuidIndex;
      memset(v29, 0, sizeof(v29));
      LODWORD(v29[1].Value) = 75760046;
      v29[0].Value = (((unsigned __int64)a3 << 24) | v13 & 0xFFFFFF) << 24;
      v14 = ndisCreateAdapterInstanceName(&v21, 0LL, a2, 0LL);
      v5 = v21;
      if ( v14 >= 0 )
      {
        Length = 512;
        if ( v21->Length <= 0x200u )
        {
          Length = v21->Length;
          LOWORD(v29[66].Value) = v21->Length;
        }
        else
        {
          LOWORD(v29[66].Value) = 512;
        }
        memmove((char *)&v29[66].Info + 2, v21->Buffer, Length);
        v16 = *a4;
        *((_WORD *)&v29[130].Info + 2) = a3;
        *(_OWORD *)&v29[131].Value = v16;
        *((_DWORD *)&v29[135].Info + 1) = -1;
        LODWORD(v29[136].Value) = -1;
        PersistedInterface = ndisIfCreatePersistedInterface(v29, NdisIfBlockSourceBootNic);
        if ( !PersistedInterface )
        {
          if ( !ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &NetLuidIndex, 4u) )
          {
            PersistedInterface = 0;
            goto LABEL_18;
          }
          v22 = NetLuidIndex;
          PersistedInterface = -1073741823;
          v23 = a3;
          ndisIfDeletePersistedInterface((__int64)&v22);
        }
      }
      else
      {
        PersistedInterface = -1073741823;
      }
      NdisIfFreeNetLuidIndex(a3, NetLuidIndex);
    }
LABEL_18:
    v11 = P;
    goto LABEL_20;
  }
  PersistedInterface = -1073741823;
LABEL_20:
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    P = 0LL;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qq(0xD6u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, KeyHandle, a2);
  return PersistedInterface;
}
