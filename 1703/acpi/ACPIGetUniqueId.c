/*
 * XREFs of ACPIGetUniqueId @ 0x1C009FF00
 * Callers:
 *     <none>
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0002820 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C000E580 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C00142C0 (AMLIDereferenceHandleEx.c)
 *     AMLIFreeDataBuffs @ 0x1C001DB68 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall ACPIGetUniqueId(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  _BYTE v8[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+22h] [rbp-36h]
  __int64 v10; // [rsp+30h] [rbp-28h]
  int v11; // [rsp+38h] [rbp-20h]
  void *Src; // [rsp+40h] [rbp-18h]

  *a2 = 0LL;
  v3 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1145656671);
  v4 = (volatile signed __int32 *)v3;
  if ( !v3 )
    return 3221226021LL;
  v6 = AMLIEvalNameSpaceObject(v3, v8, 0, 0LL);
  AMLIDereferenceHandleEx(v4, v7);
  if ( v6 >= 0 )
  {
    if ( v9 == 1 )
    {
      *a2 = v10;
    }
    else if ( v9 == 2 && (unsigned int)(v11 - 1) <= 8 )
    {
      memmove(a2, Src, (unsigned int)(v11 - 1));
    }
    else
    {
      v6 = -1073741811;
    }
    AMLIFreeDataBuffs((__int64)v8);
  }
  return (unsigned int)v6;
}
