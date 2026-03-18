/*
 * XREFs of MiSlowRotateCopy @ 0x14021C23C
 * Callers:
 *     MmRotatePhysicalView @ 0x140448920 (MmRotatePhysicalView.c)
 * Callees:
 *     KeCopyPage @ 0x140184E30 (KeCopyPage.c)
 *     MiInitializeSlowPte @ 0x14021C0C4 (MiInitializeSlowPte.c)
 *     MiGetPteMappingPair @ 0x140234BEC (MiGetPteMappingPair.c)
 *     MiReturnPteMappingPair @ 0x140234C68 (MiReturnPteMappingPair.c)
 */

char __fastcall MiSlowRotateCopy(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // r12
  unsigned __int64 v4; // r14
  char result; // al
  __int64 v6; // r8
  __int64 v7; // r15
  struct _KTHREAD **v8; // rbx
  struct _KTHREAD **v9; // rdi
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v11; // [rsp+30h] [rbp-28h]

  v3 = (unsigned __int64 *)(a2 + 48);
  v4 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  result = ((*(_DWORD *)(a3 + 48) >> 6) & 3) == 3;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = a1 - a2;
    do
    {
      MiGetPteMappingPair(1LL, v10, v6);
      v8 = v11;
      v9 = v11 + 1;
      MiInitializeSlowPte(v11, *v3);
      MiInitializeSlowPte(v9, *(unsigned __int64 *)((char *)v3 + v7));
      KeCopyPage((__int64)((_QWORD)v9 << 25) >> 16, (__int64)((_QWORD)v8 << 25) >> 16);
      result = MiReturnPteMappingPair(v10);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
