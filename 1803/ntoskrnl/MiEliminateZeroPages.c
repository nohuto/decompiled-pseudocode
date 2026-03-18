/*
 * XREFs of MiEliminateZeroPages @ 0x1404B3970
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B3C20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiCopyToCfgBitMap @ 0x1404B4120 (MiCopyToCfgBitMap.c)
 * Callees:
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x14003B3A0 (MiInitializeTbFlushList.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiGetPdeAddress @ 0x14003B3E0 (MiGetPdeAddress.c)
 *     MiConvertAndFlushWsleVas @ 0x1400BAC24 (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall MiEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  __int64 PteAddress; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // r15
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  __int64 PdeAddress; // rbx
  _BYTE v13[4]; // [rsp+60h] [rbp-F8h] BYREF
  char v14; // [rsp+64h] [rbp-F4h]
  int v15; // [rsp+68h] [rbp-F0h]
  int v16; // [rsp+6Ch] [rbp-ECh]

  v6 = MiTbFlushType(a1);
  MiInitializeTbFlushList((__int64)v13, v6, 20);
  v14 |= 4u;
  PteAddress = MiGetPteAddress(a2);
  v8 = a3 >> 12;
  v9 = 0LL;
  while ( v8 )
  {
    v10 = (_QWORD *)a2;
    v11 = (_QWORD *)(a2 + 4088);
    do
    {
      if ( *v10 | *v11 )
        break;
      ++v10;
      --v11;
    }
    while ( v10 <= v11 );
    if ( v10 > v11 )
    {
      PdeAddress = MiGetPdeAddress(a2);
      if ( v9 != PdeAddress )
      {
        if ( v16 )
          MiConvertAndFlushWsleVas(a1, (__int64)v13);
        v9 = PdeAddress;
      }
      MiInsertTbFlushEntry((__int64)v13, a2, 1LL, 0);
      if ( v16 == v15 )
        MiConvertAndFlushWsleVas(a1, (__int64)v13);
    }
    PteAddress += 8LL;
    a2 += 4096LL;
    --v8;
  }
  if ( v16 )
    MiConvertAndFlushWsleVas(a1, (__int64)v13);
}
