/*
 * XREFs of RootHub_DisableLPMForSlot @ 0x1C0019ED0
 * Callers:
 *     UsbDevice_UcxEvtDisable @ 0x1C00339E0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C0019708 (XilRegister_ReadUlong.c)
 *     XilRegister_WriteUlong @ 0x1C00197EC (XilRegister_WriteUlong.c)
 *     DynamicLock_Acquire @ 0x1C003E230 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C003E42C (DynamicLock_Release.c)
 */

__int64 __fastcall RootHub_DisableLPMForSlot(_QWORD *a1, int a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int *v10; // r14
  __int64 v11; // r12
  int Ulong; // ebx
  unsigned int v13; // ebx
  int v14; // ebx
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+28h] [rbp-30h]
  __int64 v18; // [rsp+28h] [rbp-30h]

  v5 = *(_QWORD *)(a1[1] + 88LL);
  v6 = (unsigned int)(a2 - 1);
  v7 = a1[5];
  v8 = 16 * v6;
  v9 = v6 << 6;
  v10 = (unsigned int *)(v8 + v7 + 4);
  v11 = v8 + v7;
  DynamicLock_Acquire(*(_QWORD *)(v9 + a1[6] + 16));
  if ( *(_BYTE *)(v9 + a1[6] + 8) )
  {
    Ulong = XilRegister_ReadUlong(v5, v10);
    if ( BYTE1(Ulong) == a3 )
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xFBu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        Ulong);
      v13 = Ulong & 0xFFFE0007;
      LODWORD(v16) = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xFCu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v16);
      XilRegister_WriteUlong(v5, v10, v13);
      v14 = XilRegister_ReadUlong(v5, (unsigned int *)(v11 + 12));
      LODWORD(v17) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xFDu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v17);
      v14 &= 0xFFFFC000;
      LODWORD(v18) = v14;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xFEu,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v18);
      XilRegister_WriteUlong(v5, (_DWORD *)(v11 + 12), v14);
      XilRegister_ReadUlong(v5, v10);
      *(_BYTE *)(v9 + a1[6] + 8) = 0;
    }
  }
  return DynamicLock_Release(*(_QWORD *)(v9 + a1[6] + 16));
}
