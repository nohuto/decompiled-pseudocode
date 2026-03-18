/*
 * XREFs of ?TraceGlitch@CScheduleStatistics@@CAXIPEBVCFrameInfo@@AEB_K1@Z @ 0x1800BCA28
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180011750 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     McTemplateU0xxxtxxxxxxxxqN16 @ 0x18012FFD0 (McTemplateU0xxxtxxxxxxxxqN16.c)
 */

void __fastcall CScheduleStatistics::TraceGlitch(
        unsigned int a1,
        const struct CFrameInfo *a2,
        const unsigned __int64 *a3,
        const unsigned __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r14
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned int v17; // r8d
  char v18; // r13
  char *v19; // rcx
  int *v20; // rdx
  int v21; // eax
  _BYTE v22[4]; // [rsp+90h] [rbp-B8h] BYREF
  char v23; // [rsp+94h] [rbp-B4h] BYREF

  v4 = *a4;
  memset_0(v22, 0, 0x80uLL);
  v8 = *((_QWORD *)a2 + 36);
  v9 = *a3;
  v10 = *((_QWORD *)a2 + 33);
  v11 = *((_QWORD *)a2 + 160);
  v12 = 10 * *a3;
  v13 = (unsigned __int64)(1000000LL * (*((_QWORD *)a2 + 30) - *((_QWORD *)a2 + 29))) / g_qpcFrequency.QuadPart;
  v14 = (unsigned __int64)(1000000LL * (*((_QWORD *)a2 + 31) - *((_QWORD *)a2 + 30))) / g_qpcFrequency.QuadPart;
  v15 = 10000000 * (v8 - v10) / v12;
  v16 = 10000000 * (v8 - v11) / v12;
  v17 = 0;
  v18 = v16;
  if ( a1 )
  {
    v19 = &v23;
    v20 = (int *)((char *)a2 + 416);
    do
    {
      if ( v17 >= 0x10 )
        break;
      ++v17;
      *((_DWORD *)v19 - 1) = *(v20 - 63);
      v21 = *v20++;
      *(_DWORD *)v19 = v21;
      v19 += 8;
    }
    while ( v17 < a1 );
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0xxxtxxxxxxxxqN16(
      *((unsigned __int8 *)a2 + 1297),
      (unsigned int)v22,
      *(_QWORD *)a2,
      v13,
      v14,
      *((_BYTE *)a2 + 1297),
      v10,
      v8,
      v15,
      v11,
      *((_DWORD *)a2 + 41),
      v18,
      v9,
      v4,
      a1);
}
