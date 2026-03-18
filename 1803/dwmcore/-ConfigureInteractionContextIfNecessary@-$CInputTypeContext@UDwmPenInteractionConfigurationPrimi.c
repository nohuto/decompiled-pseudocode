/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x1801D3B7C
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x1801D5598 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x1801D4E48 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x1801D67B0 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  char v5; // si
  signed int v6; // r15d
  unsigned __int8 v7; // cl
  char v8; // r14
  char v9; // di
  unsigned __int8 v10; // di
  bool v11; // al
  bool v12; // dl
  int v13; // ecx
  bool v14; // al
  bool v15; // al
  bool v16; // cl
  const struct _TlgProvider_t *v17; // rcx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  unsigned __int8 v21; // dl
  int v22; // xmm1_4
  char v23; // cl
  char v24; // cl
  __int64 v25; // xmm1_8
  __int128 v27; // [rsp+30h] [rbp-39h] BYREF
  __int64 v28; // [rsp+40h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  __int128 *v30; // [rsp+68h] [rbp-1h]
  int v31; // [rsp+70h] [rbp+7h]
  int v32; // [rsp+74h] [rbp+Bh]

  v5 = 0;
  v6 = *a1 == 0LL ? 0x8007139F : 0;
  if ( !*a1 )
    goto LABEL_70;
  v7 = *((_BYTE *)a1 + 148);
  v8 = 2;
  if ( (v7 & 1) == 0 && *((_DWORD *)a1 + 36) == a2[2] )
    goto LABEL_43;
  CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
    a1,
    &v27,
    (unsigned int)a2[2],
    a3);
  if ( (a2[6] & 8) != 0 || (unsigned int)(*a2 - 2) > 2 )
  {
    v9 = BYTE8(v27);
  }
  else
  {
    v9 = BYTE8(v27) & 0x3F;
    DWORD2(v27) &= 0xFFFFFF3F;
  }
  CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
    a1,
    &v27);
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
  if ( (v7 & 8) == 0 )
  {
    v15 = ((v7 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v7 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
    v5 |= v15;
LABEL_38:
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v5 = 1;
    goto LABEL_40;
  }
  if ( v5 )
    goto LABEL_38;
LABEL_40:
  if ( (unsigned int)(*a2 - 2) > 2 && (a1[17] & 2) != 0 )
    v5 = 1;
LABEL_43:
  if ( *((_DWORD *)a1 + 39) == 2 )
  {
    v16 = (v7 & 2) != 0;
    if ( v16 != (a1[17] & 1) )
    {
      v5 = 1;
      if ( !v16 || dword_1802D3FE0 <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
        goto LABEL_51;
      v32 = 0;
      v30 = &v27;
      *(_QWORD *)&v27 = a1;
      v31 = 8;
      TlgWrite(v17, &unk_1802A9E21, 0LL, 0LL, 3u, &pData);
    }
  }
  if ( !v5 && (*((_BYTE *)a1 + 148) & 4) == 0 )
  {
LABEL_70:
    if ( v6 >= 0 )
      *((_BYTE *)a1 + 148) &= ~4u;
    return (unsigned int)v6;
  }
LABEL_51:
  v18 = *a2;
  v27 = 0uLL;
  v28 = 0LL;
  LODWORD(v27) = *((_DWORD *)a1 + 39);
  v19 = *((_DWORD *)a1 + 4);
  if ( (unsigned int)(v18 - 2) <= 2 )
    v20 = v19 & 0xFFFFFF3F;
  else
    v20 = v19 | 0xC0;
  v21 = *((_BYTE *)a1 + 148);
  DWORD1(v27) = v20;
  if ( (v21 & 8) != 0 )
  {
    v22 = *((_DWORD *)a1 + 33);
    DWORD2(v27) = *((_DWORD *)a1 + 32);
    HIDWORD(v27) = v22;
  }
  else
  {
    if ( (v21 & 0x10) != 0 )
      DWORD2(v27) = 1110704128;
    else
      DWORD2(v27) = 0;
    if ( (v21 & 0x20) != 0 )
      HIDWORD(v27) = 1110704128;
    else
      HIDWORD(v27) = 0;
  }
  if ( (unsigned int)(v18 - 2) > 2 )
    v23 = v21 >> 1;
  else
    v23 = 0;
  v24 = v28 ^ (v28 ^ v23) & 1;
  *((_BYTE *)a1 + 148) = v21 ^ (v21 ^ (2 * v24)) & 2;
  if ( (unsigned int)(*a2 - 2) > 2 || (a2[6] & 4) == 0 )
    v8 = 0;
  HIDWORD(v28) = *((_DWORD *)a1 + 38);
  LOBYTE(v28) = v8 | v24 & 0xFD;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a1 + 16LL))(*a1, &v27);
  if ( v6 >= 0 )
  {
    v25 = v28;
    *(_OWORD *)(a1 + 15) = v27;
    a1[17] = v25;
    goto LABEL_70;
  }
  return (unsigned int)v6;
}
