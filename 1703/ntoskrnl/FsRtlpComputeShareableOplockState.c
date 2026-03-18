/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x140052820
 * Callers:
 *     FsRtlpCancelOplockRHIrp @ 0x140019134 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1400192B0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14004E3D0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockCleanup @ 0x1400507C0 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140051EF4 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140151410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E3B98 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048C37C (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlCheckUpperOplock @ 0x140585C60 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpComputeShareableOplockState(__int64 a1)
{
  int v1; // edx
  _QWORD *v2; // r9
  _QWORD *v3; // r8
  int v4; // ebx
  __int64 result; // rax
  int v6; // edx
  char v7; // r11
  char v8; // r10
  int v9; // edx
  int v10; // r8d
  __int64 *v11; // rdx

  v1 = *(_DWORD *)(a1 + 144);
  v2 = (_QWORD *)(a1 + 40);
  v3 = *(_QWORD **)(a1 + 40);
  v4 = v1 & 0x1010000;
  if ( v3 == (_QWORD *)(a1 + 40) )
  {
    if ( *(_QWORD *)(a1 + 56) == a1 + 56 )
    {
      result = a1 + 72;
      if ( *(_QWORD *)result == result )
      {
        v6 = v1 & 0x20 | 1;
        goto LABEL_6;
      }
    }
    if ( v3 == v2 )
      goto LABEL_19;
  }
  result = a1 + 56;
  if ( *(_QWORD *)result != result || (result = a1 + 72, *(_QWORD *)result != result) )
  {
    v6 = v1 & 0x20 | 0xB000;
    goto LABEL_6;
  }
  if ( v3 == v2 )
  {
LABEL_19:
    result = a1 + 56;
    if ( *(_QWORD *)result != result )
    {
      v6 = v1 & 0x20 | 0x3000;
      goto LABEL_6;
    }
    if ( v3 == v2 )
    {
      v10 = 0;
      *(_DWORD *)(a1 + 144) = v1 & 0x20 | 0x3000;
      v11 = *(__int64 **)(a1 + 72);
      if ( v11 != (__int64 *)(a1 + 72) )
      {
        while ( 1 )
        {
          if ( v10 )
          {
            result = v11[6] & 0xF00000;
            if ( (_DWORD)result != v10 )
              break;
          }
          v10 = v11[6] & 0xF00000;
          *(_DWORD *)(a1 + 144) |= v10;
          v11 = (__int64 *)*v11;
          if ( v11 == (__int64 *)(a1 + 72) )
            goto LABEL_7;
        }
        result = *(_DWORD *)(a1 + 144) & 0x20 | 0x3000u;
        *(_DWORD *)(a1 + 144) = result;
      }
      goto LABEL_7;
    }
  }
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    result = v3[2];
    if ( *(_DWORD *)(result + 24) == 590400 )
      break;
    v8 = 1;
    if ( v7 )
      goto LABEL_26;
LABEL_16:
    v3 = (_QWORD *)*v3;
    if ( v3 == v2 )
      goto LABEL_17;
  }
  v7 = 1;
LABEL_26:
  if ( !v8 )
    goto LABEL_16;
LABEL_17:
  v9 = v1 & 0x20;
  if ( v7 )
  {
    if ( v8 )
      v6 = v9 | 0x1010;
    else
      v6 = v9 | 0x1000;
  }
  else
  {
    v6 = v9 | 0x10;
  }
LABEL_6:
  *(_DWORD *)(a1 + 144) = v6;
LABEL_7:
  *(_DWORD *)(a1 + 144) |= v4;
  return result;
}
