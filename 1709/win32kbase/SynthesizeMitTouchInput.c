/*
 * XREFs of SynthesizeMitTouchInput @ 0x1C01302D8
 * Callers:
 *     NtMITSynthesizeTouchInput @ 0x1C00E6E80 (NtMITSynthesizeTouchInput.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0123E5C (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C012FF0C (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C012FFF4 (ConvertPointCoordinates.c)
 */

char __fastcall SynthesizeMitTouchInput(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bp
  _QWORD *v6; // rsi
  void *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // r12
  unsigned int *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  void *v17; // rdx
  CTouchProcessor *v18; // rcx
  struct tagRECT v20; // [rsp+30h] [rbp-78h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v22[24]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v23[24]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+8h] BYREF

  v4 = 1;
  if ( *a1 - 1 > 9 )
    return 0;
  if ( !TouchExtensibility::ghInjectionDevice )
    goto LABEL_22;
  LOBYTE(a2) = 19;
  if ( !HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, a2, a3, a4) )
    TouchExtensibility::ghInjectionDevice = 0LL;
  if ( !TouchExtensibility::ghInjectionDevice )
  {
LABEL_22:
    if ( !(unsigned int)CreateInjectionDevice() )
      return 0;
  }
  v6 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x7A747355u);
  v7 = Win32AllocPoolWithQuotaZInit(168LL * *a1, 0x7A747355u);
  v8 = (__int64)v7;
  if ( !v6 || !v7 )
    goto LABEL_13;
  v6[11] = v7;
  v9 = 0LL;
  v6[4] = TouchExtensibility::ghInjectionDevice;
  *((_DWORD *)v6 + 12) = 1;
  v10 = *((_QWORD *)a1 + 12);
  *((_DWORD *)v6 + 7) = 0;
  v6[5] = v10;
  *((_DWORD *)v6 + 6) = *a1;
  if ( *a1 )
  {
    while ( 1 )
    {
      v11 = 168LL * (unsigned int)v9;
      v12 = 18 * v9;
      v13 = &a1[36 * v9];
      v14 = (_OWORD *)(v11 + v8);
      v14[1] = *((_OWORD *)v13 + 1);
      v14[2] = *((_OWORD *)v13 + 2);
      v14[3] = *((_OWORD *)v13 + 3);
      v14[4] = *((_OWORD *)v13 + 4);
      v14[5] = *((_OWORD *)v13 + 5);
      v14[6] = *((_OWORD *)v13 + 6);
      v14[7] = *((_OWORD *)v13 + 7);
      v14[8] = *((_OWORD *)v13 + 8);
      v14[9] = *((_OWORD *)v13 + 9);
      v15 = *((_QWORD *)v13 + 8);
      *(_QWORD *)(v11 + v8 + 48) = v15;
      v20 = TouchExtensibility::rcHimetricRect;
      v21 = TouchExtensibility::rcLogicalRect;
      if ( !(unsigned int)ConvertPointCoordinates(v15, &v21.left, &v20.left, &v24) )
        break;
      v16 = v24;
      v9 = (unsigned int)(v9 + 1);
      *(_QWORD *)(v11 + v8 + 56) = v24;
      *(_QWORD *)(v11 + v8 + 72) = v16;
      *(_DWORD *)(v11 + v8 + 80) = a1[2 * v12 + 20];
      *(_QWORD *)(v11 + v8 + 96) = *(_QWORD *)&a1[2 * v12 + 24];
      LOWORD(v16) = a1[2 * v12 + 5];
      *(_DWORD *)(v11 + v8 + 20) = 0;
      *(_WORD *)(v11 + v8 + 8) = v16;
      if ( (unsigned int)v9 >= *a1 )
        goto LABEL_12;
    }
LABEL_13:
    v4 = 0;
    goto LABEL_14;
  }
LABEL_12:
  PushW32ThreadLock(v6, v23, Win32FreePool);
  PushW32ThreadLock(v8, v22, Win32FreePool);
  CTouchProcessor::ProcessInjectedInput(v18, v17, (struct RIMCOMPLETEFRAME *)v6, a1[1] != 0, a1[3], a1[2] != 0);
  PopW32ThreadLock(v22);
  PopW32ThreadLock(v23);
LABEL_14:
  if ( v6 )
    Win32FreePool((__int64)v6);
  if ( v8 )
    Win32FreePool(v8);
  return v4;
}
