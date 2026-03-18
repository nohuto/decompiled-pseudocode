/*
 * XREFs of PopBcdEstablishResumeObject @ 0x1405899F4
 * Callers:
 *     PopAllocateHiberContext @ 0x14057AF78 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x1405A913C (PoInitHiberServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     BcdQueryObject @ 0x14058A484 (BcdQueryObject.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14058AC08 (PopBcdSetDefaultResumeObjectElements.c)
 *     BcdOpenObject @ 0x14058B110 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14058B28C (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     PopBcdRegenerateResumeObject @ 0x1406D5770 (PopBcdRegenerateResumeObject.c)
 */

__int64 __fastcall PopBcdEstablishResumeObject(__int64 a1, _QWORD *a2)
{
  HANDLE v3; // rbx
  int ElementDataWithFlags; // edi
  int v6; // r8d
  int v7; // eax
  int v8; // r8d
  int v10; // eax
  char v11; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-30h] BYREF
  int v14; // [rsp+44h] [rbp-2Ch]
  HANDLE v15; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-20h] BYREF

  Handle = 0LL;
  v3 = 0LL;
  v15 = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_CURRENT_BOOT_ENTRY, &Handle);
  if ( ElementDataWithFlags < 0 )
    goto LABEL_10;
  v13 = 16;
  ElementDataWithFlags = BcdGetElementDataWithFlags((_DWORD)Handle, 587202563, v6, (unsigned int)v16, (__int64)&v13);
  if ( ElementDataWithFlags >= 0 )
  {
    v7 = BcdOpenObject(a1, v16, &v15);
    v3 = v15;
    ElementDataWithFlags = v7;
    if ( v7 >= 0 )
    {
      ElementDataWithFlags = BcdQueryObject(v15, 1LL, &v13, 0LL);
      if ( ElementDataWithFlags >= 0 )
      {
        if ( (v14 & 0xF0000000) == 0x10000000 && (v14 & 0xF00000) == 0x200000 && (v14 & 0xFFFFF) == 4 )
        {
          v13 = 2;
          ElementDataWithFlags = BcdGetElementDataWithFlags(
                                   (_DWORD)v3,
                                   637534211,
                                   v8,
                                   (unsigned int)&v11,
                                   (__int64)&v13);
          if ( ElementDataWithFlags < 0 || !v11 )
            ElementDataWithFlags = PopBcdSetDefaultResumeObjectElements(v3, Handle);
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
    v10 = PopBcdRegenerateResumeObject(a1, Handle, &v15);
    v3 = v15;
    ElementDataWithFlags = v10;
  }
  if ( ElementDataWithFlags >= 0 )
    ElementDataWithFlags = 0;
  else
    v3 = 0LL;
LABEL_10:
  if ( Handle )
    BcdCloseObject(Handle);
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
