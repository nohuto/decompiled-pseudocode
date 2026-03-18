/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18005B4EC
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18005BAA0 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CResource@@UEAAKXZ @ 0x180034460 (-Release@CResource@@UEAAKXZ.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18005B24C (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v5; // r10d
  struct CResourceTable::HANDLE_ENTRY *v6; // rbx
  CResource *v7; // rcx
  void (*v8)(void); // rax

  Entry = CResourceTable::GetEntry(this, a2);
  v6 = Entry;
  if ( Entry && *(_DWORD *)Entry )
  {
    v7 = (CResource *)*((_QWORD *)Entry + 1);
    if ( v7 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
      if ( (char *)v8 == (char *)CResource::Release )
      {
        CResource::Release(v7);
      }
      else if ( (char *)v8 == (char *)CVisual::Release )
      {
        CVisual::Release(v7);
      }
      else
      {
        v8();
      }
      *((_QWORD *)v6 + 1) = 0LL;
    }
    memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
    return 0;
  }
  return v5;
}
