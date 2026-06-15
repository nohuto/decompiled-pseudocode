/*
 * XREFs of ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180026130
 * Callers:
 *     _lambda_bcae059e430ab0425bfd15752f8ec40b_::operator() @ 0x180002688 (_lambda_bcae059e430ab0425bfd15752f8ec40b_--operator().c)
 *     ?PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEA_N00@Z @ 0x180026290 (-PerformLicenseCheckInternal@AtmosCheck@@AEAAJPEA_N00@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18003CDE0 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18003CFAC (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180057B78 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x1800D4CF0 (--1AtmosCheck@@UEAA@XZ.c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x1800D684C (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 */

void __fastcall AtmosCheck::Trace(AtmosCheck *this, const char *a2, int a3)
{
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  _DWORD v5[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v6; // [rsp+38h] [rbp-41h]
  void *v7; // [rsp+40h] [rbp-39h]
  int v8; // [rsp+48h] [rbp-31h]
  int v9; // [rsp+4Ch] [rbp-2Dh]
  void *v10; // [rsp+50h] [rbp-29h]
  int v11; // [rsp+58h] [rbp-21h]
  int v12; // [rsp+5Ch] [rbp-1Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+90h] [rbp+17h] BYREF
  int *v16; // [rsp+A0h] [rbp+27h]
  int v17; // [rsp+A8h] [rbp+2Fh]
  int v18; // [rsp+ACh] [rbp+33h]
  int v19; // [rsp+F0h] [rbp+77h] BYREF

  v19 = a3;
  if ( a3 )
  {
    if ( (unsigned int)dword_18012A2E0 > 2 )
    {
      TlgCreateSz(&v15, a2);
      v18 = 0;
      v16 = &v19;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_18012A2E0, &unk_1800FBFAD, v3, v4, 4u, &pData);
    }
  }
  else if ( (unsigned int)dword_18012A2E0 > 4 )
  {
    TlgCreateSz(&pDesc, a2);
    v6 = 0LL;
    v5[1] = 4;
    v7 = off_18012A2E8;
    v5[0] = ((unsigned int)&unk_1800FBFDD - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v8 = *(unsigned __int16 *)off_18012A2E8;
    v10 = &unk_1800FBFE8;
    v9 = 2;
    v11 = 23;
    v12 = 1;
    EtwEventWriteTransfer(qword_18012A300, v5, 0LL, 0LL);
  }
}
