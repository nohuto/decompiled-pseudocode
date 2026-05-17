/*
 * XREFs of LdrFindResourceEx_U @ 0x18007FE40
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     sub_1800DBCC0 @ 0x1800DBCC0 (sub_1800DBCC0.c)
 */

__int64 __fastcall LdrFindResourceEx_U(unsigned int a1, unsigned __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v9; // rdi
  __int64 v10; // r10
  __int64 v11; // rbx
  unsigned int v12; // esi
  __int64 v14; // rcx

  v9 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v10 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v10 = 2147353477LL;
  v11 = 2147353476LL;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v14 = 2147353476LL;
    sub_1800DBCC0(L"02", *(unsigned __int8 *)v14);
  }
  v12 = sub_180032DB4(a2, a3, a4, a1, a5);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v9 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  if ( (*(_BYTE *)v9 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    sub_1800DBCC0(L".0", *(unsigned __int8 *)v11);
  }
  return v12;
}
