/*
 * XREFs of ?AddMITUserModeHandleEntry@IOCPDispatcher@@IEAA_NPEAX00PEAPEAU_MITUserModeHandleEntry@@@Z @ 0x1C004C7D0
 * Callers:
 *     ?PrepareUserHandleForIOCP@IOCPDispatcher@@QEAAJIPEAPEAXPEAU_MITIocpContext@@@Z @ 0x1C004CC90 (-PrepareUserHandleForIOCP@IOCPDispatcher@@QEAAJIPEAPEAXPEAU_MITIocpContext@@@Z.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
 */

bool __fastcall IOCPDispatcher::AddMITUserModeHandleEntry(
        IOCPDispatcher *this,
        void *a2,
        void *a3,
        void *a4,
        struct _MITUserModeHandleEntry **a5)
{
  struct _MITUserModeHandleEntry *inserted; // rax
  _QWORD Buffer[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int8 NewElement; // [rsp+60h] [rbp+8h] BYREF

  memset(Buffer, 0, 0x28uLL);
  NewElement = 0;
  Buffer[1] = a2;
  Buffer[0] = a4;
  Buffer[2] = a3;
  inserted = (struct _MITUserModeHandleEntry *)RtlInsertElementGenericTableAvl(
                                                 (PRTL_AVL_TABLE)((char *)this + 2584),
                                                 Buffer,
                                                 0x28u,
                                                 &NewElement);
  *a5 = inserted;
  return inserted && NewElement;
}
