/*
 * XREFs of ?GetCalibratedRegion@GazeHidParser@@QEAAJPEADKPEAUtagRECT@@@Z @ 0x1800AEED8
 * Callers:
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x180075F54 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800AEAD4 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

__int64 __fastcall GazeHidParser::GetCalibratedRegion(GazeHidParser *this, char *a2, ULONG a3, struct tagRECT *a4)
{
  LONG v6; // eax
  LONG LogicalMax; // eax
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 *v11; // rax
  int v12; // r8d
  __int64 *v13; // r9
  USHORT v14; // r14
  NTSTATUS SpecificValueCaps; // edi
  __int64 v16; // rdx
  USHORT ValueCapsLength; // [rsp+40h] [rbp-39h] BYREF
  __int64 v18; // [rsp+48h] [rbp-31h] BYREF
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+50h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v18 = 0LL;
  if ( a2 && (int)GazeHidParser::GetPropertyValue((__int64)this, 4, a2, a3, HidP_Feature, (PCHAR)&v18, 8u) >= 0 )
  {
    v6 = v18;
    a4->left = 0;
    a4->top = 0;
    a4->right = v6;
    LogicalMax = HIDWORD(v18);
LABEL_4:
    a4->bottom = LogicalMax;
    return 0LL;
  }
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v9 = (__int64 *)*((_QWORD *)this + 9);
  ValueCapsLength = 1;
  v10 = v9;
  v11 = (__int64 *)v9[1];
  if ( *((_BYTE *)v11 + 25) )
    goto LABEL_20;
  do
  {
    v12 = *((_DWORD *)v11 + 7);
    v13 = v11;
    if ( v12 >= 6 )
      v11 = (__int64 *)*v11;
    else
      v11 = (__int64 *)v11[2];
    if ( v12 >= 6 )
      v10 = v13;
  }
  while ( !*((_BYTE *)v11 + 25) );
  if ( v10 == v9 || *((int *)v10 + 7) > 6 )
  {
LABEL_20:
    std::_Xout_of_range("invalid map<K, T> key");
    JUMPOUT(0x1800AF087LL);
  }
  v14 = *((_WORD *)v10 + 16);
  SpecificValueCaps = HidP_GetSpecificValueCaps(
                        HidP_Input,
                        0x12u,
                        v14,
                        0x21u,
                        &ValueCaps,
                        &ValueCapsLength,
                        *((PHIDP_PREPARSED_DATA *)this + 8));
  if ( SpecificValueCaps >= 0 )
  {
    a4->left = ValueCaps.LogicalMin;
    a4->right = ValueCaps.LogicalMax;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Input,
                          0x12u,
                          v14,
                          0x22u,
                          &ValueCaps,
                          &ValueCapsLength,
                          *((PHIDP_PREPARSED_DATA *)this + 8));
    if ( SpecificValueCaps >= 0 )
    {
      a4->top = ValueCaps.LogicalMin;
      LogicalMax = ValueCaps.LogicalMax;
      goto LABEL_4;
    }
    v16 = 534LL;
  }
  else
  {
    v16 = 522LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
    (const char *)(unsigned int)SpecificValueCaps);
  return (unsigned int)SpecificValueCaps;
}
