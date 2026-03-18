/*
 * XREFs of InjectLegacyISMTouch @ 0x1C013007C
 * Callers:
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00E6840 (NtMITInjectLegacyISMTouchFrame.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0012E00 (HMValidateHandleNoSecure.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0123E5C (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C012FF0C (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C012FFF4 (ConvertPointCoordinates.c)
 */

__int64 __fastcall InjectLegacyISMTouch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rsi
  void *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  void *v13; // rdx
  CTouchProcessor *v14; // rcx
  struct tagRECT v16; // [rsp+30h] [rbp-78h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v18[24]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v19[24]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+10h] BYREF

  if ( TouchExtensibility::ghInjectionDevice )
  {
    LOBYTE(a2) = 19;
    if ( !HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, a2, a3, a4) )
      TouchExtensibility::ghInjectionDevice = 0LL;
    if ( TouchExtensibility::ghInjectionDevice )
      goto LABEL_6;
  }
  if ( (unsigned int)CreateInjectionDevice() )
  {
LABEL_6:
    v5 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x79737355u);
    v6 = Win32AllocPoolWithQuotaZInit(0x690uLL, 0x79737355u);
    v7 = (__int64)v6;
    if ( v5 )
    {
      if ( v6 && *(_DWORD *)a1 <= 0xAu )
      {
        v5[11] = v6;
        v8 = 0LL;
        v5[4] = TouchExtensibility::ghInjectionDevice;
        *((_DWORD *)v5 + 12) = 1;
        v9 = *(_QWORD *)(a1 + 8);
        *((_DWORD *)v5 + 7) = 0;
        v5[5] = v9;
        *((_DWORD *)v5 + 6) = *(_DWORD *)a1;
        if ( !*(_DWORD *)a1 )
        {
LABEL_14:
          PushW32ThreadLock(v5, v19, Win32FreePool);
          PushW32ThreadLock(v7, v18, Win32FreePool);
          CTouchProcessor::ProcessInjectedInput(v14, v13, (struct RIMCOMPLETEFRAME *)v5, 0, 0, 0);
          PopW32ThreadLock(v18);
          PopW32ThreadLock(v19);
          Win32FreePool((__int64)v5);
          Win32FreePool(v7);
          return 0LL;
        }
        while ( 1 )
        {
          v10 = 168LL * (unsigned int)v8;
          *(_OWORD *)(v7 + v10 + 16) = *(_OWORD *)(96 * v8 + a1 + 24);
          *(_OWORD *)(v7 + v10 + 32) = *(_OWORD *)(96 * v8 + a1 + 40);
          *(_OWORD *)(v7 + v10 + 48) = *(_OWORD *)(96 * v8 + a1 + 56);
          *(_OWORD *)(v7 + v10 + 64) = *(_OWORD *)(96 * v8 + a1 + 72);
          *(_OWORD *)(v7 + v10 + 80) = *(_OWORD *)(96 * v8 + a1 + 88);
          *(_OWORD *)(v7 + v10 + 96) = *(_OWORD *)(96 * v8 + a1 + 104);
          v11 = *(_QWORD *)(96 * v8 + a1 + 72);
          v16 = TouchExtensibility::rcHimetricRect;
          v17 = TouchExtensibility::rcLogicalRect;
          if ( !(unsigned int)ConvertPointCoordinates(v11, &v17.left, &v16.left, &v20) )
            break;
          v12 = v20;
          *(_QWORD *)(v7 + v10 + 56) = v20;
          *(_QWORD *)(v7 + v10 + 72) = v12;
          *(_QWORD *)(v7 + v10 + 48) = v11;
          *(_DWORD *)(v7 + v10 + 80) = *(_DWORD *)(a1 + 4);
          *(_QWORD *)(v7 + v10 + 96) = *(_QWORD *)(a1 + 8);
          LOWORD(v12) = *(_WORD *)(96 * v8 + a1 + 28);
          *(_DWORD *)(v7 + v10 + 20) = 0;
          *(_WORD *)(v7 + v10 + 8) = v12;
          if ( *(_DWORD *)(a1 + 16) )
            *(_DWORD *)(v7 + v10 + 160) = 1;
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)a1 )
            goto LABEL_14;
        }
      }
      Win32FreePool((__int64)v5);
    }
    if ( v7 )
      Win32FreePool(v7);
  }
  return 3221225473LL;
}
