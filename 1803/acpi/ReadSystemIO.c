/*
 * XREFs of ReadSystemIO @ 0x1C004D8A8
 * Callers:
 *     DebugInPort @ 0x1C004886C (DebugInPort.c)
 *     AccessBaseField @ 0x1C004C1C0 (AccessBaseField.c)
 * Callees:
 *     CheckSystemIOAddressValidity @ 0x1C004C668 (CheckSystemIOAddressValidity.c)
 */

__int64 __fastcall ReadSystemIO(unsigned int a1, unsigned int a2, int a3)
{
  unsigned __int16 v5; // di
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  unsigned __int32 v8; // eax
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0;
  v5 = a1;
  if ( !CheckSystemIOAddressValidity(1, a1, a2, &v10) )
    goto LABEL_8;
  v6 = a2 - 1;
  if ( !v6 )
  {
    LOBYTE(v8) = __inbyte(v5);
    v8 = (unsigned __int8)v8;
    return a3 & v8;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    LOWORD(v8) = __inword(v5);
    v8 = (unsigned __int16)v8;
    return a3 & v8;
  }
  if ( v7 != 2 )
  {
LABEL_8:
    v8 = v10;
    return a3 & v8;
  }
  v8 = __indword(v5);
  return a3 & v8;
}
