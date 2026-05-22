/*
 * XREFs of ?GetInputInfoForReport@GazeHidDevice@@QEAAJPEADKPEAPEAUInputInfo@@PEA_N@Z @ 0x180075D80
 * Callers:
 *     ?OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z @ 0x180074170 (-OnInputReport@GazeDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x180075F54 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z @ 0x1800AEAD4 (-GetPropertyValue@GazeHidParser@@QEAAJW4GazeProperty@@PEADKW4_HIDP_REPORT_TYPE@@PEAXK@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

__int64 __fastcall GazeHidDevice::GetInputInfoForReport(
        GazeHidDevice *this,
        char *a2,
        unsigned int a3,
        LARGE_INTEGER **a4,
        bool *a5)
{
  void **v5; // rax
  bool *v6; // r14
  __int64 v8; // r13
  LARGE_INTEGER *v11; // rbx
  void *v12; // rcx
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp+8h] BYREF

  v5 = (void **)*((_QWORD *)this + 28);
  v6 = a5;
  v8 = *((_QWORD *)this + 4);
  *a4 = 0LL;
  v11 = (LARGE_INTEGER *)*v5;
  v12 = *v5;
  *v6 = 0;
  memset_0(v12, 0, 0x60uLL);
  v11->HighPart = *((_DWORD *)this + 10);
  v11[3].LowPart = *((_DWORD *)this + 58);
  v11->LowPart = 0x4000;
  LODWORD(a5) = 0;
  if ( (int)GazeHidParser::GetPropertyValue((char *)this + 128, 2LL, a2, a3, 0, &a5, 4) >= 0 )
  {
    if ( (_DWORD)a5 )
    {
      updated = GazeHidDevice::TryUpdateDisplayMapping(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x72,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)updated);
    }
    *(_BYTE *)(v8 + 984) = (_BYTE)a5;
    *v6 = 1;
  }
  BYTE4(v11[7].QuadPart) = 0;
  if ( (int)GazeHidParser::GetPropertyValue((char *)this + 128, 6LL, a2, a3, 0, (char *)&v11[6].QuadPart + 4, 8) >= 0 )
    BYTE4(v11[7].QuadPart) = 1;
  LOBYTE(v11[10].LowPart) = 0;
  if ( (int)GazeHidParser::GetPropertyValue((char *)this + 128, 10LL, a2, a3, 0, &v11[9], 8) >= 0 )
    LOBYTE(v11[10].LowPart) = 1;
  if ( (int)GazeHidParser::GetPropertyValue((char *)this + 128, 5LL, a2, a3, 0, &v11[2], 8) < 0 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v11[2] = PerformanceCount;
  }
  v11[10].HighPart = *((unsigned __int16 *)this + 32);
  memcpy_0(&v11[11], a2, *((unsigned __int16 *)this + 32));
  *a4 = v11;
  return 0LL;
}
