/*
 * XREFs of ?Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@_KPEAXPEAPEAV1@@Z @ 0x18002CE3C
 * Callers:
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x18002A330 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUI.c)
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18002A6A0 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorIn.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0EdgeGestureTarget@@IEAA@PEAVEdgeGestureComponent@@@Z @ 0x18002C96C (--0EdgeGestureTarget@@IEAA@PEAVEdgeGestureComponent@@@Z.c)
 *     ?Initialize@EdgeGestureTarget@@IEAAJ_KPEAX@Z @ 0x18002CBFC (-Initialize@EdgeGestureTarget@@IEAAJ_KPEAX@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EdgeGestureTarget::Create(
        struct EdgeGestureComponent *a1,
        unsigned __int64 a2,
        void *a3,
        struct EdgeGestureTarget **a4)
{
  int v8; // ebx
  int v9; // r9d
  EdgeGestureTarget *v10; // rax
  __int64 v11; // rcx
  EdgeGestureTarget *v12; // rbx
  EdgeGestureTarget *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx

  if ( a1 )
  {
    if ( a4 )
    {
      v10 = (EdgeGestureTarget *)malloc(0x78uLL);
      v12 = v10;
      if ( v10 )
        memset(v10, 0, 0x78uLL);
      if ( v12 )
        v13 = EdgeGestureTarget::EdgeGestureTarget(v12, a1);
      else
        v13 = 0LL;
      if ( v13 )
      {
        v14 = EdgeGestureTarget::Initialize(v13, a2, a3);
        v8 = v14;
        if ( v14 >= 0 )
        {
          *a4 = v13;
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          McTemplateU0qqq(v15, &MinInput_Warning_CheckResult, 0, 81, v14);
        }
        if ( v8 < 0 )
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v13 + 3) + 24LL))((__int64)v13 + 24, 1LL);
      }
      else
      {
        v8 = -2147024882;
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 79, 14);
      }
    }
    else
    {
      v8 = -2147024809;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v9 = 76;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v8 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v9 = 75;
LABEL_4:
      McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v9, 87);
    }
  }
  return (unsigned int)v8;
}
