/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C0100490
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0108FA8 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C01091E0 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C0009F40 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016C80 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        char *a1,
        const UNICODE_STRING *a2,
        int a3,
        _OWORD *a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v10; // r14
  int v12; // ebx
  char *v13; // rdi
  char v14; // dl
  int v15; // ecx
  WCHAR *Buffer; // rdx
  ULONG64 v17; // r9
  __int64 v18; // r8
  unsigned __int16 v19; // r9
  __int64 v20; // [rsp+28h] [rbp-150h]
  char v21; // [rsp+44h] [rbp-134h]
  PVOID Object; // [rsp+48h] [rbp-130h] BYREF
  int v23; // [rsp+50h] [rbp-128h]
  int v24; // [rsp+58h] [rbp-120h]
  const UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-118h]
  __int64 v26; // [rsp+68h] [rbp-110h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-108h] BYREF
  _QWORD *v28; // [rsp+80h] [rbp-F8h]
  UNICODE_STRING SourceString; // [rsp+88h] [rbp-F0h] BYREF
  _OWORD v30[9]; // [rsp+A0h] [rbp-D8h] BYREF

  v21 = a3;
  v24 = a3;
  v10 = a6;
  v28 = a6;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x27u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  if ( !a4 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0x28u,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x29u,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
      -1073741811);
    return 3221225485LL;
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v12 >= 0 )
  {
    v13 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v13[73] || v13[75] )
    {
      v12 = -1073741637;
      v19 = 43;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v13 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( a5 )
        {
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (const UNICODE_STRING *)MmUserProbeAddress;
          v15 = *(_DWORD *)&a2->Length;
          v23 = v15;
          *(_DWORD *)&SourceString.Length = v15;
          Buffer = a2->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v17 = (ULONG64)Buffer + (unsigned __int16)v15 + 2;
          if ( v17 >= MmUserProbeAddress
            || (unsigned __int16)v15 > HIWORD(v23)
            || (v15 & 1) != 0
            || v17 <= (unsigned __int64)Buffer )
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
            v12 = -1073741801;
          }
          v13 = (char *)Object;
          v14 = v21;
        }
        else
        {
          p_DestinationString = a2;
          v30[0] = *a4;
          v30[1] = a4[1];
          v30[2] = a4[2];
          v30[3] = a4[3];
          v30[4] = a4[4];
          v30[5] = a4[5];
          v30[6] = a4[6];
          v30[7] = a4[7];
          v30[8] = a4[8];
          v14 = v21;
        }
        if ( v12 >= 0 )
        {
          v12 = RIMCreateDev(v13, v14, p_DestinationString, 0, 1, (__int64)v30, &v26);
          if ( v12 >= 0 )
          {
            if ( a5 )
            {
              v18 = v26;
              if ( (unsigned __int64)a6 >= MmUserProbeAddress )
                v10 = (_QWORD *)MmUserProbeAddress;
              *v10 = *(_QWORD *)(v26 + 16);
            }
            else
            {
              v18 = v26;
              *a6 = *(_QWORD *)(v26 + 16);
            }
            if ( *((_QWORD *)v13 + 96) || *((_DWORD *)v13 + 244) )
              *(_DWORD *)(v18 + 184) |= 0x20000u;
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool((__int64)DestinationString.Buffer);
        goto LABEL_37;
      }
      v12 = -1073741637;
      v19 = 42;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      v19,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
LABEL_37:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v13 + 96));
    ObfDereferenceObject(v13);
  }
  LODWORD(v20) = v12;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x2Cu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v20);
  return (unsigned int)v12;
}
