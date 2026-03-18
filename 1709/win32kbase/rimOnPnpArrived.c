/*
 * XREFs of rimOnPnpArrived @ 0x1C000BA68
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C000B9F4 (RIMDoOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0018DA0 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0100A30 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0100D30 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     RIMQueryDev @ 0x1C0008CD8 (RIMQueryDev.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C000B908 (WPP_RECORDER_SF_qqS.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C000BE84 (RIMRegisterForDeviceChangeNotifications.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000BFC8 (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C000C0AC (RIMCloseDev.c)
 *     RIMStartDeviceSpecificRead @ 0x1C000C120 (RIMStartDeviceSpecificRead.c)
 *     RIMOpenDev @ 0x1C000C32C (RIMOpenDev.c)
 *     _TlgCreateWsz @ 0x1C000C4FC (_TlgCreateWsz.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000E444 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0018F24 (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C0018FA8 (RIMHidTLCActive.c)
 *     _TlgKeywordOn @ 0x1C001C648 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001C674 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     RIMIsTestSigningOn @ 0x1C0107EB4 (RIMIsTestSigningOn.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 *     WPP_RECORDER_SF_DqqS @ 0x1C010EAE4 (WPP_RECORDER_SF_DqqS.c)
 */

__int64 __fastcall rimOnPnpArrived(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r14d
  int v15; // eax
  __int64 v16; // r8
  __int64 v18; // r8
  int v19; // eax
  const WCHAR *v20; // rdx
  LPCGUID v21; // r9
  UINT32 v22; // r10d
  int v23; // edx
  int v24; // r8d
  PVOID v25; // rbx
  __int64 v26; // r8
  int v27; // eax
  int v28; // r9d
  void *v29; // rcx
  NTSTATUS v30; // eax
  void *v31; // rcx
  void *v32; // rcx
  NTSTATUS v33; // eax
  void *v34; // rcx
  int cData; // [rsp+20h] [rbp-69h]
  int cDataa; // [rsp+20h] [rbp-69h]
  PVOID Object; // [rsp+50h] [rbp-39h] BYREF
  PVOID v38; // [rsp+58h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-29h] BYREF
  __int16 v40; // [rsp+68h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  __int64 v42; // [rsp+80h] [rbp-9h]
  int v43; // [rsp+88h] [rbp-1h]
  PVOID *p_Object; // [rsp+90h] [rbp+7h]
  __int64 p_Handle; // [rsp+98h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+17h] BYREF

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    16,
    (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids);
  LOBYTE(v8) = *(_BYTE *)(v4 + 48);
  *(_DWORD *)(v4 + 184) &= ~1u;
  if ( (_BYTE)v8 != 3 )
  {
    if ( a3 == (void *)-1LL )
    {
      *(_QWORD *)&pData.Size = 0LL;
      p_Object = 0LL;
      v9 = 2;
      v42 = v4 + 208;
      p_Handle = (__int64)&Handle;
      v10 = 1048577;
      LODWORD(pData.Ptr) = 48;
      v43 = 512;
      Handle = (HANDLE)0x20000000CLL;
      v40 = 257;
      if ( (_BYTE)v8 == 2 )
      {
        v10 = 1048579;
        if ( (*(_DWORD *)(v4 + 200) & 0x200) != 0 )
        {
          v9 = (unsigned int)RIMIsTestSigningOn(v8, 512LL) != 0 ? 3 : 0;
        }
        else
        {
          v11 = *(_QWORD *)(v4 + 472);
          if ( !v11 || *(_DWORD *)(v11 + 24) == 6 )
            v9 = 3;
          else
            WPP_RECORDER_SF_qqS(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              512LL,
              v7,
              0x13u,
              cData,
              (char)a1,
              v4,
              *(const wchar_t **)(v4 + 216));
        }
      }
      v14 = RIMOpenDev(v4, &pData, v10, v9);
    }
    else
    {
      v14 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
      *(_QWORD *)(v4 + 232) = Handle;
      if ( v14 < 0 )
        goto LABEL_23;
      *(_DWORD *)(v4 + 184) |= 0x10000u;
      *(_QWORD *)(v4 + 224) = a3;
    }
    if ( v14 >= 0 )
    {
      if ( *(_BYTE *)(v4 + 48) != 2 )
        v14 = RIMQueryDev((__int64)a1, v4);
      if ( v14 < 0 )
        goto LABEL_47;
      if ( (*(_DWORD *)(v4 + 184) & 0x20) == 0 && !*(_QWORD *)(v4 + 248) )
      {
        cData = v4 + 248;
        v14 = RIMRegisterForDeviceChangeNotifications(v4, a1[14], v13, v4);
        if ( v14 < 0 )
          goto LABEL_47;
        v14 = ObReferenceObjectByPointer(*(PVOID *)(v4 + 32), 3u, ExRawInputManagerObjectType, 0);
      }
      if ( v14 >= 0 )
      {
        *(_DWORD *)(v4 + 184) &= ~0x200u;
        if ( *(_BYTE *)(v4 + 48) != 2
          || (v15 = *(_DWORD *)(v4 + 200), (v15 & 0x80u) != 0)
          || (v15 & 0x100) != 0
          || (v15 & 0x200) != 0
          || (*(_DWORD *)(v4 + 184) & 0x4000) != 0
          || (unsigned int)RIMHidTLCActive(*(_QWORD *)(v4 + 464)) )
        {
          if ( !a1[96] )
          {
            RIMLockExclusive(a1 + 87);
            RIMStartDeviceSpecificRead(a1, v4, v16);
            a1[88] = 0LL;
            ExReleasePushLockExclusiveEx(a1 + 87, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          WPP_RECORDER_SF_qqS(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v12,
            v18,
            0x14u,
            cData,
            (char)a1,
            v4,
            *(const wchar_t **)(v4 + 216));
          RIMCloseDev(v4);
          if ( *(_QWORD *)(v4 + 248)
            && hProvider > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            v19 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
            v20 = *(const WCHAR **)(v4 + 216);
            LODWORD(Object) = v19;
            p_Object = &Object;
            p_Handle = 4LL;
            TlgCreateWsz(&pDesc, v20);
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C016A715, 0LL, v21, v22, &pData);
          }
        }
        goto LABEL_23;
      }
LABEL_47:
      v32 = *(void **)(v4 + 248);
      if ( v32 )
      {
        v33 = IoUnregisterPlugPlayNotification(v32);
        v34 = *(void **)(v4 + 32);
        v14 = v33;
        *(_QWORD *)(v4 + 248) = 0LL;
        ObfDereferenceObject(v34);
      }
      RIMCloseDev(v4);
      RIMFreeDev(a1, v4);
      LOBYTE(v4) = 0;
    }
LABEL_23:
    WPP_RECORDER_SF_qqD(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      19,
      21,
      (__int64)&WPP_90e310c6b5353faf2d096768653107e7_Traceguids,
      (char)a1,
      v4,
      v14);
    return (unsigned int)v14;
  }
  v14 = RIMGetDeviceObjectPointer((int)v4 + 208, v6, v7, (unsigned int)&Handle, (__int64)&v38, (__int64)&Object);
  if ( v14 < 0 )
  {
    v28 = 18;
  }
  else
  {
    ObfReferenceObject(Object);
    v25 = v38;
    *(_QWORD *)(v4 + 232) = v38;
    cDataa = v4 + 248;
    v27 = RIMRegisterForDeviceChangeNotifications(v4, a1[14], v26, v4);
    *(_QWORD *)(v4 + 232) = 0LL;
    v14 = v27;
    ObfDereferenceObject(v25);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
    if ( v14 >= 0 )
    {
      v14 = ObReferenceObjectByPointer(*(PVOID *)(v4 + 32), 3u, ExRawInputManagerObjectType, 0);
      goto LABEL_36;
    }
    v28 = 17;
  }
  WPP_RECORDER_SF_DqqS(
    WPP_GLOBAL_Control->DeviceExtension,
    v23,
    v24,
    v28,
    cDataa,
    v14,
    (char)a1,
    v4,
    *(_QWORD *)(v4 + 216));
LABEL_36:
  if ( v14 < 0 )
  {
    v29 = *(void **)(v4 + 248);
    if ( v29 )
    {
      v30 = IoUnregisterPlugPlayNotification(v29);
      v31 = *(void **)(v4 + 32);
      v14 = v30;
      *(_QWORD *)(v4 + 248) = 0LL;
      ObfDereferenceObject(v31);
    }
    RIMCloseDev(v4);
    RIMFreeDev(a1, v4);
  }
  return (unsigned int)v14;
}
