/*
 * XREFs of ACPIGetUniqueId @ 0x1C00A2C30
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0002108 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0003F20 (AMLIGetNamedChild.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0006C00 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C0023374 (AMLIFreeDataBuffs.c)
 *     memmove @ 0x1C002C180 (memmove.c)
 */

__int64 __fastcall ACPIGetUniqueId(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rsi
  int v6; // ebx
  _BYTE v7[2]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v8; // [rsp+22h] [rbp-36h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]
  void *Src; // [rsp+40h] [rbp-18h]

  *a2 = 0LL;
  v3 = AMLIGetNamedChild(*(__int64 **)(a1 + 712), 1145656671);
  v4 = (__int64)v3;
  if ( !v3 )
    return 3221226021LL;
  v6 = AMLIEvalNameSpaceObject(v3, v7, 0, 0LL);
  AMLIDereferenceHandleEx(v4);
  if ( v6 >= 0 )
  {
    if ( v8 == 1 )
    {
      *a2 = v9;
    }
    else if ( v8 == 2 && (unsigned int)(v10 - 1) <= 8 )
    {
      memmove(a2, Src, (unsigned int)(v10 - 1));
    }
    else
    {
      v6 = -1073741811;
    }
    AMLIFreeDataBuffs((__int64)v7);
  }
  return (unsigned int)v6;
}
