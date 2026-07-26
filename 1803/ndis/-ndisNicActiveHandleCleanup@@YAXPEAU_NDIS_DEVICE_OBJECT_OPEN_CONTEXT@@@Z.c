/*
 * XREFs of ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0024EFC
 * Callers:
 *     ndisDispatchRequest @ 0x1C00AC650 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001A448 (ndisReferenceMiniportByHandle.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0072814 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0074268 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0xqqq @ 0x1C00757FC (McTemplateK0xqqq.c)
 *     WPP_SF_qLd @ 0x1C0075C18 (WPP_SF_qLd.c)
 */

void __fastcall ndisNicActiveHandleCleanup(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v4; // al
  KIRQL v5; // bp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **v9; // rdx
  signed int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx

  v2 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 4);
  if ( *((_DWORD *)a1 + 6) && v2 && ndisReferenceMiniportByHandle(*((_NDIS_MINIPORT_BLOCK **)a1 + 4), 0) )
  {
    AoAc = v2->AoAc;
    v4 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    v5 = v4;
    if ( *((_QWORD *)a1 + 4) )
    {
      v8 = *((_QWORD *)a1 + 1);
      if ( *(struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)(v8 + 8) != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8)
        || (v9 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT **)*((_QWORD *)a1 + 2),
            *v9 != (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8)) )
      {
        __fastfail(3u);
      }
      *v9 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      --AoAc->HandleListCount;
      v10 = *((_DWORD *)a1 + 7);
      if ( v10 > 0 )
      {
        ndisAoAcActiveRefSubtract(AoAc, *((enum _NDIS_PM_COMPONENT_ID *)a1 + 6), v10);
        if ( (unsigned __int8)byte_1C0099615 >= 4u )
          WPP_SF_qLd(v12, v11, v2, *((unsigned int *)a1 + 6), AoAc->ActiveRef);
        if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
          McTemplateK0xqqq(
            v12,
            (unsigned int)&NicActiveReleased,
            (_DWORD)v2 + 4032,
            v2->NetLuid.Value,
            *((_DWORD *)a1 + 6),
            0,
            AoAc->ActiveRef);
      }
      KeReleaseSpinLock(&AoAc->Lock, v5);
      ndisNicQuietCheckRef(v2);
    }
    else
    {
      KeReleaseSpinLock(&AoAc->Lock, v4);
    }
    ndisDereferenceMiniport((__int64)v2, 3u, v6, v7);
  }
}
