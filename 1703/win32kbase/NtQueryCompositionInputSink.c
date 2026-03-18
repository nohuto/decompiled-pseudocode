/*
 * XREFs of NtQueryCompositionInputSink @ 0x1C000C650
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C0010568 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010B70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, CTouchProcessor *a2, __int64 a3)
{
  CTouchProcessor *v3; // rdi
  int InputQueueTypes; // ebx
  CTouchProcessor *v6; // rcx
  CTouchProcessor *v7; // rcx
  CTouchProcessor *v8; // rcx
  __int128 v10; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+70h] [rbp+18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2;
  InputQueueTypes = 0;
  if ( !(unsigned int)UserIsCurrentProcessDwm(a1, a2, a3) )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes >= 0 )
  {
    v6 = v3;
    if ( v3 >= W32UserProbeAddress )
      v6 = W32UserProbeAddress;
    v12 = *(_DWORD *)v6;
    if ( *(_DWORD *)v6 == 20 )
    {
      v8 = v3;
      if ( v3 >= W32UserProbeAddress )
        v8 = W32UserProbeAddress;
      v10 = *(_OWORD *)v8;
      v11 = *((unsigned int *)v8 + 4);
    }
    else if ( *(_DWORD *)v6 == 24 )
    {
      v7 = v3;
      if ( v3 >= W32UserProbeAddress )
        v7 = W32UserProbeAddress;
      v10 = *(_OWORD *)v7;
      v11 = *((_QWORD *)v7 + 2);
    }
    else
    {
      InputQueueTypes = -1073741811;
    }
    if ( InputQueueTypes >= 0 )
    {
      InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
      if ( InputQueueTypes >= 0 )
      {
        InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                            (CompositionInputObject *)Object,
                            (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v10);
        ObfDereferenceObject(Object);
      }
      if ( InputQueueTypes >= 0 )
      {
        if ( v12 == 20 )
        {
          if ( v3 >= W32UserProbeAddress )
            v3 = W32UserProbeAddress;
          *(_OWORD *)v3 = v10;
          *((_DWORD *)v3 + 4) = v11;
        }
        else if ( v12 == 24 )
        {
          if ( v3 >= W32UserProbeAddress )
            v3 = W32UserProbeAddress;
          *(_OWORD *)v3 = v10;
          *((_QWORD *)v3 + 2) = v11;
        }
      }
    }
  }
  return (unsigned int)InputQueueTypes;
}
