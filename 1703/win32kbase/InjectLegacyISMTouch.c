/*
 * XREFs of InjectLegacyISMTouch @ 0x1C01306F0
 * Callers:
 *     NtMITInjectLegacyISMTouchFrame @ 0x1C00DFA90 (NtMITInjectLegacyISMTouchFrame.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0124804 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C0130584 (-CreateInjectionDevice@@YAHXZ.c)
 *     ConvertPointCoordinates @ 0x1C013066C (ConvertPointCoordinates.c)
 */

__int64 __fastcall InjectLegacyISMTouch(unsigned __int64 a1)
{
  _QWORD *v3; // r14
  void *v4; // rax
  __int64 v5; // rsi
  int v6; // r12d
  __int64 i; // rax
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rax
  void *v11; // rdx
  CTouchProcessor *v12; // rcx
  int v13; // [rsp+34h] [rbp-84h]
  struct tagRECT v14; // [rsp+40h] [rbp-78h] BYREF
  struct tagRECT v15; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v16[24]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v17[64]; // [rsp+78h] [rbp-40h] BYREF
  __int64 v18; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v19; // [rsp+D0h] [rbp+18h]
  _QWORD *v20; // [rsp+D8h] [rbp+20h]

  if ( !TouchExtensibility::ghInjectionDevice )
    goto LABEL_34;
  if ( !HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19) )
    TouchExtensibility::ghInjectionDevice = 0LL;
  if ( !TouchExtensibility::ghInjectionDevice )
  {
LABEL_34:
    if ( !(unsigned int)CreateInjectionDevice() )
      return 3221225473LL;
  }
  v3 = Win32AllocPoolWithQuotaZInit(0x60uLL, 0x79737355u);
  v20 = v3;
  v4 = Win32AllocPoolWithQuotaZInit(0x690uLL, 0x79737355u);
  v5 = (__int64)v4;
  v6 = 0;
  if ( v3 && v4 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a1 + 984 > (unsigned __int64)W32UserProbeAddress || a1 + 984 < a1 )
      *(_BYTE *)W32UserProbeAddress = 0;
    if ( *(_DWORD *)a1 <= 0xAu )
    {
      v6 = 1;
      v3[11] = v4;
      v3[4] = TouchExtensibility::ghInjectionDevice;
      *((_DWORD *)v3 + 12) = 1;
      v3[5] = *(_QWORD *)(a1 + 8);
      *((_DWORD *)v3 + 7) = 0;
      *((_DWORD *)v3 + 6) = *(_DWORD *)a1;
      for ( i = 0LL; ; i = (unsigned int)(v13 + 1) )
      {
        v13 = i;
        if ( (unsigned int)i >= *(_DWORD *)a1 )
          break;
        v19 = 96 * i;
        v8 = 168 * i;
        *(_OWORD *)(v5 + v8 + 16) = *(_OWORD *)(96 * i + a1 + 24);
        *(_OWORD *)(v5 + v8 + 32) = *(_OWORD *)(96 * i + a1 + 40);
        *(_OWORD *)(v5 + v8 + 48) = *(_OWORD *)(96 * i + a1 + 56);
        *(_OWORD *)(v5 + v8 + 64) = *(_OWORD *)(96 * i + a1 + 72);
        *(_OWORD *)(v5 + v8 + 80) = *(_OWORD *)(96 * i + a1 + 88);
        *(_OWORD *)(v5 + v8 + 96) = *(_OWORD *)(96 * i + a1 + 104);
        v9 = *(_QWORD *)(96 * i + a1 + 72);
        v14 = TouchExtensibility::rcHimetricRect;
        v15 = TouchExtensibility::rcLogicalRect;
        if ( !(unsigned int)ConvertPointCoordinates(v9, &v15.left, &v14.left, &v18) )
        {
          v6 = 0;
          break;
        }
        *(_QWORD *)(v5 + v8 + 48) = v9;
        v10 = v18;
        *(_QWORD *)(v5 + v8 + 56) = v18;
        *(_QWORD *)(v5 + v8 + 72) = v10;
        *(_DWORD *)(v5 + v8 + 80) = *(_DWORD *)(a1 + 4);
        *(_QWORD *)(v5 + v8 + 96) = *(_QWORD *)(a1 + 8);
        *(_WORD *)(v5 + v8 + 8) = *(_WORD *)(v19 + a1 + 28);
        *(_DWORD *)(v5 + v8 + 20) = 0;
        if ( *(_DWORD *)(a1 + 16) )
          *(_DWORD *)(v5 + v8 + 160) = 1;
      }
    }
  }
  if ( !v6 )
  {
    if ( v3 )
      Win32FreePool((__int64)v3);
    if ( v5 )
      Win32FreePool(v5);
    return 3221225473LL;
  }
  PushW32ThreadLock(v3, v17, Win32FreePool);
  PushW32ThreadLock(v5, v16, Win32FreePool);
  CTouchProcessor::ProcessInjectedInput(v12, v11, (struct RIMCOMPLETEFRAME *)v3, 0, 0, 0);
  PopW32ThreadLock(v16);
  PopW32ThreadLock(v17);
  if ( v3 )
    Win32FreePool((__int64)v3);
  if ( v5 )
    Win32FreePool(v5);
  return 0LL;
}
