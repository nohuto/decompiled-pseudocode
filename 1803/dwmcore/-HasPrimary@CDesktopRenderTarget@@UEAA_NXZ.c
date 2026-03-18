/*
 * XREFs of ?HasPrimary@CDesktopRenderTarget@@UEAA_NXZ @ 0x180043670
 * Callers:
 *     ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180044A74 (-ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x18005BBB0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x1800C7F24 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800C7F68 (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDesktopRenderTarget::HasPrimary(CDesktopRenderTarget *this)
{
  _QWORD *v1; // rbp
  __int64 v2; // rbx
  _QWORD *v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rax
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    v4 = (_QWORD *)((char *)this + 8);
    while ( 1 )
    {
      v5 = *(_QWORD **)(*v4 + 8 * v2);
      v8 = v5;
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v5 + 216LL))(v5) )
      {
        v6 = v5[21];
        if ( *(_BYTE *)(v6 + 324) )
        {
          if ( *(_BYTE *)(v6 + 325) )
            break;
        }
      }
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 8) )
        return v1 != 0LL;
    }
    if ( (_DWORD)v2 )
    {
      DynArray<CHwndRenderTarget *,0>::Remove(v4, &v8);
      DynArray<CHwndRenderTarget *,0>::InsertAt(v4, &v8);
    }
    v1 = v8;
  }
  return v1 != 0LL;
}
