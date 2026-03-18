/*
 * XREFs of PopBcdEstablishResumeObject @ 0x1405AE3A8
 * Callers:
 *     PoInitHiberServices @ 0x1405AD774 (PoInitHiberServices.c)
 *     PopAllocateHiberContext @ 0x1406FAC78 (PopAllocateHiberContext.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x1405AE960 (BcdQueryObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1405AEE54 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdOpenObject @ 0x1405AF35C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1405AF4D8 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x1405AF8C8 (BcdGetElementDataWithFlags.c)
 *     PopBcdRegenerateResumeObject @ 0x14070B380 (PopBcdRegenerateResumeObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  int ElementDataWithFlags; // edi
  int v6; // r8d
  int v7; // eax
  int v8; // r8d
  int v10; // eax
  char v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch]
  __int64 v15; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-20h] BYREF

  v12 = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY, &v12);
  if ( ElementDataWithFlags < 0 )
    goto LABEL_10;
  v13 = 16;
  ElementDataWithFlags = BcdGetElementDataWithFlags(v12, 587202563, v6, (unsigned int)v16, (__int64)&v13);
  if ( ElementDataWithFlags >= 0 )
  {
    v7 = BcdOpenObject(a1, v16, &v15);
    v3 = v15;
    ElementDataWithFlags = v7;
    if ( v7 >= 0 )
    {
      ElementDataWithFlags = BcdQueryObject(v15, 1LL, &v13);
      if ( ElementDataWithFlags >= 0 )
      {
        if ( (v14 & 0xF0000000) == 0x10000000 && (v14 & 0xF00000) == 0x200000 && (v14 & 0xFFFFF) == 4 )
        {
          v13 = 2;
          ElementDataWithFlags = BcdGetElementDataWithFlags(v3, 637534211, v8, (unsigned int)&v11, (__int64)&v13);
          if ( ElementDataWithFlags < 0 || !v11 )
            ElementDataWithFlags = PopBcdSetDefaultResumeObjectElements(v3, v12);
          goto LABEL_10;
        }
        ElementDataWithFlags = -1073741275;
      }
    }
    if ( v3 )
    {
      BcdCloseObject(v3);
      v3 = 0LL;
      v15 = 0LL;
    }
  }
  if ( !InitIsWinPEMode )
  {
    v10 = PopBcdRegenerateResumeObject(a1, v12, &v15);
    v3 = v15;
    ElementDataWithFlags = v10;
  }
  if ( ElementDataWithFlags >= 0 )
    ElementDataWithFlags = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( v12 )
    BcdCloseObject(v12);
  if ( ElementDataWithFlags < 0 )
  {
    if ( !v3 )
      return (unsigned int)ElementDataWithFlags;
  }
  else if ( a2 )
  {
    *a2 = v3;
    return (unsigned int)ElementDataWithFlags;
  }
  BcdCloseObject(v3);
  return (unsigned int)ElementDataWithFlags;
}
