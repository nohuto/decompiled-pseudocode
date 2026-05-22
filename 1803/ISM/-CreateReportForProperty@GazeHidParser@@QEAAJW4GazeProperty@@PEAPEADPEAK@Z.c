/*
 * XREFs of ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1800AE8F4
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x180075F54 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x180076180 (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18007635C (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1800AE8B0 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::CreateReportForProperty(__int64 a1, int a2, void **a3, _DWORD *a4)
{
  char v8; // si
  __int64 *v10; // rdx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // r9
  int v14; // r8d
  USHORT v15; // r8
  int v16; // ebx
  int v17; // ebx
  unsigned int v18; // ebx
  USAGE v19; // cx
  UCHAR *v20; // rax
  void *v21; // rcx
  USHORT ValueCapsLength; // [rsp+48h] [rbp-59h] BYREF
  void *Block[3]; // [rsp+50h] [rbp-51h] BYREF
  char v24; // [rsp+68h] [rbp-39h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+78h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  Block[1] = (void *)-2LL;
  Block[0] = 0LL;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v8 = 1;
  ValueCapsLength = 1;
  if ( !GazeHidParser::IsPropertySupported(a1, a2) )
    return 2147943568LL;
  v10 = *(__int64 **)(a1 + 72);
  v11 = (__int64 *)v10[1];
  v12 = v10;
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_29;
  do
  {
    v13 = v11;
    v14 = *((_DWORD *)v11 + 7);
    if ( v14 >= a2 )
      v11 = (__int64 *)*v11;
    else
      v11 = (__int64 *)v11[2];
    if ( v14 >= a2 )
      v12 = v13;
  }
  while ( !*((_BYTE *)v11 + 25) );
  if ( v12 == v10 || a2 < *((_DWORD *)v12 + 7) )
  {
LABEL_29:
    std::_Xout_of_range("invalid map<K, T> key");
    JUMPOUT(0x1800AEAD2LL);
  }
  v15 = *((_WORD *)v12 + 16);
  v16 = a2 - 1;
  if ( !v16 )
  {
    v19 = 1024;
LABEL_20:
    Block[2] = Block;
    v24 = 1;
    if ( HidP_GetSpecificValueCaps(
           HidP_Feature,
           0x12u,
           v15,
           v19,
           &ValueCaps,
           &ValueCapsLength,
           *(PHIDP_PREPARSED_DATA *)(a1 + 64)) == 1114112 )
    {
      v20 = (UCHAR *)operator new[](*(unsigned __int16 *)(a1 + 8));
      Block[0] = v20;
      if ( v20 )
      {
        *v20 = ValueCaps.ReportID;
        v21 = Block[0];
        *a3 = Block[0];
        *a4 = *(unsigned __int16 *)(a1 + 8);
        v18 = 0;
        v8 = 0;
LABEL_26:
        if ( v8 )
        {
          if ( v21 )
            operator delete(v21);
        }
        return v18;
      }
      v18 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
        (const char *)0x8007000ELL);
    }
    else
    {
      v18 = -2147023728;
    }
    v21 = Block[0];
    goto LABEL_26;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v19 = 769;
    goto LABEL_20;
  }
  if ( v17 == 1 )
  {
    v19 = 512;
    goto LABEL_20;
  }
  v18 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9A,
    (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
    (const char *)0x80070057LL);
  return v18;
}
