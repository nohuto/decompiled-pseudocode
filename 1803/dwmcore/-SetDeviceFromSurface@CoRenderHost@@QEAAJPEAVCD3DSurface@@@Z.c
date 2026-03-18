/*
 * XREFs of ?SetDeviceFromSurface@CoRenderHost@@QEAAJPEAVCD3DSurface@@@Z @ 0x180148718
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x18005FFB0 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 *     ?BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801482F0 (-BeginRender@CoRenderHost@@QEAAJPEAUHMONITOR__@@PEAVCD3DSurface@@AEBVCMILMatrix@@AEBV-$TMilRect_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseResources@CoRenderHost@@AEAAXXZ @ 0x1801486BC (-ReleaseResources@CoRenderHost@@AEAAXXZ.c)
 */

__int64 __fastcall CoRenderHost::SetDeviceFromSurface(CoRenderHost *this, struct CD3DSurface *a2)
{
  _QWORD *v4; // r14
  __int64 v5; // rbp
  int v6; // eax
  unsigned int v7; // ebx

  if ( a2 != *((struct CD3DSurface **)this + 4) )
  {
    v4 = (_QWORD *)((char *)this + 40);
    v5 = *((_QWORD *)this + 5);
    CoRenderHost::ReleaseResources(this);
    v6 = (*(__int64 (__fastcall **)(char *, char *))(*((_QWORD *)a2 + 3) + 24LL))((char *)a2 + 24, (char *)this + 8);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x94u);
      return v7;
    }
    *((_QWORD *)this + 4) = a2;
    (**(void (__fastcall ***)(struct CD3DSurface *))a2)(a2);
    (*(void (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)a2 + 16) + 24LL))(*((_QWORD *)a2 + 16), v4);
    if ( v5 && v5 != *v4 )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 104LL))(*((_QWORD *)this + 3));
  }
  return 0;
}
