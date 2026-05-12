/*
 * XREFs of RaUnitTelemetryIdIoctl @ 0x1C0017994
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0008110 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001610 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00016F0 (_TlgKeywordOn.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitTelemetryIdIoctl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *MasterIrp; // rdx
  const struct _TlgProvider_t *Length; // rcx
  unsigned int v7; // r8d
  const GUID *v9; // r8
  const GUID *v10; // r9
  __int64 v11; // r10
  __int64 v12; // rcx
  unsigned __int8 v13; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int8 v14; // [rsp+31h] [rbp-48h] BYREF
  unsigned __int8 v15; // [rsp+32h] [rbp-47h] BYREF
  int v16; // [rsp+34h] [rbp-45h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-39h] BYREF
  __int64 v18; // [rsp+60h] [rbp-19h]
  __int64 v19; // [rsp+68h] [rbp-11h]
  __int64 v20; // [rsp+70h] [rbp-9h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  int *v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]
  unsigned __int8 *v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+98h] [rbp+1Fh]
  unsigned __int8 *v26; // [rsp+A0h] [rbp+27h]
  __int64 v27; // [rsp+A8h] [rbp+2Fh]
  unsigned __int8 *v28; // [rsp+B0h] [rbp+37h]
  __int64 v29; // [rsp+B8h] [rbp+3Fh]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = (const struct _TlgProvider_t *)CurrentStackLocation->Parameters.Read.Length;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x28 )
  {
    v7 = -1073741820;
    goto LABEL_10;
  }
  if ( (unsigned int)Length < 0x28 )
  {
    v7 = -1073741789;
    goto LABEL_10;
  }
  if ( *(_DWORD *)&MasterIrp->Type != 40 || *(_DWORD *)(&MasterIrp->Size + 1) != 40 )
  {
    v7 = -1073741811;
LABEL_10:
    a2->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(a2, 0, v7);
  }
  *(_OWORD *)(a1 + 1720) = *(_OWORD *)&MasterIrp->MdlAddress;
  *(_DWORD *)&MasterIrp->Type = 40;
  *(_DWORD *)(&MasterIrp->Size + 1) = 40;
  *(_OWORD *)&MasterIrp->AssociatedIrp.MasterIrp = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 5192LL);
  a2->IoStatus.Information = 40LL;
  if ( (unsigned int)dword_1C0056060 > 5 && TlgKeywordOn(Length, 0x400000000000uLL) )
  {
    v12 = *(_QWORD *)v10[1].Data4;
    v16 = *(_DWORD *)(v12 + 56);
    v13 = v10[5].Data4[0];
    v14 = v10[5].Data4[1];
    v15 = v10[5].Data4[2];
    v18 = v12 + 5192;
    v22 = &v16;
    v24 = &v13;
    v26 = &v14;
    v28 = &v15;
    v19 = 16LL;
    v20 = v11;
    v21 = 16LL;
    v23 = 4LL;
    v25 = 1LL;
    v27 = 1LL;
    v29 = 1LL;
    TlgWrite((TraceLoggingHProvider)v12, &unk_1C004C1EE, v9, v10, 8u, &pData);
  }
  v7 = 0;
  return RaidCompleteRequestEx(a2, 0, v7);
}
