/*
 * XREFs of PopBatteryInitialize @ 0x1406FE400
 * Callers:
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x140125800 (IoSynchronousCallDriver.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopPrepareIoctl @ 0x1407071AC (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryInitialize(__int64 a1)
{
  __int64 v2; // rcx
  NTSTATUS result; // eax
  int v4; // eax
  const char *v5; // rcx
  __int128 v6; // xmm1
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // [rsp+20h] [rbp-98h]
  __int64 v10; // [rsp+28h] [rbp-90h]
  int v11; // [rsp+40h] [rbp-78h]
  int v12; // [rsp+48h] [rbp-70h]
  int v13; // [rsp+50h] [rbp-68h]
  int v14; // [rsp+58h] [rbp-60h]
  int v15; // [rsp+60h] [rbp-58h]
  int v16; // [rsp+68h] [rbp-50h]
  _BYTE v17[36]; // [rsp+70h] [rbp-48h] BYREF
  int v18; // [rsp+98h] [rbp-20h] BYREF
  char v19; // [rsp+9Ch] [rbp-1Ch]

  memset(v17, 0, sizeof(v17));
  v2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)v17 = *(unsigned int *)(a1 + 108);
  PopPrepareIoctl(v2, 2703428, 0, (unsigned int)v17, 12, 36);
  result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), *(IRP **)(a1 + 56));
  if ( result >= 0 )
  {
    v4 = *(_DWORD *)&v17[32];
    v5 = "non-rechargeable";
    v6 = *(_OWORD *)&v17[16];
    v19 = 0;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)v17;
    *(_OWORD *)(a1 + 128) = v6;
    *(_DWORD *)(a1 + 144) = v4;
    v18 = *(_DWORD *)(a1 + 120);
    if ( *(_BYTE *)(a1 + 116) )
      v5 = "rechargeable";
    v15 = *(_DWORD *)(a1 + 140);
    v14 = *(_DWORD *)(a1 + 136);
    v13 = *(_DWORD *)(a1 + 132);
    v12 = *(_DWORD *)(a1 + 128);
    v11 = *(_DWORD *)(a1 + 124);
    LODWORD(v10) = *(_DWORD *)(a1 + 112);
    LODWORD(v9) = *(_DWORD *)(a1 + 108);
    v16 = *(_DWORD *)(a1 + 144);
    DbgPrintEx(
      0x92u,
      2u,
      "\n"
      "Battery Information [%p]\n"
      "|-- Tag                 = %u\n"
      "|-- Capabilities        = 0x%08x\n"
      "|-- Technology          = %s\n"
      "|-- Chemistry           = %s\n"
      "|-- DesignedCapacity    = %u\n"
      "|-- FullChargedCapacity = %u\n"
      "|-- DefaultAlert1       = %u\n"
      "|-- DefaultAlert2       = %u\n"
      "|-- CriticalBias        = %u\n"
      "|-- CycleCount          = %u\n",
      a1,
      v9,
      v10,
      v5,
      &v18,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    *(_DWORD *)(a1 + 104) = 3;
    v7 = (_QWORD *)(a1 + 64);
    v8 = (_QWORD *)qword_140365938;
    if ( *(__int64 **)qword_140365938 != &qword_140365930 )
      __fastfail(3u);
    v7[1] = qword_140365938;
    *v7 = &qword_140365930;
    *v8 = v7;
    ++dword_140365914;
    ++dword_140365978;
    result = 0;
    qword_140365938 = (__int64)v7;
    byte_140365918 = 1;
  }
  return result;
}
