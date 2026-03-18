/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18018D9D8
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x1801350B8 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18018EB80 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x18018FE9C (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  int v3; // r12d
  char v6; // si
  unsigned __int8 v7; // dl
  char v8; // r14
  char v9; // di
  unsigned __int8 v10; // di
  bool v11; // al
  bool v12; // al
  bool v13; // al
  bool v14; // al
  const struct _TlgProvider_t *v15; // rcx
  const GUID *v16; // r8
  const GUID *v17; // r9
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  char v21; // dl
  int v22; // xmm1_4
  bool v23; // al
  char v24; // cl
  __int64 v25; // xmm1_8
  __int128 v27; // [rsp+30h] [rbp-39h] BYREF
  __int64 v28; // [rsp+40h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-21h] BYREF
  __int128 *v30; // [rsp+68h] [rbp-1h]
  int v31; // [rsp+70h] [rbp+7h]
  int v32; // [rsp+74h] [rbp+Bh]

  v3 = 0;
  if ( !*a1 )
    v3 = -2147019873;
  v6 = 0;
  if ( v3 < 0 )
    return (unsigned int)v3;
  v7 = *((_BYTE *)a1 + 148);
  v8 = 2;
  if ( (v7 & 1) != 0 || *((_DWORD *)a1 + 36) != a2[2] )
  {
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
    v6 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) == v11 )
    {
      v12 = (v10 & 4) != 0 || (v10 & 8) != 0;
      if ( ((*((_BYTE *)a1 + 124) & 0xC) != 0) == v12 )
      {
        v13 = (v10 & 0x10) != 0 || (v10 & 0x20) != 0;
        if ( ((*((_BYTE *)a1 + 124) & 0x30) != 0) == v13 )
          v6 = 0;
      }
    }
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(*a1, &pData) != 1
      && (v6 || ((v10 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v10 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0) )
    {
      v6 = 1;
    }
    v7 = *((_BYTE *)a1 + 148);
    if ( (v7 & 8) == 0 )
    {
      v14 = ((v7 >> 4) & 1) != (*((float *)a1 + 32) == 45.0) || ((v7 >> 5) & 1) != (*((float *)a1 + 33) == 45.0);
      v6 |= v14;
    }
    if ( ((*((_BYTE *)a1 + 148) & 8) == 0 || v6) && *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v6 = 1;
    if ( (unsigned int)(*a2 - 2) > 2 && (a1[17] & 2) != 0 )
      v6 = 1;
  }
  if ( *((_DWORD *)a1 + 39) == 1 && ((*((_BYTE *)a1 + 136) ^ (v7 >> 1)) & 1) != 0 )
  {
    v6 = 1;
    if ( (v7 & 2) == 0 || dword_18023D7F0 <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
      goto LABEL_56;
    v32 = 0;
    v30 = &v27;
    *(_QWORD *)&v27 = a1;
    v31 = 8;
    TlgWrite(v15, &unk_1801F850A, v16, v17, 3u, &pData);
  }
  if ( !v6 && (*((_BYTE *)a1 + 148) & 4) == 0 )
    goto LABEL_75;
LABEL_56:
  v18 = *a2;
  v27 = 0uLL;
  v28 = 0LL;
  LODWORD(v27) = *((_DWORD *)a1 + 39);
  v19 = *((_DWORD *)a1 + 4);
  if ( (unsigned int)(v18 - 2) > 2 )
    v20 = v19 | 0xC0;
  else
    v20 = v19 & 0xFFFFFF3F;
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
  v23 = (unsigned int)(v18 - 2) > 2 && (v21 & 2) != 0;
  v24 = v23 | v28 & 0xFE;
  *((_BYTE *)a1 + 148) = v21 ^ (v21 ^ (2 * v24)) & 2;
  if ( (unsigned int)(*a2 - 2) > 2 || (a2[6] & 4) == 0 )
    v8 = 0;
  HIDWORD(v28) = *((_DWORD *)a1 + 38);
  LOBYTE(v28) = v8 | v24 & 0xFD;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a1 + 16LL))(*a1, &v27);
  if ( v3 >= 0 )
  {
    v25 = v28;
    *(_OWORD *)(a1 + 15) = v27;
    a1[17] = v25;
LABEL_75:
    *((_BYTE *)a1 + 148) &= ~4u;
  }
  return (unsigned int)v3;
}
