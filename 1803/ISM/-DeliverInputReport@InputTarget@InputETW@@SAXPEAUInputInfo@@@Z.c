/*
 * XREFs of ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x180017EB8
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800187C0 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180082F20 (-DeliverInput@InputDestTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@InputETW@@KAPEAV1@XZ @ 0x180005B60 (-Instance@InputETW@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 */

void __fastcall InputETW::InputTarget::DeliverInputReport(struct InputInfo *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  LARGE_INTEGER v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rbx
  LARGE_INTEGER v8; // rdi
  LARGE_INTEGER PerformanceCount; // [rsp+38h] [rbp-39h] BYREF
  LARGE_INTEGER Frequency; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-19h] BYREF
  LARGE_INTEGER *p_PerformanceCount; // [rsp+78h] [rbp+7h]
  int v14; // [rsp+80h] [rbp+Fh]
  int v15; // [rsp+84h] [rbp+13h]
  LARGE_INTEGER *p_Frequency; // [rsp+88h] [rbp+17h]
  int v17; // [rsp+90h] [rbp+1Fh]
  int v18; // [rsp+94h] [rbp+23h]
  char *v19; // [rsp+98h] [rbp+27h]
  int v20; // [rsp+A0h] [rbp+2Fh]
  int v21; // [rsp+A4h] [rbp+33h]
  char *v22; // [rsp+A8h] [rbp+37h]
  int v23; // [rsp+B0h] [rbp+3Fh]
  int v24; // [rsp+B4h] [rbp+43h]

  v2 = *((_QWORD *)InputETW::Instance() + 1);
  if ( *(_DWORD *)v2 > 5u && (*(_BYTE *)(v2 + 16) & 1) != 0 && (*(_QWORD *)(v2 + 24) & 1LL) == *(_QWORD *)(v2 + 24) )
  {
    v3 = *((_QWORD *)InputETW::Instance() + 1);
    if ( *(_DWORD *)v3 > 5u && (*(_BYTE *)(v3 + 16) & 1) != 0 && (*(_QWORD *)(v3 + 24) & 1LL) == *(_QWORD *)(v3 + 24) )
    {
      v4.QuadPart = *((unsigned int *)a1 + 1);
      v15 = 0;
      v18 = 0;
      v21 = 0;
      v24 = 0;
      PerformanceCount = v4;
      p_PerformanceCount = &PerformanceCount;
      Frequency.QuadPart = *(int *)a1;
      p_Frequency = &Frequency;
      v19 = (char *)a1 + 8;
      v22 = (char *)a1 + 16;
      v14 = 8;
      v17 = 8;
      v20 = 4;
      v23 = 8;
      TlgWrite((TraceLoggingHProvider)v3, &unk_18010D0A5, 0LL, 0LL, 6u, &pData);
    }
    v5 = *((_QWORD *)InputETW::Instance() + 1);
    if ( *(_DWORD *)v5 > 5u && (*(_BYTE *)(v5 + 16) & 2) != 0 && (*(_QWORD *)(v5 + 24) & 2LL) == *(_QWORD *)(v5 + 24) )
    {
      v6 = *((_QWORD *)InputETW::Instance() + 1);
      if ( *(_DWORD *)v6 > 5u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v7 = *((_QWORD *)a1 + 2);
        QueryPerformanceFrequency(&Frequency);
        v8 = Frequency;
        QueryPerformanceCounter(&PerformanceCount);
        v14 = 8;
        v15 = 0;
        v11 = (unsigned __int64)(1000000 * (PerformanceCount.QuadPart - v7)) / v8.QuadPart;
        p_PerformanceCount = (LARGE_INTEGER *)&v11;
        TlgWrite((TraceLoggingHProvider)v6, &unk_18010D0F8, 0LL, 0LL, 3u, &pData);
      }
    }
  }
}
