/*
 * XREFs of WbDecryptWarbirdEncryptionSegmentBlock @ 0x14048A758
 * Callers:
 *     sub_14048A6C0 @ 0x14048A6C0 (sub_14048A6C0.c)
 * Callees:
 *     ApplyRelocations @ 0x140001D2C (ApplyRelocations.c)
 *     ZwFlushInstructionCache @ 0x1401A90E0 (ZwFlushInstructionCache.c)
 *     sub_14048AAA0 @ 0x14048AAA0 (sub_14048AAA0.c)
 *     WbVerifyVirtualAddressSignature @ 0x140539FCC (WbVerifyVirtualAddressSignature.c)
 *     sub_14053A0A8 @ 0x14053A0A8 (sub_14053A0A8.c)
 *     sub_14053AB64 @ 0x14053AB64 (sub_14053AB64.c)
 */

__int64 __fastcall WbDecryptWarbirdEncryptionSegmentBlock(__int64 *a1, int a2, _DWORD *a3)
{
  void *v6; // rsi
  int v7; // ebx
  __int64 v8; // r15
  PMDL Mdl; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+20h] BYREF

  v11 = 0LL;
  Mdl = 0LL;
  if ( a2 && (*a3 & 1) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v6 = (void *)(a1[4] + (a3[1] & 0xFFFFFFF));
    v7 = WbVerifyVirtualAddressSignature(v6);
    if ( v7 >= 0 )
    {
      v7 = sub_14048AAA0((_DWORD)v6, a3[2] & 0xFFFFFFF, (*a3 & 2) == 0, (unsigned int)&Mdl, (__int64)&v11);
      if ( v7 >= 0 )
      {
        v8 = v11;
        if ( !a2
          || (v7 = ApplyRelocations(
                     a1[5],
                     *(_DWORD *)(a1[6] + 48),
                     a1[4],
                     *(_QWORD *)(a1[6] + 56) - a1[4],
                     (__int64)v6,
                     v11,
                     a3[2] & 0xFFFFFFF),
              v7 >= 0) )
        {
          v7 = sub_14053A0A8(0, (_DWORD)v6, v8, a3[2] & 0xFFFFFFF, a1[6] + 72, a3[1] & 0xFFFFFFF, a1[6] + 80);
          if ( v7 >= 0 )
          {
            if ( !a2
              || (v7 = ApplyRelocations(
                         a1[5],
                         *(_DWORD *)(a1[6] + 48),
                         a1[4],
                         a1[4] - *(_QWORD *)(a1[6] + 56),
                         (__int64)v6,
                         v8,
                         a3[2] & 0xFFFFFFF),
                  v7 >= 0) )
            {
              v7 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, v6, a3[2] & 0xFFFFFFF);
            }
          }
        }
      }
    }
  }
  sub_14053AB64(Mdl);
  return (unsigned int)v7;
}
