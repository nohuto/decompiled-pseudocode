/*
 * XREFs of ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180009B68
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180009990 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 * Callees:
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x1800AECB0 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveBuffer::Initialize(CPrimitiveBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v4; // eax
  SIZE_T v5; // r8
  LPVOID v6; // rax
  void *(__fastcall *v7)(CD2DSharedBuffer *__hidden); // rax
  void *BufferPointer; // rax
  const void *v9; // rdi
  unsigned int v10; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  v5 = v4;
  *((_DWORD *)this + 2) = v4;
  if ( !v4 )
    v5 = 1LL;
  v6 = HeapAlloc(WPF::g_processHeap, 0, v5);
  if ( !v6 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *(_QWORD *)this = v6;
  v7 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)a2 + 24LL);
  if ( v7 == CD2DSharedBuffer::GetBufferPointer )
    BufferPointer = CD2DSharedBuffer::GetBufferPointer(a2);
  else
    BufferPointer = v7(a2);
  v9 = BufferPointer;
  v10 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  memcpy_0(*(void **)this, v9, v10);
  return 0LL;
}
