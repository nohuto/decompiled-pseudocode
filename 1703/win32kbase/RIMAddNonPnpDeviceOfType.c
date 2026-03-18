/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C01005F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0053FC0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     DeviceTypeToRimInputType @ 0x1C0093CB0 (DeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x1C0094660 (rimOnPnpArrived.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(
        char *a1,
        CTouchProcessor *a2,
        unsigned int a3,
        char a4,
        CTouchProcessor *a5)
{
  CTouchProcessor *v7; // rsi
  int v9; // ebx
  PWSTR *v10; // rdi
  int v11; // edx
  int v12; // ecx
  WCHAR *v13; // rdx
  unsigned __int64 v14; // r8
  __int64 v15; // rsi
  CTouchProcessor *v16; // rcx
  int v17; // r9d
  __int64 v19; // [rsp+28h] [rbp-80h]
  int v20; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v23; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  v7 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    30,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = (PWSTR *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v10 + 73) || *((_BYTE *)v10 + 75) )
    {
      v9 = -1073741637;
      v17 = 32;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v10 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( a4 )
        {
          if ( v7 >= W32UserProbeAddress )
            v7 = W32UserProbeAddress;
          v12 = *(_DWORD *)v7;
          v20 = *(_DWORD *)v7;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)v7;
          v13 = (WCHAR *)*((_QWORD *)v7 + 1);
          SourceString.Buffer = v13;
          if ( ((unsigned __int8)v13 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v14 = (unsigned __int64)v13 + (unsigned __int16)v12 + 2;
          if ( v14 >= (unsigned __int64)W32UserProbeAddress
            || (unsigned __int16)v12 > HIWORD(v20)
            || (v12 & 1) != 0
            || v14 <= (unsigned __int64)v13 )
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
            v9 = -1073741801;
          }
          v10 = (PWSTR *)Object;
        }
        else
        {
          p_DestinationString = (struct _UNICODE_STRING *)v7;
        }
        if ( v9 >= 0 )
        {
          v9 = RIMCreateDev(v10, a3, (__int64)p_DestinationString, 1LL, 0, 0LL, (struct _UNICODE_STRING **)&v23);
          if ( v9 >= 0 )
          {
            v15 = v23;
            *(_DWORD *)(v23 + 184) |= 1u;
            v9 = rimOnPnpArrived(v10, v15, (void *)0xFFFFFFFFFFFFFFFFLL);
            if ( v9 >= 0 )
            {
              if ( a4 )
              {
                v16 = a5;
                if ( a5 >= W32UserProbeAddress )
                  v16 = W32UserProbeAddress;
                *(_QWORD *)v16 = *(_QWORD *)(v15 + 16);
              }
              else
              {
                *(_QWORD *)a5 = *(_QWORD *)(v15 + 16);
              }
            }
            if ( v9 < 0 )
              RIMFreeDev(v10, v15);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool((__int64)DestinationString.Buffer);
        goto LABEL_35;
      }
      v9 = -1073741637;
      v17 = 31;
    }
    LOBYTE(v11) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      18,
      v17,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
LABEL_35:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v10 + 12));
    ObfDereferenceObject(v10);
  }
  LODWORD(v19) = v9;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x21u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v19);
  return (unsigned int)v9;
}
