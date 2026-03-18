/*
 * XREFs of Bulk_PrepareStage @ 0x1C002EC3C
 * Callers:
 *     Bulk_MappingLoop @ 0x1C002EB38 (Bulk_MappingLoop.c)
 * Callees:
 *     StageQueue_Release @ 0x1C0021F70 (StageQueue_Release.c)
 *     TR_AcquireSegments @ 0x1C00223E0 (TR_AcquireSegments.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1C0022E44 (TR_EnsureInputBufferForTrbs.c)
 *     TR_ReleaseSegments @ 0x1C002377C (TR_ReleaseSegments.c)
 *     Bulk_Stage_AcquireMdl @ 0x1C003013C (Bulk_Stage_AcquireMdl.c)
 *     Bulk_Stage_DetermineSize @ 0x1C00302CC (Bulk_Stage_DetermineSize.c)
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C0030390 (Bulk_Stage_EstimateRequiredSegments.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C003051C (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C00316F0 (Bulk_Transfer_CompleteCancelable.c)
 *     WPP_RECORDER_SF_DDDqqD @ 0x1C0032D3C (WPP_RECORDER_SF_DDDqqD.c)
 */

__int64 __fastcall Bulk_PrepareStage(__int64 a1)
{
  __int64 *v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rsi
  unsigned int v5; // ecx
  __int64 v6; // r15
  unsigned __int8 *v7; // rcx
  __int64 v8; // r9
  int v9; // eax
  int v10; // r8d
  __int64 v11; // r14
  __int64 v12; // r13
  unsigned int v14; // [rsp+90h] [rbp+8h] BYREF

  v1 = *(__int64 **)(a1 + 360);
  v3 = 0;
  v4 = *v1;
  switch ( *(_DWORD *)(*v1 + 76) )
  {
    case 1:
      v1[8] = *(_QWORD *)(v4 + 88) + *(unsigned int *)(v4 + 112);
      break;
    case 2:
      v1[8] = *(_QWORD *)(v4 + 88) + *(unsigned int *)(v4 + 112);
      v1[9] = *(_QWORD *)(v4 + 96);
      break;
    case 3:
      v5 = *(unsigned __int16 *)(*(_QWORD *)(v4 + 48) + 2LL);
      if ( (v5 <= 0x38 || v5 > 0x3A) && (int)Bulk_Stage_AcquireMdl(v1) < 0 )
        goto LABEL_7;
      break;
  }
  Bulk_Stage_DetermineSize(a1, v4, v1);
  Bulk_Stage_EstimateRequiredTrbs(v1);
  if ( *(_BYTE *)(a1 + 280) && (int)TR_EnsureInputBufferForTrbs(a1, *((_DWORD *)v1 + 21)) < 0 )
  {
LABEL_7:
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v6 = *v1;
    if ( *((_BYTE *)v1 + 44) )
    {
      IoFreeMdl((PMDL)v1[6]);
      v1[6] = 0LL;
      *((_BYTE *)v1 + 44) = 0;
    }
    v3 = 1;
    TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
    TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
    v7 = (unsigned __int8 *)(v6 + 128);
LABEL_10:
    StageQueue_Release(v7, (unsigned __int8 *)v1);
    if ( *(_DWORD *)(v4 + 120) == *(_DWORD *)(v4 + 116) )
    {
      LOBYTE(v8) = 1;
      Bulk_Transfer_CompleteCancelable(a1, v4, 3221229568LL, v8);
    }
    else
    {
      v3 = 4;
      *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 104);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    return v3;
  }
  Bulk_Stage_EstimateRequiredSegments(v1, &v14);
  if ( !v14 )
    return v3;
  v9 = TR_AcquireSegments(a1, v14, v1 + 1);
  if ( v9 != 259 )
  {
    if ( v9 >= 0 )
    {
      *(_DWORD *)(a1 + 332) = 0;
      return v3;
    }
    WPP_RECORDER_SF_DDDqqD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      v10,
      34);
    *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v12 = *v1;
    if ( *((_BYTE *)v1 + 44) )
    {
      IoFreeMdl((PMDL)v1[6]);
      v1[6] = 0LL;
      *((_BYTE *)v1 + 44) = 0;
    }
    v3 = 1;
    TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
    TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
    v7 = (unsigned __int8 *)(v12 + 128);
    goto LABEL_10;
  }
  WPP_RECORDER_SF_DDDqqD(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    v10,
    33);
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v11 = *v1;
  if ( *((_BYTE *)v1 + 44) )
  {
    IoFreeMdl((PMDL)v1[6]);
    v1[6] = 0LL;
    *((_BYTE *)v1 + 44) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v1 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v11 + 128), (unsigned __int8 *)v1);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 3;
}
