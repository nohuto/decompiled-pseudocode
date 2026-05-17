/*
 * XREFs of RtlpStackDbEntryCreate @ 0x18010DA20
 * Callers:
 *     RtlStackDbStackAdd @ 0x18010D254 (RtlStackDbStackAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A6C80 (memset.c)
 *     RtlpStackDbEntryCleanup @ 0x18010D9A4 (RtlpStackDbEntryCleanup.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x18010DC60 (RtlpStackDbSegmentFindOrCreate.c)
 */

__int64 __fastcall RtlpStackDbEntryCreate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebp
  void *v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // esi
  unsigned int v11; // edi
  __int64 *v12; // r14
  __int64 v13; // rax
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]

  v6 = (unsigned int)(*(_DWORD *)a2 + 7) >> 3;
  v7 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(8 * v6 + 24, *(_QWORD *)(a1 + 64));
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  memset(v7, 0, 8 * v6 + 24);
  *(_DWORD *)(v8 + 16) &= 0xFF000001;
  *(_DWORD *)(v8 + 16) |= 1u;
  *(_QWORD *)(v8 + 8) = a3;
  v10 = 0;
  *(_BYTE *)(v8 + 19) = *(_BYTE *)a2;
  v11 = *(_DWORD *)a2;
  if ( v6 )
  {
    v12 = (__int64 *)(v8 + 24);
    while ( 1 )
    {
      v16 = *(_QWORD *)(a2 + 8) + 64LL * v10;
      if ( v11 <= 8 )
      {
        v15 = v11;
      }
      else
      {
        v15 = 8;
        v11 -= 8;
      }
      v13 = RtlpStackDbSegmentFindOrCreate(a1, &v15);
      if ( !v13 )
        break;
      *v12 = v13;
      ++v10;
      ++v12;
      if ( v10 >= v6 )
        goto LABEL_10;
    }
    v9 = 0LL;
  }
  else
  {
LABEL_10:
    v9 = v8;
    v8 = 0LL;
  }
  if ( v8 )
    RtlpStackDbEntryCleanup(a1, v8);
  return v9;
}
