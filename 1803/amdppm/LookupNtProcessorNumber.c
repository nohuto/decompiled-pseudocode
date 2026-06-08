/*
 * XREFs of LookupNtProcessorNumber @ 0x1C00028B8
 * Callers:
 *     GetLpIndex @ 0x1C001AF90 (GetLpIndex.c)
 *     GetNtProcessorNumber @ 0x1C00203E0 (GetNtProcessorNumber.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C0001470 (WPP_RECORDER_SF_DD.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LookupNtProcessorNumber(_DWORD *a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // ebp
  int ProcessorIdByNtNumber; // esi
  unsigned int v5; // ebx
  unsigned int v6; // ebp
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( ActiveProcessorCount )
  {
    while ( 1 )
    {
      ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v2, &v10);
      if ( ProcessorIdByNtNumber >= 0 && v10 == a1[12] )
        break;
      if ( ++v2 >= ActiveProcessorCount )
        goto LABEL_5;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C0011418,
      0LL);
    if ( (unsigned int)KeCheckProcessorAffinityEx(&unk_1C0011708, v2) )
    {
      ProcessorIdByNtNumber = -1073741811;
      v9 = v10;
      v8 = a1[13];
      WPP_RECORDER_SF_DD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x30u,
        (__int64)&WPP_14c59d34299f3db05cee826dbb435205_Traceguids,
        v8,
        v9);
    }
    else
    {
      a1[14] = v2;
      KeAddProcessorAffinityEx(&unk_1C0011708, v2);
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C0011418);
  }
  else
  {
LABEL_5:
    if ( (Globals & 0x200000000000LL) != 0 && (v5 = 0, (v6 = HalPrivateDispatchTable[141](0xFFFFFFFFLL)) != 0) )
    {
      while ( 1 )
      {
        ProcessorIdByNtNumber = ((__int64 (__fastcall *)(_QWORD, int *))HalPrivateDispatchTable[142])(v5, &v10);
        if ( ProcessorIdByNtNumber >= 0 && v10 == a1[12] )
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
