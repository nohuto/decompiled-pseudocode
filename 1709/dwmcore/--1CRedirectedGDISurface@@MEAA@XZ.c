/*
 * XREFs of ??1CRedirectedGDISurface@@MEAA@XZ @ 0x18007F368
 * Callers:
 *     ??_ECRedirectedGDISurface@@MEAAPEAXI@Z @ 0x18007F110 (--_ECRedirectedGDISurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CRedirectedGDISurface::~CRedirectedGDISurface(CRedirectedGDISurface *this)
{
  bool v1; // zf
  __int64 v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rax
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_BYTE *)this + 41) == 0;
  *(_QWORD *)this = &CRedirectedGDISurface::`vftable';
  if ( !v1 )
    DwmHLSurfCloseCompositorRef(*((_QWORD *)this + 3));
  if ( *((_BYTE *)this + 40) )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = *((_QWORD *)this + 4);
    Buffer[0] = *((_QWORD *)this + 3);
    v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(v3 + 8), Buffer);
    if ( v5 )
    {
      if ( v5[2] == v4 )
        RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)(v3 + 8), v5);
    }
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
