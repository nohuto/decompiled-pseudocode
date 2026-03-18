/*
 * XREFs of MiComputeProcessUserVa @ 0x14045EAE8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14045E2B4 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     MiCreateSystemWsles @ 0x14005C00C (MiCreateSystemWsles.c)
 *     MiSectionControlArea @ 0x1400A1610 (MiSectionControlArea.c)
 *     MiUpdateChargedWsles @ 0x1402159CC (MiUpdateChargedWsles.c)
 *     MiAllocateSharedUserVad @ 0x14045ECD0 (MiAllocateSharedUserVad.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 */

__int64 __fastcall MiComputeProcessUserVa(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned __int64 *a5)
{
  __int64 v5; // r15
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdx
  _QWORD *SharedUserVad; // rax
  _QWORD *v16; // rcx
  _QWORD *i; // rdx
  int v18; // r9d
  unsigned __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 result; // rax
  __int16 v24; // dx
  __int16 v25; // cx

  v5 = *(_QWORD *)(a1 + 1296);
  *(_QWORD *)(a1 + 1152) = 0x7FFFFFFF0000LL;
  v10 = 4LL;
  *a5 = 0LL;
  v11 = (_QWORD *)(v5 + 168);
  do
  {
    v11[1] = v11;
    *v11 = v11;
    v11 += 2;
    --v10;
  }
  while ( v10 );
  v12 = 0x7FF5FFFFF000LL;
  *(_QWORD *)(v5 + 40) = 0x7FF5FFFFF000LL;
  v13 = 0LL;
  if ( (*(_BYTE *)(a1 + 1740) & 1) != 0 )
    v12 = 0x7FFFFFFE0000LL;
  *(_QWORD *)(v5 + 40) = v12;
  if ( !(unsigned int)MiCreateSystemWsles() && (*(_DWORD *)(a1 + 1740) & 1) == 0 )
  {
    v13 = v14;
    result = MiChargeFullProcessCommitment(a1, v14);
    if ( (int)result < 0 )
      return result;
    MiUpdateChargedWsles(a1 + 1280);
  }
  if ( a2 || (*(_DWORD *)(a1 + 1740) & 1) != 0 )
  {
LABEL_12:
    v18 = 1;
    v19 = 0LL;
    if ( a2 || !a3 || (*(_DWORD *)(a3 + 56) & 0x20) == 0 || (*(_DWORD *)(a1 + 772) & 0x20000) != 0 )
    {
LABEL_21:
      if ( dword_140400124 )
      {
        if ( v18 == 1 )
          _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x200000u);
      }
      *a5 = v19;
      return 0LL;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)MiSectionControlArea(a3) + 56LL) + 44LL) & 0x20) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 1064);
      if ( v20 )
      {
        v25 = *(_WORD *)(v20 + 8);
        if ( v25 == 332 || v25 == 452 )
        {
          v19 = 0x100000000LL;
          _InterlockedOr((volatile signed __int32 *)(a1 + 772), 0x200u);
          v21 = 0x10000LL;
LABEL_19:
          v22 = *(_QWORD *)(a1 + 1064);
          if ( v22 )
          {
            v24 = *(_WORD *)(v22 + 8);
            if ( v24 == 332 || v24 == 452 )
              v19 -= 0x10000LL;
          }
          if ( v19 )
          {
            *(_QWORD *)(a1 + 1152) = v19;
            *(_QWORD *)(v5 + 40) = v19 - v21;
            if ( v19 <= 0x80000000 )
              v18 = 0;
          }
          goto LABEL_21;
        }
      }
    }
    else
    {
      v19 = 0x80000000LL;
    }
    v21 = 0LL;
    goto LABEL_19;
  }
  SharedUserVad = (_QWORD *)MiAllocateSharedUserVad();
  v16 = SharedUserVad;
  if ( SharedUserVad )
  {
    for ( i = SharedUserVad; ; i = SharedUserVad )
    {
      SharedUserVad = (_QWORD *)*SharedUserVad;
      if ( !SharedUserVad )
        break;
    }
    *i = *a4;
    *a4 = v16;
    goto LABEL_12;
  }
  if ( v13 )
  {
    MiUpdateChargedWsles(a1 + 1280);
    MiReturnFullProcessCommitment(a1, v13);
  }
  return 3221225495LL;
}
