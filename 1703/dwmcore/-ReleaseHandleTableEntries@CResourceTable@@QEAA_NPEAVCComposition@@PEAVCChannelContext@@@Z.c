/*
 * XREFs of ?ReleaseHandleTableEntries@CResourceTable@@QEAA_NPEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18005B46C
 * Callers:
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18005BFB0 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 * Callees:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18005BAA0 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 */

char __fastcall CResourceTable::ReleaseHandleTableEntries(
        CResourceTable *this,
        struct CComposition *a2,
        struct CChannelContext *a3)
{
  char v3; // dl
  unsigned int i; // ebx
  __int64 v7; // rax
  CComposition *v8; // rcx
  struct CResource *v10; // r9

  v3 = 0;
  for ( i = 0; i < *((_DWORD *)this + 7); ++i )
  {
    if ( i && i < *((_DWORD *)this + 7) && (v7 = *((_QWORD *)this + 5), *(_DWORD *)(i * *((_DWORD *)this + 6) + v7)) )
      v8 = (CComposition *)(v7 + i * *((_DWORD *)this + 6));
    else
      v8 = 0LL;
    if ( v8 )
    {
      v10 = (struct CResource *)*((_QWORD *)v8 + 1);
      if ( v10 )
      {
        CComposition::ReleaseResource(v8, a3, i, v10, 1);
        v3 = 1;
      }
    }
  }
  return v3;
}
