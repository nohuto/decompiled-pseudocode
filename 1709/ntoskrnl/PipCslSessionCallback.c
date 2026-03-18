/*
 * XREFs of PipCslSessionCallback @ 0x1406D44C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     IoGetContainerInformation @ 0x1405ED6D0 (IoGetContainerInformation.c)
 *     PipCslUpdateState @ 0x1406D4554 (PipCslUpdateState.c)
 */

__int64 __fastcall PipCslSessionCallback(void *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  unsigned int ContainerInformation; // edi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+24h] [rbp-24h]

  ContainerInformation = IoGetContainerInformation(IoSessionStateInformation, a1, &Buffer, 0xCu);
  if ( (ContainerInformation & 0x80000000) != 0 || !Buffer )
    return ContainerInformation;
  if ( a3 == 5 )
  {
LABEL_4:
    v8 = 1LL;
LABEL_12:
    PipCslUpdateState(v8, v4, v6, v7);
    return ContainerInformation;
  }
  if ( a3 == 6 )
  {
LABEL_11:
    v8 = 2LL;
    goto LABEL_12;
  }
  if ( a3 != 3 )
  {
    if ( a3 != 4 || v11 != 5 )
      return ContainerInformation;
    goto LABEL_11;
  }
  if ( v11 == 6 )
    goto LABEL_4;
  return ContainerInformation;
}
