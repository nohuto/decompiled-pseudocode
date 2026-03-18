/*
 * XREFs of ?AddSyncObject@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C016C6F0
 * Callers:
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z @ 0x1C016CA6C (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::AddSyncObject(ADAPTER_RENDER *this, struct DXGADAPTERSYNCOBJECT *a2)
{
  struct _KTHREAD **v2; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rbx
  __int64 v9; // rax

  v2 = (struct _KTHREAD **)((char *)this + 152);
  DXGFASTMUTEX::Acquire((ADAPTER_RENDER *)((char *)this + 152));
  v8 = (char *)this + 192;
  v9 = *(_QWORD *)v8;
  if ( *(char **)(*(_QWORD *)v8 + 8LL) != v8 )
    __fastfail(3u);
  *(_QWORD *)a2 = v9;
  *((_QWORD *)a2 + 1) = v8;
  *(_QWORD *)(v9 + 8) = a2;
  *(_QWORD *)v8 = a2;
  DXGFASTMUTEX::Release(v2, v5, v6, v7);
}
