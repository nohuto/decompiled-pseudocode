/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x14048FFD8
 * Callers:
 *     PiCMHandleIoctl @ 0x14050A580 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x14006E290 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     McTemplateK0jzt @ 0x14023D670 (McTemplateK0jzt.c)
 *     McTemplateK0q @ 0x14023D72C (McTemplateK0q.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopGetDeviceInterfaces @ 0x1404901A0 (IopGetDeviceInterfaces.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140490BD8 (PiCMCaptureInterfaceListInputData.c)
 *     PiCMReturnBufferResultData @ 0x14050A2B4 (PiCMReturnBufferResultData.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  PVOID v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // esi
  const WCHAR *v15; // r12
  __int64 v16; // rcx
  NTSTATUS inited; // eax
  int v18; // r9d
  unsigned int DeviceInterfaces; // eax
  int v20; // eax
  unsigned int v22; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v24; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v26[4]; // [rsp+78h] [rbp-31h] BYREF
  unsigned int v27; // [rsp+7Ch] [rbp-2Dh]
  _BYTE v28[16]; // [rsp+80h] [rbp-29h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp-19h]
  int v30; // [rsp+9Ch] [rbp-Dh]

  v24 = a6;
  v8 = 0LL;
  v9 = 0;
  *a6 = 0;
  P = 0LL;
  v22 = 0;
  v12 = PiCMCaptureInterfaceListInputData(a1, a2, a5, v26);
  if ( v12 < 0 )
    goto LABEL_17;
  v14 = v27;
  v15 = SourceString;
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    McTemplateK0jzt(HIWORD(v27) & 1, v10, v13, (__int64)v28, SourceString, BYTE2(v27) & 1);
  if ( a3 && a4 >= 0x14 )
  {
    v16 = 3221225485LL;
    if ( (v14 & 0xFFFE0000) != 0 )
      goto LABEL_22;
    if ( (_WORD)v14 )
      v12 = -1073741811;
    v16 = (unsigned int)v12;
    if ( v12 < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, v15);
    v16 = (unsigned int)inited;
    if ( inited < 0 )
      goto LABEL_22;
    LOBYTE(v18) = 1;
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (unsigned int)v28,
                         (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0),
                         (v14 & 0x10000) == 0,
                         v18,
                         (__int64)&P,
                         (__int64)&v22);
    v9 = v22;
    v16 = DeviceInterfaces;
    v8 = P;
    if ( a4 - 20 < v22 )
      v16 = 3221225507LL;
  }
  else
  {
    v16 = 3221225485LL;
  }
  if ( (int)v16 >= 0 )
  {
    v20 = PiCMReturnBufferResultData(v16, v9, 0LL, v8, v9, v30, a3, a4, v24);
    goto LABEL_15;
  }
LABEL_22:
  v20 = PiCMReturnBufferResultData(v16, v9, 0LL, 0LL, 0, v30, a3, a4, v24);
LABEL_15:
  v12 = v20;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_17:
  if ( SourceString )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString);
  if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x2000000) != 0 )
    McTemplateK0q(v11, &KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v13, v12);
  return (unsigned int)v12;
}
