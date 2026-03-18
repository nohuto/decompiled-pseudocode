/*
 * XREFs of BiDeleteElement @ 0x14058A31C
 * Callers:
 *     PopBcdClearPendingResume @ 0x140589704 (PopBcdClearPendingResume.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406F82BC (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140737F54 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateBcdObject @ 0x1407386A8 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014CF2C (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _ultow_s @ 0x14016EFA0 (_ultow_s.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140265E54 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140578EEC (BiDeleteKey.c)
 *     BiOpenKey @ 0x14058B8B8 (BiOpenKey.c)
 *     BiCloseKey @ 0x14058BA28 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14058BC08 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14058BDB8 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14058BE10 (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x14058C1E4 (BiLogMessage.c)
 */

__int64 __fastcall BiDeleteElement(void *a1, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // r15
  __int64 result; // rax
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  HANDLE v12; // rdi
  int v13; // eax
  HANDLE Handle; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-48h] BYREF
  HANDLE v16; // [rsp+30h] [rbp-40h] BYREF
  wchar_t DstBuf[24]; // [rsp+38h] [rbp-38h] BYREF

  v15 = a2;
  LOBYTE(v4) = BiIsOfflineHandle((char)a1);
  v5 = v4;
  result = BiAcquireBcdSyncMutant(v4);
  if ( (int)result >= 0 )
  {
    BiLogMessage(2LL, L"Deleting element %08x", a2);
    Handle = 0LL;
    v16 = 0LL;
    v7 = BiOpenKey(a1, L"Elements", 131097LL, &Handle);
    v8 = v7;
    if ( v7 < 0 )
    {
      BiLogMessage(4LL, L"Failed to open key for all object's elements. Status: %x", (unsigned int)v7);
    }
    else if ( ultow_s(a2, DstBuf, 0x16uLL, 16) )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = BiOpenKey(Handle, DstBuf, 0x10000LL, &v16);
      if ( v10 >= 0 )
      {
        v12 = v16;
        v13 = BiDeleteKey((__int64)v16);
        v8 = v13;
        if ( v13 < 0 )
          BiLogMessage(4LL, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v13);
        else
          v12 = 0LL;
      }
      else
      {
        v11 = 4LL;
        if ( v10 == -1073741772 )
          v11 = 2LL;
        BiLogMessage(v11, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v10);
        v12 = v16;
        v8 = -1073741275;
      }
      if ( v12 )
        BiCloseKey(v12);
    }
    if ( Handle )
      BiCloseKey(Handle);
    if ( v8 >= 0 )
    {
      if ( (unsigned __int8)BiIsLinkedToFirmwareVariable(a1, &v15) )
        BiSetFirmwareModifiedFromObject(a1);
    }
    LOBYTE(v9) = v5;
    BiReleaseBcdSyncMutant(v9);
    return (unsigned int)v8;
  }
  return result;
}
