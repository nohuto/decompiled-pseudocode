/*
 * XREFs of RIMFreePointerDevice @ 0x1C0009450
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x1C0008900 (RIMReleasePointerDeviceInfo.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     UserDeactivateMITInputProcessing @ 0x1C008BCC0 (UserDeactivateMITInputProcessing.c)
 *     RIMIDECreateHIDDesc @ 0x1C0109528 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMCmFreePointerDeviceContacts @ 0x1C0009650 (RIMCmFreePointerDeviceContacts.c)
 *     RIMRemoveFromActiveDevices @ 0x1C00096B0 (RIMRemoveFromActiveDevices.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rdi
  char v21; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v21);
  v4 = *(_QWORD **)(a1 + 560);
  while ( v4 != (_QWORD *)(a1 + 560) )
  {
    v5 = v4 - 186;
    v4 = (_QWORD *)*v4;
    if ( v5 == (_QWORD *)a2 )
    {
      v6 = v5 + 186;
      v7 = v5[186];
      v8 = (_QWORD *)v5[187];
      if ( *(_QWORD **)(v7 + 8) != v6 || (_QWORD *)*v8 != v6 )
        __fastfail(3u);
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      v6[1] = v6;
      *v6 = v6;
      break;
    }
  }
  v9 = *(_QWORD *)(a2 + 1592);
  if ( v9 )
  {
    Win32FreePool(v9);
    *(_QWORD *)(a2 + 1592) = 0LL;
  }
  v10 = *(_QWORD *)(a2 + 1504);
  if ( v10 )
  {
    Win32FreePool(v10);
    *(_QWORD *)(a2 + 1504) = 0LL;
  }
  v11 = *(_QWORD *)(a2 + 320);
  if ( v11 )
  {
    if ( (int)IsFreePointerDeviceCalDataSupported() >= 0 )
      FreePointerDeviceCalData(v11);
    v20 = *(_QWORD *)(a2 + 320);
    if ( (int)IsFreePointerDeviceCalibrationInfoSupported() >= 0 )
      FreePointerDeviceCalibrationInfo(v20);
    *(_QWORD *)(a2 + 320) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2);
  v12 = *(_QWORD *)(a2 + 688);
  if ( v12 )
  {
    v17 = *(_QWORD *)(v12 + 24);
    if ( v17 )
    {
      Win32FreePool(v17);
      *(_QWORD *)(*(_QWORD *)(a2 + 688) + 24LL) = 0LL;
    }
    v18 = *(_QWORD *)(*(_QWORD *)(a2 + 688) + 16LL);
    if ( v18 )
    {
      Win32FreePool(v18);
      *(_QWORD *)(*(_QWORD *)(a2 + 688) + 16LL) = 0LL;
    }
    Win32FreePool(*(_QWORD *)(a2 + 688));
    *(_QWORD *)(a2 + 688) = 0LL;
  }
  v13 = *(_QWORD *)(a2 + 304);
  if ( v13 )
  {
    Win32FreePool(v13);
    *(_QWORD *)(a2 + 304) = 0LL;
  }
  v14 = *(_DWORD *)(a2 + 260);
  if ( __CFSHR__(v14, 6) )
    goto LABEL_38;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 6) > 1 )
  {
    if ( !__CFSHR__(*(_DWORD *)(a2 + 260), 6) )
      goto LABEL_17;
LABEL_38:
    if ( (v14 & 0x8000) != 0 )
      goto LABEL_17;
  }
  v19 = *(_QWORD *)(a2 + 288);
  if ( v19 )
  {
    Win32FreePool(*(_QWORD *)(v19 + 40));
    Win32FreePool(v19);
    *(_QWORD *)(a2 + 288) = 0LL;
  }
LABEL_17:
  v15 = *(_QWORD *)(a2 + 1392);
  if ( v15 )
  {
    Win32FreePool(v15);
    *(_QWORD *)(a2 + 1392) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 260) & 0x1000) != 0 )
    *(_DWORD *)(a1 + 660) -= *(_DWORD *)(a2 + 696);
  if ( *(_QWORD *)(a2 + 1488) != a2 + 1488 )
    __int2c();
  return Win32FreePool(a2);
}
