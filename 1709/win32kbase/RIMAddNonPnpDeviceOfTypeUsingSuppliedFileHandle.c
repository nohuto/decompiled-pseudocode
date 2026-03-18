/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0100D30
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5750 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C0009F40 (DeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016C80 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     rimDoRimDevChange @ 0x1C001AEAC (rimDoRimDevChange.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        const UNICODE_STRING *a2,
        int a3,
        void *a4,
        char a5,
        _QWORD *a6)
{
  int v11; // ebx
  char *v12; // rdi
  int v13; // ecx
  WCHAR *Buffer; // rdx
  ULONG64 v15; // r9
  __int64 v16; // rsi
  _QWORD *v17; // r8
  unsigned __int16 v18; // r9
  __int64 v19; // [rsp+28h] [rbp-80h]
  int v20; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x22u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  if ( !a4 )
  {
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x23u,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
      -1073741811);
    return 3221225485LL;
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    v12 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v12[73] || v12[75] )
    {
      v11 = -1073741637;
      v18 = 37;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v12 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( a5 )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (const UNICODE_STRING *)MmUserProbeAddress;
          v13 = *(_DWORD *)&a2->Length;
          v20 = *(_DWORD *)&a2->Length;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)&a2->Length;
          Buffer = a2->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v15 = (ULONG64)Buffer + (unsigned __int16)v13 + 2;
          if ( v15 >= MmUserProbeAddress
            || (unsigned __int16)v13 > HIWORD(v20)
            || (v13 & 1) != 0
            || v15 <= (unsigned __int64)Buffer )
          {
            *(_BYTE *)MmUserProbeAddress = 0;
          }
          DestinationString.MaximumLength = SourceString.Length;
          DestinationString.Length = SourceString.Length;
          DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
          if ( DestinationString.Buffer )
          {
            RtlCopyUnicodeString(&DestinationString, &SourceString);
            p_DestinationString = &DestinationString;
          }
          else
          {
            v11 = -1073741801;
          }
          v12 = (char *)Object;
        }
        else
        {
          p_DestinationString = a2;
        }
        if ( v11 >= 0 )
        {
          v11 = RIMCreateDev(v12, a3, p_DestinationString, 1, 0, 0LL, &v23);
          if ( v11 >= 0 )
          {
            v16 = v23;
            *(_DWORD *)(v23 + 184) |= 1u;
            v11 = rimOnPnpArrived(v12, v16, a4);
            if ( v11 >= 0 )
            {
              rimDoRimDevChange((__int64)v12, v16, 2);
              v17 = a6;
              if ( a6 )
              {
                if ( a5 )
                {
                  if ( (unsigned __int64)a6 >= MmUserProbeAddress )
                    v17 = (_QWORD *)MmUserProbeAddress;
                  *v17 = *(_QWORD *)(v16 + 16);
                }
                else
                {
                  *a6 = *(_QWORD *)(v16 + 16);
                }
              }
            }
            if ( v11 < 0 )
              RIMFreeDev(v12, v16);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool((__int64)DestinationString.Buffer);
        goto LABEL_38;
      }
      v11 = -1073741637;
      v18 = 36;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      v18,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
LABEL_38:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v12 + 96));
    ObfDereferenceObject(v12);
  }
  LODWORD(v19) = v11;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x26u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v19);
  return (unsigned int)v11;
}
