/*
 * XREFs of PiCMDeleteDeviceKey @ 0x1406A4B08
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     RtlUnicodeStringToInteger @ 0x140428AD0 (RtlUnicodeStringToInteger.c)
 *     PiCMConvertDeviceKeyType @ 0x14043E474 (PiCMConvertDeviceKeyType.c)
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404841B8 (_PnpCtxGetCachedContextBaseKey.c)
 *     PiAuDoesClientHaveAccess @ 0x1404E4EB0 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404E6BA8 (PiCMReturnBasicResultData.c)
 *     PiCMReleaseObjectInputData @ 0x1404E850C (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1404E8E44 (PiCMCaptureObjectInputData.c)
 *     _RegRtlEnumKey @ 0x1405AA7F4 (_RegRtlEnumKey.c)
 *     _CmDeleteDeviceRegKey @ 0x14073AB30 (_CmDeleteDeviceRegKey.c)
 */

__int64 __fastcall PiCMDeleteDeviceKey(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // ebx
  int v9; // ebx
  __int16 v10; // r10
  __int64 v11; // rcx
  ULONG v12; // esi
  int inited; // edi
  unsigned int v15; // [rsp+30h] [rbp-59h] BYREF
  ULONG Value; // [rsp+34h] [rbp-55h] BYREF
  __int64 v17; // [rsp+38h] [rbp-51h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-49h] BYREF
  char v19[4]; // [rsp+48h] [rbp-41h] BYREF
  int v20; // [rsp+4Ch] [rbp-3Dh]
  int v21; // [rsp+50h] [rbp-39h]
  __int64 v22; // [rsp+58h] [rbp-31h]
  int v23; // [rsp+64h] [rbp-25h]
  int v24; // [rsp+68h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  unsigned int SourceString[4]; // [rsp+80h] [rbp-9h] BYREF

  v17 = 0LL;
  Handle = 0LL;
  *a6 = 0;
  Value = 0;
  v15 = 0;
  v8 = PiCMCaptureObjectInputData(a1, a2, a5, v19);
  if ( v8 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      if ( v22 && v21 == 1 && a3 && a4 >= 8 )
      {
        v9 = PiCMConvertDeviceKeyType(v20, &v15);
        if ( v9 >= 0 )
        {
          if ( (v10 & 0xFF00) == 0x200 && v23 == -1 )
          {
            if ( (int)PnpCtxGetCachedContextBaseKey(*(_QWORD **)&PiPnpRtlCtx, 4, &v17) >= 0 )
            {
              v11 = 0LL;
              if ( *(_QWORD *)&PiPnpRtlCtx )
                v11 = **(_QWORD **)&PiPnpRtlCtx;
              v12 = 0;
              if ( (int)SysCtxRegOpenKey(
                          v11,
                          v17,
                          (__int64)L"Control\\IDConfigDB\\Hardware Profiles",
                          0,
                          8u,
                          (__int64)&Handle) >= 0 )
              {
                do
                {
                  if ( v9 < 0 )
                    break;
                  LODWORD(v17) = 5;
                  inited = RegRtlEnumKey(Handle, v12, SourceString, (unsigned int *)&v17);
                  if ( inited >= 0 )
                  {
                    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
                    if ( inited >= 0 )
                    {
                      inited = RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
                      if ( inited >= 0 )
                      {
                        v9 = CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, v22, v15);
                        if ( v9 == -1073741772 )
                          v9 = 0;
                      }
                    }
                  }
                  ++v12;
                }
                while ( inited >= 0 );
              }
            }
          }
          else
          {
            v9 = CmDeleteDeviceRegKey(*(_QWORD *)&PiPnpRtlCtx, v22, v15);
          }
        }
      }
      else
      {
        v9 = -1073741811;
      }
    }
    else
    {
      v9 = -1073741790;
    }
    if ( Handle )
      ZwClose(Handle);
    v8 = PiCMReturnBasicResultData(v9, v24, a3, a4, a6);
  }
  PiCMReleaseObjectInputData((__int64)v19);
  return (unsigned int)v8;
}
