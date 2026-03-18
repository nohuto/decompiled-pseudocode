/*
 * XREFs of FindObjSymbol @ 0x1C005E650
 * Callers:
 *     DebugExpr @ 0x1C005DD84 (DebugExpr.c)
 * Callees:
 *     <none>
 */

char __fastcall FindObjSymbol(unsigned __int64 a1, _QWORD *a2, _DWORD *a3)
{
  char v4; // di
  KIRQL v7; // al
  _QWORD *v8; // r9
  KIRQL v9; // cl
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  char v12; // al

  v4 = 0;
  v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v8 = qword_1C00796E0;
  v9 = v7;
  while ( v8 )
  {
    v10 = v8[2];
    if ( a1 <= v10 )
    {
      if ( a1 < v10 && *v8 )
        v8 = (_QWORD *)*v8;
      if ( a1 >= v8[2] )
      {
        v11 = v8[3];
        v12 = gdwfAMLI;
        *a2 = v11;
        if ( (v12 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v11 + 112));
        v4 = 1;
        *a3 = a1 - *((_DWORD *)v8 + 4);
      }
      break;
    }
    v8 = (_QWORD *)v8[1];
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
  return v4;
}
