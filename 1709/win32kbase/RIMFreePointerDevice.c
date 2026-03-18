/*
 * XREFs of RIMFreePointerDevice @ 0x1C000B580
 * Callers:
 *     RIMReleasePointerDeviceInfo @ 0x1C000A6B4 (RIMReleasePointerDeviceInfo.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C000F028 (RIMCreatePointerDeviceInfo.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0091E24 (UserDeactivateMITInputProcessing.c)
 *     RIMIDECreateHIDDesc @ 0x1C0108550 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     RIMCmFreePointerDeviceContacts @ 0x1C000B740 (RIMCmFreePointerDeviceContacts.c)
 *     RIMRemoveFromActiveDevices @ 0x1C000B7A0 (RIMRemoveFromActiveDevices.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 */

__int64 __fastcall RIMFreePointerDevice(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // r8
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
  __int64 v20; // rdi
  char v21; // [rsp+30h] [rbp+8h] BYREF

  RIMRemoveFromActiveDevices(a1, a2, 1LL, &v21);
  v5 = (_QWORD *)(a1 + 560);
  v6 = *(_QWORD **)(a1 + 560);
  while ( v6 != v5 )
  {
    v4 = v6 - 103;
    v6 = (_QWORD *)*v6;
    if ( v4 == (_QWORD *)a2 )
    {
      v7 = v4 + 103;
      v4 = (_QWORD *)v4[103];
      if ( (_QWORD *)v4[1] != v7 || (v19 = (_QWORD *)v7[1], (_QWORD *)*v19 != v7) )
        __fastfail(3u);
      *v19 = v4;
      v4[1] = v19;
      v7[1] = v7;
      *v7 = v7;
      break;
    }
  }
  v8 = *(_QWORD *)(a2 + 928);
  if ( v8 )
  {
    Win32FreePool(v8, v4, v5);
    *(_QWORD *)(a2 + 928) = 0LL;
  }
  v9 = *(_QWORD *)(a2 + 840);
  if ( v9 )
  {
    Win32FreePool(v9, v4, v5);
    *(_QWORD *)(a2 + 840) = 0LL;
  }
  v10 = *(_QWORD *)(a2 + 304);
  if ( v10 )
  {
    if ( (int)IsFreePointerDeviceCalDataSupported() >= 0 )
      FreePointerDeviceCalData(v10);
    v20 = *(_QWORD *)(a2 + 304);
    if ( (int)IsFreePointerDeviceCalibrationInfoSupported() >= 0 )
      FreePointerDeviceCalibrationInfo(v20);
    *(_QWORD *)(a2 + 304) = 0LL;
  }
  RIMCmFreePointerDeviceContacts(a2);
  v13 = *(_QWORD *)(a2 + 672);
  if ( v13 )
  {
    v17 = *(_QWORD *)(v13 + 24);
    if ( v17 )
    {
      Win32FreePool(v17, v11, v12);
      *(_QWORD *)(*(_QWORD *)(a2 + 672) + 24LL) = 0LL;
    }
    v18 = *(_QWORD *)(*(_QWORD *)(a2 + 672) + 16LL);
    if ( v18 )
    {
      Win32FreePool(v18, v11, v12);
      *(_QWORD *)(*(_QWORD *)(a2 + 672) + 16LL) = 0LL;
    }
    Win32FreePool(*(_QWORD *)(a2 + 672), v11, v12);
    *(_QWORD *)(a2 + 672) = 0LL;
  }
  v14 = *(_QWORD *)(a2 + 288);
  if ( v14 )
  {
    Win32FreePool(v14, v11, v12);
    *(_QWORD *)(a2 + 288) = 0LL;
  }
  v15 = *(_QWORD *)(a2 + 728);
  if ( v15 )
  {
    Win32FreePool(v15, v11, v12);
    *(_QWORD *)(a2 + 728) = 0LL;
  }
  if ( (*(_DWORD *)(a2 + 276) & 0x1000) != 0 )
    *(_DWORD *)(a1 + 660) -= *(_DWORD *)(a2 + 680);
  if ( *(_QWORD *)(a2 + 824) != a2 + 824 )
    __int2c();
  return Win32FreePool(a2, v11, v12);
}
