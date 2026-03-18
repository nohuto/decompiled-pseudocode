/*
 * XREFs of PiCMGetObjectProperty @ 0x140482E3C
 * Callers:
 *     PiCMHandleIoctl @ 0x14048A380 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PiCMCapturePropertyInputData @ 0x140482B6C (PiCMCapturePropertyInputData.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     PiCMReleasePropertyInputData @ 0x14048A7E8 (PiCMReleasePropertyInputData.c)
 *     PiCMReturnBufferResultData @ 0x14048A83C (PiCMReturnBufferResultData.c)
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
  int v11; // r12d
  int v12; // edi
  unsigned int v13; // r14d
  int ObjectProperty; // eax
  int v15; // eax
  unsigned int v17; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v18; // [rsp+64h] [rbp-65h] BYREF
  _DWORD *v19; // [rsp+68h] [rbp-61h]
  char v20[4]; // [rsp+70h] [rbp-59h] BYREF
  int v21; // [rsp+74h] [rbp-55h]
  int v22; // [rsp+78h] [rbp-51h]
  __int64 v23; // [rsp+80h] [rbp-49h]
  _BYTE v24[20]; // [rsp+8Ch] [rbp-3Dh] BYREF
  int v25; // [rsp+A0h] [rbp-29h]
  __int64 v26; // [rsp+A8h] [rbp-21h]
  int v27; // [rsp+B0h] [rbp-19h]
  int v28; // [rsp+B4h] [rbp-15h]

  v6 = a6;
  v19 = a6;
  v17 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  v18 = 0;
  v10 = PiCMCapturePropertyInputData(a1, a2, a5, v20);
  if ( v10 < 0 )
    goto LABEL_23;
  v11 = v23;
  if ( v23 && !v21 && !v26 && !v27 && !v25 )
  {
    if ( !a3 || a4 < 0x14 )
    {
      v10 = -1073741811;
      goto LABEL_33;
    }
    if ( (v22 & 0x7FFF0000) == 0 )
    {
      if ( v22 < 0 )
      {
        v12 = (unsigned __int16)v22 < 0xBu ? (unsigned __int16)v22 : 0;
        goto LABEL_12;
      }
      switch ( (unsigned __int16)v22 )
      {
        case 1u:
          v12 = 1;
LABEL_12:
          if ( v12 )
            goto LABEL_13;
          goto LABEL_34;
        case 2u:
          v12 = 2;
          goto LABEL_13;
        case 3u:
          v12 = 4;
          goto LABEL_13;
        case 4u:
          v12 = 3;
          goto LABEL_13;
      }
    }
    v12 = 0;
LABEL_34:
    v10 = -1073741811;
LABEL_13:
    if ( v10 < 0 )
      goto LABEL_33;
    v13 = a4 - 20;
    if ( a4 != 20 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x34706E50u);
      if ( !PoolWithTag )
        v10 = -1073741670;
    }
    if ( v10 < 0 )
      goto LABEL_33;
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       v11,
                       v12,
                       0,
                       0LL,
                       (__int64)v24,
                       (__int64)&v17,
                       (__int64)PoolWithTag,
                       v13,
                       (__int64)&v18,
                       0);
    v6 = v19;
    v10 = ObjectProperty;
    goto LABEL_19;
  }
  v10 = -1073741811;
LABEL_19:
  if ( v10 >= 0 )
  {
    v15 = PiCMReturnBufferResultData((unsigned int)v10, v18, v17, PoolWithTag, v18, v28, a3, a4, v6);
    goto LABEL_21;
  }
LABEL_33:
  v15 = PiCMReturnBufferResultData((unsigned int)v10, v18, v17, 0LL, 0, v28, a3, a4, v19);
LABEL_21:
  v10 = v15;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_23:
  PiCMReleasePropertyInputData(v20);
  return (unsigned int)v10;
}
