/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800D2E30
 * Callers:
 *     sub_1800D3490 @ 0x1800D3490 (sub_1800D3490.c)
 * Callees:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 *     sub_180077F84 @ 0x180077F84 (sub_180077F84.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x18009B500 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009B520 (ZwTerminateThread.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800D5780 @ 0x1800D5780 (sub_1800D5780.c)
 *     sub_1800F6720 @ 0x1800F6720 (sub_1800F6720.c)
 */

__int64 __fastcall RtlSetProcessDebugInformation(HANDLE a1, int a2, __int64 a3)
{
  int InformationThread; // ebx
  char v5; // si
  __int64 result; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-78h]
  int v10; // [rsp+60h] [rbp-48h]
  __int64 v11; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v12; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+20h]

  v13 = -600000000LL;
  InformationThread = 0;
  *(_DWORD *)(a3 + 64) = a2;
  v5 = a2;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 )
  {
    if ( ((a2 & 1) == 0 || (InformationThread = sub_1800D5780(a3)) == 0) && (v5 & 2) != 0 )
    {
      v8 = *(_QWORD *)(a3 + 104);
      if ( v8 )
      {
        if ( !*(_DWORD *)v8 && (*(_DWORD *)(v8 + 4) < 0x18u || *(_QWORD *)(v8 + 8) || *(_QWORD *)(v8 + 16)) )
          return (unsigned int)-1073741811;
        else
          return (unsigned int)sub_1800F6720();
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  else
  {
    v11 = 0LL;
    result = sub_180077F84((_QWORD *)a3, (__int64)a1, 0, &v11);
    if ( (int)result < 0 )
      return result;
    v7 = *(_QWORD *)(a3 + 72);
    if ( v7 > 0xD0 )
      memmove((void *)(*(_QWORD *)(a3 + 88) + a3 + 208), (const void *)(a3 + 208), v7 - 208);
    InformationThread = sub_1800060E8(
                          v11,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v9,
                          (__int64)sub_1800D3490,
                          *(_QWORD *)(a3 + 16),
                          &v12,
                          0LL);
    if ( InformationThread >= 0 )
    {
      InformationThread = ZwResumeThread();
      if ( InformationThread < 0 || (InformationThread = ZwWaitForSingleObject(), InformationThread < 0) )
      {
        ZwTerminateThread();
      }
      else
      {
        InformationThread = ZwQueryInformationThread();
        if ( InformationThread >= 0 )
          InformationThread = v10;
      }
      ZwClose();
    }
    ZwClose();
  }
  return (unsigned int)InformationThread;
}
