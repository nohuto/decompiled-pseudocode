/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C0098970
 * Callers:
 *     RIMRegisterForInput @ 0x1C00988E0 (RIMRegisterForInput.c)
 * Callees:
 *     CreateKernelSemaphore @ 0x1C00085A0 (CreateKernelSemaphore.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C0009818 (RIMDiscoverDevicesOfInputType.c)
 *     RIMUnregisterForInput @ 0x1C00099C0 (RIMUnregisterForInput.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C000A104 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016C80 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024C70 (Win32AllocPoolNonPaged.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C009382C (RIMIDEAdoptOrphanedRimDevs.c)
 *     RawInputManagerObjectCreate @ 0x1C0095308 (RawInputManagerObjectCreate.c)
 *     rimFindReferencedPrimaryRimObj @ 0x1C0095BD0 (rimFindReferencedPrimaryRimObj.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C0096258 (rimConvertUserToKernelTimerHandle.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C0097438 (RIMCheckPressureDefaultSetting.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C010367C (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C0103748 (WPP_RECORDER_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C010DFDC (RIMDiscoverSpecificDevice.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        void *a7,
        void *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        char a13,
        __int64 a14,
        HANDLE *a15)
{
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
  ULONG64 v45; // r13
  unsigned int v46; // ebx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r11
  unsigned int v53; // r10d
  __int64 v54; // r11
  _DWORD *v55; // r8
  int v56; // ecx
  WCHAR *v57; // rdx
  ULONG64 v58; // r9
  __int64 v59; // rcx
  _QWORD *v60; // rdx
  __int64 *v61; // rbx
  __int64 v62; // r13
  __int64 *v63; // rbx
  int TableContext; // [rsp+20h] [rbp-128h]
  __int64 v65; // [rsp+28h] [rbp-120h]
  int v66; // [rsp+40h] [rbp-108h]
  int v67; // [rsp+44h] [rbp-104h]
  PVOID v68; // [rsp+48h] [rbp-100h] BYREF
  int v69; // [rsp+50h] [rbp-F8h]
  HANDLE v70; // [rsp+58h] [rbp-F0h] BYREF
  unsigned int v71; // [rsp+60h] [rbp-E8h]
  HANDLE *v72; // [rsp+68h] [rbp-E0h]
  HANDLE v73; // [rsp+70h] [rbp-D8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-D0h] BYREF
  unsigned int v75; // [rsp+88h] [rbp-C0h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-B8h]
  struct _KSEMAPHORE *v77; // [rsp+98h] [rbp-B0h]
  HANDLE Handle; // [rsp+A0h] [rbp-A8h] BYREF
  HANDLE v79; // [rsp+A8h] [rbp-A0h] BYREF
  void *v80; // [rsp+B0h] [rbp-98h]
  UNICODE_STRING SourceString; // [rsp+B8h] [rbp-90h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-78h]
  __int64 v84; // [rsp+D8h] [rbp-70h]
  void *v85; // [rsp+E0h] [rbp-68h]
  void *v86; // [rsp+E8h] [rbp-60h]
  _BYTE v87[24]; // [rsp+F0h] [rbp-58h] BYREF

  v83 = a4;
  v71 = a3;
  *(_QWORD *)&SourceString.Length = a2;
  v84 = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  v85 = a6;
  v86 = a7;
  v80 = a8;
  v72 = a15;
  Handle = (HANDLE)-1LL;
  v79 = (HANDLE)-1LL;
  v73 = (HANDLE)-1LL;
  v70 = (HANDLE)-1LL;
  memset(v87, 0, sizeof(v87));
  v67 = 0;
  v18 = 3LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xAu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0xBu,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
      a1);
    v22 = 12;
LABEL_3:
    LODWORD(v65) = -1073741811;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      v22,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
      v65);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      WPP_RECORDER_SF_qDd(WPP_GLOBAL_Control->DeviceExtension, v19, v20, v21, TableContext, a2, a1, a3);
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
        v67 = 1;
        ObfDereferenceObject(Object);
      }
    }
  }
  v69 = v67;
  KernelSemaphore = CreateKernelSemaphore(0, -1);
  v77 = KernelSemaphore;
  if ( KernelSemaphore )
  {
    v25 = 0;
    v68 = v87;
    while ( 1 )
    {
      v26 = Win32AllocPoolNonPaged(104LL, 0x63704152u);
      v27 = (char *)v68;
      *(_QWORD *)v68 = v26;
      if ( !v26 )
        break;
      ++v25;
      v68 = v27 + 8;
      if ( v25 > 2 )
      {
        v28 = rimConvertUserToKernelEventHandle(v85, &Handle);
        v29 = rimConvertUserToKernelTimerHandle(v86, &v79);
        LODWORD(v68) = v29;
        if ( v80 )
        {
          v30 = rimConvertUserToKernelTimerHandle(v80, &v73);
          v29 = (int)v68;
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
            v28 = RawInputManagerObjectCreate(v32, v33, v34, v35, &v70);
            KeLeaveCriticalRegion();
            if ( v28 < 0 )
              goto LABEL_91;
            v28 = RawInputManagerObjectResolveHandle((char *)v70, 3u, 1, &v68);
            v66 = v28;
            if ( v28 >= 0 )
            {
              v36 = (char *)v68;
              *((_QWORD *)v68 + 8) = v70;
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
              *((_DWORD *)v36 + 245) = v67;
              *((_DWORD *)v36 + 252) = 0;
              *((_QWORD *)v36 + 127) = v77;
              *((_DWORD *)v36 + 256) = 0;
              v77 = 0LL;
              v37 = 0;
              v38 = v87;
              v39 = v36 + 384;
              v40 = v36 + 432;
              v41 = v36 + 120;
              v42 = &gRIMDeviceTemplate;
              v80 = (void *)(a14 - (_QWORD)&gRIMDeviceTemplate);
              v43 = v36 - v87;
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
              *((_QWORD *)v36 + 59) = v79;
              *((_QWORD *)v36 + 60) = v73;
              *((_DWORD *)v36 + 122) = a9;
              *((_QWORD *)v36 + 62) = 0LL;
              *((_QWORD *)v36 + 63) = 0LL;
              *((_QWORD *)v36 + 64) = 0LL;
              v45 = *(_QWORD *)&SourceString.Length;
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
              v46 = v71;
              *((_DWORD *)v36 + 20) = v71;
              if ( v46 )
              {
                v47 = 4LL * v46;
                v48 = 0xFFFFFFFFLL;
                if ( v47 <= 0xFFFFFFFF )
                  v48 = (unsigned int)v47;
                v71 = v48;
                if ( v47 > 0xFFFFFFFF )
                {
                  v28 = -1073741811;
                }
                else
                {
                  v49 = Win32AllocPool(v48, 0x70617552u);
                  *((_QWORD *)v36 + 11) = v49;
                  if ( v49 )
                  {
                    if ( a13 )
                    {
                      v53 = 0;
                      v75 = 0;
                      v54 = v83;
                      while ( v53 < v46 )
                      {
                        v55 = (_DWORD *)(v54 + 4LL * v53);
                        if ( (unsigned __int64)v55 >= MmUserProbeAddress )
                          v55 = (_DWORD *)MmUserProbeAddress;
                        *(_DWORD *)(*((_QWORD *)v36 + 11) + 4LL * v53++) = *v55;
                        v75 = v53;
                      }
                    }
                    else
                    {
                      v50 = 0LL;
                      v51 = v46;
                      v52 = v83;
                      do
                      {
                        *(_DWORD *)(v50 + *((_QWORD *)v36 + 11)) = *(_DWORD *)(v50 + v52);
                        v50 += 4LL;
                        --v51;
                      }
                      while ( v51 );
                    }
                    goto LABEL_52;
                  }
                  v28 = -1073741801;
                }
                v66 = v28;
              }
LABEL_52:
              if ( v45 )
              {
                p_DestinationString = 0LL;
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.Buffer = 0LL;
                if ( a13 )
                {
                  if ( v45 >= MmUserProbeAddress )
                    v45 = MmUserProbeAddress;
                  v56 = *(_DWORD *)v45;
                  v69 = v56;
                  *(_DWORD *)&SourceString.Length = v56;
                  v57 = *(WCHAR **)(v45 + 8);
                  SourceString.Buffer = v57;
                  if ( ((unsigned __int8)v57 & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v58 = (ULONG64)v57 + (unsigned __int16)v56 + 2;
                  if ( v58 >= MmUserProbeAddress
                    || (unsigned __int16)v56 > HIWORD(v69)
                    || (v56 & 1) != 0
                    || v58 <= (unsigned __int64)v57 )
                  {
                    *(_BYTE *)MmUserProbeAddress = 0;
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
                    v28 = v66;
                  }
                  else
                  {
                    v28 = -1073741801;
                  }
                  v36 = (char *)v68;
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
                    v59 = *((_QWORD *)v36 + 68);
                    if ( v59 )
                    {
                      Win32FreePool(v59);
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
                  RIMDiscoverDevicesOfInputType((unsigned int *)v36);
                if ( !v67 )
                  RIMIDEAdoptOrphanedRimDevs((PVOID **)v36);
              }
              ObfDereferenceObject(v36);
              KernelSemaphore = v77;
            }
LABEL_85:
            if ( v28 < 0 )
            {
LABEL_91:
              v61 = (__int64 *)v87;
              v62 = 3LL;
              do
              {
                if ( *v61 )
                  Win32FreePool(*v61);
                ++v61;
                --v62;
              }
              while ( v62 );
              if ( KernelSemaphore )
                Win32FreePool((__int64)KernelSemaphore);
              if ( Handle != (HANDLE)-1LL )
                ZwClose(Handle);
              if ( v79 != (HANDLE)-1LL )
                ZwClose(v79);
              if ( v73 != (HANDLE)-1LL )
                ZwClose(v73);
              if ( v70 != (HANDLE)-1LL )
                ObCloseHandle(v70, 1);
            }
            else if ( a13 )
            {
              v60 = v72;
              if ( (unsigned __int64)v72 >= MmUserProbeAddress )
                v60 = (_QWORD *)MmUserProbeAddress;
              *v60 = v70;
            }
            else
            {
              *v72 = v70;
            }
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              3u,
              0x13u,
              0x13u,
              (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
              v28);
            return (unsigned int)v28;
          }
          v31 = v28 < 0;
        }
        if ( !v31 )
          v28 = v29;
        goto LABEL_85;
      }
    }
    v63 = (__int64 *)v87;
    do
    {
      if ( *v63 )
        Win32FreePool(*v63);
      ++v63;
      --v18;
    }
    while ( v18 );
    Win32FreePool((__int64)KernelSemaphore);
  }
  return 3221225495LL;
}
