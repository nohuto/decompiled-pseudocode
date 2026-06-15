/*
 * XREFs of ?SetPointersFromDescriptor@SpatialBlock@@AEAAXXZ @ 0x14005FC28
 * Callers:
 *     ?Create@SpatialBlock@@QEAAJPEAEIIIII@Z @ 0x14005E708 (-Create@SpatialBlock@@QEAAJPEAEIIIII@Z.c)
 *     ?Initialize@SpatialBlock@@QEAAJPEAEI@Z @ 0x14005F25C (-Initialize@SpatialBlock@@QEAAJPEAEI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SpatialBlock::SetPointersFromDescriptor(SpatialBlock *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // rdx

  v2 = *(_QWORD *)this + 28LL;
  *((_QWORD *)this + 1) = v2;
  v3 = v2 + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 8LL) * *(_DWORD *)(*(_QWORD *)this + 12LL));
  *((_QWORD *)this + 4) = v3;
  v4 = v3 + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 8LL) * *(_DWORD *)(*(_QWORD *)this + 12LL));
  *((_QWORD *)this + 2) = v4;
  *((_QWORD *)this + 5) = v4 + (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 8LL) * *(_DWORD *)(*(_QWORD *)this + 16LL));
  v5 = *(_QWORD *)this;
  v6 = *((_DWORD *)this + 10)
     + *(_DWORD *)(*(_QWORD *)this + 8LL) * *(_DWORD *)(*(_QWORD *)this + 16LL)
     - *(_QWORD *)this;
  if ( (v6 & 0x1F) != 0 )
    v6 += 32 - (v6 & 0x1F);
  v7 = v5 + v6;
  *((_QWORD *)this + 3) = v7;
  *((_QWORD *)this + 6) = v7 + (unsigned int)(*(_DWORD *)(v5 + 8) * *(_DWORD *)(v5 + 20));
}
