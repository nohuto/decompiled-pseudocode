/*
 * XREFs of ParseDLMObjectInternal @ 0x1C005D8E4
 * Callers:
 *     PerformDLMObjectBindings @ 0x1C005DA84 (PerformDLMObjectBindings.c)
 * Callees:
 *     DupObjData @ 0x1C00078C0 (DupObjData.c)
 *     FreeDataBuffs @ 0x1C000CD00 (FreeDataBuffs.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 */

__int64 __fastcall ParseDLMObjectInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  char v7; // r14
  __int64 v8; // rbx
  unsigned int NameSpaceObject; // edi
  __int16 v10; // ax
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v13[2]; // [rsp+28h] [rbp-D8h] BYREF
  signed __int64 v14; // [rsp+48h] [rbp-B8h]
  __int64 v15; // [rsp+160h] [rbp+60h] BYREF

  v4 = gpheapGlobal;
  v12 = 0LL;
  v15 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( *(_WORD *)(a3 + 2) != 2 )
    return (unsigned int)-1072431089;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a3 + 32), a2, (__int64)&v15, 0);
  if ( NameSpaceObject )
    goto LABEL_18;
  v8 = *(_QWORD *)(v15 + 96);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 0, 0) )
  {
    if ( !a4 )
      goto LABEL_16;
    v10 = *(_WORD *)(a4 + 2);
    if ( v10 != 3 )
    {
      if ( v10 != 2
        || (unsigned int)GetNameSpaceObject(*(_BYTE **)(a4 + 32), a2, (__int64)&v12, 0)
        || (a4 = v12 + 64, *(_WORD *)(v12 + 66) != 3) )
      {
        NameSpaceObject = -1072431089;
        goto LABEL_19;
      }
    }
    if ( a4 )
    {
      if ( !(unsigned int)DupObjData(v4, (__int64)v13, a4) )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 72), v14, 0LL) )
        {
          v7 = 1;
        }
        else
        {
          *(_OWORD *)(v8 + 40) = v13[0];
          *(_OWORD *)(v8 + 56) = v13[1];
          *(_QWORD *)(v8 + 72) = v14;
          _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 2, 0);
        }
      }
    }
    else
    {
LABEL_16:
      _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 1, 0);
    }
    NameSpaceObject = 0;
LABEL_18:
    if ( NameSpaceObject != -1072431089 )
    {
LABEL_21:
      if ( v7 )
        FreeDataBuffs((__int64)v13, 1u);
      goto LABEL_23;
    }
LABEL_19:
    if ( v8 )
    {
      _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 32), 1, 0);
      NameSpaceObject = 0;
    }
    goto LABEL_21;
  }
LABEL_23:
  if ( v15 )
    DereferenceObjectEx(v15);
  if ( v12 )
    DereferenceObjectEx(v12);
  return NameSpaceObject;
}
