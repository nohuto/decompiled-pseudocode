/*
 * XREFs of HamConnectForExtendedExecution @ 0x180004660
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x18000169C (HampConnectionDestroy.c)
 *     HampConnectionCreate @ 0x180003FA0 (HampConnectionCreate.c)
 */

__int64 __fastcall HamConnectForExtendedExecution(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a1 )
  {
    v6[0] = a1;
    v6[1] = 0LL;
    v3 = HampConnectionCreate((__int64)v6, (__int64)&unk_1800109F0, &v7);
    if ( v3 < 0 )
    {
      v4 = v7;
    }
    else
    {
      v4 = 0LL;
      *a2 = v7;
      v3 = 0;
    }
    if ( v4 )
      HampConnectionDestroy(v4);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v3;
}
