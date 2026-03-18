/*
 * XREFs of NtCompositionSetDropTarget @ 0x1C008D770
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00217C8 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0151770 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtCompositionSetDropTarget(void *a1, ULONG64 a2, _QWORD *a3)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r9
  PVOID v7; // rbx
  _OWORD v9[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+50h] [rbp-58h]
  __int128 v11; // [rsp+58h] [rbp-50h]
  __int128 v12; // [rsp+68h] [rbp-40h]
  __int128 v13; // [rsp+78h] [rbp-30h]
  __int64 v14; // [rsp+88h] [rbp-20h]
  PVOID Object; // [rsp+B8h] [rbp+10h] BYREF
  _QWORD *v16; // [rsp+C0h] [rbp+18h]
  __int64 v17; // [rsp+C8h] [rbp+20h]

  v16 = a3;
  v4 = 0;
  if ( a2 )
  {
    if ( a2 + 56 < a2 || a2 + 56 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v11 = *(_OWORD *)a2;
    v12 = *(_OWORD *)(a2 + 16);
    v13 = *(_OWORD *)(a2 + 32);
    v14 = *(_QWORD *)(a2 + 48);
    v9[0] = v11;
    v9[1] = v12;
    v9[2] = v13;
    v10 = v14;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    v4 = CompositionInputObject::ResolveHandle(a1, 2u, 1, (struct CompositionInputObject **)&Object);
    if ( v4 >= 0 )
    {
      v7 = Object;
      v17 = *((_QWORD *)Object + 2);
      v4 = CompositionInputObject::SetDropTarget(Object, (const struct COMPOSITION_INPUT_QUEUE *)v9, v5, v6);
      ObfDereferenceObject(v7);
      if ( v4 >= 0 )
      {
        if ( a3 )
        {
          if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a3 = v17;
        }
      }
    }
  }
  return (unsigned int)v4;
}
