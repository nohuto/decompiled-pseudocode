/*
 * XREFs of PiCMRegisterDeviceInterface @ 0x1406A595C
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14004D524 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _CmValidateDeviceName @ 0x140483E80 (_CmValidateDeviceName.c)
 *     PiCMReturnBufferResultData @ 0x14048A83C (PiCMReturnBufferResultData.c)
 *     IopRegisterDeviceInterface @ 0x1404E3CE0 (IopRegisterDeviceInterface.c)
 *     PiAuDoesClientHaveAccess @ 0x1404E4EB0 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1406A3A40 (PiCMCaptureRegisterInterfaceInputData.c)
 */

__int64 __fastcall PiCMRegisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  unsigned int v8; // ebx
  void *v9; // rdi
  int v10; // esi
  __int64 v11; // rcx
  signed int v12; // r10d
  __int64 v13; // rsi
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  __int64 v18; // r11
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // [rsp+50h] [rbp-39h] BYREF
  char v22[4]; // [rsp+58h] [rbp-31h] BYREF
  int v23; // [rsp+5Ch] [rbp-2Dh]
  int v24[4]; // [rsp+60h] [rbp-29h] BYREF
  _WORD *v25; // [rsp+70h] [rbp-19h]
  void *v26; // [rsp+80h] [rbp-9h]
  unsigned int v27; // [rsp+88h] [rbp-1h]
  int v28; // [rsp+8Ch] [rbp+3h]

  v21 = 0LL;
  v8 = 0;
  *a6 = 0;
  v9 = 0LL;
  v10 = PiCMCaptureRegisterInterfaceInputData(a1, a2, a5, v22);
  if ( v10 < 0 )
    goto LABEL_16;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    v12 = -1073741790;
LABEL_13:
    v14 = PiCMReturnBufferResultData(v12, 2 * v8, 0, 0LL, 0, v28, a3, a4, a6);
    goto LABEL_14;
  }
  if ( !v25 || v23 )
  {
    v12 = -1073741811;
  }
  else
  {
    v13 = (__int64)v26;
    if ( v26 && v27 < 2 || !a3 || a4 < 0x14 )
    {
      v12 = -1073741811;
      goto LABEL_13;
    }
    if ( a4 - 20 < 2 )
    {
      v12 = -1073741811;
      goto LABEL_13;
    }
    v12 = CmValidateDeviceName(v11, v25);
    if ( v12 < 0 )
      goto LABEL_13;
    v19 = IopRegisterDeviceInterface(v18, v24, v13, 1, (PVOID *)&v21, 0LL);
    v9 = (void *)v21;
    v12 = v19;
    if ( v19 < 0 )
      goto LABEL_13;
    v20 = -1LL;
    do
      ++v20;
    while ( *(_WORD *)(v21 + 2 * v20) );
    v8 = v20 + 1;
    if ( 2 * (unsigned __int64)v8 > a4 - 20 )
    {
      v12 = -1073741789;
      goto LABEL_13;
    }
  }
  if ( v12 < 0 )
    goto LABEL_13;
  v14 = PiCMReturnBufferResultData(v12, 2 * v8, 0, v9, 2 * v8, v28, a3, a4, a6);
LABEL_14:
  v10 = v14;
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( v25 )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, v25);
  if ( v26 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, v26);
  return (unsigned int)v10;
}
