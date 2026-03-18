/*
 * XREFs of SynthesizeMitTouchInput @ 0x1C01309D8
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1C00E03A0 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0124804 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C0130584 (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C013066C (ConvertPointCoordinates.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1)
{
  char v2; // r14
  void *v3; // rax
  _QWORD *v4; // rsi
  void *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned int *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int16 v15; // ax
  void *v16; // rdx
  CTouchProcessor *v17; // rcx
  struct tagRECT v19; // [rsp+30h] [rbp-78h] BYREF
  struct tagRECT v20; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v21[24]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v22[24]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 1;
  if ( *a1 - 1 > 9 )
    return 0;
  if ( !TouchExtensibility::ghInjectionDevice
    || ((v3 = (void *)HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19)) != 0LL
      ? (v3 = TouchExtensibility::ghInjectionDevice)
      : (TouchExtensibility::ghInjectionDevice = 0LL),
        !v3) )
  {
    if ( !(unsigned int)CreateInjectionDevice() )
      return 0;
  }
  v4 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x7A747355u);
  v5 = Win32AllocPoolWithQuotaZInit(168LL * *a1, 0x7A747355u);
  v6 = (__int64)v5;
  if ( v4 && v5 )
  {
    v4[11] = v5;
    v7 = 0LL;
    v4[4] = TouchExtensibility::ghInjectionDevice;
    *((_DWORD *)v4 + 12) = 1;
    v8 = *((_QWORD *)a1 + 12);
    *((_DWORD *)v4 + 7) = 0;
    v4[5] = v8;
    for ( *((_DWORD *)v4 + 6) = *a1; (unsigned int)v7 < *a1; *(_WORD *)(v6 + v9 + 8) = v15 )
    {
      v9 = 168LL * (unsigned int)v7;
      v10 = 18 * v7;
      v11 = &a1[36 * v7];
      v12 = (_OWORD *)(v6 + v9);
      v12[1] = *((_OWORD *)v11 + 1);
      v12[2] = *((_OWORD *)v11 + 2);
      v12[3] = *((_OWORD *)v11 + 3);
      v12[4] = *((_OWORD *)v11 + 4);
      v12[5] = *((_OWORD *)v11 + 5);
      v12[6] = *((_OWORD *)v11 + 6);
      v12[7] = *((_OWORD *)v11 + 7);
      v12[8] = *((_OWORD *)v11 + 8);
      v12[9] = *((_OWORD *)v11 + 9);
      v13 = *((_QWORD *)v11 + 8);
      *(_QWORD *)(v6 + v9 + 48) = v13;
      v14 = *((_QWORD *)v11 + 7);
      if ( !v14 )
      {
        v19 = TouchExtensibility::rcHimetricRect;
        v20 = TouchExtensibility::rcLogicalRect;
        if ( !(unsigned int)ConvertPointCoordinates(v13, &v20.left, &v19.left, &v23) )
          goto LABEL_16;
        v14 = v23;
        v2 = 1;
      }
      *(_QWORD *)(v6 + v9 + 72) = v14;
      v7 = (unsigned int)(v7 + 1);
      *(_QWORD *)(v6 + v9 + 56) = v14;
      *(_DWORD *)(v6 + v9 + 80) = a1[2 * v10 + 20];
      *(_QWORD *)(v6 + v9 + 96) = *(_QWORD *)&a1[2 * v10 + 24];
      v15 = a1[2 * v10 + 5];
      *(_DWORD *)(v6 + v9 + 20) = 0;
    }
    PushW32ThreadLock(v4, v22, Win32FreePool);
    PushW32ThreadLock(v6, v21, Win32FreePool);
    CTouchProcessor::ProcessInjectedInput(v17, v16, (struct RIMCOMPLETEFRAME *)v4, a1[1] != 0, a1[3], a1[2] != 0);
    PopW32ThreadLock(v21);
    PopW32ThreadLock(v22);
  }
  else
  {
LABEL_16:
    v2 = 0;
  }
  if ( v4 )
    Win32FreePool((__int64)v4);
  if ( v6 )
    Win32FreePool(v6);
  return v2;
}
