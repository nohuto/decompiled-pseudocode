/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C011239C
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0110514 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0110618 (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMAddToActiveDevices @ 0x1C0106D50 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C0107340 (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C0110BF4 (rimExtractButtonPageButtonUsages.c)
 *     RIMCmActivateButtonContact @ 0x1C011547C (RIMCmActivateButtonContact.c)
 *     RIMCmGetButtonContact @ 0x1C0115794 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C01157D8 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 */

__int64 __fastcall rimProcessPointerDeviceButtonContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // r14
  struct _HIDP_PREPARSED_DATA *v10; // rbx
  __int64 ButtonContact; // rax
  __int64 v12; // rbp
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  int v17; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 472);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL);
  ButtonContact = RIMCmGetButtonContact(v6);
  v17 = 0;
  v12 = ButtonContact;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x1Bu,
    (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
  if ( rimExtractButtonPageButtonUsages(v6, v10, a3, a4, &v17) >= 0 )
  {
    v13 = *(_DWORD *)(v12 + 32);
    if ( (v17 & 4) != 0 )
    {
      if ( (v13 & 2) == 0 )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 912) == 1 )
          RIMAddToActiveDevices(a1, v6);
      }
    }
    else if ( (v13 & 2) != 0 )
    {
      *(_DWORD *)(v12 + 2320) |= 4u;
    }
    if ( (*(_DWORD *)(v12 + 32) & 2) != 0
      && (!*(_DWORD *)(v12 + 8)
       || (*(_DWORD *)(v12 + 2620) & 2) != 0
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v12)) )
    {
      v14 = a5;
      *(_DWORD *)(v12 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(v12 + 2376) = v14;
      *(_DWORD *)(v12 + 2392) = RIMGetPointerInputType(v6);
      *(_DWORD *)(v12 + 2404) = v17;
      *(_DWORD *)(v12 + 2456) = *(_DWORD *)(v6 + 748);
      *(_QWORD *)(v12 + 2472) = *(_QWORD *)(v6 + 776);
      if ( (*(_DWORD *)(a2 + 184) & 0x1000) != 0 )
        v15 = *(_QWORD *)(a2 + 24);
      else
        v15 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v12 + 2320) |= 1u;
      *(_QWORD *)(v12 + 2408) = v15;
    }
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x13u,
           0x1Cu,
           (__int64)&WPP_4b64136d5a3a3091dec9dc3eda06ecad_Traceguids);
}
