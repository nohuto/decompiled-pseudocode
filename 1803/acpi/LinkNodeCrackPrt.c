/*
 * XREFs of LinkNodeCrackPrt @ 0x1C0056F60
 * Callers:
 *     IrqArbAddAllocation @ 0x1C008F8F0 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C0090750 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0091504 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0001AA8 (WPP_RECORDER_SF_s.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00022D8 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0002AF0 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0002B24 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C0003118 (FreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     RtlStringCchPrintfW @ 0x1C000997C (RtlStringCchPrintfW.c)
 *     ACPIWriteEventLogEntry @ 0x1C0023138 (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_x @ 0x1C0038B80 (WPP_RECORDER_SF_x.c)
 *     AMLIEvalPkgDataElement @ 0x1C0043638 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObject @ 0x1C0043A68 (AMLIGetNameSpaceObject.c)
 *     LinkNodepGetFilter @ 0x1C0057874 (LinkNodepGetFilter.c)
 *     PcisuppGetBusSlotNumber @ 0x1C008C21C (PcisuppGetBusSlotNumber.c)
 *     PcisuppGetParentPdo @ 0x1C008C310 (PcisuppGetParentPdo.c)
 *     PcisuppGetProgConfigHeader @ 0x1C008C3E8 (PcisuppGetProgConfigHeader.c)
 *     PcisuppGetRoutingInfo @ 0x1C008C4EC (PcisuppGetRoutingInfo.c)
 *     PcisuppSetRoutingInfo @ 0x1C008C99C (PcisuppSetRoutingInfo.c)
 *     LinkNodeFindByNsObj @ 0x1C008D248 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1C008D528 (LinkNodepAddAttachedDevice.c)
 */

__int64 __fastcall LinkNodeCrackPrt(__int64 a1, _QWORD *a2, _DWORD *a3, char a4)
{
  __int64 *v4; // r15
  PVOID v7; // rax
  __int64 result; // rax
  unsigned __int8 v10; // r13
  int v11; // ebx
  KIRQL v12; // di
  _QWORD *Filter; // rax
  _QWORD *v14; // r14
  _QWORD *v15; // rdi
  char v16; // r13
  unsigned int v17; // edi
  char v18; // di
  unsigned int v19; // edx
  int v20; // eax
  char v21; // cl
  int ProgConfigHeader; // r14d
  _QWORD *PoolWithTag; // rdi
  KIRQL v24; // r13
  _QWORD *v25; // rax
  _QWORD *v26; // r14
  _DWORD *v27; // rcx
  char v29; // [rsp+34h] [rbp-CCh]
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  unsigned int v33; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v36[40]; // [rsp+78h] [rbp-88h] BYREF
  PCSZ v37[5]; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING String; // [rsp+C8h] [rbp-38h] BYREF
  struct _STRING v39; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v40[16]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v41; // [rsp+F8h] [rbp-8h]
  _DWORD v42[10]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v43[40]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v44[48]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v45[2]; // [rsp+190h] [rbp+90h] BYREF
  char v46; // [rsp+19Ah] [rbp+9Ah]
  int v47; // [rsp+1BCh] [rbp+BCh]
  unsigned __int8 v48; // [rsp+1CDh] [rbp+CDh]
  __int16 *v49[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  WCHAR SourceString[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v51; // [rsp+1F8h] [rbp+F8h]
  int v52; // [rsp+200h] [rbp+100h]
  WCHAR v53[4]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v54; // [rsp+210h] [rbp+110h]
  int v55; // [rsp+218h] [rbp+118h]
  wchar_t pszDest[20]; // [rsp+220h] [rbp+120h] BYREF

  v4 = 0LL;
  *a2 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v7 = AcpiDriverObject;
  *a3 = 0;
  *(_QWORD *)&UnicodeString.Length = a3;
  v29 = 0;
  v33 = 0;
  if ( *(PVOID *)(a1 + 8) == v7 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v31) < 0 )
  {
    if ( (int)PcisuppGetProgConfigHeader(a1, v45) < 0 )
      return 3221226021LL;
    v10 = v48;
    result = PcisuppGetParentPdo(a1, &DestinationString);
    if ( (int)result >= 0 )
    {
      result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v30, 0, 0LL);
      if ( (int)result >= 0 )
      {
        v11 = v30;
        while ( 1 )
        {
          v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          Filter = (_QWORD *)LinkNodepGetFilter(
                               *(_QWORD *)(RootDeviceExtension + 720),
                               *(_QWORD *)&DestinationString.Length);
          v14 = Filter;
          if ( Filter )
            ObfReferenceObject(Filter);
          KeReleaseSpinLock(&AcpiDeviceTreeLock, v12);
          if ( v14 )
          {
            v15 = *(_QWORD **)(v14[8] + 712LL);
            ObfDereferenceObject(v14);
            v4 = AMLIGetNamedChild(v15, 1414680671);
            if ( v4 )
              break;
          }
          result = PcisuppGetProgConfigHeader(*(_QWORD *)&DestinationString.Length, v45);
          if ( (int)result < 0 )
            return result;
          if ( v46 == 4 )
          {
            v10 = ((v11 & 0x1F) + v10 - 1) % 4 + 1;
          }
          else
          {
            if ( v46 != 7 )
              return 3221225473LL;
            v10 = v48;
          }
          result = PcisuppGetBusSlotNumber(*(_DWORD *)&DestinationString.Length, 0, (unsigned int)&v30, 0, (__int64)v4);
          if ( (int)result >= 0 )
          {
            v11 = v30;
            result = PcisuppGetParentPdo(*(_QWORD *)&DestinationString.Length, &DestinationString);
            if ( (int)result >= 0 )
              continue;
          }
          return result;
        }
        v16 = v10 - 1;
        memset(v37, 0, sizeof(v37));
        memset(v42, 0, sizeof(v42));
        if ( (int)AMLIEvalNameSpaceObject(v4, v44, 0, 0LL) >= 0 )
        {
          v18 = 0;
          do
          {
            v19 = v33++;
            if ( (int)AMLIEvalPkgDataElement((__int64)v44, v19, v36) < 0 )
              break;
            if ( (int)AMLIEvalPkgDataElement((__int64)v36, 0, v40) >= 0 )
            {
              if ( (v11 & 0x1F) == WORD1(v41) )
              {
                if ( (_WORD)v41 != 0xFFFF )
                {
                  WPP_RECORDER_SF_x(
                    WPP_GLOBAL_Control->DeviceExtension,
                    v41,
                    20,
                    10,
                    (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
                    v41);
                  dword_1C00677B8 = 0;
                  ::pszDest[0] = 0;
                  v11 = v11 & 0xFFFFFF00 | (32 * (v41 & 7)) | (v41 >> 16) & 0x1F;
                  v17 = -1073741811;
                  FreeDataBuffs((__int64)v40, 1u);
                  dword_1C00677B8 = 0;
                  ::pszDest[0] = 0;
                  FreeDataBuffs((__int64)v36, 1u);
                  goto LABEL_24;
                }
                if ( (int)AMLIEvalPkgDataElement((__int64)v36, 1u, v43) >= 0 )
                {
                  if ( v43[16] == v16 )
                  {
                    if ( (int)AMLIEvalPkgDataElement((__int64)v36, 2u, v37) >= 0 )
                      v18 = 1;
                    v20 = AMLIEvalPkgDataElement((__int64)v36, 3u, v42);
                    v21 = v18;
                    if ( v20 >= 0 )
                      v21 = 1;
                    v29 = v21;
                    v18 = v21;
                  }
                  dword_1C00677B8 = 0;
                  ::pszDest[0] = 0;
                  FreeDataBuffs((__int64)v43, 1u);
                }
              }
              dword_1C00677B8 = 0;
              ::pszDest[0] = 0;
              FreeDataBuffs((__int64)v40, 1u);
            }
            dword_1C00677B8 = 0;
            ::pszDest[0] = 0;
            FreeDataBuffs((__int64)v36, 1u);
          }
          while ( !v18 );
          dword_1C00677B8 = 0;
          ::pszDest[0] = 0;
          FreeDataBuffs((__int64)v44, 1u);
          v17 = -1073741275;
          if ( !v29 )
            goto LABEL_24;
          if ( WORD1(v37[0]) == 2 && v37[4] )
          {
            if ( (int)AMLIGetNameSpaceObject(v37[4], (__int64)v4, (__int64)&DestinationString, 0) < 0 )
            {
              v17 = -1073741772;
              goto LABEL_24;
            }
            ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&DestinationString.Length, a2);
            if ( ProgConfigHeader >= 0 )
            {
              v31 = *a2;
              LODWORD(v32) = 0;
              BYTE4(v32) = 0;
              PcisuppSetRoutingInfo(a1, &v31);
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x49706341u);
              if ( PoolWithTag )
              {
                v24 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
                v25 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 720), a1);
                v26 = v25;
                if ( v25 )
                  ObfReferenceObject(v25);
                KeReleaseSpinLock(&AcpiDeviceTreeLock, v24);
                if ( v26 )
                {
                  PoolWithTag[2] = *(_QWORD *)(v26[8] + 712LL);
                  ObfDereferenceObject(v26);
                }
                else
                {
                  PoolWithTag[2] = 0LL;
                }
                PoolWithTag[3] = v4;
                PoolWithTag[6] = a1;
                v4 = 0LL;
                *((_DWORD *)PoolWithTag + 8) = v11;
                ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v45);
                if ( ProgConfigHeader >= 0 )
                {
                  *((_DWORD *)PoolWithTag + 9) = v45[0];
                  *((_DWORD *)PoolWithTag + 10) = v47;
                }
                LinkNodepAddAttachedDevice(*a2, PoolWithTag);
              }
            }
          }
          else if ( HIWORD(v42[0]) == 1 )
          {
            v27 = *(_DWORD **)&UnicodeString.Length;
            ProgConfigHeader = 0;
            BYTE4(v32) = 2;
            v31 = 0LL;
            **(_DWORD **)&UnicodeString.Length = v42[4];
            *a2 = 0LL;
            LODWORD(v32) = *v27;
            PcisuppSetRoutingInfo(a1, &v31);
          }
          else
          {
            ProgConfigHeader = -1073741701;
          }
          if ( v4 )
            AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
          dword_1C00677B8 = 0;
          ::pszDest[0] = 0;
          FreeDataBuffs((__int64)v37, 1u);
          dword_1C00677B8 = 0;
          ::pszDest[0] = 0;
          FreeDataBuffs((__int64)v42, 1u);
          return (unsigned int)ProgConfigHeader;
        }
        else
        {
          v17 = -1073741275;
LABEL_24:
          AMLIDereferenceHandleEx((volatile signed __int32 *)v4);
          if ( a4 )
          {
            *(_QWORD *)v53 = 0LL;
            v54 = 0LL;
            v55 = 0;
            *(_QWORD *)SourceString = 0LL;
            v51 = 0LL;
            v52 = 0;
            RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
            RtlInitUnicodeString(&DestinationString, SourceString);
            RtlInitUnicodeString(&String, v53);
            if ( RtlIntegerToUnicodeString(v11 & 0x1F, 0, &DestinationString) >= 0
              && RtlIntegerToUnicodeString((unsigned __int8)v11 >> 5, 0, &String) >= 0 )
            {
              v49[0] = (__int16 *)pszDest;
              v49[1] = (__int16 *)SourceString;
              v49[2] = (__int16 *)v53;
              if ( v17 == -1073741811 )
              {
                ACPIWriteEventLogEntry(-1073414135, v49, 3u);
              }
              else if ( v17 == -1073741772 )
              {
                RtlInitAnsiString(&v39, v37[4]);
                RtlAnsiStringToUnicodeString(&UnicodeString, &v39, 1u);
                v49[3] = (__int16 *)UnicodeString.Buffer;
                ACPIWriteEventLogEntry(-1073414136, v49, 4u);
                RtlFreeUnicodeString(&UnicodeString);
                WPP_RECORDER_SF_s(
                  WPP_GLOBAL_Control->DeviceExtension,
                  2,
                  20,
                  11,
                  (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
                  (__int64)v37[4]);
              }
              else
              {
                ACPIWriteEventLogEntry(-1073414138, v49, 3u);
                WPP_RECORDER_SF_D(
                  WPP_GLOBAL_Control->DeviceExtension,
                  2,
                  20,
                  12,
                  (__int64)&WPP_922879ad32953f9562136b66b4e537f0_Traceguids,
                  v11);
              }
            }
          }
          return v17;
        }
      }
    }
  }
  else
  {
    *a2 = v31;
    *a3 = v32;
    return 0LL;
  }
  return result;
}
