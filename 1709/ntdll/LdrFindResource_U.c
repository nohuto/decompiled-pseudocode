/*
 * XREFs of LdrFindResource_U @ 0x180023010
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180023154 (LdrpSearchResourceSection_U.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003F2C0 (RtlGetCurrentServiceSessionId.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0D64 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrFindResource_U(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  struct _PEB *v17; // rcx
  __int64 v19; // rcx

  v6 = a2;
  v7 = a1;
  v10 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  v12 = 2147353476LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, v8) )
      v19 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v19 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v19);
  }
  v13 = LdrpSearchResourceSection_U(v7, v6, a3, 0, a4);
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14) )
  {
    v17 = NtCurrentPeb();
    v10 = (__int64)v17->SharedData + 555;
  }
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v12);
  }
  return v13;
}
