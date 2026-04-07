/*
 * XREFs of ?CloneVisualTree@CText@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001B9D0
 * Callers:
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z @ 0x180023E90 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@_N11@Z.c)
 * Callees:
 *     ??0CText@@AEAA@XZ @ 0x18001B958 (--0CText@@AEAA@XZ.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x18001C2C4 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18001C2DC (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18001C314 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x18001C34C (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18001C394 (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x18001C468 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z @ 0x18001F7D0 (-CloneVisualTree@CRenderDataVisual@@UEAAJPEAPEAVCVisual@@_N11@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180023A60 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002C850 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::CloneVisualTree(CText *this, struct CVisual **a2, bool a3, bool a4, bool a5)
{
  void *(*v9)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  CText *v10; // rax
  CText *v11; // rbx
  struct IDwmChannel *v12; // rdx
  __int64 (__fastcall *v13)(CVisual *__hidden, struct IDwmChannel *); // rax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  char v17; // al
  unsigned int v19; // [rsp+20h] [rbp-28h]

  v9 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v9 == WPF::ProcessHeapImpl::AllocClear )
    v10 = (CText *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1B0uLL);
  else
    v10 = (CText *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64))v9)(WPF::g_pProcessHeap, 432LL);
  v11 = v10;
  if ( v10 )
  {
    memset_0(v10, 0, 0x1B0uLL);
    v11 = CText::CText(v11);
  }
  if ( !v11 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x205u);
    return v15;
  }
  v12 = *(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL);
  v13 = *(__int64 (__fastcall **)(CVisual *__hidden, struct IDwmChannel *))(*(_QWORD *)v11 + 8LL);
  if ( v13 == CVisual::Initialize )
    v14 = CVisual::Initialize(v11, v12);
  else
    v14 = v13(v11, v12);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x206u);
  }
  else
  {
    *a2 = v11;
    _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    v16 = CRenderDataVisual::CloneVisualTree(this, a2, a3, a4, a5);
    v15 = v16;
    if ( v16 < 0 )
    {
      v19 = 526;
    }
    else
    {
      v16 = CText::SetText(v11, *((const unsigned __int16 **)this + 36));
      v15 = v16;
      if ( v16 >= 0 )
      {
        CText::SetFont(v11, (const struct tagLOGFONTW *)((char *)this + 296));
        CText::SetColor(v11, *((_DWORD *)this + 102));
        CText::SetBackgroundColor(v11, *((_DWORD *)this + 103));
        CText::SetRTLReading(v11, (*((_BYTE *)this + 280) & 2) != 0);
        CText::SetReverseAlignment(v11, (*((_BYTE *)this + 280) & 4) != 0);
        if ( (*((_DWORD *)this + 20) & 0x9000) == 0 )
        {
          v17 = *((_BYTE *)v11 + 280);
          *((_DWORD *)v11 + 20) &= 0xFFFF6FFF;
          *((_BYTE *)v11 + 280) ^= (*((_BYTE *)this + 280) ^ v17) & 1;
          *((_QWORD *)v11 + 50) = *((_QWORD *)this + 50);
        }
        goto LABEL_13;
      }
      v19 = 528;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v19);
  }
LABEL_13:
  CBaseObject::Release(v11);
  return v15;
}
