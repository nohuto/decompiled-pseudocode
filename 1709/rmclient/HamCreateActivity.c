/*
 * XREFs of HamCreateActivity @ 0x18000D250
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionObjectCreate @ 0x18000D7B8 (HampConnectionObjectCreate.c)
 *     HamIpcChannelAddCallback @ 0x18000D844 (HamIpcChannelAddCallback.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateActivity(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  CLIENT_CALL_RETURN result; // rax
  __int64 v9; // rbx
  PVOID v10; // rcx
  ULONG v11; // [rsp+30h] [rbp-78h]
  int v12; // [rsp+38h] [rbp-70h]
  int v13; // [rsp+40h] [rbp-68h]
  unsigned int Pointer; // [rsp+60h] [rbp-48h]
  _QWORD v15[3]; // [rsp+68h] [rbp-40h] BYREF
  PVOID P; // [rsp+B0h] [rbp+8h] BYREF

  P = 0LL;
  v15[0] = -1LL;
  result.Simple = HampConnectionObjectCreate(a2, a1, &P);
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v9 = *(_QWORD *)(a3 + 544);
    v13 = *(_DWORD *)(a3 + 536);
    v12 = *(_DWORD *)(a3 + 532);
    v11 = RtlLengthSid((PSID)(a3 + 464));
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_1800109C0,
                       2u,
                       0LL,
                       *a1,
                       a3,
                       a3 + 464,
                       v11,
                       v12,
                       v13,
                       v9,
                       a4,
                       v15).Pointer;
    v15[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v10 = P;
      *((_QWORD *)P + 6) = v15[0];
      HamIpcChannelAddCallback(v10);
      P = 0LL;
      *a5 = v15[0];
      result.Simple = 0LL;
      Pointer = 0;
    }
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return (CLIENT_CALL_RETURN)Pointer;
  }
  return result;
}
