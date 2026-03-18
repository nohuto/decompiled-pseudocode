/*
 * XREFs of RootHub_Update20HardwareLpmParameters @ 0x1C001E928
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x1C0034FB4 (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_Update20HardwareLpmParameters(_QWORD *a1, int a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // r15
  int Ulong; // edi
  int v11; // edi
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+28h] [rbp-30h]

  v7 = *(_QWORD *)(a1[1] + 88LL);
  v8 = (unsigned __int64)(unsigned int)(a2 - 1) << 6;
  v9 = a1[5] + 16LL * (unsigned int)(a2 - 1);
  DynamicLock_Acquire(*(_QWORD *)(a1[6] + v8 + 16));
  Ulong = XilRegister_ReadUlong(v7, (unsigned int *)(v9 + 12));
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xF7u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    Ulong);
  LODWORD(v13) = Ulong & 0xFFFFC000 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xF8u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v13);
  XilRegister_WriteUlong(
    v7,
    (_DWORD *)(v9 + 12),
    Ulong & 0xFFFFC000 | (8 * (a3 & 0x780)) | ((a3 & 4 | (a3 >> 7) & 0xFF0) >> 2));
  v11 = XilRegister_ReadUlong(v7, (unsigned int *)(v9 + 4));
  LODWORD(v14) = v11;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xF9u,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v14);
  *(_BYTE *)(a1[6] + v8 + 11) = a3 & 1;
  LODWORD(v15) = v11 & 0xFFFE0007 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6)))));
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xFAu,
    (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
    v15);
  XilRegister_WriteUlong(
    v7,
    (_DWORD *)(v9 + 4),
    v11 & 0xFFFE0007 | (2 * (a3 & 0x78 | (2 * (a3 & 2 | ((a4 | ((a3 & 1) << 8)) << 6))))));
  *(_BYTE *)(a1[6] + v8 + 8) = 1;
  return DynamicLock_Release(*(_QWORD *)(a1[6] + v8 + 16));
}
