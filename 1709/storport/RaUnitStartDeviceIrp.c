/*
 * XREFs of RaUnitStartDeviceIrp @ 0x1C006110C
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0005620 (RaUnitPnpIrp.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0002C98 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0002CCC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0003A20 (_TlgCreateWsz.c)
 *     RaidCompleteRequestEx @ 0x1C000B4A0 (RaidCompleteRequestEx.c)
 *     RaidIsUnitQueueLocked @ 0x1C000E498 (RaidIsUnitQueueLocked.c)
 *     RaidUnlockUnitQueue @ 0x1C000E4A8 (RaidUnlockUnitQueue.c)
 *     RaidUnitRestartQueue @ 0x1C0012EFC (RaidUnitRestartQueue.c)
 *     RaidUnitConvertToNormalUnit @ 0x1C0012F10 (RaidUnitConvertToNormalUnit.c)
 *     RaidGetD3ColdInterface @ 0x1C0012FA8 (RaidGetD3ColdInterface.c)
 *     RaidUnitRegisterInterfaces @ 0x1C00140C0 (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetPowerCycleCount @ 0x1C0014468 (RaidUnitGetPowerCycleCount.c)
 *     RaidIsUnitControlSupported @ 0x1C001666C (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C00166F4 (RaCallMiniportUnitControl.c)
 *     RaidUnitGetInitialTimestamp @ 0x1C0017384 (RaidUnitGetInitialTimestamp.c)
 *     RaidGetD3ColdCapability @ 0x1C001CC48 (RaidGetD3ColdCapability.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     RaUnitInitializeWMI @ 0x1C0060DD4 (RaUnitInitializeWMI.c)
 *     RaidUnitGetDeviceParameters @ 0x1C0060E2C (RaidUnitGetDeviceParameters.c)
 */

__int64 __fastcall RaUnitStartDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // r9
  _BYTE *v8; // r9
  __int64 v9; // rcx
  const WCHAR *v10; // rdx
  const GUID *v11; // r8
  const GUID *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  char D3ColdCapability; // al
  char v18; // cl
  __int64 v19; // rcx
  char v20; // [rsp+30h] [rbp-D0h] BYREF
  char v21; // [rsp+31h] [rbp-CFh] BYREF
  char v22; // [rsp+32h] [rbp-CEh] BYREF
  char v23; // [rsp+33h] [rbp-CDh] BYREF
  char v24; // [rsp+34h] [rbp-CCh] BYREF
  char v25; // [rsp+35h] [rbp-CBh] BYREF
  char v26; // [rsp+36h] [rbp-CAh] BYREF
  char v27; // [rsp+37h] [rbp-C9h] BYREF
  int v28; // [rsp+38h] [rbp-C8h] BYREF
  int v29; // [rsp+3Ch] [rbp-C4h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+44h] [rbp-BCh] BYREF
  int v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h] BYREF
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  char v37; // [rsp+68h] [rbp-98h]
  char v38; // [rsp+69h] [rbp-97h]
  char v39; // [rsp+6Ah] [rbp-96h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  int *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  char *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  char *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v54; // [rsp+100h] [rbp+0h]
  int v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+10Ch] [rbp+Ch]
  __int128 *v57; // [rsp+110h] [rbp+10h]
  int v58; // [rsp+118h] [rbp+18h]
  int v59; // [rsp+11Ch] [rbp+1Ch]
  int *v60; // [rsp+120h] [rbp+20h]
  int v61; // [rsp+128h] [rbp+28h]
  int v62; // [rsp+12Ch] [rbp+2Ch]
  _DWORD *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  __int64 v65; // [rsp+140h] [rbp+40h]
  _DWORD v66[2]; // [rsp+148h] [rbp+48h] BYREF
  char *v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  char *v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  char *v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  char *v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  char *v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h]
  __int64 *v77; // [rsp+1A0h] [rbp+A0h]
  __int64 v78; // [rsp+1A8h] [rbp+A8h]
  int *v79; // [rsp+1B0h] [rbp+B0h]
  __int64 v80; // [rsp+1B8h] [rbp+B8h]
  int *v81; // [rsp+1C0h] [rbp+C0h]
  __int64 v82; // [rsp+1C8h] [rbp+C8h]
  int *v83; // [rsp+1D0h] [rbp+D0h]
  __int64 v84; // [rsp+1D8h] [rbp+D8h]
  int *v85; // [rsp+1E0h] [rbp+E0h]
  __int64 v86; // [rsp+1E8h] [rbp+E8h]
  int *v87; // [rsp+1F0h] [rbp+F0h]
  __int64 v88; // [rsp+1F8h] [rbp+F8h]
  int *v89; // [rsp+200h] [rbp+100h]
  __int64 v90; // [rsp+208h] [rbp+108h]
  int v91; // [rsp+210h] [rbp+110h] BYREF
  char v92; // [rsp+214h] [rbp+114h]
  __int128 v93; // [rsp+218h] [rbp+118h] BYREF
  char v94; // [rsp+228h] [rbp+128h]

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
        || (D3ColdCapability = RaidGetD3ColdCapability(*(_QWORD *)(a1 + 1496)), v18 = 2, !D3ColdCapability) )
      {
        v18 = 0;
      }
      *(_BYTE *)(a1 + 153) = v18 | *(_BYTE *)(a1 + 153) & 0xFD;
    }
    else
    {
      *(_BYTE *)(a1 + 153) &= ~2u;
    }
    if ( RaidIsUnitControlSupported(a1, 2) )
    {
      v19 = *(_QWORD *)(a1 + 24);
      LOWORD(v36) = 1;
      WORD1(v36) = *(_WORD *)(v19 + 56);
      v37 = *(_BYTE *)(a1 + 88);
      v38 = *(_BYTE *)(a1 + 89);
      v39 = *(_BYTE *)(a1 + 90);
      HIDWORD(v36) = 4;
      RaCallMiniportUnitControl(v19 + 296);
    }
    *(_BYTE *)(a1 + 153) |= 0x10u;
  }
  RaidUnitGetDeviceParameters(a1);
  *(_QWORD *)(a1 + 2696) = 0x10000000LL;
  RaidUnitGetInitialTimestamp(a1);
  RaidUnitGetPowerCycleCount(a1);
  v7 = *(_QWORD *)(a1 + 96);
  if ( v7 )
  {
    v36 = 0LL;
    v93 = 0uLL;
    v91 = 0;
    v37 = 0;
    v94 = 0;
    v92 = 0;
    v36 = *(_QWORD *)(v7 + 8);
    v93 = *(_OWORD *)(v7 + 16);
    v91 = *(_DWORD *)(v7 + 32);
    if ( (unsigned int)dword_1C0056060 > 5 )
    {
      if ( TlgKeywordOn(v6, 0x400000000000uLL) )
      {
        v9 = *(_QWORD *)(a1 + 24);
        v28 = *(_DWORD *)(v9 + 56);
        v20 = *(_BYTE *)(a1 + 88);
        v21 = *(_BYTE *)(a1 + 89);
        v22 = *(_BYTE *)(a1 + 90);
        v10 = *(const WCHAR **)(v9 + 4800);
        v23 = *(_BYTE *)(a1 + 120);
        v24 = *v8 & 0x1F;
        v25 = *v8 >> 5;
        v26 = v8[1] & 0x7F;
        v27 = v8[1] >> 7;
        v35 = *(_QWORD *)(a1 + 2616);
        v29 = *(_DWORD *)(a1 + 2608);
        v30 = *(_DWORD *)(a1 + 1544);
        v31 = *(_DWORD *)(a1 + 1548);
        v32 = *(_DWORD *)(a1 + 1552);
        v33 = *(_DWORD *)(a1 + 1556);
        v34 = *(_DWORD *)(a1 + 1564);
        v41 = v9 + 5192;
        v42 = 16LL;
        v43 = a1 + 1720;
        v45 = &v28;
        v47 = &v20;
        v49 = &v21;
        v51 = &v22;
        v44 = 16LL;
        v46 = 4LL;
        v48 = 1LL;
        v50 = 1LL;
        v52 = 1LL;
        TlgCreateWsz(&pDesc, v10);
        v13 = -1LL;
        v14 = -1LL;
        do
          ++v14;
        while ( *((_BYTE *)&v36 + v14) );
        v56 = 0;
        v54 = &v36;
        v55 = v14 + 1;
        v15 = -1LL;
        do
          ++v15;
        while ( *((_BYTE *)&v93 + v15) );
        v59 = 0;
        v58 = v15 + 1;
        v57 = &v93;
        do
          ++v13;
        while ( *((_BYTE *)&v91 + v13) );
        v62 = 0;
        v60 = &v91;
        v61 = v13 + 1;
        v63 = v66;
        v65 = *(_QWORD *)(a1 + 112);
        v66[0] = *(unsigned __int16 *)(a1 + 104);
        v67 = &v23;
        v69 = &v24;
        v71 = &v25;
        v73 = &v26;
        v75 = &v27;
        v77 = &v35;
        v79 = &v29;
        v81 = &v30;
        v83 = &v31;
        v85 = &v32;
        v87 = &v33;
        v89 = &v34;
        v64 = 2LL;
        v66[1] = 0;
        v68 = 1LL;
        v70 = 1LL;
        v72 = 1LL;
        v74 = 1LL;
        v76 = 1LL;
        v78 = 8LL;
        v80 = 4LL;
        v82 = 4LL;
        v84 = 4LL;
        v86 = 4LL;
        v88 = 4LL;
        v90 = 4LL;
        TlgWrite((TraceLoggingHProvider)v13, &unk_1C004BBB2, v11, v12, 0x1Au, &pData);
      }
    }
  }
  return RaidCompleteRequestEx(a2, 0, 0);
}
