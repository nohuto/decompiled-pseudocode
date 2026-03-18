/*
 * XREFs of rimOnPnpArrived @ 0x1C0094660
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C0050100 (RIMDirectStartStopDeviceRead.c)
 *     RIMDoOnPnpNotification @ 0x1C0094468 (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01005F0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     _TlgCreateWsz @ 0x1C00073E8 (_TlgCreateWsz.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0050284 (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C005030C (RIMHidTLCActive.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     _TlgWrite @ 0x1C0052730 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00533FC (_TlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0055740 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0094B5C (WPP_RECORDER_SF_qqD.c)
 *     RIMCloseDev @ 0x1C0094C40 (RIMCloseDev.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0094CB4 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMOpenDev @ 0x1C0094D18 (RIMOpenDev.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C0094EF0 (WPP_RECORDER_SF_qqS.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0095144 (RIMStartDeviceSpecificRead.c)
 *     RIMQueryDev @ 0x1C00953F4 (RIMQueryDev.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     RIMIsTestSigningOn @ 0x1C010C8E0 (RIMIsTestSigningOn.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 *     WPP_RECORDER_SF_DqqS @ 0x1C0110134 (WPP_RECORDER_SF_DqqS.c)
 */

__int64 __fastcall rimOnPnpArrived(_QWORD *a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // r14d
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r8
  int v14; // r14d
  int v15; // eax
  int v17; // r8d
  int v18; // eax
  const WCHAR *v19; // rdx
  LPCGUID v20; // r9
  UINT32 v21; // r10d
  int v22; // edx
  int v23; // r8d
  PVOID v24; // rbx
  __int64 v25; // r8
  int v26; // eax
  int v27; // r9d
  void *v28; // rcx
  NTSTATUS v29; // eax
  void *v30; // rcx
  void *v31; // rcx
  NTSTATUS v32; // eax
  void *v33; // rcx
  int cData; // [rsp+20h] [rbp-69h]
  int cDataa; // [rsp+20h] [rbp-69h]
  PVOID Object; // [rsp+50h] [rbp-39h] BYREF
  PVOID v37; // [rsp+58h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-29h] BYREF
  __int16 v39; // [rsp+68h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  __int64 v41; // [rsp+80h] [rbp-9h]
  int v42; // [rsp+88h] [rbp-1h]
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
    (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids);
  LOBYTE(v8) = *(_BYTE *)(v4 + 48);
  *(_DWORD *)(v4 + 184) &= ~1u;
  if ( (_BYTE)v8 != 3 )
  {
    if ( a3 == (void *)-1LL )
    {
      *(_QWORD *)&pData.Size = 0LL;
      p_Object = 0LL;
      v9 = 2;
      v41 = v4 + 208;
      p_Handle = (__int64)&Handle;
      v10 = 1048577;
      LODWORD(pData.Ptr) = 48;
      v42 = 512;
      Handle = (HANDLE)0x20000000CLL;
      v39 = 257;
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
              WPP_GLOBAL_Control->DeviceExtension,
              512,
              v7,
              19,
              cData,
              (char)a1,
              v4,
              *(_QWORD *)(v4 + 216));
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
        v14 = RIMQueryDev(a1, v4);
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
          || (unsigned int)RIMHidTLCActive(*(_DWORD **)(v4 + 464)) )
        {
          if ( !a1[96] )
          {
            RIMLockExclusive((__int64)(a1 + 87));
            RIMStartDeviceSpecificRead(a1, v4);
            a1[88] = 0LL;
            ExReleasePushLockExclusiveEx(a1 + 87, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        else
        {
          WPP_RECORDER_SF_qqS(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            v17,
            20,
            cData,
            (char)a1,
            v4,
            *(_QWORD *)(v4 + 216));
          RIMCloseDev(v4);
          if ( dword_1C0186860 > 5u
            && *(_QWORD *)(v4 + 248)
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0186860, 0x400000000000uLL) )
          {
            v18 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
            v19 = *(const WCHAR **)(v4 + 216);
            LODWORD(Object) = v18;
            p_Object = &Object;
            p_Handle = 4LL;
            TlgCreateWsz(&pDesc, v19);
            TlgWrite((TraceLoggingHProvider)&dword_1C0186860, &unk_1C016A5BE, 0LL, v20, v21, &pData);
          }
        }
        goto LABEL_23;
      }
LABEL_47:
      v31 = *(void **)(v4 + 248);
      if ( v31 )
      {
        v32 = IoUnregisterPlugPlayNotification(v31);
        v33 = *(void **)(v4 + 32);
        v14 = v32;
        *(_QWORD *)(v4 + 248) = 0LL;
        ObfDereferenceObject(v33);
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
      (__int64)&WPP_b10d7901ec9437b632f459d6891cab5f_Traceguids,
      (char)a1,
      v4,
      v14);
    return (unsigned int)v14;
  }
  v14 = RIMGetDeviceObjectPointer(
          (struct _UNICODE_STRING *)(v4 + 208),
          v6,
          v7,
          &Handle,
          &v37,
          (PDEVICE_OBJECT *)&Object);
  if ( v14 < 0 )
  {
    v27 = 18;
  }
  else
  {
    ObfReferenceObject(Object);
    v24 = v37;
    *(_QWORD *)(v4 + 232) = v37;
    cDataa = v4 + 248;
    v26 = RIMRegisterForDeviceChangeNotifications(v4, a1[14], v25, v4);
    *(_QWORD *)(v4 + 232) = 0LL;
    v14 = v26;
    ObfDereferenceObject(v24);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
    if ( v14 >= 0 )
    {
      v14 = ObReferenceObjectByPointer(*(PVOID *)(v4 + 32), 3u, ExRawInputManagerObjectType, 0);
      goto LABEL_36;
    }
    v27 = 17;
  }
  WPP_RECORDER_SF_DqqS(
    WPP_GLOBAL_Control->DeviceExtension,
    v22,
    v23,
    v27,
    cDataa,
    v14,
    (char)a1,
    v4,
    *(_QWORD *)(v4 + 216));
LABEL_36:
  if ( v14 < 0 )
  {
    v28 = *(void **)(v4 + 248);
    if ( v28 )
    {
      v29 = IoUnregisterPlugPlayNotification(v28);
      v30 = *(void **)(v4 + 32);
      v14 = v29;
      *(_QWORD *)(v4 + 248) = 0LL;
      ObfDereferenceObject(v30);
    }
    RIMCloseDev(v4);
    RIMFreeDev(a1, v4);
  }
  return (unsigned int)v14;
}
