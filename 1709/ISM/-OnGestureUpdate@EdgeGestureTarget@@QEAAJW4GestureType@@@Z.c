/*
 * XREFs of ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x18002DC28
 * Callers:
 *     ?OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x18002D700 (-OnTouchInfo@EdgeGestureTarget@@UEAAJPEAUTouchInfo@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnEdgeGestureDetected@EdgeGestureTarget@@AEAAJXZ @ 0x18002DDC8 (-OnEdgeGestureDetected@EdgeGestureTarget@@AEAAJXZ.c)
 *     ?OnFlick@EdgeGestureTarget@@AEAAJXZ @ 0x18002E018 (-OnFlick@EdgeGestureTarget@@AEAAJXZ.c)
 *     ?OnSwipe@EdgeGestureTarget@@AEAA?AW4State@1@_NW4EdgeGestureEdges@@1H@Z @ 0x18002E110 (-OnSwipe@EdgeGestureTarget@@AEAA-AW4State@1@_NW4EdgeGestureEdges@@1H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnGestureUpdate(__int64 a1, __int16 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r9d
  _DWORD v15[10]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a1 + 40) )
    return v2;
  if ( (a2 & 0x10) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    v15[0] = 24;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v4 + 88LL))(v4, 5LL, v15);
    v2 = v5;
    if ( v5 >= 0 )
    {
      LOBYTE(v6) = 1;
      *(_DWORD *)(a1 + 40) = EdgeGestureTarget::OnSwipe(a1, v6, 4LL, 8LL, v15[3]);
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 909, v5);
    }
    if ( (v2 & 0x80000000) != 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 839, v2);
      return v2;
    }
    goto LABEL_22;
  }
  if ( (a2 & 0x20) == 0 )
  {
    if ( (a2 & 0x100) != 0 )
    {
      v11 = EdgeGestureTarget::OnFlick((EdgeGestureTarget *)a1);
      v2 = v11;
      if ( v11 < 0 )
      {
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
          return v2;
        v13 = 847;
        goto LABEL_26;
      }
    }
LABEL_22:
    if ( *(_DWORD *)(a1 + 40) != 2 )
      return v2;
    v11 = EdgeGestureTarget::OnEdgeGestureDetected((EdgeGestureTarget *)a1);
    v2 = v11;
    if ( v11 >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return v2;
    v13 = 856;
LABEL_26:
    McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, v13, v11);
    return v2;
  }
  v8 = *(_QWORD *)(a1 + 96);
  v15[0] = 24;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v8 + 88LL))(v8, 5LL, v15);
  v2 = v9;
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a1 + 40) = EdgeGestureTarget::OnSwipe(a1, 0LL, 1LL, 2LL, v15[4]);
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 931, v9);
  }
  if ( (v2 & 0x80000000) == 0 )
    goto LABEL_22;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v10, &MinInput_Warning_CheckResult, 0, 843, v2);
  return v2;
}
