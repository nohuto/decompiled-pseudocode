/*
 * XREFs of MiUnmapViewOfSection @ 0x14047B340
 * Callers:
 *     MmUnmapViewOfSection @ 0x140479E90 (MmUnmapViewOfSection.c)
 *     AlpcViewDestroyProcedure @ 0x14047A980 (AlpcViewDestroyProcedure.c)
 *     NtUnmapViewOfSectionEx @ 0x14047B280 (NtUnmapViewOfSectionEx.c)
 *     MiUnmapImageInSystemSpace @ 0x1404974E0 (MiUnmapImageInSystemSpace.c)
 *     MiMapViewOfSection @ 0x1405198A0 (MiMapViewOfSection.c)
 *     NtMapCMFModule @ 0x140568920 (NtMapCMFModule.c)
 *     PsShutdownSystem @ 0x1406E2814 (PsShutdownSystem.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140096AD0 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140096B20 (MiReferenceControlAreaFile.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVad @ 0x1400BDAC0 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1400CE4E0 (MiUnlockAndDereferenceVad.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     DbgkUnMapViewOfSection @ 0x140479FC0 (DbgkUnMapViewOfSection.c)
 *     MiUnmapVad @ 0x14047B5C0 (MiUnmapVad.c)
 *     MiCheckSecuredVad @ 0x14047B694 (MiCheckSecuredVad.c)
 *     PerfLogImageUnload @ 0x1404F9690 (PerfLogImageUnload.c)
 */

__int64 __fastcall MiUnmapViewOfSection(_KPROCESS *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v6; // r14d
  unsigned int *v8; // rax
  unsigned int *v9; // rbx
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r10
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  int v17; // esi
  __int64 *v19; // rsi
  unsigned __int64 v20; // r12
  unsigned int v21; // r8d
  int v22; // edx
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // [rsp+50h] [rbp-78h] BYREF
  $5BC46E0569261879018906DEC3127961 v26; // [rsp+58h] [rbp-70h] BYREF

  v3 = 0LL;
  v6 = 0;
  if ( KeGetCurrentThread()->ApcState.Process != a1 )
  {
    KiStackAttachProcess(a1, 0, (__int64)&v26);
    v6 = 1;
  }
  v8 = MiObtainReferencedVad(a2, &v25);
  v9 = v8;
  if ( v8 )
  {
    v10 = v8[12];
    if ( (v10 & 0x8000) != 0 )
    {
      v17 = -1073741799;
LABEL_30:
      MiUnlockAndDereferenceVad((char *)v9);
      goto LABEL_11;
    }
    v11 = *((unsigned __int8 *)v8 + 32);
    v12 = v8[6];
    v13 = (v12 | (v11 << 32)) << 12;
    v14 = v8[7];
    if ( (v10 & 7) == 2 )
      v3 = (v12 | (v11 << 32)) << 12;
    v15 = v12 | (v11 << 32);
    v16 = ((v14 | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) - v15 + 1) << 12;
    if ( (v10 & 0x4000) != 0 )
    {
      v17 = MiCheckSecuredVad(
              v9,
              v13,
              ((v14 | ((unsigned __int64)*((unsigned __int8 *)v9 + 33) << 32)) - v15 + 1) << 12,
              85LL);
      if ( v17 < 0 )
        goto LABEL_30;
    }
    if ( (PerfGlobalGroupMask & 4) != 0 )
    {
      if ( v3 )
      {
        if ( a1[1].Header.WaitListHead.Flink )
        {
          if ( a1 != PsInitialSystemProcess && (v9[12] & 0xF8) == 0x38 )
          {
            v19 = (__int64 *)**((_QWORD **)v9 + 9);
            if ( v19 )
            {
              if ( v19[8] )
              {
                v25 = *v19;
                v20 = MiReferenceControlAreaFile((__int64)v19);
                if ( (v9[16] & 0x8000000) != 0 )
                {
                  v21 = 0;
                  v22 = 0;
                }
                else
                {
                  v23 = *(unsigned __int8 *)(v25 + 15);
                  v24 = v23 >> 1;
                  v21 = v23 >> 4;
                  v22 = v24 & 7;
                }
                PerfLogImageUnload(
                  v20 + 88,
                  v20,
                  a1[1].Header.WaitListHead.Flink,
                  v3,
                  v16,
                  *(_DWORD *)(*(_QWORD *)(v25 + 56) + 60LL),
                  v21,
                  v22,
                  1);
                MiDereferenceControlAreaFile((__int64)v19, v20);
              }
            }
          }
        }
      }
    }
    MiUnmapVad(v9, a3);
    v17 = 0;
  }
  else
  {
    v17 = v25;
    if ( (_DWORD)v25 == -1073741664 )
      v17 = -1073741799;
  }
LABEL_11:
  if ( v6 == 1 )
    KiUnstackDetachProcess(&v26, 0LL);
  if ( v3 )
    DbgkUnMapViewOfSection(a1);
  return (unsigned int)v17;
}
