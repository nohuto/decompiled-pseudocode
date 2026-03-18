/*
 * XREFs of ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18002D440
 * Callers:
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z @ 0x18002D55C (-ReleaseResource@CComposition@@QEAAJPEAVCChannelContext@@IPEAVCResource@@_N@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z @ 0x18002D094 (-GetEntry@CResourceTable@@IEAAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180050F80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x180051660 (-Release@CResource@@UEAAKXZ.c)
 *     ?AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z @ 0x1800C3638 (-AddToResourceCount@@YAXAEAUProcessAttributionResourceCounters@@W4MIL_RESOURCE_TYPE@@H@Z.c)
 *     _anonymous_namespace_::AddToResourceCount @ 0x1800C3694 (_anonymous_namespace_--AddToResourceCount.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResourceTable::DeleteHandle(CResourceTable *this, unsigned int a2)
{
  struct CResourceTable::HANDLE_ENTRY *Entry; // rax
  unsigned int v5; // r10d
  struct CResourceTable::HANDLE_ENTRY *v6; // rbx
  unsigned int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // r8d
  CResource *v10; // rcx
  void (*v11)(void); // rax

  Entry = CResourceTable::GetEntry(this, a2);
  v6 = Entry;
  if ( Entry )
  {
    v7 = *(_DWORD *)Entry;
    if ( v7 )
    {
      if ( *((_QWORD *)v6 + 1) )
      {
        v8 = AddToResourceCount(*((_QWORD *)this + 7) + 44LL, v7, 0xFFFFFFFFLL);
        anonymous_namespace_::AddToResourceCount(v8, v9);
        v10 = (CResource *)*((_QWORD *)v6 + 1);
        v11 = *(void (**)(void))(*(_QWORD *)v10 + 16LL);
        if ( (char *)v11 == (char *)CResource::Release )
        {
          CResource::Release(v10);
        }
        else if ( (char *)v11 == (char *)CVisual::Release )
        {
          CVisual::Release(v10);
        }
        else
        {
          v11();
        }
        *((_QWORD *)v6 + 1) = 0LL;
      }
      memset_0((void *)(*((_QWORD *)this + 5) + a2 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
      return 0;
    }
  }
  return v5;
}
