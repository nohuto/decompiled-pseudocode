/*
 * XREFs of ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C0200B74
 * Callers:
 *     DxgkEscape @ 0x1C00A66B0 (DxgkEscape.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0200994 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     DpiCallDrvSetBacklightOptimizationLevel @ 0x1C0201DDC (DpiCallDrvSetBacklightOptimizationLevel.c)
 *     DpiCallDrvSetBrightness @ 0x1C0201E5C (DpiCallDrvSetBrightness.c)
 */

__int64 __fastcall DpiBrightnessEscape(struct _DEVICE_OBJECT *a1, struct _D3DKMT_BRIGHTNESS_INFO *a2)
{
  _WORD *DeviceExtension; // rsi
  unsigned int v3; // ebx
  char *v4; // rdi
  char *v5; // r9
  D3DKMT_BRIGHTNESS_INFO_TYPE Type; // ecx
  __int16 v8; // ax
  bool v9; // zf
  UCHAR v11; // al
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  int v15; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  __int32 v19; // ecx
  __int64 v20; // [rsp+30h] [rbp-39h] BYREF
  int v21; // [rsp+38h] [rbp-31h]
  const wchar_t *v22; // [rsp+40h] [rbp-29h]
  int *v23; // [rsp+48h] [rbp-21h]
  int v24; // [rsp+50h] [rbp-19h]
  int *v25; // [rsp+58h] [rbp-11h]
  int v26; // [rsp+60h] [rbp-9h]
  __int64 v27; // [rsp+68h] [rbp-1h]
  int v28; // [rsp+70h] [rbp+7h]
  _BYTE v29[40]; // [rsp+78h] [rbp+Fh] BYREF
  int v30; // [rsp+D0h] [rbp+67h] BYREF
  char v31; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceExtension = a1->DeviceExtension;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  Type = a2->Type;
  v8 = DeviceExtension[2281];
  if ( v8 == 2 )
    v4 = (char *)(DeviceExtension + 2280);
  if ( v8 == 3 )
    v5 = (char *)(DeviceExtension + 2280);
  if ( Type < D3DKMT_BRIGHTNESS_INFO_GET )
    goto LABEL_10;
  if ( Type <= D3DKMT_BRIGHTNESS_INFO_GET_CAPS
    || Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION
    || Type == D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE )
  {
    if ( v4 )
      goto LABEL_15;
  }
  else if ( Type != D3DKMT_BRIGHTNESS_INFO_GET_NIT_RANGES )
  {
LABEL_10:
    v9 = v4 == 0LL;
    goto LABEL_13;
  }
  v9 = v5 == 0LL;
LABEL_13:
  if ( v9 )
    return 3221225659LL;
LABEL_15:
  if ( Type == D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING )
  {
    v11 = *((_BYTE *)DeviceExtension + 4274) == 0;
    *((_BYTE *)DeviceExtension + 4274) = v11;
    a2->PossibleLevels.LevelCount = v11;
    return 0LL;
  }
  if ( Type != D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE && !*((_BYTE *)DeviceExtension + 4272) )
    return 3221226538LL;
  if ( Type > D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
  {
    v17 = Type - 7;
    if ( !v17 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64, char *))v4
                            + 10))(
                             *((_QWORD *)v4 + 1),
                             &a2->PossibleLevels,
                             4LL,
                             v5);
    v18 = v17 - 1;
    if ( !v18 )
    {
      v24 = 4;
      v22 = L"EnableManualBrightnessMode";
      v26 = 4;
      v30 = 0;
      v23 = &v30;
      v25 = &v30;
      v20 = 0LL;
      v21 = 32;
      v27 = 0LL;
      v28 = 0;
      memset(v29, 0, sizeof(v29));
      RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v20, 0LL, 0LL);
      *((_BYTE *)DeviceExtension + 4272) = v30 != 0;
      if ( v4 )
        DpiCallDrvSetBacklightOptimizationLevel(a1);
      return v3;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      *((_BYTE *)DeviceExtension + 4272) = 0;
      if ( v4 )
      {
        if ( (*((int (__fastcall **)(_QWORD, char *, __int64, char *))v4 + 7))(*((_QWORD *)v4 + 1), &v31, 4LL, v5) >= 0
          && (v31 & 1) != 0 )
        {
          v30 |= 1u;
          (*((void (__fastcall **)(_QWORD, int *))v4 + 8))(*((_QWORD *)v4 + 1), &v30);
        }
        DpiCallDrvSetBrightness(a1);
        DpiBrightnessAISetBacklightOptLevel(a1);
      }
      return v3;
    }
    if ( v19 == 2 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 7))(
                             *((_QWORD *)v5 + 1),
                             a2->ChildUid,
                             &a2->PossibleLevels);
  }
  else
  {
    if ( Type == D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION )
    {
      if ( (int)a2->BrightnessCaps.Value > 3 )
        return 3221225485LL;
      if ( v5 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD))v5 + 8))(*((_QWORD *)v5 + 1), a2->ChildUid);
      else
        return (unsigned int)DpiCallDrvSetBacklightOptimizationLevel(a1);
    }
    v12 = Type - 1;
    if ( !v12 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, __int64, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, UCHAR *))v4
                            + 4))(
                             *((_QWORD *)v4 + 1),
                             256LL,
                             &a2->PossibleLevels,
                             a2->PossibleLevels.BrightnessLevels);
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( v5 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 5))(
                               *((_QWORD *)v5 + 1),
                               a2->ChildUid,
                               &a2->PossibleLevels);
      else
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64, _QWORD))v4
                              + 6))(
                               *((_QWORD *)v4 + 1),
                               &a2->PossibleLevels,
                               4LL,
                               0LL);
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      if ( v5 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 4))(
                               *((_QWORD *)v5 + 1),
                               a2->ChildUid,
                               &a2->PossibleLevels);
      else
        return (unsigned int)DpiCallDrvSetBrightness(a1);
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      if ( v5 )
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, _QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *))v5 + 6))(
                               *((_QWORD *)v5 + 1),
                               a2->ChildUid,
                               &a2->PossibleLevels);
      else
        return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64, _QWORD))v4
                              + 7))(
                               *((_QWORD *)v4 + 1),
                               &a2->PossibleLevels,
                               4LL,
                               0LL);
    }
    if ( v15 == 1 )
      return (unsigned int)(*((__int64 (__fastcall **)(_QWORD, D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS *, __int64, char *))v4
                            + 8))(
                             *((_QWORD *)v4 + 1),
                             &a2->PossibleLevels,
                             4LL,
                             v5);
  }
  return (unsigned int)-1073741811;
}
