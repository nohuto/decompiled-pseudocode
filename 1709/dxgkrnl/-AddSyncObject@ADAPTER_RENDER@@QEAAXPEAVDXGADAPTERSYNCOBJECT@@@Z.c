/*
 * XREFs of ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C0170030
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C0170208 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::AddSyncObject(ADAPTER_RENDER *this, struct DXGADAPTERSYNCOBJECT *a2)
{
  struct _KTHREAD **v2; // rsi
  char *v5; // rbx
  __int64 v6; // rax

  v2 = (struct _KTHREAD **)((char *)this + 152);
  DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 152));
  v5 = (char *)this + 192;
  v6 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *(_QWORD *)a2 = v6;
  *((_QWORD *)a2 + 1) = v5;
  *(_QWORD *)(v6 + 8) = a2;
  *(_QWORD *)v5 = a2;
  DXGFASTMUTEX::Release(v2);
}
