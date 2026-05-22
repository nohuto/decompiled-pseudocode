/*
 * XREFs of ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x1800B445C
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x1800B41B8 (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x1800B4510 (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 *     atan2f_0 @ 0x1800E31ED (atan2f_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnFlick(EdgyProcessorTarget *this)
{
  int v2; // ebp
  __int64 v3; // rdx
  float v4; // xmm0_4
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+24h] [rbp-14h]
  int v9; // [rsp+28h] [rbp-10h]

  v7 = 12;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 17) + 88LL))(
         *((_QWORD *)this + 17),
         7LL,
         &v7);
  if ( v2 >= 0 && (v8 || v9) )
  {
    v4 = atan2f_0((float)v9, (float)v8);
    if ( (v4 < 0.78539819 || v4 > 2.3561945) && (v4 < -2.3561945 || v4 > -0.78539819) )
    {
      v5 = (unsigned int)v8;
      LOBYTE(v3) = 1;
    }
    else
    {
      v5 = (unsigned int)v9;
      v3 = 0LL;
    }
    *((_DWORD *)this + 8) = EdgyProcessorTarget::OnSwipe(this, v3, v5);
  }
  return (unsigned int)v2;
}
