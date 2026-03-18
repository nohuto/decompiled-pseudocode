/*
 * XREFs of RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0
 * Callers:
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C009A400 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     rimDoRimDevChange @ 0x1C0051F54 (rimDoRimDevChange.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0053FC0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     DeviceTypeToRimInputType @ 0x1C0093CB0 (DeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
        char *a1,
        CTouchProcessor *a2,
        unsigned int a3,
        void *a4,
        char a5,
        CTouchProcessor *a6)
{
  CTouchProcessor *v8; // rsi
  int v11; // ebx
  PWSTR *v12; // rdi
  int v13; // edx
  int v14; // ecx
  WCHAR *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // rsi
  CTouchProcessor *v18; // rdx
  int v19; // r9d
  __int64 v20; // [rsp+28h] [rbp-80h]
  int v21; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v24; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  v8 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    34,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  if ( !a4 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x23u,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
      -1073741811);
    return 3221225485LL;
  }
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    v12 = (PWSTR *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v12 + 73) || *((_BYTE *)v12 + 75) )
    {
      v11 = -1073741637;
      v19 = 37;
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
          if ( v8 >= W32UserProbeAddress )
            v8 = W32UserProbeAddress;
          v14 = *(_DWORD *)v8;
          v21 = *(_DWORD *)v8;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)v8;
          v15 = (WCHAR *)*((_QWORD *)v8 + 1);
          SourceString.Buffer = v15;
          if ( ((unsigned __int8)v15 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v16 = (unsigned __int64)v15 + (unsigned __int16)v14 + 2;
          if ( v16 >= (unsigned __int64)W32UserProbeAddress
            || (unsigned __int16)v14 > HIWORD(v21)
            || (v14 & 1) != 0
            || v16 <= (unsigned __int64)v15 )
          {
            *(_BYTE *)W32UserProbeAddress = 0;
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
          v12 = (PWSTR *)Object;
        }
        else
        {
          p_DestinationString = (struct _UNICODE_STRING *)v8;
        }
        if ( v11 >= 0 )
        {
          v11 = RIMCreateDev(v12, a3, (__int64)p_DestinationString, 1LL, 0, 0LL, (struct _UNICODE_STRING **)&v24);
          if ( v11 >= 0 )
          {
            v17 = v24;
            *(_DWORD *)(v24 + 184) |= 1u;
            v11 = rimOnPnpArrived(v12, v17, a4);
            if ( v11 >= 0 )
            {
              rimDoRimDevChange((__int64)v12, v17, 2);
              v18 = a6;
              if ( a6 )
              {
                if ( a5 )
                {
                  if ( a6 >= W32UserProbeAddress )
                    v18 = W32UserProbeAddress;
                  *(_QWORD *)v18 = *(_QWORD *)(v17 + 16);
                }
                else
                {
                  *(_QWORD *)a6 = *(_QWORD *)(v17 + 16);
                }
              }
            }
            if ( v11 < 0 )
              RIMFreeDev(v12, v17);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool((__int64)DestinationString.Buffer);
        goto LABEL_38;
      }
      v11 = -1073741637;
      v19 = 36;
    }
    LOBYTE(v13) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      18,
      v19,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
LABEL_38:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v12 + 12));
    ObfDereferenceObject(v12);
  }
  LODWORD(v20) = v11;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x26u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v20);
  return (unsigned int)v11;
}
