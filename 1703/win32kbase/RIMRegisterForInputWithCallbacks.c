/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C008FB70
 * Callers:
 *     RIMRegisterForInput @ 0x1C008FAE0 (RIMRegisterForInput.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0053FC0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     Win32AllocPoolNonPaged @ 0x1C0054B50 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_q @ 0x1C005564C (WPP_RECORDER_SF_q.c)
 *     CreateKernelSemaphore @ 0x1C0058750 (CreateKernelSemaphore.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C008CB80 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RawInputManagerObjectCreate @ 0x1C008DDA4 (RawInputManagerObjectCreate.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C008E618 (rimConvertUserToKernelTimerHandle.c)
 *     rimFindReferencedPrimaryRimObj @ 0x1C008E7AC (rimFindReferencedPrimaryRimObj.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C008F650 (RIMCheckPressureDefaultSetting.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0093588 (RIMDiscoverDevicesOfInputType.c)
 *     RIMUnregisterForInput @ 0x1C0093730 (RIMUnregisterForInput.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C0093E74 (rimConvertUserToKernelEventHandle.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C01035FC (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C01036C8 (WPP_RECORDER_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C010F07C (RIMDiscoverSpecificDevice.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        int a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7,
        void *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        char a13,
        __int64 a14,
        CTouchProcessor *a15)
{
  __int64 v16; // r13
  __int64 v18; // r12
  int v19; // edx
  int v20; // r8d
  int v21; // r9d
  unsigned __int16 v22; // r9
  struct _KSEMAPHORE *KernelSemaphore; // r14
  unsigned int v25; // esi
  __int64 v26; // rax
  char *v27; // rcx
  int v28; // esi
  int v29; // ecx
  int v30; // eax
  bool v31; // sf
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  char *v36; // r14
  unsigned int v37; // r9d
  _QWORD *v38; // rdx
  char *v39; // r10
  _DWORD *v40; // r11
  _OWORD *v41; // rcx
  GUID **v42; // r8
  signed __int64 v43; // rbx
  GUID **v44; // rax
  CTouchProcessor *v45; // r13
  unsigned int v46; // ebx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r10
  unsigned int v52; // r9d
  __int64 v53; // r10
  CTouchProcessor *v54; // rdx
  int v55; // ecx
  WCHAR *v56; // rdx
  unsigned __int64 v57; // r8
  __int64 v58; // rcx
  CTouchProcessor *v59; // rcx
  __int64 *v60; // rbx
  __int64 v61; // r13
  __int64 *v62; // rbx
  int TableContext; // [rsp+20h] [rbp-128h]
  __int64 v64; // [rsp+28h] [rbp-120h]
  int v65; // [rsp+40h] [rbp-108h]
  int v66; // [rsp+44h] [rbp-104h]
  PVOID v67; // [rsp+48h] [rbp-100h] BYREF
  unsigned int v68; // [rsp+50h] [rbp-F8h]
  int v69; // [rsp+54h] [rbp-F4h]
  int v70; // [rsp+58h] [rbp-F0h]
  HANDLE v71; // [rsp+60h] [rbp-E8h] BYREF
  CTouchProcessor *v72; // [rsp+68h] [rbp-E0h]
  HANDLE v73; // [rsp+70h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-D0h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-C0h]
  struct _KSEMAPHORE *v76; // [rsp+90h] [rbp-B8h]
  HANDLE Handle; // [rsp+98h] [rbp-B0h] BYREF
  HANDLE v78; // [rsp+A0h] [rbp-A8h] BYREF
  void *v79; // [rsp+A8h] [rbp-A0h]
  PVOID Object; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-90h]
  __int64 v82; // [rsp+C0h] [rbp-88h]
  UNICODE_STRING SourceString; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v84; // [rsp+D8h] [rbp-70h]
  void *v85; // [rsp+E0h] [rbp-68h]
  _BYTE v86[24]; // [rsp+E8h] [rbp-60h] BYREF

  v81 = a4;
  v69 = a3;
  v16 = a2;
  *(_QWORD *)&SourceString.Length = a2;
  v82 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  v84 = a6;
  v85 = a7;
  v79 = a8;
  v72 = a15;
  Handle = (HANDLE)-1LL;
  v78 = (HANDLE)-1LL;
  v73 = (HANDLE)-1LL;
  v71 = (HANDLE)-1LL;
  memset(v86, 0, sizeof(v86));
  v66 = 0;
  v18 = 3LL;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    10,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0xBu,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
      a1);
    v22 = 12;
LABEL_3:
    LODWORD(v64) = -1073741811;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      v22,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
      v64);
    return 3221225485LL;
  }
  if ( v16 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      WPP_RECORDER_SF_qDd(WPP_GLOBAL_Control->DeviceExtension, v19, v20, v21, TableContext, v16, a1, a3);
      v22 = 14;
      goto LABEL_3;
    }
  }
  else if ( a3 )
  {
    if ( (a1 & 0x20) == 0 )
    {
      WPP_RECORDER_SF_Dd(WPP_GLOBAL_Control->DeviceExtension, v19, v20, v21, TableContext, a1, a3);
      v22 = 16;
      goto LABEL_3;
    }
    if ( !a14 )
    {
      Object = 0LL;
      if ( (int)rimFindReferencedPrimaryRimObj(a1, (struct _LIST_ENTRY **)&Object) >= 0 )
      {
        v66 = 1;
        ObfDereferenceObject(Object);
      }
    }
  }
  v70 = v66;
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v76 = KernelSemaphore;
  if ( KernelSemaphore )
  {
    v25 = 0;
    v67 = v86;
    while ( 1 )
    {
      v26 = Win32AllocPoolNonPaged(104LL, 0x63704152u);
      v27 = (char *)v67;
      *(_QWORD *)v67 = v26;
      if ( !v26 )
        break;
      ++v25;
      v67 = v27 + 8;
      if ( v25 > 2 )
      {
        v28 = rimConvertUserToKernelEventHandle(v84, &Handle);
        v29 = rimConvertUserToKernelTimerHandle(v85, &v78);
        LODWORD(v67) = v29;
        if ( v79 )
        {
          v30 = rimConvertUserToKernelTimerHandle(v79, &v73);
          v29 = (int)v67;
        }
        else
        {
          v30 = 0;
        }
        v31 = v28 < 0;
        if ( v28 >= 0 )
        {
          if ( v29 >= 0 && v30 >= 0 )
          {
            KeEnterCriticalRegion();
            LOBYTE(v32) = a13;
            v28 = RawInputManagerObjectCreate(v32, v33, v34, v35, &v71);
            KeLeaveCriticalRegion();
            if ( v28 < 0 )
              goto LABEL_89;
            v28 = RawInputManagerObjectResolveHandle((char *)v71, 3u, 1, &v67);
            v65 = v28;
            if ( v28 >= 0 )
            {
              v36 = (char *)v67;
              *((_QWORD *)v67 + 8) = v71;
              *((_WORD *)v36 + 36) = 0;
              v36[75] = 0;
              *((_DWORD *)v36 + 19) = a1;
              *((_QWORD *)v36 + 14) = a5;
              *((_QWORD *)v36 + 12) = 0LL;
              *((_QWORD *)v36 + 13) = 0LL;
              *((_QWORD *)v36 + 87) = 0LL;
              *((_QWORD *)v36 + 88) = 0LL;
              *((_QWORD *)v36 + 69) = 0LL;
              *((_DWORD *)v36 + 134) = 0;
              *((_QWORD *)v36 + 68) = 0LL;
              *((_QWORD *)v36 + 71) = v36 + 560;
              *((_QWORD *)v36 + 70) = v36 + 560;
              memset(v36 + 576, 0, 0x20uLL);
              *((_QWORD *)v36 + 73) = v36 + 576;
              *((_QWORD *)v36 + 72) = v36 + 576;
              memset(v36 + 608, 0, 0x20uLL);
              RIMCheckPressureDefaultSetting((__int64)v36);
              *((_DWORD *)v36 + 244) = a14 != 0;
              *((_DWORD *)v36 + 245) = v66;
              *((_DWORD *)v36 + 252) = 0;
              *((_QWORD *)v36 + 127) = v76;
              *((_DWORD *)v36 + 256) = 0;
              v76 = 0LL;
              v37 = 0;
              v38 = v86;
              v39 = v36 + 384;
              v40 = v36 + 432;
              v41 = v36 + 120;
              v42 = &gRIMDeviceTemplate;
              v79 = (void *)(a14 - (_QWORD)&gRIMDeviceTemplate);
              v43 = v36 - v86;
              do
              {
                v44 = (GUID **)((char *)v42 + a14 - (_QWORD)&gRIMDeviceTemplate);
                if ( !a14 )
                  v44 = v42;
                *v41 = *(_OWORD *)v44;
                v41[1] = *((_OWORD *)v44 + 1);
                v41[2] = *((_OWORD *)v44 + 2);
                v41[3] = *((_OWORD *)v44 + 3);
                v41[4] = *((_OWORD *)v44 + 4);
                *(_QWORD *)((char *)v38 + v43 + 360) = 0LL;
                *(_QWORD *)((char *)v38 + v43 + 448) = *v38;
                *v40 = 0;
                *v38 = 0LL;
                *((_DWORD *)v39 + 2) = v37;
                *(_QWORD *)v39 = v36;
                ++v37;
                v42 += 10;
                ++v40;
                v41 += 5;
                ++v38;
                v39 += 16;
              }
              while ( v37 <= 2 );
              *((_QWORD *)v36 + 59) = v78;
              *((_QWORD *)v36 + 60) = v73;
              *((_DWORD *)v36 + 122) = a9;
              *((_QWORD *)v36 + 62) = 0LL;
              *((_QWORD *)v36 + 63) = 0LL;
              *((_QWORD *)v36 + 64) = 0LL;
              v45 = *(CTouchProcessor **)&SourceString.Length;
              if ( a9 && v73 != (HANDLE)-1LL )
              {
                *((_QWORD *)v36 + 62) = gliQpcFreq.QuadPart * a9 / 1000;
                *((_QWORD *)v36 + 63) = gliQpcFreq.QuadPart * 20 * a9 / 1000;
              }
              *((_QWORD *)v36 + 66) = a10;
              *((_QWORD *)v36 + 65) = Handle;
              v36[712] = 0;
              *((_QWORD *)v36 + 105) = 0LL;
              *((_QWORD *)v36 + 104) = 500 * gliQpcFreq.QuadPart / 1000;
              *((_QWORD *)v36 + 95) = a11;
              *((_QWORD *)v36 + 96) = a12;
              v36[640] = 0;
              RawInputManagerObject::bTouchInputAllowed = 1;
              v36[641] = 0;
              KeQueryPerformanceCounter((PLARGE_INTEGER)v36 + 81);
              *((_QWORD *)v36 + 82) = 1LL;
              *((_QWORD *)v36 + 92) = 0LL;
              *((_QWORD *)v36 + 84) = v36 + 664;
              *((_QWORD *)v36 + 83) = v36 + 664;
              *((_QWORD *)v36 + 86) = v36 + 680;
              *((_QWORD *)v36 + 85) = v36 + 680;
              *((_QWORD *)v36 + 91) = v36 + 720;
              *((_QWORD *)v36 + 90) = v36 + 720;
              *((_QWORD *)v36 + 94) = v36 + 744;
              *((_QWORD *)v36 + 93) = v36 + 744;
              *((_QWORD *)v36 + 124) = v36 + 984;
              *((_QWORD *)v36 + 123) = v36 + 984;
              RtlInitializeGenericTableAvl(
                (PRTL_AVL_TABLE)(v36 + 856),
                rimUserMemAllocNodeCompare,
                rimUserMemAllocNodeAlloc,
                (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
                0LL);
              v46 = v69;
              *((_DWORD *)v36 + 20) = v69;
              if ( v46 )
              {
                v47 = 4LL * v46;
                if ( v47 > 0xFFFFFFFF )
                {
                  v69 = -1;
                  v28 = -1073741811;
                }
                else
                {
                  v69 = 4 * v46;
                  v48 = Win32AllocPool((unsigned int)v47, 0x70617552u);
                  *((_QWORD *)v36 + 11) = v48;
                  if ( v48 )
                  {
                    if ( a13 )
                    {
                      v52 = 0;
                      v68 = 0;
                      v53 = v81;
                      while ( v52 < v46 )
                      {
                        v54 = (CTouchProcessor *)(v53 + 4LL * v52);
                        if ( v54 >= W32UserProbeAddress )
                          v54 = W32UserProbeAddress;
                        *(_DWORD *)(*((_QWORD *)v36 + 11) + 4LL * v52++) = *(_DWORD *)v54;
                        v68 = v52;
                      }
                    }
                    else
                    {
                      v49 = 0LL;
                      v50 = v46;
                      v68 = v46;
                      v51 = v81;
                      do
                      {
                        *(_DWORD *)(v49 + *((_QWORD *)v36 + 11)) = *(_DWORD *)(v49 + v51);
                        v49 += 4LL;
                        --v50;
                      }
                      while ( v50 );
                    }
                    goto LABEL_50;
                  }
                  v28 = -1073741801;
                }
                v65 = v28;
              }
LABEL_50:
              if ( v45 )
              {
                p_DestinationString = 0LL;
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.Buffer = 0LL;
                if ( a13 )
                {
                  if ( v45 >= W32UserProbeAddress )
                    v45 = W32UserProbeAddress;
                  v55 = *(_DWORD *)v45;
                  v70 = v55;
                  *(_DWORD *)&SourceString.Length = v55;
                  v56 = (WCHAR *)*((_QWORD *)v45 + 1);
                  SourceString.Buffer = v56;
                  if ( ((unsigned __int8)v56 & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v57 = (unsigned __int64)v56 + (unsigned __int16)v55 + 2;
                  if ( v57 >= (unsigned __int64)W32UserProbeAddress
                    || (unsigned __int16)v55 > HIWORD(v70)
                    || (v55 & 1) != 0
                    || v57 <= (unsigned __int64)v56 )
                  {
                    *(_BYTE *)W32UserProbeAddress = 0;
                  }
                  if ( SourceString.Length )
                  {
                    DestinationString.MaximumLength = SourceString.Length;
                    DestinationString.Length = SourceString.Length;
                    DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
                    if ( DestinationString.Buffer )
                    {
                      RtlCopyUnicodeString(&DestinationString, &SourceString);
                      p_DestinationString = &DestinationString;
                    }
                    v28 = v65;
                  }
                  else
                  {
                    v28 = -1073741801;
                  }
                  v36 = (char *)v67;
                }
                else
                {
                  p_DestinationString = (struct _UNICODE_STRING *)v45;
                }
                if ( v28 >= 0 )
                {
                  RIMLockExclusive((__int64)(v36 + 96));
                  v28 = RIMDiscoverSpecificDevice(v36);
                  CInpPushLock::UnLockExclusive((CInpPushLock *)(v36 + 96));
                  if ( v28 < 0 )
                  {
                    v58 = *((_QWORD *)v36 + 68);
                    if ( v58 )
                    {
                      Win32FreePool(v58);
                      *((_QWORD *)v36 + 68) = 0LL;
                    }
                    *((_QWORD *)v36 + 59) = -1LL;
                    *((_QWORD *)v36 + 60) = -1LL;
                    *((_QWORD *)v36 + 65) = -1LL;
                  }
                }
                if ( DestinationString.Buffer )
                  Win32FreePool((__int64)DestinationString.Buffer);
              }
              else
              {
                if ( v28 >= 0 )
                  RIMDiscoverDevicesOfInputType(v36);
                if ( !v66 )
                  RIMIDEAdoptOrphanedRimDevs((PVOID **)v36);
              }
              ObfDereferenceObject(v36);
              KernelSemaphore = v76;
            }
LABEL_83:
            if ( v28 < 0 )
            {
LABEL_89:
              v60 = (__int64 *)v86;
              v61 = 3LL;
              do
              {
                if ( *v60 )
                  Win32FreePool(*v60);
                ++v60;
                --v61;
              }
              while ( v61 );
              if ( KernelSemaphore )
                Win32FreePool((__int64)KernelSemaphore);
              if ( Handle != (HANDLE)-1LL )
                ZwClose(Handle);
              if ( v78 != (HANDLE)-1LL )
                ZwClose(v78);
              if ( v73 != (HANDLE)-1LL )
                ZwClose(v73);
              if ( v71 != (HANDLE)-1LL )
                ObCloseHandle(v71, 1);
            }
            else if ( a13 )
            {
              v59 = v72;
              if ( v72 >= W32UserProbeAddress )
                v59 = W32UserProbeAddress;
              *(_QWORD *)v59 = v71;
            }
            else
            {
              *(_QWORD *)v72 = v71;
            }
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x13u,
              0x13u,
              (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
              v28);
            return (unsigned int)v28;
          }
          v31 = v28 < 0;
        }
        if ( !v31 )
          v28 = v29;
        goto LABEL_83;
      }
    }
    v62 = (__int64 *)v86;
    do
    {
      if ( *v62 )
        Win32FreePool(*v62);
      ++v62;
      --v18;
    }
    while ( v18 );
    Win32FreePool((__int64)KernelSemaphore);
  }
  return 3221225495LL;
}
