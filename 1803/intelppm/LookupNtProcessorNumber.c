/*
 * XREFs of LookupNtProcessorNumber @ 0x1C0002514
 * Callers:
 *     GetNtProcessorNumber @ 0x1C00205E0 (GetNtProcessorNumber.c)
 *     GetLpIndex @ 0x1C002BEC0 (GetLpIndex.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004F10 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000866C (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall LookupNtProcessorNumber(_DWORD *a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // ebp
  int ProcessorIdByNtNumber; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  int v8; // edx
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v2, &v9);
      if ( ProcessorIdByNtNumber >= 0 && v9 == a1[12] )
        break;
      if ( ++v2 >= ActiveProcessorCount )
        goto LABEL_5;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001A5D8,
      0LL);
    if ( (unsigned int)KeCheckProcessorAffinityEx(&unk_1C001A8C8, v2) )
    {
      ProcessorIdByNtNumber = -1073741811;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v8,
        1,
        48,
        (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids,
        a1[13],
        v9);
    }
    else
    {
      a1[14] = v2;
      KeAddProcessorAffinityEx(&unk_1C001A8C8, v2);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001A5D8);
  }
  else
  {
LABEL_5:
    if ( (Globals & 0x200000000000LL) != 0 && (v5 = 0, (v6 = HalPrivateDispatchTable[141](0xFFFFFFFFLL)) != 0) )
    {
      while ( 1 )
      {
        ProcessorIdByNtNumber = ((__int64 (__fastcall *)(_QWORD, int *))HalPrivateDispatchTable[142])(v5, &v9);
        if ( ProcessorIdByNtNumber >= 0 && v9 == a1[12] )
          break;
        if ( ++v5 >= v6 )
          return (unsigned int)-1073741275;
      }
      a1[14] = -1;
      a1[18] = v5;
    }
    else
    {
      return (unsigned int)-1073741275;
    }
  }
  return (unsigned int)ProcessorIdByNtNumber;
}
