/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18009B8F0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Render@CHWCallbackRenderer@@UEAAJXZ @ 0x180058640 (-Render@CHWCallbackRenderer@@UEAAJXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D124 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

CDrawListCache *__fastcall CDrawListCache::`scalar deleting destructor'(CDrawListCache *this, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  CMILRefCountBase *v6; // rcx
  void (*v7)(void); // rax
  void *v8; // r8
  LPVOID Value; // rbx
  _QWORD *v11; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  for ( *(_QWORD *)this = &CDrawListCache::`vftable'; v4 < *((_DWORD *)this + 10); ++v4 )
  {
    v5 = *((_QWORD *)this + 4);
    v6 = *(CMILRefCountBase **)(v5 + 8LL * v4);
    if ( v6 )
    {
      v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
      if ( (char *)v7 == (char *)CMILRefCountBase::Release )
        CMILRefCountBase::Release(v6);
      else
        v7();
      *(_QWORD *)(v5 + 8LL * v4) = 0LL;
    }
  }
  v8 = (void *)*((_QWORD *)this + 4);
  if ( v8 )
    HeapFree(WPF::g_processHeap, 0, v8);
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 10) = 0;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v11 = operator new(0xF8uLL);
        Value = v11;
        if ( v11 )
        {
          *v11 = 0LL;
          v11[1] = 0LL;
          v11[2] = 0LL;
          v11[3] = 0LL;
          v11[4] = 0LL;
          v11[5] = 0LL;
          v11[6] = 0LL;
          v11[7] = 0LL;
          v11[8] = 0LL;
          v11[9] = 0LL;
          v11[10] = 0LL;
          v11[11] = 0LL;
          v11[12] = 0LL;
          v11[13] = 0LL;
          v11[14] = 0LL;
          v11[15] = 0LL;
          v11[16] = 0LL;
          v11[17] = 0LL;
          v11[18] = 0LL;
          v11[19] = 0LL;
          v11[20] = 0LL;
          v11[21] = 0LL;
          v11[22] = 0LL;
          v11[23] = 0LL;
          v11[24] = 0LL;
          v11[25] = 0LL;
          v11[26] = 0LL;
          v11[27] = 0LL;
          v11[28] = 0LL;
          v11[29] = 0LL;
          v11[30] = 0LL;
        }
        else
        {
          Value = 0LL;
        }
        if ( !Value )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x42u);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
      }
      if ( *((_DWORD *)Value + 11) >= *((_DWORD *)Value + 10) )
      {
        HeapFree(WPF::g_processHeap, 0, this);
      }
      else
      {
        *(_QWORD *)this = *((_QWORD *)Value + 6);
        ++*((_DWORD *)Value + 11);
        *((_QWORD *)Value + 6) = this;
      }
    }
  }
  return this;
}
