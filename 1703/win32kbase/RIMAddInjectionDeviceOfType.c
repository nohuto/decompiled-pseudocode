/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C0100090
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0109F10 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C010A148 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
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
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     RIMFreeDev @ 0x1C010DB18 (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        char *a1,
        CTouchProcessor *a2,
        unsigned int a3,
        _OWORD *a4,
        char a5,
        CTouchProcessor *a6)
{
  CTouchProcessor *v8; // r15
  CTouchProcessor *v10; // r14
  int v11; // edx
  int v13; // ebx
  PWSTR *v14; // rdi
  int v15; // edx
  __int64 v16; // rdx
  int v17; // ecx
  WCHAR *v18; // rdx
  unsigned __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // r9d
  __int64 v22; // [rsp+28h] [rbp-150h]
  PVOID Object; // [rsp+48h] [rbp-130h] BYREF
  int v25; // [rsp+50h] [rbp-128h]
  unsigned int v26; // [rsp+58h] [rbp-120h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-118h]
  __int64 v28; // [rsp+68h] [rbp-110h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-108h] BYREF
  CTouchProcessor *v30; // [rsp+80h] [rbp-F8h]
  UNICODE_STRING SourceString; // [rsp+88h] [rbp-F0h] BYREF
  _OWORD v32[9]; // [rsp+A0h] [rbp-D8h] BYREF

  v8 = a2;
  v26 = a3;
  v10 = a6;
  v30 = a6;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    19,
    39,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  if ( !a4 )
  {
    LOBYTE(v11) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      18,
      40,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x29u,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
      -1073741811);
    return 3221225485LL;
  }
  v13 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v13 >= 0 )
  {
    v14 = (PWSTR *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v14 + 73) || *((_BYTE *)v14 + 75) )
    {
      v13 = -1073741637;
      v21 = 43;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v14 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( a5 )
        {
          if ( v8 >= W32UserProbeAddress )
            v8 = W32UserProbeAddress;
          v17 = *(_DWORD *)v8;
          v25 = v17;
          *(_DWORD *)&SourceString.Length = v17;
          v18 = (WCHAR *)*((_QWORD *)v8 + 1);
          SourceString.Buffer = v18;
          if ( ((unsigned __int8)v18 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v19 = (unsigned __int64)v18 + (unsigned __int16)v17 + 2;
          if ( v19 >= (unsigned __int64)W32UserProbeAddress
            || (unsigned __int16)v17 > HIWORD(v25)
            || (v17 & 1) != 0
            || v19 <= (unsigned __int64)v18 )
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
            v13 = -1073741801;
          }
          v14 = (PWSTR *)Object;
          v16 = a3;
        }
        else
        {
          p_DestinationString = (struct _UNICODE_STRING *)v8;
          v32[0] = *a4;
          v32[1] = a4[1];
          v32[2] = a4[2];
          v32[3] = a4[3];
          v32[4] = a4[4];
          v32[5] = a4[5];
          v32[6] = a4[6];
          v32[7] = a4[7];
          v32[8] = a4[8];
          v16 = a3;
        }
        if ( v13 >= 0 )
        {
          v13 = RIMCreateDev(
                  v14,
                  v16,
                  (__int64)p_DestinationString,
                  0LL,
                  1,
                  (__int64)v32,
                  (struct _UNICODE_STRING **)&v28);
          if ( v13 >= 0 )
          {
            if ( a5 )
            {
              v20 = v28;
              if ( a6 >= W32UserProbeAddress )
                v10 = W32UserProbeAddress;
              *(_QWORD *)v10 = *(_QWORD *)(v28 + 16);
            }
            else
            {
              v20 = v28;
              *(_QWORD *)a6 = *(_QWORD *)(v28 + 16);
            }
            if ( v14[96] || *((_DWORD *)v14 + 244) )
              *(_DWORD *)(v20 + 184) |= 0x20000u;
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool((__int64)DestinationString.Buffer);
        goto LABEL_37;
      }
      v13 = -1073741637;
      v21 = 42;
    }
    LOBYTE(v15) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      18,
      v21,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
LABEL_37:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v14 + 12));
    ObfDereferenceObject(v14);
  }
  LODWORD(v22) = v13;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x2Cu,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v22);
  return (unsigned int)v13;
}
