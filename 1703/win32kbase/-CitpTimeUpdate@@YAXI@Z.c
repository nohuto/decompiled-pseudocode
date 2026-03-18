/*
 * XREFs of ?CitpTimeUpdate@@YAXI@Z @ 0x1C00531CC
 * Callers:
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C0052820 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_I.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0052EAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C00852F0 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpStart@@YAJXZ @ 0x1C0086458 (-CitpStart@@YAJXZ.c)
 *     CitDisplayPowerChange @ 0x1C00996FC (CitDisplayPowerChange.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C01535C0 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0154F8C (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z @ 0x1C0087604 (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@IHPEAX@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C0153C14 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitpTimeUpdate(unsigned int a1)
{
  struct _CIT_IMPACT_CONTEXT *v2; // rbp
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // r14
  void *v5; // r9
  union _LARGE_INTEGER v6; // rbx
  __int64 v7; // r8
  LONGLONG v8; // rdi
  unsigned __int64 v9; // rax
  int v10; // r9d
  int v11; // r8d
  union _LARGE_INTEGER SystemTime; // [rsp+48h] [rbp+10h] BYREF
  union _LARGE_INTEGER LocalTime; // [rsp+50h] [rbp+18h] BYREF

  v2 = qword_1C018E8C8;
  if ( a1 - dword_1C018E8D0 < dword_1C018E8D4 )
  {
    dword_1C018E8D4 -= a1 - dword_1C018E8D0;
    goto LABEL_3;
  }
  v3 = qword_1C018E870;
  v4 = qword_1C018E878;
  SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
  v6 = LocalTime;
  v7 = *(_QWORD *)&qword_1C018E8E0;
  v8 = LocalTime.QuadPart - LocalTime.QuadPart % v3;
  if ( !v2 )
    goto LABEL_13;
  if ( v8 != *(_QWORD *)&qword_1C018E8E0 )
  {
    if ( v8 == *(_QWORD *)&qword_1C018E8E0 + qword_1C018E870 )
    {
      CitpContextFlush(v2, a1, qword_1C018E8E0, v5);
      CitpContextReinitialize(v2, a1);
      v7 = *(_QWORD *)&qword_1C018E8E0;
    }
LABEL_13:
    if ( v8 != v7 )
      *(_QWORD *)&qword_1C018E8E0 = v8;
  }
  v9 = (v6.QuadPart - v8) / v4;
  dword_1C018E914 = (unsigned int)v9 >> 3;
  if ( (unsigned int)v9 >> 3 >= *(_DWORD *)((char *)&qword_1C018E8BA + 2) )
    dword_1C018E914 = 0;
  v10 = -1;
  byte_1C018E918 = 1 << (v9 & 7);
  v11 = -1;
  if ( (v6.QuadPart - v8) / 0x2710uLL <= 0xFFFFFFFF )
    v11 = (v6.QuadPart - v8) / 0x2710uLL;
  dword_1C018E8D8 = a1 - v11;
  if ( (v4 - 1 - (v6.QuadPart + v4 - 1) % v4) / 0x2710 <= 0xFFFFFFFF )
    v10 = (v4 - 1 - (v6.QuadPart + v4 - 1) % v4) / 0x2710;
  dword_1C018E8D4 = v10;
LABEL_3:
  dword_1C018E8D0 = a1;
}
