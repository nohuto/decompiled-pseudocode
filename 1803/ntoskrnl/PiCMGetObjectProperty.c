/*
 * XREFs of PiCMGetObjectProperty @ 0x14050A040
 * Callers:
 *     PiCMHandleIoctl @ 0x14050A580 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PiCMReleasePropertyInputData @ 0x140509D2C (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140509D80 (PiCMCapturePropertyInputData.c)
 *     PiCMReturnBufferResultData @ 0x14050A2B4 (PiCMReturnBufferResultData.c)
 */

__int64 __fastcall PiCMGetObjectProperty(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdi
  PVOID PoolWithTag; // rsi
  int v10; // ebx
  __int64 v11; // r12
  unsigned int v12; // edi
  int v13; // ecx
  unsigned int v14; // r14d
  int ObjectProperty; // eax
  int v16; // eax
  unsigned int v18; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-65h] BYREF
  _DWORD *v20; // [rsp+68h] [rbp-61h]
  char v21[4]; // [rsp+70h] [rbp-59h] BYREF
  int v22; // [rsp+74h] [rbp-55h]
  int v23; // [rsp+78h] [rbp-51h]
  __int64 v24; // [rsp+80h] [rbp-49h]
  _BYTE v25[20]; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v26; // [rsp+A0h] [rbp-29h]
  __int64 v27; // [rsp+A8h] [rbp-21h]
  int v28; // [rsp+B0h] [rbp-19h]
  int v29; // [rsp+B4h] [rbp-15h]

  v6 = a6;
  v20 = a6;
  v18 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  v19 = 0;
  v10 = PiCMCapturePropertyInputData(a1, a2, a5, v21);
  if ( v10 < 0 )
    goto LABEL_29;
  v11 = v24;
  if ( v24 && !v22 && !v27 && !v28 && !v26 )
  {
    if ( !a3 || a4 < 0x14 )
    {
      v10 = -1073741811;
      goto LABEL_30;
    }
    v12 = 0;
    if ( v23 <= 6 )
    {
      switch ( v23 )
      {
        case 6:
          v12 = 6;
LABEL_19:
          if ( v10 < 0 )
            goto LABEL_30;
          v14 = a4 - 20;
          if ( a4 != 20 )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x34706E50u);
            if ( !PoolWithTag )
              v10 = -1073741670;
          }
          if ( v10 < 0 )
            goto LABEL_30;
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             v11,
                             v12,
                             0LL,
                             0LL,
                             (__int64)v25,
                             (__int64)&v18,
                             (__int64)PoolWithTag,
                             v14,
                             (__int64)&v19,
                             0);
          v6 = v20;
          v10 = ObjectProperty;
          goto LABEL_25;
        case 1:
          v12 = 1;
          goto LABEL_19;
        case 2:
          v12 = 2;
          goto LABEL_19;
        case 3:
          v12 = 4;
          goto LABEL_19;
        case 4:
          v12 = 3;
          goto LABEL_19;
        case 5:
          v12 = 5;
          goto LABEL_19;
      }
LABEL_17:
      if ( !v12 )
        v10 = -1073741811;
      goto LABEL_19;
    }
    switch ( v23 )
    {
      case 65537:
        v13 = 7;
        break;
      case 65538:
        v13 = 8;
        break;
      case 65539:
        v13 = 9;
        break;
      case 65540:
        v13 = 10;
        break;
      case 65541:
        v13 = 11;
        break;
      default:
        goto LABEL_17;
    }
    v12 = PiDrvDbCtx != 0 ? v13 : 0;
    goto LABEL_17;
  }
  v10 = -1073741811;
LABEL_25:
  if ( v10 >= 0 )
  {
    v16 = PiCMReturnBufferResultData((unsigned int)v10, v19, v18, PoolWithTag, v19, v29, a3, a4, v6);
    goto LABEL_27;
  }
LABEL_30:
  v16 = PiCMReturnBufferResultData((unsigned int)v10, v19, v18, 0LL, 0, v29, a3, a4, v20);
LABEL_27:
  v10 = v16;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_29:
  PiCMReleasePropertyInputData((__int64)v21);
  return (unsigned int)v10;
}
