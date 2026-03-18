/*
 * XREFs of SepMakeLogonSessionsSiblings @ 0x1406F764C
 * Callers:
 *     SepRmMakeLogonSessionsSiblingsWrkr @ 0x1406F7940 (SepRmMakeLogonSessionsSiblingsWrkr.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     PsGetCurrentServerSilo @ 0x140094960 (PsGetCurrentServerSilo.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SepMakeLogonSessionsSiblings(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // r9
  int v5; // ebx
  int v7; // edi
  __int64 **v8; // rbp
  __int64 **v9; // rsi
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v11; // r13
  struct _KTHREAD *v12; // rax
  struct _ERESOURCE *v13; // rcx
  struct _KTHREAD *v14; // rax
  __int64 *v15; // rdi
  unsigned int v16; // esi
  __int64 *i; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  struct _ERESOURCE *Resource; // [rsp+50h] [rbp+8h]

  v2 = *a2 & 0xF;
  v4 = *a1 & 0xF;
  v5 = *a2 & 0xF;
  v7 = *a1 & 0xF;
  v8 = (__int64 **)(SepLogonSessions + 8 * v2);
  v9 = (__int64 **)(SepLogonSessions + 8 * v4);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (unsigned int)v4 >= (unsigned int)v2 )
  {
    Resource = &SepRmDbLock + (v5 & 3);
    ExAcquireResourceExclusiveLite(Resource, 1u);
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    v11 = &SepRmDbLock + (v7 & 3);
    v13 = v11;
  }
  else
  {
    v11 = &SepRmDbLock + (v7 & 3);
    ExAcquireResourceExclusiveLite(v11, 1u);
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    Resource = &SepRmDbLock + (v5 & 3);
    v13 = Resource;
  }
  ExAcquireResourceExclusiveLite(v13, 1u);
  v15 = *v9;
  v16 = 0;
  while ( v15 && (v15[20] != PsGetCurrentServerSilo() || *a1 != *((_DWORD *)v15 + 2) || a1[1] != *((_DWORD *)v15 + 3)) )
    v15 = (__int64 *)*v15;
  for ( i = *v8;
        i && (i[20] != PsGetCurrentServerSilo() || *a2 != *((_DWORD *)i + 2) || a2[1] != *((_DWORD *)i + 3));
        i = (__int64 *)*i )
  {
    ;
  }
  if ( v15 && i )
  {
    v18 = *(_QWORD *)a2;
    *((_DWORD *)v15 + 8) |= 0x40u;
    v15[21] = v18;
    v19 = *(_QWORD *)a1;
    *((_DWORD *)i + 8) |= 0x40u;
    i[21] = v19;
  }
  else
  {
    v16 = -1073741729;
  }
  ExReleaseResourceLite(v11);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  ExReleaseResourceLite(Resource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v16;
}
