/*
 * XREFs of ?ValidateVisual@CText@@UEAAJXZ @ 0x18001C240
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001BCAC (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18001F350 (-UpdateRenderData@CRenderDataVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180024270 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CText::ValidateVisual(CText *this)
{
  int v2; // eax
  int v3; // ebx
  __int64 (__fastcall *v4)(CRenderDataVisual *__hidden); // rax
  int updated; // eax
  int v7; // eax

  if ( (*((_BYTE *)this + 80) & 2) != 0 || (v7 = CText::ValidateResources(this), v3 = v7, v7 >= 0) )
  {
    v2 = CVisual::ValidateVisual(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x94u);
    }
    else if ( (*((_BYTE *)this + 80) & 4) != 0 )
    {
      v4 = *(__int64 (__fastcall **)(CRenderDataVisual *__hidden))(*(_QWORD *)this + 176LL);
      if ( v4 == CRenderDataVisual::UpdateRenderData )
        updated = CRenderDataVisual::UpdateRenderData(this);
      else
        updated = v4(this);
      v3 = updated;
      if ( updated < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x98u);
      else
        *((_DWORD *)this + 20) &= ~4u;
    }
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xF6u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xF4u);
  }
  return (unsigned int)v3;
}
