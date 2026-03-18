/*
 * XREFs of ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C01E30A0
 * Callers:
 *     DxgkEscape @ 0x1C009EC60 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01E2EC8 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C01E3CF8 (DpiCallDrvSetBacklightOptimizationLevel.c)
 *     DpiCallDrvSetBrightness @ 0x1C01E3D78 (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessEscape(struct _DEVICE_OBJECT *a1, struct _D3DKMT_BRIGHTNESS_INFO *a2)
{
  _WORD *DeviceExtension; // rsi
  D3DKMT_BRIGHTNESS_INFO_TYPE Type; // ecx
  unsigned int v6; // ebx
  bool v7; // al
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v17; // [rsp+30h] [rbp-39h] BYREF
  int v18; // [rsp+38h] [rbp-31h]
  const wchar_t *v19; // [rsp+40h] [rbp-29h]
  int *v20; // [rsp+48h] [rbp-21h]
  int v21; // [rsp+50h] [rbp-19h]
  int *v22; // [rsp+58h] [rbp-11h]
  int v23; // [rsp+60h] [rbp-9h]
  __int64 v24; // [rsp+68h] [rbp-1h]
  int v25; // [rsp+70h] [rbp+7h]
  _BYTE v26[40]; // [rsp+78h] [rbp+Fh] BYREF
  int v27; // [rsp+D0h] [rbp+67h] BYREF
  char v28; // [rsp+E0h] [rbp+77h] BYREF

  DeviceExtension = a1->DeviceExtension;
  if ( DeviceExtension[2245] != 2 )
    return 3221225659LL;
  Type = a2->Type;
  v6 = 0;
  if ( a2->Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
  {
    v7 = *((_BYTE *)DeviceExtension + 4274) == 0;
    *((_BYTE *)DeviceExtension + 4274) = v7;
    LOBYTE(a2->ChildUid) = v7;
    return 0LL;
  }
  if ( Type != D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE && !*((_BYTE *)DeviceExtension + 4272) )
    return 3221226538LL;
  v8 = Type - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                v15 = v14 - 1;
                if ( v15 )
                {
                  if ( v15 == 1 )
                  {
                    *((_BYTE *)DeviceExtension + 4272) = 0;
                    if ( (*((int (__fastcall **)(_QWORD, char *))DeviceExtension + 568))(
                           *((_QWORD *)DeviceExtension + 562),
                           &v28) >= 0
                      && (v28 & 1) != 0 )
                    {
                      v27 |= 1u;
                      (*((void (__fastcall **)(_QWORD, int *))DeviceExtension + 569))(
                        *((_QWORD *)DeviceExtension + 562),
                        &v27);
                    }
                    DpiCallDrvSetBrightness(a1);
                    DpiBrightnessAISetBacklightOptLevel(a1);
                  }
                  else
                  {
                    return (unsigned int)-1073741811;
                  }
                }
                else
                {
                  v27 = 0;
                  v21 = 4;
                  v19 = L"EnableManualBrightnessMode";
                  v23 = 4;
                  v20 = &v27;
                  v17 = 0LL;
                  v18 = 32;
                  v22 = &v27;
                  v24 = 0LL;
                  v25 = 0;
                  memset(v26, 0, sizeof(v26));
                  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v17, 0LL, 0LL);
                  *((_BYTE *)DeviceExtension + 4272) = v27 != 0;
                  DpiCallDrvSetBacklightOptimizationLevel(a1);
                }
                return v6;
              }
              return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, ULONG *))DeviceExtension + 571))(
                                     *((_QWORD *)DeviceExtension + 562),
                                     &a2->ChildUid);
            }
            else
            {
              if ( (int)a2->ChildUid > 3 )
                return 3221225485LL;
              return (unsigned int)DpiCallDrvSetBacklightOptimizationLevel(a1);
            }
          }
          else
          {
            return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, ULONG *))DeviceExtension + 569))(
                                   *((_QWORD *)DeviceExtension + 562),
                                   &a2->ChildUid);
          }
        }
        else
        {
          return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, ULONG *))DeviceExtension + 568))(
                                 *((_QWORD *)DeviceExtension + 562),
                                 &a2->ChildUid);
        }
      }
      else
      {
        return (unsigned int)DpiCallDrvSetBrightness(a1);
      }
    }
    else
    {
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, ULONG *))DeviceExtension + 567))(
                             *((_QWORD *)DeviceExtension + 562),
                             &a2->ChildUid);
    }
  }
  else
  {
    return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, ULONG *, char *))DeviceExtension + 565))(
                           *((_QWORD *)DeviceExtension + 562),
                           256LL,
                           &a2->ChildUid,
                           (char *)&a2->ChildUid + 1);
  }
}
