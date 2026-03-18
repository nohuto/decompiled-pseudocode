/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x140023F70
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140023680 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockCleanup @ 0x140024868 (FsRtlpOplockCleanup.c)
 *     FsRtlCheckOplockEx @ 0x140085CC0 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400868E0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140108A6C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401490F0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140154410 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401E7FC8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14049062C (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlCheckUpperOplock @ 0x1405EDDB0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpComputeShareableOplockState(__int64 a1)
{
  int v1; // edx
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  int v4; // ebx
  __int64 result; // rax
  int v6; // edx
  int v7; // r8d
  __int64 *v8; // rdx
  char v9; // r11
  char v10; // r10
  int v11; // edx

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
      goto LABEL_10;
  }
  result = a1 + 56;
  if ( *(_QWORD *)result != result || (result = a1 + 72, *(_QWORD *)result != result) )
  {
    v6 = v1 & 0x20 | 0xB000;
    goto LABEL_6;
  }
  if ( v3 == v2 )
  {
LABEL_10:
    result = a1 + 56;
    if ( *(_QWORD *)result != result )
    {
      v6 = v1 & 0x20 | 0x3000;
      goto LABEL_6;
    }
    if ( v3 == v2 )
    {
      v7 = 0;
      *(_DWORD *)(a1 + 144) = v1 & 0x20 | 0x3000;
      v8 = *(__int64 **)(a1 + 72);
      if ( v8 != (__int64 *)(a1 + 72) )
      {
        while ( 1 )
        {
          if ( v7 )
          {
            result = v8[6] & 0xF00000;
            if ( (_DWORD)result != v7 )
              break;
          }
          v7 = v8[6] & 0xF00000;
          *(_DWORD *)(a1 + 144) |= v7;
          v8 = (__int64 *)*v8;
          if ( v8 == (__int64 *)(a1 + 72) )
            goto LABEL_7;
        }
        result = *(_DWORD *)(a1 + 144) & 0x20 | 0x3000u;
        *(_DWORD *)(a1 + 144) = result;
      }
      goto LABEL_7;
    }
  }
  v9 = 0;
  v10 = 0;
  if ( v3 == v2 )
  {
LABEL_29:
    v6 = v1 & 0x20 | 0x10;
    goto LABEL_6;
  }
  do
  {
    result = v3[2];
    if ( *(_DWORD *)(result + 24) == 590400 )
    {
      v9 = 1;
    }
    else
    {
      v10 = 1;
      if ( !v9 )
        goto LABEL_24;
    }
    if ( v10 )
      break;
LABEL_24:
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != v2 );
  if ( !v9 )
    goto LABEL_29;
  v11 = v1 & 0x20;
  if ( v10 )
    v6 = v11 | 0x1010;
  else
    v6 = v11 | 0x1000;
LABEL_6:
  *(_DWORD *)(a1 + 144) = v6;
LABEL_7:
  *(_DWORD *)(a1 + 144) |= v4;
  return result;
}
