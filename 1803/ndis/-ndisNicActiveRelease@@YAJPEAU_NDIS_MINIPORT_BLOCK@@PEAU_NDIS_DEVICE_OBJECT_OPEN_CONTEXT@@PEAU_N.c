/*
 * XREFs of ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C0073FB4
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0072814 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0072D50 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0074A60 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     McTemplateK0xqqq @ 0x1C00757FC (McTemplateK0xqqq.c)
 *     WPP_SF_DDL @ 0x1C0075A70 (WPP_SF_DDL.c)
 *     WPP_SF_DDLqdL @ 0x1C0075B94 (WPP_SF_DDLqdL.c)
 */

__int64 __fastcall ndisNicActiveRelease(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3)
{
  unsigned int v3; // ebx
  int active; // r12d
  _NDIS_MINIPORT_AOAC *AoAc; // rdi
  KIRQL v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  int v12; // ecx
  unsigned __int8 IsTempRefNeededAfterDeref; // r13

  v3 = 0;
  active = 0;
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_DDL(23LL, a2, HIWORD(*((_QWORD *)a3 + 1)), (*((_QWORD *)a3 + 1) >> 24) & 0xFFFFFFLL, *((_DWORD *)a3 + 4));
  AoAc = a1->AoAc;
  v9 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v10 = *((_DWORD *)a2 + 7);
  if ( v10 )
  {
    *((_DWORD *)a2 + 7) = v10 - 1;
    active = ndisAoAcActiveRefSubtract(AoAc, (enum _NDIS_PM_COMPONENT_ID)*((_DWORD *)a3 + 4), 1);
    IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref(AoAc);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      McTemplateK0xqqq(
        v12,
        (unsigned int)&NicActiveReleased,
        (_DWORD)a1 + 4032,
        *((_QWORD *)a3 + 1),
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        active);
    KeReleaseSpinLock(&AoAc->Lock, v9);
    if ( IsTempRefNeededAfterDeref )
      ndisSetTempRefTimer(a1, AoAc->DerefTimeoutMilliseconds);
  }
  else
  {
    v3 = -1073741675;
    KeReleaseSpinLock(&AoAc->Lock, v9);
  }
  if ( (unsigned __int8)byte_1C0099615 >= 4u )
    WPP_SF_DDLqdL(
      *((unsigned int *)a3 + 4),
      v11,
      HIWORD(*((_QWORD *)a3 + 1)),
      (*((_QWORD *)a3 + 1) >> 24) & 0xFFFFFFLL,
      *((_DWORD *)a3 + 4),
      a1,
      active,
      v3);
  return v3;
}
