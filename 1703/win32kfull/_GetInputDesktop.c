/*
 * XREFs of _GetInputDesktop @ 0x1C01C3540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputDesktop(__int64 a1)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1);
  if ( (unsigned __int8)ObFindHandleForObject(CurrentProcess, grpdeskRitInput, 0LL, 0LL, &v3)
    && (unsigned int)SetHandleFlag(v3, 1LL, 1LL) )
  {
    return v3;
  }
  else
  {
    return 0LL;
  }
}
