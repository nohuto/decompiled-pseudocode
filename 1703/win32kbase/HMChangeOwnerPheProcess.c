/*
 * XREFs of HMChangeOwnerPheProcess @ 0x1C007EFA0
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0040840 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     GreIncQuotaCount @ 0x1C007F0C0 (GreIncQuotaCount.c)
 *     GreDecQuotaCount @ 0x1C007F0F0 (GreDecQuotaCount.c)
 */

__int64 __fastcall HMChangeOwnerPheProcess(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r15
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 result; // rax

  v2 = gpKernelHandleTable;
  v5 = 2LL * (unsigned int)((a1 - (__int64)qword_1C0189E38) >> 5);
  v6 = *((_QWORD *)gpKernelHandleTable + 2 * (unsigned int)((a1 - (__int64)qword_1C0189E38) >> 5) + 1);
  v7 = *((_QWORD *)gpKernelHandleTable + 2 * (unsigned int)((a1 - (__int64)qword_1C0189E38) >> 5));
  --*(_DWORD *)(v6 + 68);
  if ( *(_BYTE *)(a1 + 24) == 3 && (*(_DWORD *)(v7 + 80) & 8) == 0 && v6 != *(_QWORD *)(a2 + 376) )
  {
    if ( *(_QWORD *)(v7 + 88) )
    {
      GreDecQuotaCount(v6);
      GreIncQuotaCount(*(_QWORD *)(a2 + 376));
    }
    if ( *(_QWORD *)(v7 + 96) )
    {
      GreDecQuotaCount(v6);
      GreIncQuotaCount(*(_QWORD *)(a2 + 376));
    }
    if ( *(_QWORD *)(v7 + 128) )
    {
      GreDecQuotaCount(v6);
      GreIncQuotaCount(*(_QWORD *)(a2 + 376));
    }
  }
  *(_DWORD *)(v7 + 16) = 0;
  if ( (*((_BYTE *)&unk_1C015ED5C + 24 * *(unsigned __int8 *)(a1 + 24)) & 4) != 0 )
    *(_QWORD *)(v7 + 24) = *(_QWORD *)(a2 + 376);
  v2[v5 + 1] = *(_QWORD *)(a2 + 376);
  *(_QWORD *)(a1 + 8) = PsGetProcessId(**(PEPROCESS **)(a2 + 376));
  result = v2[v5 + 1];
  ++*(_DWORD *)(result + 68);
  return result;
}
