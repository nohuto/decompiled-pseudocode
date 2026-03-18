/*
 * XREFs of LinkNodeCrackPrt @ 0x1C000D438
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C0088020 (IrqArbGetNextAllocationRange.c)
 *     IrqArbAddAllocation @ 0x1C00889C0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C00950DC (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_s @ 0x1C000325C (WPP_RECORDER_SF_s.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     FreeData @ 0x1C000CC84 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     AMLIEvalPkgDataElement @ 0x1C000D7EC (AMLIEvalPkgDataElement.c)
 *     WPP_RECORDER_SF_D @ 0x1C000DC08 (WPP_RECORDER_SF_D.c)
 *     LinkNodepGetFilter @ 0x1C000F354 (LinkNodepGetFilter.c)
 *     AMLIGetNameSpaceObject @ 0x1C001BACC (AMLIGetNameSpaceObject.c)
 *     RtlStringCchPrintfW @ 0x1C0027094 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C004CE6C (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_x @ 0x1C0057BB8 (WPP_RECORDER_SF_x.c)
 *     PcisuppGetRoutingInfo @ 0x1C008ADE8 (PcisuppGetRoutingInfo.c)
 *     PcisuppGetBusSlotNumber @ 0x1C008BC64 (PcisuppGetBusSlotNumber.c)
 *     PcisuppSetRoutingInfo @ 0x1C008BDF4 (PcisuppSetRoutingInfo.c)
 *     PcisuppGetProgConfigHeader @ 0x1C008D090 (PcisuppGetProgConfigHeader.c)
 *     PcisuppGetParentPdo @ 0x1C008D1A4 (PcisuppGetParentPdo.c)
 *     LinkNodeFindByNsObj @ 0x1C00A8000 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1C00A81B0 (LinkNodepAddAttachedDevice.c)
 */

__int64 __fastcall LinkNodeCrackPrt(__int64 a1, _QWORD *a2, _DWORD *a3, char a4)
{
  PVOID v6; // rax
  unsigned __int8 v8; // r13
  __int64 result; // rax
  int v10; // ebx
  KIRQL v11; // di
  _QWORD *Filter; // rax
  _QWORD *v13; // r14
  __int64 *v14; // rdi
  __int64 *v15; // r15
  char v16; // r13
  char v17; // di
  __int64 v18; // rdx
  unsigned int v19; // edi
  _DWORD *v20; // rcx
  int ProgConfigHeader; // r14d
  int v22; // eax
  char v23; // cl
  _QWORD *PoolWithTag; // rdi
  KIRQL v25; // r13
  _QWORD *v26; // rax
  _QWORD *v27; // r14
  char v29; // [rsp+34h] [rbp-CCh]
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v32; // [rsp+48h] [rbp-B8h]
  unsigned int v33; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v36[5]; // [rsp+78h] [rbp-88h] BYREF
  PCSZ v37[5]; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING String; // [rsp+C8h] [rbp-38h] BYREF
  struct _STRING v39; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v40[2]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v41; // [rsp+F8h] [rbp-8h]
  _DWORD v42[10]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v43[40]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v44[48]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v45[2]; // [rsp+190h] [rbp+90h] BYREF
  char v46; // [rsp+19Ah] [rbp+9Ah]
  int v47; // [rsp+1BCh] [rbp+BCh]
  unsigned __int8 v48; // [rsp+1CDh] [rbp+CDh]
  _QWORD v49[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  WCHAR SourceString[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v51; // [rsp+1F8h] [rbp+F8h]
  int v52; // [rsp+200h] [rbp+100h]
  WCHAR v53[4]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v54; // [rsp+210h] [rbp+110h]
  int v55; // [rsp+218h] [rbp+118h]
  wchar_t pszDest[20]; // [rsp+220h] [rbp+120h] BYREF

  *a2 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v6 = AcpiDriverObject;
  *a3 = 0;
  *(_QWORD *)&UnicodeString.Length = a3;
  v29 = 0;
  v33 = 0;
  if ( *(PVOID *)(a1 + 8) == v6 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v31) >= 0 )
  {
    *a2 = v31;
    *a3 = v32;
    return 0LL;
  }
  if ( (int)PcisuppGetProgConfigHeader(a1, v45) < 0 )
    return 3221226021LL;
  v8 = v48;
  result = PcisuppGetParentPdo(a1, &DestinationString);
  if ( (int)result >= 0 )
  {
    result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v30, 0, 0LL);
    if ( (int)result >= 0 )
    {
      v10 = v30;
      while ( 1 )
      {
        v11 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        Filter = (_QWORD *)LinkNodepGetFilter(
                             *(_QWORD *)(RootDeviceExtension + 720),
                             *(_QWORD *)&DestinationString.Length);
        v13 = Filter;
        if ( Filter )
          ObfReferenceObject(Filter);
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v11);
        if ( v13 )
        {
          v14 = *(__int64 **)(v13[8] + 712LL);
          ObfDereferenceObject(v13);
          v15 = AMLIGetNamedChild(v14, 1414680671);
          if ( v15 )
            break;
        }
        result = PcisuppGetProgConfigHeader(*(_QWORD *)&DestinationString.Length, v45);
        if ( (int)result < 0 )
          return result;
        if ( v46 == 4 )
        {
          v8 = ((v10 & 0x1F) + v8 - 1) % 4 + 1;
        }
        else
        {
          if ( v46 != 7 )
            return 3221225473LL;
          v8 = v48;
        }
        result = PcisuppGetBusSlotNumber(*(_DWORD *)&DestinationString.Length, 0, (unsigned int)&v30, 0, 0LL);
        if ( (int)result >= 0 )
        {
          v10 = v30;
          result = PcisuppGetParentPdo(*(_QWORD *)&DestinationString.Length, &DestinationString);
          if ( (int)result >= 0 )
            continue;
        }
        return result;
      }
      v16 = v8 - 1;
      memset(v37, 0, sizeof(v37));
      memset(v42, 0, sizeof(v42));
      if ( (int)AMLIEvalNameSpaceObject(v15, v44, 0, 0LL) >= 0 )
      {
        v17 = 0;
        do
        {
          v18 = v33++;
          if ( (int)AMLIEvalPkgDataElement(v44, v18, v36) < 0 )
            break;
          if ( (int)AMLIEvalPkgDataElement(v36, 0LL, v40) >= 0 )
          {
            if ( (v10 & 0x1F) == WORD1(v41) )
            {
              if ( (_WORD)v41 != 0xFFFF )
              {
                WPP_RECORDER_SF_x(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v41,
                  20,
                  10,
                  (__int64)&WPP_7e9cf6d04a94383691d70ed97710716b_Traceguids,
                  v41);
                dword_1C00797B8 = 0;
                ::pszDest = 0;
                v10 = v10 & 0xFFFFFF00 | (32 * (v41 & 7)) | (v41 >> 16) & 0x1F;
                v19 = -1073741811;
                FreeDataBuffs((__int64)v40, 1u);
                dword_1C00797B8 = 0;
                ::pszDest = 0;
                FreeDataBuffs((__int64)v36, 1u);
                goto LABEL_48;
              }
              if ( (int)AMLIEvalPkgDataElement(v36, 1LL, v43) >= 0 )
              {
                if ( v43[16] == v16 )
                {
                  if ( (int)AMLIEvalPkgDataElement(v36, 2LL, v37) >= 0 )
                    v17 = 1;
                  v22 = AMLIEvalPkgDataElement(v36, 3LL, v42);
                  v23 = v17;
                  if ( v22 >= 0 )
                    v23 = 1;
                  v29 = v23;
                  v17 = v23;
                }
                dword_1C00797B8 = 0;
                ::pszDest = 0;
                FreeDataBuffs((__int64)v43, 1u);
              }
            }
            dword_1C00797B8 = 0;
            ::pszDest = 0;
            FreeData(v40);
          }
          dword_1C00797B8 = 0;
          ::pszDest = 0;
          FreeData(v36);
        }
        while ( !v17 );
        dword_1C00797B8 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v44, 1u);
        v19 = -1073741275;
        if ( !v29 )
          goto LABEL_48;
        if ( WORD1(v37[0]) == 2 && v37[4] )
        {
          if ( (int)AMLIGetNameSpaceObject((void *)v37[4]) < 0 )
          {
            v19 = -1073741772;
LABEL_48:
            AMLIDereferenceHandleEx((__int64)v15);
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
              if ( RtlIntegerToUnicodeString(v10 & 0x1F, 0, &DestinationString) >= 0
                && RtlIntegerToUnicodeString((unsigned __int8)v10 >> 5, 0, &String) >= 0 )
              {
                v49[0] = pszDest;
                v49[1] = SourceString;
                v49[2] = v53;
                if ( v19 == -1073741811 )
                {
                  ACPIWriteEventLogEntry(3221553161LL, v49, 3LL);
                }
                else if ( v19 == -1073741772 )
                {
                  RtlInitAnsiString(&v39, v37[4]);
                  RtlAnsiStringToUnicodeString(&UnicodeString, &v39, 1u);
                  v49[3] = UnicodeString.Buffer;
                  ACPIWriteEventLogEntry(3221553160LL, v49, 4LL);
                  RtlFreeUnicodeString(&UnicodeString);
                  WPP_RECORDER_SF_s(
                    WPP_GLOBAL_Control->DeviceExtension,
                    2,
                    20,
                    11,
                    (__int64)&WPP_7e9cf6d04a94383691d70ed97710716b_Traceguids,
                    (__int64)v37[4]);
                }
                else
                {
                  ACPIWriteEventLogEntry(3221553158LL, v49, 3LL);
                  WPP_RECORDER_SF_D(
                    WPP_GLOBAL_Control->DeviceExtension,
                    2,
                    20,
                    12,
                    (__int64)&WPP_7e9cf6d04a94383691d70ed97710716b_Traceguids,
                    v10);
                }
              }
            }
            return v19;
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
              v25 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
              v26 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 720), a1);
              v27 = v26;
              if ( v26 )
                ObfReferenceObject(v26);
              KeReleaseSpinLock(&AcpiDeviceTreeLock, v25);
              if ( v27 )
              {
                PoolWithTag[2] = *(_QWORD *)(v27[8] + 712LL);
                ObfDereferenceObject(v27);
              }
              else
              {
                PoolWithTag[2] = 0LL;
              }
              PoolWithTag[3] = v15;
              PoolWithTag[6] = a1;
              v15 = 0LL;
              *((_DWORD *)PoolWithTag + 8) = v10;
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
          v20 = *(_DWORD **)&UnicodeString.Length;
          ProgConfigHeader = 0;
          BYTE4(v32) = 2;
          v31 = 0LL;
          **(_DWORD **)&UnicodeString.Length = v42[4];
          *a2 = 0LL;
          LODWORD(v32) = *v20;
          PcisuppSetRoutingInfo(a1, &v31);
        }
        else
        {
          ProgConfigHeader = -1073741701;
        }
        if ( v15 )
          AMLIDereferenceHandleEx((__int64)v15);
        dword_1C00797B8 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v37, 1u);
        dword_1C00797B8 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v42, 1u);
        return (unsigned int)ProgConfigHeader;
      }
      v19 = -1073741275;
      goto LABEL_48;
    }
  }
  return result;
}
