/*
 * XREFs of ?EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0159BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     OpenDwmHandle @ 0x1C0011FF8 (OpenDwmHandle.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CCaptureRenderTargetMarshaler::EmitBuffers(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int i; // ecx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  bool v7; // zf
  void *v8; // rax
  unsigned __int64 v9; // rsi
  char *v10; // r15
  unsigned int v11; // ebp
  __int64 v12; // rbx
  struct _OBJECT_TYPE *v13; // rax
  int v15; // [rsp+20h] [rbp-38h]
  void *v16; // [rsp+60h] [rbp+8h] BYREF
  void *v17; // [rsp+70h] [rbp+18h] BYREF

  for ( i = *((_DWORD *)this + 4); ; i = *((_DWORD *)this + 4) )
  {
    v5 = *((_QWORD *)this + 7);
    if ( (i & 0x100) == 0 )
    {
      v6 = *((_QWORD *)this + 8);
      v7 = v5 == v6;
      if ( v5 >= v6 )
        break;
    }
    v8 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v16 = v8;
    if ( (unsigned __int64)v8 < 0x18 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v16) )
        return *((_QWORD *)this + 7) == *((_QWORD *)this + 8);
      v8 = v16;
    }
    v9 = *((_QWORD *)this + 8) - *((_QWORD *)this + 7);
    if ( v9 >= ((unsigned __int64)v8 - 16) >> 3 )
      v9 = ((unsigned __int64)v8 - 16) >> 3;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, 8 * v9 + 16, &v17);
    v10 = (char *)v17;
    *(_DWORD *)v17 = 8 * v9 + 16;
    *(_QWORD *)(v10 + 4) = 0LL;
    *((_DWORD *)v10 + 3) = 0;
    *((_DWORD *)v10 + 1) = 44;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
    v11 = 0;
    *((_DWORD *)v10 + 3) = *((_QWORD *)this + 7) != 0LL;
    if ( v9 )
    {
      v12 = 0LL;
      do
      {
        v16 = (void *)-1LL;
        v13 = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C01A1C58)();
        OpenDwmHandle(
          *(PVOID *)(*((_QWORD *)this + 6) + 8 * (v12 + *((_QWORD *)this + 7))),
          v13,
          0xF0001u,
          v12 + *((_QWORD *)this + 7),
          v15,
          &v16);
        ++v11;
        *(_QWORD *)&v10[8 * v12 + 16] = v16;
        v12 = v11;
      }
      while ( v11 < v9 );
    }
    *((_QWORD *)this + 7) += v9;
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  return v7;
}
