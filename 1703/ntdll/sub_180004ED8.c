/*
 * XREFs of sub_180004ED8 @ 0x180004ED8
 * Callers:
 *     LdrResolveDelayLoadedAPI @ 0x18003A360 (LdrResolveDelayLoadedAPI.c)
 * Callees:
 *     sub_180004F9C @ 0x180004F9C (sub_180004F9C.c)
 *     sub_18003015C @ 0x18003015C (sub_18003015C.c)
 *     sub_18003AB88 @ 0x18003AB88 (sub_18003AB88.c)
 *     sub_1800845DC @ 0x1800845DC (sub_1800845DC.c)
 */

__int64 __fastcall sub_180004ED8(int a1, int a2, int a3, __int64 a4, __int64 *a5, int a6)
{
  __int64 v10; // rdi
  NTSTATUS Status; // ebx
  __int64 v12; // r8
  int v14; // [rsp+40h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-20h] BYREF

  v10 = 0LL;
  v14 = sub_18003AB88(a1, a2, (unsigned int)&BaseAddress, a6, (__int64)a5);
  Status = v14;
  if ( v14 >= 0 )
  {
    if ( byte_18015BF54 )
      v12 = MEMORY[0x7FFE0330] ^ __ROR8__(qword_18016B1E0, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
    else
      v12 = 0LL;
    v10 = sub_180004F9C(a1, (_DWORD)BaseAddress, a2, (_DWORD)a5, v12, (__int64)&v14);
    sub_18003015C(BaseAddress);
    Status = v14;
  }
  if ( Status >= 0
    || (v10 = sub_1800845DC(a1, (int)BaseAddress, a2, a3, a4, (__int64)a5, Status)) != 0
    && ((unsigned int)(Status + 1073741512) <= 1 || Status == -1073740671) )
  {
    *a5 = v10;
  }
  return v10;
}
