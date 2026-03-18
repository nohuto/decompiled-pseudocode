/*
 * XREFs of BiDeleteElement @ 0x1405AE6E4
 * Callers:
 *     PopBcdClearPendingResume @ 0x1405ADF4C (PopBcdClearPendingResume.c)
 *     BcdSetElementDataWithFlags @ 0x1405AF6E8 (BcdSetElementDataWithFlags.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x14072FE94 (SepSecureBootUpdateBcdDataForRule.c)
 *     BiHandleFirmwareDefaultEntry @ 0x14077C5C4 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateBcdObject @ 0x14077CE20 (BiUpdateBcdObject.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140134AD0 (BiIsOfflineHandle.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _ultow_s @ 0x1401637A0 (_ultow_s.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140290148 (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenKey @ 0x1405AFAF8 (BiOpenKey.c)
 *     BiCloseKey @ 0x1405AFC68 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1405AFE48 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1405AFFF8 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x1405B025C (BiIsLinkedToFirmwareVariable.c)
 *     BiLogMessage @ 0x1405B05D0 (BiLogMessage.c)
 *     BiDeleteKey @ 0x140779740 (BiDeleteKey.c)
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
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-48h] BYREF
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  wchar_t DstBuf[24]; // [rsp+38h] [rbp-38h] BYREF

  v15 = a2;
  LOBYTE(v4) = BiIsOfflineHandle((char)a1);
  v5 = v4;
  result = BiAcquireBcdSyncMutant(v4);
  if ( (int)result >= 0 )
  {
    BiLogMessage(2LL, L"Deleting element %08x", a2);
    v14 = 0LL;
    v16 = 0LL;
    v7 = BiOpenKey(a1, L"Elements", 131097LL, &v14);
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
      v10 = BiOpenKey(v14, DstBuf, 0x10000LL, &v16);
      if ( v10 >= 0 )
      {
        v12 = v16;
        v13 = BiDeleteKey(v16);
        v8 = v13;
        if ( v13 >= 0 )
          v12 = 0LL;
        else
          BiLogMessage(4LL, L"Failed to open element %ws key for delete. Status: %x", DstBuf, (unsigned int)v13);
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
    if ( v14 )
      BiCloseKey(v14);
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
