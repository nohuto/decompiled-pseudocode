/*
 * XREFs of LdrFindResource_U @ 0x180032D20
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 */

__int64 __fastcall LdrFindResource_U(int a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 v10; // rbx
  unsigned int v11; // esi
  __int64 v13; // rcx

  v8 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v9 = 2147353477LL;
  v10 = 2147353476LL;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v13 = 2147353476LL;
    sub_1800DBCC0(L",.", *(unsigned __int8 *)v13);
  }
  v11 = sub_180032DB4(a1, a2, a3, 0, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  if ( (*(_BYTE *)v8 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    sub_1800DBCC0(L"*,", *(unsigned __int8 *)v10);
  }
  return v11;
}
