/*
 * XREFs of RootHub_ForceU3 @ 0x1C001FF3C
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C00030F0 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 *     RootHub_ForceU0AndWait @ 0x1C001FBCC (RootHub_ForceU0AndWait.c)
 *     DynamicLock_Acquire @ 0x1C003FB80 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003FD7C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_ForceU3(_QWORD *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // r14
  unsigned int *v6; // rbp
  unsigned __int64 v7; // rsi
  bool v8; // zf
  __int64 result; // rax
  int Ulong; // ebx
  int v11; // ebx
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-20h]

  v3 = a1[1];
  v4 = a1[6];
  v5 = *(_QWORD *)(v3 + 88);
  v6 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v7 = (unsigned __int64)(unsigned int)(a2 - 1) << 6;
  if ( *(_BYTE *)(v7 + v4 + 1) == 2 )
    v8 = (*(_QWORD *)(v3 + 272) & 0x8000000LL) == 0;
  else
    v8 = (*(_QWORD *)(v3 + 272) & 0x80000LL) == 0;
  if ( v8 || (result = RootHub_ForceU0AndWait(a1, a2), (int)result >= 0) )
  {
    DynamicLock_Acquire(*(_QWORD *)(a1[6] + v7 + 16));
    *(_BYTE *)(v7 + v4 + 6) = 0;
    Ulong = XilRegister_ReadUlong(v5, v6);
    v12 = Ulong;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xE0u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v12);
    if ( (Ulong & 2) == 0 || (Ulong & 0x1E0u) >= 0x60 )
      WPP_RECORDER_SF_(
        *(_QWORD *)(a1[1] + 72LL),
        3u,
        0xBu,
        0xE1u,
        (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
    v11 = Ulong & 0xE00C200 | 0x10060;
    LODWORD(v13) = v11;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xE2u,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v13);
    XilRegister_WriteUlong(v5, v6, v11);
    DynamicLock_Release(*(_QWORD *)(a1[6] + v7 + 16));
    LODWORD(v14) = XilRegister_ReadUlong(v5, v6);
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(a1[1] + 72LL),
             4u,
             0xBu,
             0xE3u,
             (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
             v14);
  }
  return result;
}
