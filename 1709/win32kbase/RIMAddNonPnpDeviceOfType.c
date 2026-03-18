/*
 * XREFs of RIMAddNonPnpDeviceOfType @ 0x1C0100A30
 * Callers:
 *     <none>
 * Callees:
 *     DeviceTypeToRimInputType @ 0x1C0009F40 (DeviceTypeToRimInputType.c)
 *     rimOnPnpArrived @ 0x1C000BA68 (rimOnPnpArrived.c)
 *     RIMCreateDev @ 0x1C000D350 (RIMCreateDev.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016C80 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     RIMFreeDev @ 0x1C010CAFC (RIMFreeDev.c)
 */

__int64 __fastcall RIMAddNonPnpDeviceOfType(char *a1, const UNICODE_STRING *a2, int a3, char a4, _QWORD *a5)
{
  int v9; // ebx
  char *v10; // rdi
  int v11; // ecx
  WCHAR *Buffer; // rdx
  ULONG64 v13; // r9
  __int64 v14; // rsi
  _QWORD *v15; // rdx
  unsigned __int16 v16; // r9
  __int64 v18; // [rsp+28h] [rbp-80h]
  int v19; // [rsp+44h] [rbp-64h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  const UNICODE_STRING *p_DestinationString; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-38h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Eu,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  v9 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v9 >= 0 )
  {
    v10 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v10[73] || v10[75] )
    {
      v9 = -1073741637;
      v16 = 32;
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
          if ( (unsigned __int64)a2 >= MmUserProbeAddress )
            a2 = (const UNICODE_STRING *)MmUserProbeAddress;
          v11 = *(_DWORD *)&a2->Length;
          v19 = *(_DWORD *)&a2->Length;
          *(_DWORD *)&SourceString.Length = *(_DWORD *)&a2->Length;
          Buffer = a2->Buffer;
          SourceString.Buffer = Buffer;
          if ( ((unsigned __int8)Buffer & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v13 = (ULONG64)Buffer + (unsigned __int16)v11 + 2;
          if ( v13 >= MmUserProbeAddress
            || (unsigned __int16)v11 > HIWORD(v19)
            || (v11 & 1) != 0
            || v13 <= (unsigned __int64)Buffer )
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
            v9 = -1073741801;
          }
          v10 = (char *)Object;
        }
        else
        {
          p_DestinationString = a2;
        }
        if ( v9 >= 0 )
        {
          v9 = RIMCreateDev(v10, a3, p_DestinationString, 1, 0, 0LL, &v22);
          if ( v9 >= 0 )
          {
            v14 = v22;
            *(_DWORD *)(v22 + 184) |= 1u;
            v9 = rimOnPnpArrived(v10, v14, (void *)0xFFFFFFFFFFFFFFFFLL);
            if ( v9 >= 0 )
            {
              if ( a4 )
              {
                v15 = a5;
                if ( (unsigned __int64)a5 >= MmUserProbeAddress )
                  v15 = (_QWORD *)MmUserProbeAddress;
                *v15 = *(_QWORD *)(v14 + 16);
              }
              else
              {
                *a5 = *(_QWORD *)(v14 + 16);
              }
            }
            if ( v9 < 0 )
              RIMFreeDev(v10, v14);
          }
        }
        if ( DestinationString.Buffer )
          Win32FreePool((__int64)DestinationString.Buffer);
        goto LABEL_35;
      }
      v9 = -1073741637;
      v16 = 31;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      v16,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
LABEL_35:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v10 + 96));
    ObfDereferenceObject(v10);
  }
  LODWORD(v18) = v9;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x21u,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v18);
  return (unsigned int)v9;
}
