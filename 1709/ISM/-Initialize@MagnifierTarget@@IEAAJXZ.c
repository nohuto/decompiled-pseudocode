/*
 * XREFs of ?Initialize@MagnifierTarget@@IEAAJXZ @ 0x1800A610C
 * Callers:
 *     ?OnHitTest@MagnifierComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x1800A58D0 (-OnHitTest@MagnifierComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInp.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z @ 0x1800438DC (-GestureRecognizerCreate@@YAJPEAPEAUIGestureRecognizer@@@Z.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x18007203C (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     ?IsOobeDone@MagnifierTarget@@SAKXZ @ 0x1800A6530 (-IsOobeDone@MagnifierTarget@@SAKXZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MagnifierTarget::Initialize(MagnifierTarget *this)
{
  TouchInfoAdapter *v2; // rax
  __int64 v3; // rcx
  TouchInfoAdapter *v4; // rbx
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx

  v2 = (TouchInfoAdapter *)malloc(0x2D0uLL);
  v4 = v2;
  if ( v2 )
    memset(v2, 0, 0x2D0uLL);
  if ( v4 )
    v4 = TouchInfoAdapter::TouchInfoAdapter(
           v4,
           (struct ITouchInfoAdapterClient *)(((unsigned __int64)this + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
  if ( *((TouchInfoAdapter **)this + 7) != v4 )
  {
    if ( v4 )
      (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 7) = v4;
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( *((_QWORD *)this + 7) )
  {
    v6 = malloc(0x70uLL);
    v8 = v6;
    if ( v6 )
      memset(v6, 0, 0x70uLL);
    if ( v8 )
    {
      v9 = *((_QWORD *)this + 7);
      v8[26] = 0;
      *((_WORD *)v8 + 54) = 0;
      *(_QWORD *)v8 = &RefCountedObject::`vftable';
      *((_QWORD *)v8 + 2) = v9;
      v8[2] = 1;
      *(_QWORD *)v8 = &SessionBasedPointerDeviceArbitration::`vftable';
      memset(v8 + 6, 0, 0x50uLL);
    }
    if ( *((_DWORD **)this + 6) != v8 )
    {
      if ( v8 )
        (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
      v7 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = v8;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( *((_QWORD *)this + 6) )
    {
      v10 = *((_QWORD *)this + 8);
      if ( v10 )
      {
        *((_QWORD *)this + 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = GestureRecognizerCreate((struct IGestureRecognizer **)this + 8);
      v5 = v11;
      if ( v11 >= 0 )
      {
        if ( !MagnifierTarget::IsOobeDone() )
        {
          v13 = RtlSubscribeWnfStateChangeNotification(
                  (char *)this + 88,
                  WNF_OOBE_SHL_MAGNIFIER_CONFIRM,
                  0LL,
                  MagnifierTarget::MagnifierOobeConfirmCallback,
                  this,
                  0LL,
                  0,
                  0);
          if ( v13 < 0 )
          {
            v5 = v13 | 0x10000000;
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
              McTemplateU0qqq(v14, &MinInput_Warning_CheckResult, 0, 78, v13);
          }
        }
      }
      else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        McTemplateU0qqq(v12, &MinInput_Warning_CheckResult, 0, 60, v11);
      }
    }
    else
    {
      v5 = -2147024882;
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        McTemplateU0qqq(v7, &MinInput_Warning_CheckResult, 0, 57, 14);
    }
  }
  else
  {
    v5 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 50, 14);
  }
  return v5;
}
