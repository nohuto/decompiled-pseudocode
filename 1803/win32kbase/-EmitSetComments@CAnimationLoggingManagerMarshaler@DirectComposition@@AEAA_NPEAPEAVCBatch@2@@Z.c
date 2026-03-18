/*
 * XREFs of ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A0CC
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C014A5D0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C01478D8 (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetComments(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  char v6; // di
  __int64 v7; // r12
  _DWORD *v8; // r13
  int v9; // ecx
  struct DirectComposition::CBatch **v10; // rax
  unsigned __int64 v11; // r14
  char *v12; // rcx
  size_t v13; // r8
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 56);
  v4 = *((_DWORD *)this + 52);
  v6 = 1;
  if ( v2 < v4 )
  {
    v7 = v2;
    while ( 1 )
    {
      v8 = *(_DWORD **)(v7 * *((_QWORD *)this + 27) + *((_QWORD *)this + 23));
      v9 = 2 * v8[2];
      if ( ((2 * *((_BYTE *)v8 + 8)) & 3) != 0 )
        v9 += 4 - ((2 * *((_BYTE *)v8 + 8)) & 3);
      v10 = *a2;
      v11 = (unsigned int)(v9 + 20);
      LODWORD(Src) = v9 + 20;
      v16 = 4096LL - *((_QWORD *)v10[17] + 5);
      if ( v16 < v11 && (!DirectComposition::CBatch::AllocateNewFragment(a2, &v16) || v16 < v11) )
        break;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, v11, &v17);
      v12 = (char *)v17;
      *(_DWORD *)v17 = Src;
      *(_QWORD *)(v12 + 4) = 0LL;
      *(_QWORD *)(v12 + 12) = 0LL;
      *((_DWORD *)v12 + 1) = 15;
      *((_DWORD *)v12 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v12 + 3) = *v8;
      *((_DWORD *)v12 + 4) = v8[2];
      memmove(v12 + 20, v8 + 4, 2LL * *((_QWORD *)v8 + 1));
      Win32FreePool(*(_QWORD *)(v7 * *((_QWORD *)this + 27) + *((_QWORD *)this + 23)));
      v13 = *((_QWORD *)this + 27);
      Src = 0LL;
      memmove((void *)(*((_QWORD *)this + 23) + v13 * v2), &Src, v13);
      ++*((_DWORD *)this + 56);
      ++v2;
      ++v7;
      if ( v2 >= v4 )
        goto LABEL_11;
    }
    v6 = 0;
  }
LABEL_11:
  if ( *((_DWORD *)this + 56) == v4 )
  {
    v6 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 184),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 56) = 0;
  }
  return v6;
}
