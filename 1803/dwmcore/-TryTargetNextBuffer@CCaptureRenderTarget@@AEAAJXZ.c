/*
 * XREFs of ?TryTargetNextBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180156994
 * Callers:
 *     ?Render@CCaptureRenderTarget@@UEAAJPEA_N@Z @ 0x180156620 (-Render@CCaptureRenderTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800C53F0 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ @ 0x180155B14 (-CreateRenderTargetForFrameBuffer@CCaptureRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ @ 0x180156508 (-ReleaseRenderingResources@CCaptureRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::TryTargetNextBuffer(CCaptureRenderTarget *this)
{
  const HANDLE *v1; // rdx
  unsigned int v2; // edi
  __int64 v4; // rax
  DWORD v5; // eax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdi
  int RenderTargetForFrameBuffer; // eax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (const HANDLE *)*((_QWORD *)this + 70);
  v2 = 0;
  v4 = (__int64)(*((_QWORD *)this + 71) - (_QWORD)v1) >> 3;
  if ( v4 )
  {
    v5 = WaitForMultipleObjects(v4, v1, 0, 0);
    if ( v5 == 258 )
    {
      ScheduleCompositionPass(0, 0x2000u);
    }
    else
    {
      v7 = *((_QWORD *)this + 64);
      if ( v5 >= (unsigned __int64)((*((_QWORD *)this + 65) - v7) >> 3) )
        ModuleFailFastForHRESULT(-2147467259, retaddr);
      v8 = *(_QWORD *)(v7 + 8LL * v5);
      v9 = *((_QWORD *)this + 57);
      *((_QWORD *)this + 57) = v8;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      RenderTargetForFrameBuffer = CCaptureRenderTarget::CreateRenderTargetForFrameBuffer(this);
      v2 = RenderTargetForFrameBuffer;
      if ( RenderTargetForFrameBuffer < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, RenderTargetForFrameBuffer, 0x23Eu);
      if ( v2 == -2003304307 )
        CCaptureRenderTarget::ReleaseRenderingResources((__int64 **)this);
    }
  }
  return v2;
}
