/*
 * XREFs of ?FreezeTextures@CHolographicClient@@AEAAXXZ @ 0x1801A7BC8
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJI@Z @ 0x1801A7AB0 (-FrameUpdate@CHolographicClient@@UEAAJI@Z.c)
 *     ?ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z @ 0x1801A8700 (-ProcessSetActiveExclusiveView@CHolographicClient@@AEAAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::FreezeTextures(CHolographicClient *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  }
}
