/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1C006013C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00077A0 (RaUnitPnpIrp.c)
 * Callees:
 *     _TlgCreateSz @ 0x1C00015D8 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00016B0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     RaidIsUnitQueueLocked @ 0x1C0003658 (RaidIsUnitQueueLocked.c)
 *     RaidUnlockUnitQueue @ 0x1C0003668 (RaidUnlockUnitQueue.c)
 *     RaidIsUnitControlSupported @ 0x1C0006A0C (RaidIsUnitControlSupported.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaCallMiniportUnitControl @ 0x1C0014B5C (RaCallMiniportUnitControl.c)
 *     RaidUnitRestartQueue @ 0x1C0015E8C (RaidUnitRestartQueue.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0015EA0 (RaidUnitConvertToNormalUnit.c)
 *     RaidGetD3ColdInterface @ 0x1C0015F0C (RaidGetD3ColdInterface.c)
 *     RaidUnitRegisterInterfaces @ 0x1C001689C (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C0016AB4 (RaidUnitGetInitialTimestamp.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C0016B88 (RaidUnitGetPowerCycleCount.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     RaidGetD3ColdCapability @ 0x1C003528C (RaidGetD3ColdCapability.c)
 *     RaUnitInitializeWMI @ 0x1C005FE0C (RaUnitInitializeWMI.c)
 *     RaidUnitGetDeviceParameters @ 0x1C005FE64 (RaidUnitGetDeviceParameters.c)
 */

__int64 __fastcall RaUnitStartDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // r9
  char D3ColdCapability; // al
  char v11; // cl
  _BYTE *v12; // r9
  __int64 v13; // rcx
  const WCHAR *v14; // rdx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18; // [rsp+31h] [rbp-CFh] BYREF
  char v19; // [rsp+32h] [rbp-CEh] BYREF
  char v20; // [rsp+33h] [rbp-CDh] BYREF
  char v21; // [rsp+34h] [rbp-CCh] BYREF
  char v22; // [rsp+35h] [rbp-CBh] BYREF
  char v23; // [rsp+36h] [rbp-CAh] BYREF
  char v24; // [rsp+37h] [rbp-C9h] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  int v29; // [rsp+48h] [rbp-B8h] BYREF
  int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h] BYREF
  CHAR psz[8]; // [rsp+60h] [rbp-A0h] BYREF
  char v34; // [rsp+68h] [rbp-98h]
  char v35; // [rsp+69h] [rbp-97h]
  char v36; // [rsp+6Ah] [rbp-96h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  int *v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  char *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  char *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  char *v48; // [rsp+E0h] [rbp-20h]
  __int64 v49; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v52; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+120h] [rbp+20h] BYREF
  struct _TlgProvider_t *p_hProvider; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 v56; // [rsp+140h] [rbp+40h]
  struct _TlgProvider_t hProvider; // [rsp+148h] [rbp+48h] BYREF
  __int64 v58; // [rsp+188h] [rbp+88h]
  char *v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]
  __int64 *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]
  int *v63; // [rsp+1B0h] [rbp+B0h]
  __int64 v64; // [rsp+1B8h] [rbp+B8h]
  int *v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1C8h] [rbp+C8h]
  int *v67; // [rsp+1D0h] [rbp+D0h]
  __int64 v68; // [rsp+1D8h] [rbp+D8h]
  int *v69; // [rsp+1E0h] [rbp+E0h]
  __int64 v70; // [rsp+1E8h] [rbp+E8h]
  int *v71; // [rsp+1F0h] [rbp+F0h]
  __int64 v72; // [rsp+1F8h] [rbp+F8h]
  int *v73; // [rsp+200h] [rbp+100h]
  __int64 v74; // [rsp+208h] [rbp+108h]
  CHAR v75[4]; // [rsp+210h] [rbp+110h] BYREF
  char v76; // [rsp+214h] [rbp+114h]
  CHAR v77[16]; // [rsp+218h] [rbp+118h] BYREF
  char v78; // [rsp+228h] [rbp+128h]

  if ( *(_DWORD *)(a1 + 40) != 1 )
  {
    RaUnitInitializeWMI(a1);
    RaidUnitRegisterInterfaces(a1);
    if ( (unsigned int)RaidIsUnitQueueLocked(a1) )
    {
      RaidUnlockUnitQueue(v4);
      RaidUnitRestartQueue(v5);
    }
    *(_DWORD *)(a1 + 40) = 1;
    RaidUnitConvertToNormalUnit(a1);
    if ( (int)RaidGetD3ColdInterface(*(PDEVICE_OBJECT *)(a1 + 8), (_QWORD *)(a1 + 1496)) >= 0 && *(_QWORD *)(a1 + 24) )
    {
      if ( (*(_DWORD *)(a1 + 1568) & 8) != 0
        || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1496)), v11 = 2, !D3ColdCapability) )
      {
        v11 = 0;
      }
      *(_BYTE *)(a1 + 153) = v11 | *(_BYTE *)(a1 + 153) & 0xFD;
    }
    else
    {
      *(_BYTE *)(a1 + 153) &= ~2u;
    }
    if ( RaidIsUnitControlSupported(a1, 2) )
    {
      v6 = *(_QWORD *)(a1 + 24);
      *(_WORD *)psz = 1;
      *(_WORD *)&psz[2] = *(_WORD *)(v6 + 56);
      v34 = *(_BYTE *)(a1 + 88);
      v35 = *(_BYTE *)(a1 + 89);
      v36 = *(_BYTE *)(a1 + 90);
      *(_DWORD *)&psz[4] = 4;
      RaCallMiniportUnitControl(v6 + 296);
    }
    *(_BYTE *)(a1 + 153) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  *(_QWORD *)(a1 + 2696) = 0x10000000LL;
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  v8 = *(_QWORD *)(a1 + 96);
  if ( v8 )
  {
    *(_QWORD *)psz = 0LL;
    memset(v77, 0, sizeof(v77));
    *(_DWORD *)v75 = 0;
    v34 = 0;
    v78 = 0;
    v76 = 0;
    *(_QWORD *)psz = *(_QWORD *)(v8 + 8);
    *(_OWORD *)v77 = *(_OWORD *)(v8 + 16);
    *(_DWORD *)v75 = *(_DWORD *)(v8 + 32);
    if ( (unsigned int)dword_1C0056060 > 5 )
    {
      if ( TlgKeywordOn(v7, 0x400000000000uLL) )
      {
        v13 = *(_QWORD *)(a1 + 24);
        v25 = *(_DWORD *)(v13 + 56);
        v17 = *(_BYTE *)(a1 + 88);
        v18 = *(_BYTE *)(a1 + 89);
        v19 = *(_BYTE *)(a1 + 90);
        v14 = *(const WCHAR **)(v13 + 4800);
        v20 = *(_BYTE *)(a1 + 120);
        v21 = *v12 & 0x1F;
        v22 = *v12 >> 5;
        v23 = v12[1] & 0x7F;
        v24 = v12[1] >> 7;
        v32 = *(_QWORD *)(a1 + 2616);
        v26 = *(_DWORD *)(a1 + 2608);
        v27 = *(_DWORD *)(a1 + 1544);
        v28 = *(_DWORD *)(a1 + 1548);
        v29 = *(_DWORD *)(a1 + 1552);
        v30 = *(_DWORD *)(a1 + 1556);
        v31 = *(_DWORD *)(a1 + 1564);
        v38 = v13 + 5192;
        v39 = 16LL;
        v40 = a1 + 1720;
        v42 = &v25;
        v44 = &v17;
        v46 = &v18;
        v48 = &v19;
        v41 = 16LL;
        v43 = 4LL;
        v45 = 1LL;
        v47 = 1LL;
        v49 = 1LL;
        TlgCreateWsz(&pDesc, v14);
        TlgCreateSz(&v51, psz);
        TlgCreateSz(&v52, v77);
        TlgCreateSz(&v53, v75);
        v56 = *(_QWORD *)(a1 + 112);
        hProvider.LevelPlus1 = *(unsigned __int16 *)(a1 + 104);
        hProvider.ProviderMetadataPtr = (const unsigned __int16 *)&v20;
        hProvider.KeywordAll = (unsigned __int64)&v21;
        p_hProvider = &hProvider;
        v55 = 2LL;
        *(&hProvider.LevelPlus1 + 1) = 0;
        hProvider.KeywordAny = 1LL;
        hProvider.RegHandle = 1LL;
        hProvider.CallbackContext = (void *)1;
        hProvider.EnableCallback = (void (__fastcall *)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))&v22;
        hProvider.AnnotationFunc = (void (*)(...))&v23;
        v59 = &v24;
        v61 = &v32;
        v63 = &v26;
        v65 = &v27;
        v67 = &v28;
        v69 = &v29;
        v71 = &v30;
        v73 = &v31;
        v58 = 1LL;
        v60 = 1LL;
        v62 = 8LL;
        v64 = 4LL;
        v66 = 4LL;
        v68 = 4LL;
        v70 = 4LL;
        v72 = 4LL;
        v74 = 4LL;
        TlgWrite(&hProvider, &unk_1C004C3CA, v15, v16, 0x1Au, &pData);
      }
    }
  }
  return RaidCompleteRequestEx(a2, 0, 0);
}
