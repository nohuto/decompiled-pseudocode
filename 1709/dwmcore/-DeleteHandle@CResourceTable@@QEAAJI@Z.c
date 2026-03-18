/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800AA4CC
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x1800AAAD8 (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x1800AA1B4 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800BB6E4 (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v5; // r10d
  struct CResourceTable::HANDLE_ENTRY *v6; // rbx
  __int64 v7; // rdx
  CResource *v8; // rcx
  void (*v9)(void); // rax

  Entry = CResourceTable::GetEntry(this, a2);
  v6 = Entry;
  if ( Entry )
  {
    v7 = *(unsigned int *)Entry;
    if ( (_DWORD)v7 )
    {
      if ( *((_QWORD *)Entry + 1) )
      {
        v8 = *(CResource **)(AddToResourceCount(*((_QWORD *)this + 7) + 44LL, v7, 0xFFFFFFFFLL) + 8);
        v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
        if ( (char *)v9 == (char *)CResource::Release )
        {
          CResource::Release(v8);
        }
        else if ( (char *)v9 == (char *)CVisual::Release )
        {
          CVisual::Release(v8);
        }
        else
        {
          v9();
        }
        *((_QWORD *)v6 + 1) = 0LL;
      }
      memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
      return 0;
    }
  }
  return v5;
}
