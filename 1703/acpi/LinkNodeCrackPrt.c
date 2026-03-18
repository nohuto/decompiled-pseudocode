/*
 * XREFs of LinkNodeCrackPrt @ 0x1C001B96C
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0086020 (IrqArbAddAllocation.c)
 *     IrqArbGetNextAllocationRange @ 0x1C0088F00 (IrqArbGetNextAllocationRange.c)
 *     IrqArbpFindSuitableRangePci @ 0x1C0089D58 (IrqArbpFindSuitableRangePci.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001AA8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_s @ 0x1C0001FFC (WPP_RECORDER_SF_s.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     FreeDataBuffs @ 0x1C0015CB0 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C00178D0 (AMLIGetNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C001B8B8 (AMLIEvalPkgDataElement.c)
 *     LinkNodepGetFilter @ 0x1C001D444 (LinkNodepGetFilter.c)
 *     RtlStringCchPrintfW @ 0x1C0024978 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D1FC (ACPIWriteEventLogEntry.c)
 *     WPP_RECORDER_SF_x @ 0x1C0056FB8 (WPP_RECORDER_SF_x.c)
 *     PcisuppGetRoutingInfo @ 0x1C0087F60 (PcisuppGetRoutingInfo.c)
 *     PcisuppSetRoutingInfo @ 0x1C0089318 (PcisuppSetRoutingInfo.c)
 *     PcisuppGetBusSlotNumber @ 0x1C008FD68 (PcisuppGetBusSlotNumber.c)
 *     PcisuppGetParentPdo @ 0x1C008FE50 (PcisuppGetParentPdo.c)
 *     PcisuppGetProgConfigHeader @ 0x1C008FF20 (PcisuppGetProgConfigHeader.c)
 *     LinkNodeFindByNsObj @ 0x1C00A5550 (LinkNodeFindByNsObj.c)
 *     LinkNodepAddAttachedDevice @ 0x1C00A5704 (LinkNodepAddAttachedDevice.c)
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
  __int64 v17; // rdx
  char v18; // di
  unsigned int v19; // edx
  unsigned int v20; // edi
  __int64 v21; // rdx
  _DWORD *v22; // rcx
  int ProgConfigHeader; // r14d
  int v24; // eax
  char v25; // cl
  _QWORD *PoolWithTag; // rdi
  KIRQL v27; // r13
  _QWORD *v28; // rax
  _QWORD *v29; // r14
  char v31; // [rsp+34h] [rbp-CCh]
  int v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h]
  unsigned int v35; // [rsp+50h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v38[40]; // [rsp+78h] [rbp-88h] BYREF
  PCSZ v39[5]; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING String; // [rsp+C8h] [rbp-38h] BYREF
  struct _STRING v41; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v42[16]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v43; // [rsp+F8h] [rbp-8h]
  _DWORD v44[10]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v45[40]; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v46[48]; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v47[2]; // [rsp+190h] [rbp+90h] BYREF
  char v48; // [rsp+19Ah] [rbp+9Ah]
  int v49; // [rsp+1BCh] [rbp+BCh]
  unsigned __int8 v50; // [rsp+1CDh] [rbp+CDh]
  _QWORD v51[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  WCHAR SourceString[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v53; // [rsp+1F8h] [rbp+F8h]
  int v54; // [rsp+200h] [rbp+100h]
  WCHAR v55[4]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v56; // [rsp+210h] [rbp+110h]
  int v57; // [rsp+218h] [rbp+118h]
  wchar_t pszDest[20]; // [rsp+220h] [rbp+120h] BYREF

  *a2 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v6 = AcpiDriverObject;
  *a3 = 0;
  *(_QWORD *)&UnicodeString.Length = a3;
  v31 = 0;
  v35 = 0;
  if ( *(PVOID *)(a1 + 8) == v6 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v33) >= 0 )
  {
    *a2 = v33;
    *a3 = v34;
    return 0LL;
  }
  if ( (int)PcisuppGetProgConfigHeader(a1, v47) < 0 )
    return 3221226021LL;
  v8 = v50;
  result = PcisuppGetParentPdo(a1, &DestinationString);
  if ( (int)result >= 0 )
  {
    result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v32, 0, 0LL);
    if ( (int)result >= 0 )
    {
      v10 = v32;
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
        result = PcisuppGetProgConfigHeader(*(_QWORD *)&DestinationString.Length, v47);
        if ( (int)result < 0 )
          return result;
        if ( v48 == 4 )
        {
          v8 = ((v10 & 0x1F) + v8 - 1) % 4 + 1;
        }
        else
        {
          if ( v48 != 7 )
            return 3221225473LL;
          v8 = v50;
        }
        result = PcisuppGetBusSlotNumber(*(_DWORD *)&DestinationString.Length, 0, (unsigned int)&v32, 0, 0LL);
        if ( (int)result >= 0 )
        {
          v10 = v32;
          result = PcisuppGetParentPdo(*(_QWORD *)&DestinationString.Length, &DestinationString);
          if ( (int)result >= 0 )
            continue;
        }
        return result;
      }
      v16 = v8 - 1;
      memset(v39, 0, sizeof(v39));
      memset(v44, 0, sizeof(v44));
      if ( (int)AMLIEvalNameSpaceObject(v15, v46, 0, 0LL) >= 0 )
      {
        v18 = 0;
        do
        {
          v19 = v35++;
          if ( (int)AMLIEvalPkgDataElement((__int64)v46, v19, v38) < 0 )
            break;
          if ( (int)AMLIEvalPkgDataElement((__int64)v38, 0, v42) >= 0 )
          {
            if ( (v10 & 0x1F) == WORD1(v43) )
            {
              if ( (_WORD)v43 != 0xFFFF )
              {
                WPP_RECORDER_SF_x(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v43,
                  20,
                  10,
                  (__int64)&WPP_7e9cf6d04a94383691d70ed97710716b_Traceguids,
                  v43);
                dword_1C00776F8 = 0;
                ::pszDest = 0;
                v10 = v10 & 0xFFFFFF00 | (32 * (v43 & 7)) | (v43 >> 16) & 0x1F;
                v20 = -1073741811;
                FreeDataBuffs((__int64)v42, 1u);
                dword_1C00776F8 = 0;
                ::pszDest = 0;
                FreeDataBuffs((__int64)v38, 1u);
                goto LABEL_48;
              }
              if ( (int)AMLIEvalPkgDataElement((__int64)v38, 1u, v45) >= 0 )
              {
                if ( v45[16] == v16 )
                {
                  if ( (int)AMLIEvalPkgDataElement((__int64)v38, 2u, v39) >= 0 )
                    v18 = 1;
                  v24 = AMLIEvalPkgDataElement((__int64)v38, 3u, v44);
                  v25 = v18;
                  if ( v24 >= 0 )
                    v25 = 1;
                  v31 = v25;
                  v18 = v25;
                }
                dword_1C00776F8 = 0;
                ::pszDest = 0;
                FreeDataBuffs((__int64)v45, 1u);
              }
            }
            dword_1C00776F8 = 0;
            ::pszDest = 0;
            FreeDataBuffs((__int64)v42, 1u);
          }
          dword_1C00776F8 = 0;
          ::pszDest = 0;
          FreeDataBuffs((__int64)v38, 1u);
        }
        while ( !v18 );
        dword_1C00776F8 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v46, 1u);
        v20 = -1073741275;
        if ( !v31 )
          goto LABEL_48;
        v21 = 2LL;
        if ( WORD1(v39[0]) == 2 && v39[4] )
        {
          if ( (int)AMLIGetNameSpaceObject(v39[4], (__int64)v15, &DestinationString) < 0 )
          {
            v20 = -1073741772;
LABEL_48:
            AMLIDereferenceHandleEx((volatile signed __int32 *)v15, v17);
            if ( a4 )
            {
              *(_QWORD *)v55 = 0LL;
              v56 = 0LL;
              v57 = 0;
              *(_QWORD *)SourceString = 0LL;
              v53 = 0LL;
              v54 = 0;
              RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
              RtlInitUnicodeString(&DestinationString, SourceString);
              RtlInitUnicodeString(&String, v55);
              if ( RtlIntegerToUnicodeString(v10 & 0x1F, 0, &DestinationString) >= 0
                && RtlIntegerToUnicodeString((unsigned __int8)v10 >> 5, 0, &String) >= 0 )
              {
                v51[0] = pszDest;
                v51[1] = SourceString;
                v51[2] = v55;
                if ( v20 == -1073741811 )
                {
                  ACPIWriteEventLogEntry(3221553161LL, v51, 3LL);
                }
                else if ( v20 == -1073741772 )
                {
                  RtlInitAnsiString(&v41, v39[4]);
                  RtlAnsiStringToUnicodeString(&UnicodeString, &v41, 1u);
                  v51[3] = UnicodeString.Buffer;
                  ACPIWriteEventLogEntry(3221553160LL, v51, 4LL);
                  RtlFreeUnicodeString(&UnicodeString);
                  WPP_RECORDER_SF_s(
                    WPP_GLOBAL_Control->DeviceExtension,
                    2,
                    20,
                    11,
                    (__int64)&WPP_7e9cf6d04a94383691d70ed97710716b_Traceguids,
                    (__int64)v39[4]);
                }
                else
                {
                  ACPIWriteEventLogEntry(3221553158LL, v51, 3LL);
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
            return v20;
          }
          ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&DestinationString.Length, a2);
          if ( ProgConfigHeader >= 0 )
          {
            v33 = *a2;
            LODWORD(v34) = 0;
            BYTE4(v34) = 0;
            PcisuppSetRoutingInfo(a1, &v33);
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x49706341u);
            if ( PoolWithTag )
            {
              v27 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
              v28 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 720), a1);
              v29 = v28;
              if ( v28 )
                ObfReferenceObject(v28);
              KeReleaseSpinLock(&AcpiDeviceTreeLock, v27);
              if ( v29 )
              {
                PoolWithTag[2] = *(_QWORD *)(v29[8] + 712LL);
                ObfDereferenceObject(v29);
              }
              else
              {
                PoolWithTag[2] = 0LL;
              }
              PoolWithTag[3] = v15;
              PoolWithTag[6] = a1;
              v15 = 0LL;
              *((_DWORD *)PoolWithTag + 8) = v10;
              ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v47);
              if ( ProgConfigHeader >= 0 )
              {
                *((_DWORD *)PoolWithTag + 9) = v47[0];
                *((_DWORD *)PoolWithTag + 10) = v49;
              }
              LinkNodepAddAttachedDevice(*a2, PoolWithTag);
            }
          }
        }
        else if ( HIWORD(v44[0]) == 1 )
        {
          v22 = *(_DWORD **)&UnicodeString.Length;
          ProgConfigHeader = 0;
          BYTE4(v34) = 2;
          v33 = 0LL;
          **(_DWORD **)&UnicodeString.Length = v44[4];
          *a2 = 0LL;
          LODWORD(v34) = *v22;
          PcisuppSetRoutingInfo(a1, &v33);
        }
        else
        {
          ProgConfigHeader = -1073741701;
        }
        if ( v15 )
          AMLIDereferenceHandleEx((volatile signed __int32 *)v15, v21);
        dword_1C00776F8 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v39, 1u);
        dword_1C00776F8 = 0;
        ::pszDest = 0;
        FreeDataBuffs((__int64)v44, 1u);
        return (unsigned int)ProgConfigHeader;
      }
      v20 = -1073741275;
      goto LABEL_48;
    }
  }
  return result;
}
