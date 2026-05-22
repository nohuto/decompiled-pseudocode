/*
 * XREFs of ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1800B41B8
 * Callers:
 *     ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x1800B3F20 (-OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     ?OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ @ 0x1800B4280 (-OnEdgeGestureDetected@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1800B445C (-OnFlick@EdgyProcessorTarget@@AEAAJXZ.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1800B4510 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnGestureUpdate(__int64 a1, __int16 a2)
{
  int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  bool v7; // sf
  __int64 v8; // rcx
  _DWORD v10[10]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a1 + 32) )
    return (unsigned int)v2;
  if ( (a2 & 0x10) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 136);
    v10[0] = 24;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v4 + 88LL))(v4, 5LL, v10);
    if ( v2 < 0 )
    {
LABEL_6:
      v7 = v2 < 0;
      goto LABEL_12;
    }
    v6 = v10[3];
    LOBYTE(v5) = 1;
LABEL_5:
    *(_DWORD *)(a1 + 32) = EdgyProcessorTarget::OnSwipe(a1, v5, v6);
    goto LABEL_6;
  }
  if ( (a2 & 0x20) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 136);
    v10[0] = 24;
    v2 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v8 + 88LL))(v8, 5LL, v10);
    if ( v2 < 0 )
      goto LABEL_6;
    v6 = v10[4];
    v5 = 0LL;
    goto LABEL_5;
  }
  if ( (a2 & 0x100) != 0 )
  {
    v2 = EdgyProcessorTarget::OnFlick((EdgyProcessorTarget *)a1);
    v7 = v2 < 0;
LABEL_12:
    if ( v7 )
      return (unsigned int)v2;
  }
  if ( *(_DWORD *)(a1 + 32) == 2 )
    return (unsigned int)EdgyProcessorTarget::OnEdgeGestureDetected((EdgyProcessorTarget *)a1);
  return (unsigned int)v2;
}
