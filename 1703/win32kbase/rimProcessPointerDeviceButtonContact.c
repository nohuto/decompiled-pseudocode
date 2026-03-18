/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C01138B4
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0111A34 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0111B38 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMAddToActiveDevices @ 0x1C0105BF0 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C0106658 (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C0112104 (rimExtractButtonPageButtonUsages.c)
 *     RIMCmActivateButtonContact @ 0x1C011690C (RIMCmActivateButtonContact.c)
 *     RIMCmGetButtonContact @ 0x1C0116C18 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0116C5C (RIMCmIsContactSuppressedByArbitrationOnly.c)
 */

__int64 __fastcall rimProcessPointerDeviceButtonContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v6; // r14
  struct _HIDP_PREPARSED_DATA *v10; // rbx
  __int64 ButtonContact; // rax
  __int64 v12; // rbp
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // eax
  __int64 v17; // rax
  int v19; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 472);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL);
  ButtonContact = RIMCmGetButtonContact(v6);
  v19 = 0;
  v12 = ButtonContact;
  LOBYTE(v13) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    v13,
    19,
    26,
    (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
  if ( rimExtractButtonPageButtonUsages(v6, v10, a3, a4, &v19) >= 0 )
  {
    v15 = *(_DWORD *)(v12 + 32);
    if ( (v19 & 4) != 0 )
    {
      if ( (v15 & 2) == 0 )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 1576) == 1 )
          RIMAddToActiveDevices(a1, v6);
      }
    }
    else if ( (v15 & 2) != 0 )
    {
      *(_DWORD *)(v12 + 2320) |= 4u;
    }
    if ( (*(_DWORD *)(v12 + 32) & 2) != 0
      && (!*(_DWORD *)(v12 + 8)
       || (*(_DWORD *)(v12 + 2620) & 2) != 0
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v12)) )
    {
      v16 = a5;
      *(_DWORD *)(v12 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(v12 + 2376) = v16;
      *(_DWORD *)(v12 + 2392) = RIMGetPointerInputType(v6);
      *(_DWORD *)(v12 + 2404) = v19;
      *(_DWORD *)(v12 + 2456) = *(_DWORD *)(v6 + 1412);
      *(_QWORD *)(v12 + 2472) = *(_QWORD *)(v6 + 1440);
      if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
        v17 = *(_QWORD *)(a2 + 24);
      else
        v17 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v12 + 2320) |= 1u;
      *(_QWORD *)(v12 + 2408) = v17;
    }
  }
  LOBYTE(v14) = 3;
  return WPP_RECORDER_SF_(
           WPP_GLOBAL_Control->DeviceExtension,
           v14,
           19,
           27,
           (__int64)&WPP_dfd4f4505ada31d2876bd05252fd7a48_Traceguids);
}
