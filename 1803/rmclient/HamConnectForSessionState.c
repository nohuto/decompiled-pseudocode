/*
 * XREFs of HamConnectForSessionState @ 0x18000C9A0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionCreate @ 0x180004D74 (HampConnectionCreate.c)
 *     HampConnectionDestroy @ 0x18000D468 (HampConnectionDestroy.c)
 */

__int64 __fastcall HamConnectForSessionState(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = HampConnectionCreate(0LL, &unk_180013B20, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    HampConnectionDestroy(v3);
  return (unsigned int)v2;
}
