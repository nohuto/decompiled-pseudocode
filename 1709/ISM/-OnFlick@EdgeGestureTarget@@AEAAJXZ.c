/*
 * XREFs of ?OnFlick@EdgeGestureTarget@@AEAAJXZ @ 0x18002E018
 * Callers:
 *     ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x18002DC28 (-OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnSwipe@EdgeGestureTarget@@AEAA?AW4State@1@_NW4EdgeGestureEdges@@1H@Z @ 0x18002E110 (-OnSwipe@EdgeGestureTarget@@AEAA-AW4State@1@_NW4EdgeGestureEdges@@1H@Z.c)
 *     atan2f_0 @ 0x1800CC34D (atan2f_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::OnFlick(EdgeGestureTarget *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebp
  int v5; // ebx
  int v6; // edi
  __int64 v7; // rdx
  float v8; // xmm0_4
  int v9; // eax
  int v11; // [rsp+30h] [rbp-18h] BYREF
  int v12; // [rsp+34h] [rbp-14h]
  int v13; // [rsp+38h] [rbp-10h]

  v11 = 12;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 12) + 88LL))(
         *((_QWORD *)this + 12),
         7LL,
         &v11);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = v12;
    v6 = v13;
    if ( v12 || v13 )
    {
      v8 = atan2f_0((float)v13, (float)v12);
      if ( (v8 < 0.78539819 || v8 > 2.3561945) && (v8 < -2.3561945 || v8 > -0.78539819) )
      {
        LOBYTE(v7) = 1;
        v9 = EdgeGestureTarget::OnSwipe(this, v7, 4LL, 8LL, v5);
      }
      else
      {
        v9 = EdgeGestureTarget::OnSwipe(this, 0LL, 1LL, 2LL, v6);
      }
      *((_DWORD *)this + 10) = v9;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 953, v2);
  }
  return v4;
}
