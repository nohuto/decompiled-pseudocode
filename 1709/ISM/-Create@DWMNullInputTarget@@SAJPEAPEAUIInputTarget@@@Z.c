/*
 * XREFs of ?Create@DWMNullInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x1800226D8
 * Callers:
 *     ?CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x18001608C (-CreateRoutingTarget@GestureTargetingTarget@@AEAAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001CC60 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0PropertyMap@Input@@QEAA@XZ @ 0x180016B84 (--0PropertyMap@Input@@QEAA@XZ.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMNullInputTarget::Create(struct IInputTarget **a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rbx

  v2 = 0;
  v3 = malloc(0x60uLL);
  v5 = v3;
  if ( v3 )
    memset(v3, 0, 0x60uLL);
  if ( v5 )
  {
    v5[3] = &RefCountedObject::`vftable';
    *((_DWORD *)v5 + 8) = 1;
    *v5 = &DWMNullInputTarget::`vftable'{for `IInputTarget'};
    v5[1] = &DWMNullInputTarget::`vftable'{for `IInputTarget2'};
    v5[2] = &DWMNullInputTarget::`vftable'{for `IDCompInputTarget'};
    v5[3] = &DWMNullInputTarget::`vftable'{for `RefCountedObject'};
    Input::PropertyMap::PropertyMap((Input::PropertyMap *)(v5 + 5));
    *((_DWORD *)v5 + 22) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v2 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v4, &MinInput_Warning_CheckResult, 4, 33, 14);
  }
  *a1 = (struct IInputTarget *)v5;
  return v2;
}
