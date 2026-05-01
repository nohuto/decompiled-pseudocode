/*
 * XREFs of HamCreateExtendedExecution @ 0x18000D3C0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionObjectCreate @ 0x18000D7B8 (HampConnectionObjectCreate.c)
 *     HamIpcChannelAddCallback @ 0x18000D844 (HamIpcChannelAddCallback.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateExtendedExecution(_QWORD *a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  CLIENT_CALL_RETURN result; // rax
  PVOID v9; // rcx
  int v10; // [rsp+20h] [rbp-48h]
  unsigned int Pointer; // [rsp+40h] [rbp-28h]
  _QWORD v12[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  P = 0LL;
  v12[0] = -1LL;
  result.Simple = HampConnectionObjectCreate(a2, a1, &P);
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v10 = a3;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010A50, 3u, 0LL, *a1, v10, a4, v12).Pointer;
    v12[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      v9 = P;
      *((_QWORD *)P + 6) = v12[0];
      HamIpcChannelAddCallback(v9);
      P = 0LL;
      *a5 = v12[0];
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
