/*
 * XREFs of NtCompositionSetDropTarget @ 0x1C0087D80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0010728 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010B70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtCompositionSetDropTarget(void *a1, ULONG64 a2, ULONG64 a3)
{
  _QWORD *v3; // rsi
  int v4; // edi
  __int64 v5; // r8
  PVOID v6; // rbx
  _OWORD v8[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v9; // [rsp+50h] [rbp-58h]
  __int128 v10; // [rsp+58h] [rbp-50h]
  __int128 v11; // [rsp+68h] [rbp-40h]
  __int128 v12; // [rsp+78h] [rbp-30h]
  __int64 v13; // [rsp+88h] [rbp-20h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  ULONG64 v15; // [rsp+C0h] [rbp+18h]
  __int64 v16; // [rsp+C8h] [rbp+20h]

  v15 = a3;
  v3 = (_QWORD *)a3;
  v4 = 0;
  if ( a2 )
  {
    a3 = a2 + 56;
    if ( a2 + 56 < a2 || a3 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v10 = *(_OWORD *)a2;
    v11 = *(_OWORD *)(a2 + 16);
    v12 = *(_OWORD *)(a2 + 32);
    v13 = *(_QWORD *)(a2 + 48);
    v8[0] = v10;
    v8[1] = v11;
    v8[2] = v12;
    v9 = v13;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    LOBYTE(a3) = 1;
    v4 = CompositionInputObject::ResolveHandle(a1, 2LL, a3, (struct CompositionInputObject **)&Object);
    if ( v4 >= 0 )
    {
      v6 = Object;
      v16 = *((_QWORD *)Object + 2);
      v4 = CompositionInputObject::SetDropTarget(Object, (const struct COMPOSITION_INPUT_QUEUE *)v8, v5);
      ObfDereferenceObject(v6);
      if ( v4 >= 0 )
      {
        if ( v3 )
        {
          if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v3 = v16;
        }
      }
    }
  }
  return (unsigned int)v4;
}
