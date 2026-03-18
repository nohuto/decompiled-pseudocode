/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x140569AAC
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpIsMasterHive @ 0x140569B5C (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmRealKCBToVirtualPath @ 0x1406909A4 (CmRealKCBToVirtualPath.c)
 *     CmpCheckAdminAccess @ 0x1406913A0 (CmpCheckAdminAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x1406916E0 (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x1406924B0 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1406924F8 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x14069357C (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406936A0 (CmpReportAuditVirtualizationEvent.c)
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
  __int64 v12; // rdx
  int v13; // ebx
  __int64 v15; // r9
  __int64 v16; // rax
  UNICODE_STRING *v17; // rbx
  wchar_t *Buffer; // rcx
  ACCESS_MASK v19; // ebx
  __int64 v20; // r9
  __int64 v21; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF
  __int64 v23; // [rsp+60h] [rbp+30h] BYREF
  __int64 v24; // [rsp+68h] [rbp+38h]

  v24 = a2;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 58) )
    goto LABEL_7;
  v11 = a7;
  if ( (*(_DWORD *)(a7 + 24) & 0x10) != 0
    || !CmpVEEnabled
    || (*(_DWORD *)(a1 + 176) & 0x2000000) != 0
    || (unsigned __int8)CmpIsMasterHive(a1)
    || (unsigned __int8)CmpIsSystemEntity(v11 + 16) )
  {
    goto LABEL_7;
  }
  if ( (unsigned __int8)CmpReparseToVirtualPath(a1, v12, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(a1 + 176) & 0x20) != 0
    || (LOBYTE(v15) = a4, v19 = a5 | 4, (unsigned __int8)CmpDoAccessCheckOnKCB(a1, a6, a5 | 4u, v15)) )
  {
LABEL_7:
    v13 = -1073741199;
    goto LABEL_8;
  }
  LOBYTE(v20) = a4;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(a1, a6, 131097LL, v20) )
    goto LABEL_28;
  v13 = CmpCheckAdminAccess(v19, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 80) + 32LL));
  if ( v13 < 0 )
    goto LABEL_8;
  if ( !(_BYTE)v24 )
  {
LABEL_28:
    v13 = -1073741790;
    goto LABEL_8;
  }
  v21 = *(_DWORD *)v11 >> 10;
  LOBYTE(v21) = (*(_DWORD *)v11 & 0x400) != 0;
  v13 = CmpReplicateKeyToVirtual(a1, v21, &v23);
  if ( v13 >= 0 )
  {
    v13 = CmpExamineSaclForAuditEvent((PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 80) + 32LL));
    if ( v13 >= 0 )
    {
      if ( !(_BYTE)v24 || (v13 = CmpReportAuditVirtualizationEvent(a1), v13 >= 0) )
      {
        v16 = v23;
        *(_DWORD *)(v11 + 96) |= 2u;
        *(_QWORD *)(v11 + 112) = v16;
LABEL_14:
        v13 = CmRealKCBToVirtualPath(a1, a3, &DestinationString);
        if ( v13 >= 0 )
        {
          v17 = a8;
          Buffer = a8->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *v17 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)v11 |= 8u;
          v13 = 260;
        }
      }
    }
  }
LABEL_8:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v13;
}
