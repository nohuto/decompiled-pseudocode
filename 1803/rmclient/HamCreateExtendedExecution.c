/*
 * XREFs of HamCreateExtendedExecution @ 0x1800045B0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionObjectCreate @ 0x18000471C (HampConnectionObjectCreate.c)
 *     HamIpcChannelAddCallback @ 0x180005D80 (HamIpcChannelAddCallback.c)
 */

CLIENT_CALL_RETURN __fastcall HamCreateExtendedExecution(_QWORD *a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  CLIENT_CALL_RETURN result; // rax
  int v9; // [rsp+20h] [rbp-48h]
  unsigned int Pointer; // [rsp+40h] [rbp-28h]
  _QWORD v11[3]; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+70h] [rbp+8h] BYREF

  P = 0LL;
  v11[0] = -1LL;
  result.Simple = HampConnectionObjectCreate(a2, a1, &P);
  Pointer = (unsigned int)result.Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
  {
    v9 = a3;
    result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800108A8, 4u, 0LL, *a1, v9, a4, v11).Pointer;
    v11[1] = result.Pointer;
    Pointer = (unsigned int)result.Pointer;
    if ( SLODWORD(result.Simple) >= 0 )
    {
      *((_QWORD *)P + 6) = v11[0];
      HamIpcChannelAddCallback();
      P = 0LL;
      *a5 = v11[0];
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
