/*
 * XREFs of ?FindEdge@Edges@@AEAAHPEBG@Z @ 0x1800688D4
 * Callers:
 *     ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x180066710 (-OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x18006839C (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800686C0 (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x18006871C (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x180068790 (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1800687F4 (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x180068864 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z @ 0x180068B28 (-FindEdge@Edges@@AEAAHAEBUCandidateIdentity@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Edges::FindEdge(Edges *this, const unsigned __int16 *a2)
{
  __int64 v4; // r9
  unsigned int v5; // edi
  __int64 i; // rbp
  _QWORD *v7; // rcx

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( !*a2 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)this;
  v5 = 0;
  if ( (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 96LL) <= 0 )
    return 0xFFFFFFFFLL;
  for ( i = 0LL; ; i += 96LL )
  {
    v7 = (_QWORD *)(v4 + i + 8);
    if ( v7[3] >= 8uLL )
      v7 = (_QWORD *)*v7;
    if ( !(unsigned int)_o__wcsicmp(v7, a2) )
      break;
    v4 = *(_QWORD *)this;
    if ( (int)++v5 >= (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 96LL) )
      return 0xFFFFFFFFLL;
  }
  return v5;
}
