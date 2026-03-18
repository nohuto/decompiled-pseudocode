/*
 * XREFs of ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180009C14
 * Callers:
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageSource@@020PEAPEAVCResource@@0PEAPEAV1@@Z @ 0x180009990 (-Create@CPrimitiveGroupDrawListGenerator@@SAJ_KPEAUID2D1PrivateCompositorBuffer@@1PEAPEAVIImageS.c)
 * Callees:
 *     ?GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ @ 0x1800AECB0 (-GetBufferPointer@CD2DSharedBuffer@@UEAAPEAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommandBuffer::Initialize(CCommandBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v4; // eax
  SIZE_T v5; // rax
  unsigned __int64 v6; // kr00_8
  LPVOID v7; // rax
  void *(__fastcall *v8)(CD2DSharedBuffer *__hidden); // rax
  void *BufferPointer; // rax
  const void *v10; // rdi
  unsigned int v11; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)this + 2) = v4 / 0x90;
  v6 = v4 / 0x90;
  v5 = 144 * v6;
  if ( !is_mul_ok(v6, 0x90uLL) )
    v5 = -1LL;
  if ( !v5 )
    v5 = 1LL;
  v7 = HeapAlloc(WPF::g_processHeap, 0, v5);
  if ( !v7 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  *(_QWORD *)this = v7;
  v8 = *(void *(__fastcall **)(CD2DSharedBuffer *__hidden))(*(_QWORD *)a2 + 24LL);
  if ( v8 == CD2DSharedBuffer::GetBufferPointer )
    BufferPointer = CD2DSharedBuffer::GetBufferPointer(a2);
  else
    BufferPointer = v8(a2);
  v10 = BufferPointer;
  v11 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  memcpy_0(*(void **)this, v10, v11);
  return 0LL;
}
