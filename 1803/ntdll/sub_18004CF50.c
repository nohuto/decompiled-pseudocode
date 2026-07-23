/*
 * XREFs of sub_18004CF50 @ 0x18004CF50
 * Callers:
 *     sub_18004CED4 @ 0x18004CED4 (sub_18004CED4.c)
 *     RtlEmptyAtomTable @ 0x1800E47F0 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x18004D5F0 (RtlIsValidIndexHandle.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

char __fastcall sub_18004CF50(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _RTL_HANDLE_TABLE_ENTRY *v3; // rax
  PRTL_HANDLE_TABLE_ENTRY v4; // rbx
  PRTL_HANDLE_TABLE_ENTRY Handle; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 16;
  LOBYTE(v3) = RtlIsValidIndexHandle((PRTL_HANDLE_TABLE)(a1 + 16), *(unsigned __int16 *)(a2 + 8), &Handle);
  if ( (_BYTE)v3 )
  {
    v4 = Handle;
    memset(Handle, 0, *(unsigned int *)(v2 + 4));
    v3 = *(_RTL_HANDLE_TABLE_ENTRY **)(v2 + 16);
    v4->NextFree = v3;
    *(_QWORD *)(v2 + 16) = v4;
  }
  return (char)v3;
}
