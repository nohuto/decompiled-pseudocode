/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x1404D3F0C
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpIsMasterHive @ 0x1404D3FBC (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmRealKCBToVirtualPath @ 0x1404D8D90 (CmRealKCBToVirtualPath.c)
 *     CmpCheckAdminAccess @ 0x14056ADE8 (CmpCheckAdminAccess.c)
 *     CmpReparseToVirtualPath @ 0x14056B1F0 (CmpReparseToVirtualPath.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406671C0 (CmpDoAccessCheckOnKCB.c)
 *     CmpReplicateKeyToVirtual @ 0x1406679E8 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140668544 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140668668 (CmpReportAuditVirtualizationEvent.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        UNICODE_STRING *a8)
{
  __int64 v11; // rsi
  int v12; // ebx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  UNICODE_STRING *v17; // rbx
  wchar_t *Buffer; // rcx
  ACCESS_MASK v19; // ebx
  __int64 v20; // r9
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+60h] [rbp+30h] BYREF
  __int64 v23; // [rsp+68h] [rbp+38h]

  v23 = a2;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 58) )
    goto LABEL_6;
  v11 = a7;
  if ( (*(_DWORD *)(a7 + 24) & 0x10) != 0
    || !CmpVEEnabled
    || (*(_DWORD *)(a1 + 176) & 0x2000000) != 0
    || (unsigned __int8)CmpIsMasterHive(a1)
    || (unsigned __int8)CmpIsSystemEntity(v11 + 16) )
  {
    goto LABEL_6;
  }
  if ( (unsigned __int8)CmpReparseToVirtualPath(a1, v14, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x20) != 0
    || (LOBYTE(v15) = a4, v19 = a5 | 4, (unsigned __int8)CmpDoAccessCheckOnKCB(a1, a6, a5 | 4u, v15)) )
  {
LABEL_6:
    v12 = -1073741199;
    goto LABEL_7;
  }
  LOBYTE(v20) = a4;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(a1, a6, 131097LL, v20) )
    goto LABEL_28;
  v12 = CmpCheckAdminAccess(v19, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 80) + 32LL));
  if ( v12 < 0 )
    goto LABEL_7;
  if ( !(_BYTE)v23 )
  {
LABEL_28:
    v12 = -1073741790;
    goto LABEL_7;
  }
  v12 = CmpReplicateKeyToVirtual(a1, (*(_DWORD *)v11 >> 10) & 1, &v22);
  if ( v12 >= 0 )
  {
    v12 = CmpExamineSaclForAuditEvent((PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 80) + 32LL));
    if ( v12 >= 0 )
    {
      if ( !(_BYTE)v23 || (v12 = CmpReportAuditVirtualizationEvent(a1), v12 >= 0) )
      {
        v16 = v22;
        *(_DWORD *)(v11 + 96) |= 2u;
        *(_QWORD *)(v11 + 112) = v16;
LABEL_14:
        v12 = CmRealKCBToVirtualPath(a1, a3, &DestinationString);
        if ( v12 >= 0 )
        {
          v17 = a8;
          Buffer = a8->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v17 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)v11 |= 8u;
          v12 = 260;
        }
      }
    }
  }
LABEL_7:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v12;
}
