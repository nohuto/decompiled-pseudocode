/*
 * XREFs of CmpGetOrCreateContextForSiloNoRef @ 0x1405BFDE4
 * Callers:
 *     CmInitServerSiloState @ 0x1405BFC38 (CmInitServerSiloState.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     PsGetPermanentSiloContext @ 0x140103440 (PsGetPermanentSiloContext.c)
 *     PsInsertPermanentSiloContextEx @ 0x1405BFEB8 (PsInsertPermanentSiloContextEx.c)
 *     CmpAllocateSiloContext @ 0x1405C00E0 (CmpAllocateSiloContext.c)
 */

__int64 __fastcall CmpGetOrCreateContextForSiloNoRef(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  PVOID v5; // rdi
  int inserted; // ebx
  unsigned __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v8 = 0LL;
  PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v8);
  if ( v8 )
  {
    inserted = 0;
    *a2 = v8;
    return (unsigned int)inserted;
  }
  v4 = CmpAllocateSiloContext(a1, &Object);
  v5 = Object;
  inserted = v4;
  if ( v4 >= 0 )
  {
    inserted = PsInsertPermanentSiloContextEx(a1, (unsigned int)CmpSiloContextSlot, Object, 0LL);
    if ( inserted >= 0 )
      inserted = 0;
    if ( inserted == -1073741637 )
    {
      v8 = 0LL;
      PsGetPermanentSiloContext(a1, CmpSiloContextSlot, &v8);
      *a2 = v8;
    }
    else
    {
      if ( inserted < 0 )
        goto LABEL_9;
      *a2 = v5;
    }
    inserted = 0;
  }
LABEL_9:
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x20314D43u);
  return (unsigned int)inserted;
}
