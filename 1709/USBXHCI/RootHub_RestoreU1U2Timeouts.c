/*
 * XREFs of RootHub_RestoreU1U2Timeouts @ 0x1C002071C
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0006330 (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C001F6D0 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C001F7B0 (XilRegister_WriteUlong.c)
 */

__int64 __fastcall RootHub_RestoreU1U2Timeouts(_QWORD *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned int *v5; // rbp
  __int64 v6; // rsi
  int Ulong; // ebx
  unsigned int v8; // edi
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+28h] [rbp-20h]

  v3 = a1[1];
  v4 = *(_QWORD *)(v3 + 88);
  v5 = (unsigned int *)(16LL * (unsigned int)(a2 - 1) + a1[5] + 4LL);
  v6 = (unsigned int)(a2 - 1);
  WPP_RECORDER_SF_(*(_QWORD *)(v3 + 72), 4u, 0xBu, 0xD8u, (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids);
  Ulong = XilRegister_ReadUlong(v4, v5);
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xD9u,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    Ulong);
  v8 = (*(unsigned __int8 *)((v6 << 6) + a1[6] + 10) << 8) | Ulong & 0xFFFF0000 | *(unsigned __int8 *)((v6 << 6) + a1[6] + 9);
  LODWORD(v10) = v8;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(a1[1] + 72LL),
    4u,
    0xBu,
    0xDAu,
    (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
    v10);
  XilRegister_WriteUlong(v4, v5, v8);
  LODWORD(v11) = XilRegister_ReadUlong(v4, v5);
  return WPP_RECORDER_SF_d(
           *(_QWORD *)(a1[1] + 72LL),
           4u,
           0xBu,
           0xDBu,
           (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
           v11);
}
