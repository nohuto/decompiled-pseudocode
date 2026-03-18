/*
 * XREFs of FsRtlpComputeShareableOplockState @ 0x140067F00
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1400655BC (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x140067180 (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140067600 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6F7C (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14014A828 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015D818 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140225758 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404E2ABC (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlCheckUpperOplock @ 0x140715180 (FsRtlCheckUpperOplock.c)
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
  int v6; // r8d
  __int64 *v7; // r9
  char v8; // r10
  char v9; // r11
  int v10; // edx

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
        v1 = v1 & 0x20 | 1;
        goto LABEL_6;
      }
    }
    if ( v3 == v2 )
      goto LABEL_10;
  }
  result = a1 + 56;
  if ( *(_QWORD *)result != result || (result = a1 + 72, *(_QWORD *)result != result) )
  {
    v1 = v1 & 0x20 | 0xB000;
    goto LABEL_6;
  }
  if ( v3 == v2 )
  {
LABEL_10:
    result = a1 + 56;
    if ( *(_QWORD *)result != result )
    {
LABEL_5:
      v1 = v1 & 0x20 | 0x3000;
      goto LABEL_6;
    }
    if ( v3 == v2 )
    {
      v6 = 0;
      v7 = *(__int64 **)(a1 + 72);
      v1 = v1 & 0x20 | 0x3000;
      *(_DWORD *)(a1 + 144) = v1;
      while ( v7 != (__int64 *)(a1 + 72) )
      {
        if ( v6 )
        {
          result = v7[6] & 0xF00000;
          if ( (_DWORD)result != v6 )
            goto LABEL_5;
        }
        v6 = v7[6] & 0xF00000;
        v1 = *(_DWORD *)(a1 + 144) | v6;
        *(_DWORD *)(a1 + 144) = v1;
        v7 = (__int64 *)*v7;
      }
      goto LABEL_7;
    }
  }
  v8 = 0;
  v9 = 0;
  do
  {
    result = v3[2];
    if ( *(_DWORD *)(result + 24) == 590400 )
    {
      v8 = 1;
    }
    else
    {
      v9 = 1;
      if ( !v8 )
        goto LABEL_27;
    }
    if ( v9 )
      break;
LABEL_27:
    v3 = (_QWORD *)*v3;
  }
  while ( v3 != v2 );
  if ( v8 && v9 )
  {
    v1 = v1 & 0x20 | 0x1010;
  }
  else
  {
    v10 = v1 & 0x20;
    if ( v8 )
      v1 = v10 | 0x1000;
    else
      v1 = v10 | 0x10;
  }
LABEL_6:
  *(_DWORD *)(a1 + 144) = v1;
LABEL_7:
  *(_DWORD *)(a1 + 144) = v4 | v1;
  return result;
}
