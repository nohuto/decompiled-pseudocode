/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18019B0FC
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x18019C9CC (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004630 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180005610 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18019C2F0 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x18019DAC4 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  char v5; // si
  signed int v6; // r15d
  unsigned __int8 v7; // dl
  char v8; // r14
  char v9; // di
  unsigned __int8 v10; // di
  bool v11; // cl
  bool v12; // dl
  int v13; // eax
  bool v14; // cl
  bool v15; // al
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  unsigned __int8 v22; // dl
  int v23; // xmm1_4
  char v24; // al
  char v25; // cl
  __int64 v26; // xmm1_8
  __int128 v28; // [rsp+30h] [rbp-39h] BYREF
  __int64 v29; // [rsp+40h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  __int128 *v31; // [rsp+68h] [rbp-1h]
  int v32; // [rsp+70h] [rbp+7h]
  int v33; // [rsp+74h] [rbp+Bh]

  v5 = 0;
  v6 = *a1 == 0LL ? 0x8007139F : 0;
  if ( !*a1 )
  {
LABEL_70:
    if ( v6 >= 0 )
      *((_BYTE *)a1 + 148) &= ~4u;
    return (unsigned int)v6;
  }
  v7 = *((_BYTE *)a1 + 148);
  v8 = 2;
  if ( (v7 & 1) != 0 || *((_DWORD *)a1 + 36) != a2[2] )
  {
    CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v28,
      (unsigned int)a2[2],
      a3);
    if ( (a2[6] & 8) != 0 || (unsigned int)(*a2 - 2) > 2 )
    {
      v9 = BYTE8(v28);
    }
    else
    {
      v9 = BYTE8(v28) & 0x3F;
      DWORD2(v28) &= 0xFFFFFF3F;
    }
    CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v28);
    if ( (unsigned int)(*a2 - 2) > 2 )
      v10 = v9 | 0xC0;
    else
      v10 = v9 & 0x3F;
    v11 = (v10 & 1) != 0 || (v10 & 2) != 0;
    if ( ((*((_DWORD *)a1 + 31) & 3) != 0) != v11 )
      goto LABEL_25;
    v12 = (*((_DWORD *)a1 + 31) & 0xC) != 0;
    if ( (v10 & 4) != 0 || (v10 & 8) != 0 )
      v12 = (*((_DWORD *)a1 + 31) & 0xC) == 0;
    if ( v12 )
      goto LABEL_25;
    v13 = *((_DWORD *)a1 + 31) & 0x30;
    v14 = v13 != 0;
    if ( (v10 & 0x10) != 0 || (v10 & 0x20) != 0 )
      v14 = v13 == 0;
    if ( v14 )
LABEL_25:
      v5 = 1;
    else
      v5 = 0;
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(*a1, &pData) != 1
      && (v5 || ((v10 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v10 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0) )
    {
      v5 = 1;
    }
    v7 = *((_BYTE *)a1 + 148);
    if ( (v7 & 8) != 0 )
    {
      if ( !v5 )
      {
LABEL_40:
        if ( (unsigned int)(*a2 - 2) > 2 && (a1[17] & 2) != 0 )
          v5 = 1;
        goto LABEL_43;
      }
    }
    else
    {
      v15 = ((v7 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v7 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v5 |= v15;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v5 = 1;
    goto LABEL_40;
  }
LABEL_43:
  if ( *((_DWORD *)a1 + 39) == 1 && ((*((_BYTE *)a1 + 136) ^ (v7 >> 1)) & 1) != 0 )
  {
    v5 = 1;
    if ( (v7 & 2) != 0 && dword_18026D7B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18026D7B0, 2uLL) )
    {
      v33 = 0;
      v31 = &v28;
      *(_QWORD *)&v28 = a1;
      v32 = 8;
      TlgWrite(v16, &unk_180214E67, v17, v18, 3u, &pData);
    }
  }
  if ( !v5 && (*((_BYTE *)a1 + 148) & 4) == 0 )
    goto LABEL_70;
  v19 = *a2;
  v28 = 0uLL;
  v29 = 0LL;
  LODWORD(v28) = *((_DWORD *)a1 + 39);
  v20 = *((_DWORD *)a1 + 4);
  if ( (unsigned int)(v19 - 2) > 2 )
    v21 = v20 | 0xC0;
  else
    v21 = v20 & 0xFFFFFF3F;
  v22 = *((_BYTE *)a1 + 148);
  DWORD1(v28) = v21;
  if ( (v22 & 8) != 0 )
  {
    v23 = *((_DWORD *)a1 + 33);
    DWORD2(v28) = *((_DWORD *)a1 + 32);
    HIDWORD(v28) = v23;
  }
  else
  {
    if ( (v22 & 0x10) != 0 )
      DWORD2(v28) = 1110704128;
    else
      DWORD2(v28) = 0;
    if ( (v22 & 0x20) != 0 )
      HIDWORD(v28) = 1110704128;
    else
      HIDWORD(v28) = 0;
  }
  if ( (unsigned int)(v19 - 2) > 2 )
    v24 = v22 >> 1;
  else
    v24 = 0;
  v25 = (v29 ^ v24) & 1 ^ v29;
  *((_BYTE *)a1 + 148) = v22 ^ (v22 ^ (2 * v25)) & 2;
  if ( (unsigned int)(*a2 - 2) > 2 || (a2[6] & 4) == 0 )
    v8 = 0;
  HIDWORD(v29) = *((_DWORD *)a1 + 38);
  LOBYTE(v29) = v8 | v25 & 0xFD;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a1 + 16LL))(*a1, &v28);
  if ( v6 >= 0 )
  {
    v26 = v29;
    *(_OWORD *)(a1 + 15) = v28;
    a1[17] = v26;
    goto LABEL_70;
  }
  return (unsigned int)v6;
}
