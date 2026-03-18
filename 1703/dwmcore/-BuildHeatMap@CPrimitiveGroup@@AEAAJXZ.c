/*
 * XREFs of ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x180165E28
 * Callers:
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x18000B568 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x18004C5A8 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x18004C3B0 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800AEB10 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildHeatMap(CPrimitiveGroup *this)
{
  unsigned int v1; // edi
  unsigned int v3; // esi
  _QWORD *v4; // r14
  int v5; // eax
  void *v6; // rax
  _QWORD *v7; // r15
  int v8; // eax
  void *v9; // rax
  unsigned int v10; // ebp
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx

  v1 = 0;
  v3 = 0;
  CPrimitiveGroup::ReleaseHeatMap(this);
  if ( *((_QWORD *)this + 47) && *((_QWORD *)this + 49) )
  {
    v4 = (_QWORD *)((char *)this + 544);
    v5 = CD2DSharedBuffer::CreateFromHeap(
           *((unsigned int *)this + 96),
           (struct ID2D1PrivateCompositorBuffer **)this + 68);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x654u);
    }
    else
    {
      v6 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
      memcpy_0(v6, *((const void **)this + 47), *((_QWORD *)this + 48));
      v7 = (_QWORD *)((char *)this + 552);
      v8 = CD2DSharedBuffer::CreateFromHeap(
             *((unsigned int *)this + 100),
             (struct ID2D1PrivateCompositorBuffer **)this + 69);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x659u);
      }
      else
      {
        v9 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7);
        memcpy_0(v9, *((const void **)this + 49), *((_QWORD *)this + 50));
        v10 = 0;
        v11 = *((_QWORD *)this + 48);
        v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
        while ( v10 + 144 <= (unsigned int)v11 )
        {
          v13 = v10;
          v10 += 144;
          v14 = (_DWORD *)(v12 + v13);
          v14[1] &= ~0x10u;
          v14[2] = -1;
          v14[3] = 0;
          v14[10] = -1;
          v14[14] = -1;
        }
        v15 = *((_QWORD *)this + 50);
        v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7);
        while ( v1 + 148 <= (unsigned int)v15 )
        {
          v17 = v1;
          v1 += 148;
          *(_OWORD *)(v17 + v16 + 48) = *((_OWORD *)this + 33);
          *(_DWORD *)(v17 + v16 + 144) = -1;
        }
      }
    }
  }
  return v3;
}
