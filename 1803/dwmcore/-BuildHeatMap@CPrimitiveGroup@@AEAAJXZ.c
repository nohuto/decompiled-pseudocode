/*
 * XREFs of ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x18019E698
 * Callers:
 *     ?ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ @ 0x1800977B8 (-ProcessHeatMapChanges@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x180097C88 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18006FE30 (-CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x180097788 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::BuildHeatMap(CPrimitiveGroup *this)
{
  int v1; // edi
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
  unsigned int v13; // edx
  __int64 v14; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int v19; // r8d
  __int64 v20; // rcx

  v1 = 0;
  v3 = 0;
  CPrimitiveGroup::ReleaseHeatMap(this);
  if ( *((_QWORD *)this + 63) && *((_QWORD *)this + 65) )
  {
    v4 = (_QWORD *)((char *)this + 672);
    v5 = CD2DSharedBuffer::CreateFromHeap(
           *((unsigned int *)this + 128),
           (struct ID2D1PrivateCompositorBuffer **)this + 84);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x615u);
    }
    else
    {
      v6 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
      memcpy_0(v6, *((const void **)this + 63), *((_QWORD *)this + 64));
      v7 = (_QWORD *)((char *)this + 680);
      v8 = CD2DSharedBuffer::CreateFromHeap(
             *((unsigned int *)this + 132),
             (struct ID2D1PrivateCompositorBuffer **)this + 85);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x61Au);
      }
      else
      {
        v9 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7);
        memcpy_0(v9, *((const void **)this + 65), *((_QWORD *)this + 66));
        v10 = 0;
        v11 = *((_QWORD *)this + 64);
        v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 24LL))(*v4);
        v13 = 0;
        while ( 1 )
        {
          v10 += 144;
          if ( v13 + 144 > (unsigned int)v11 )
            break;
          v14 = v13;
          v13 = v10;
          v15 = (_DWORD *)(v12 + v14);
          v15[1] &= ~0x10u;
          v15[2] = -1;
          v15[3] = 0;
          v15[10] = -1;
          v15[14] = -1;
        }
        v16 = *((_QWORD *)this + 66);
        v17 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 24LL))(*v7);
        v18 = 0;
        while ( 1 )
        {
          v19 = v1 + 148;
          if ( v18 + 148 > (unsigned int)v16 )
            break;
          v20 = v18;
          v1 += 148;
          v18 = v19;
          *(_OWORD *)(v20 + v17 + 48) = *((_OWORD *)this + 41);
          *(_DWORD *)(v20 + v17 + 144) = -1;
        }
      }
    }
  }
  return v3;
}
