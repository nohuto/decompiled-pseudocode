/*
 * XREFs of sub_18001F7A8 @ 0x18001F7A8
 * Callers:
 *     sub_18001F750 @ 0x18001F750 (sub_18001F750.c)
 * Callees:
 *     sub_18001E750 @ 0x18001E750 (sub_18001E750.c)
 *     sub_1800215C8 @ 0x1800215C8 (sub_1800215C8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     RtlInterlockedPushEntrySList_0 @ 0x1800A8DC0 (RtlInterlockedPushEntrySList_0.c)
 */

__int64 __fastcall sub_18001F7A8(__int64 a1, __int64 *a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  _SLIST_ENTRY *v5; // rbx
  unsigned int v6; // ebp
  _SLIST_HEADER *v7; // rbp
  __int64 (__fastcall *v9)(__int64, __int64, char); // rax
  __int64 v10; // rcx

  v4 = 0;
  v5 = (_SLIST_ENTRY *)a3;
  _BitScanForward(&v6, *(unsigned __int8 *)(a3 + 45) << *(_BYTE *)(a3 + 44));
  v7 = (_SLIST_HEADER *)(a1 + 16LL * (v6 - 12));
  if ( LOWORD(v7->Alignment) )
  {
    v9 = (__int64 (__fastcall *)(__int64, __int64, char))((unsigned __int64)a2 ^ qword_18015BFA8 ^ a2[2]);
    v10 = *a2;
    if ( v9 == sub_18001E750 )
      sub_18001E750(v10, a3, a4);
    else
      v9(v10, a3, a4);
    v5 = 0LL;
  }
  else
  {
    sub_1800215C8((_DWORD)a2, a3, -2, 1, a4);
    RtlInterlockedPushEntrySList_0(v7, v5);
  }
  LOBYTE(v4) = v5 != 0LL;
  return v4;
}
