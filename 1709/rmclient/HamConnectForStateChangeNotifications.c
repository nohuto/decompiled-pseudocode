/*
 * XREFs of HamConnectForStateChangeNotifications @ 0x1800063D0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x18000169C (HampConnectionDestroy.c)
 *     HampConnectionCreate @ 0x180003FA0 (HampConnectionCreate.c)
 */

__int64 __fastcall HamConnectForStateChangeNotifications(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( a1 )
  {
    v7[0] = a1;
    v7[1] = a2;
    v4 = HampConnectionCreate((__int64)v7, (__int64)&unk_180010A80, &v8);
    if ( v4 < 0 )
    {
      v5 = v8;
    }
    else
    {
      v5 = 0LL;
      *a3 = v8;
      v4 = 0;
    }
    if ( v5 )
      HampConnectionDestroy(v5);
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)v4;
}
