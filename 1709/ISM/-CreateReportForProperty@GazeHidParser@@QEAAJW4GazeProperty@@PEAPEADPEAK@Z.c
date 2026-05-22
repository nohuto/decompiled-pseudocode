/*
 * XREFs of ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800C82A0
 * Callers:
 *     ?SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z @ 0x18009BD84 (-SetTrackingEnabled@GazeDeviceCollection@@QEAAJKH@Z.c)
 *     ?UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z @ 0x18009BFD0 (-UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::CreateReportForProperty(__int64 a1, int a2, void **a3, _DWORD *a4)
{
  char v8; // di
  __int64 *v9; // rax
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  USHORT v12; // r8
  int v13; // ebx
  int v14; // ebx
  unsigned int v15; // ebx
  USAGE v17; // cx
  UCHAR *v18; // rax
  void *v19; // rcx
  USHORT ValueCapsLength; // [rsp+48h] [rbp-59h] BYREF
  void *Block[3]; // [rsp+50h] [rbp-51h] BYREF
  char v22; // [rsp+68h] [rbp-39h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+78h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  Block[1] = (void *)-2LL;
  Block[0] = 0LL;
  memset(&ValueCaps, 0, sizeof(ValueCaps));
  v8 = 1;
  ValueCapsLength = 1;
  v9 = *(__int64 **)(a1 + 72);
  v10 = (__int64 *)v9[1];
  v11 = v9;
  while ( !*((_BYTE *)v10 + 25) )
  {
    if ( *((_DWORD *)v10 + 7) >= a2 )
    {
      v11 = v10;
      v10 = (__int64 *)*v10;
    }
    else
    {
      v10 = (__int64 *)v10[2];
    }
  }
  if ( v11 == v9 || a2 < *((_DWORD *)v11 + 7) )
  {
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
  }
  v12 = *((_WORD *)v11 + 16);
  v13 = a2 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        v15 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xAF,
          (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
          (const char *)0x80070057LL);
        return v15;
      }
      v17 = 512;
    }
    else
    {
      v17 = 769;
    }
  }
  else
  {
    v17 = 1024;
  }
  Block[2] = Block;
  v22 = 1;
  if ( HidP_GetSpecificValueCaps(
         HidP_Feature,
         0x12u,
         v12,
         v17,
         &ValueCaps,
         &ValueCapsLength,
         *(PHIDP_PREPARSED_DATA *)(a1 + 64)) == 1114112 )
  {
    v18 = (UCHAR *)operator new[](*(unsigned __int16 *)(a1 + 8));
    Block[0] = v18;
    if ( v18 )
    {
      *v18 = ValueCaps.ReportID;
      v19 = Block[0];
      *a3 = Block[0];
      *a4 = *(unsigned __int16 *)(a1 + 8);
      v8 = 0;
      v15 = 0;
      goto LABEL_22;
    }
    v15 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
      (const char *)0x8007000ELL);
  }
  else
  {
    v15 = -2147023728;
  }
  v19 = Block[0];
LABEL_22:
  if ( v8 && v19 )
    operator delete(v19);
  return v15;
}
