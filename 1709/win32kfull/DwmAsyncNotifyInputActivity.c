/*
 * XREFs of DwmAsyncNotifyInputActivity @ 0x1C010814C
 * Callers:
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyInputActivity(PVOID Object, int a2, __int64 a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  int v9; // ecx
  _QWORD v10[7]; // [rsp+20h] [rbp-68h] BYREF

  v6 = -1073741823;
  if ( Object && a3 )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 3670032;
    WORD2(v10[0]) = 0x8000;
    LODWORD(v10[5]) = 1073741912;
    HIDWORD(v10[5]) = a2;
    if ( (unsigned int)(a2 - 256) > 1 )
    {
      if ( (unsigned int)(a2 - 513) > 0xD )
        goto LABEL_5;
      v9 = 8707;
      if ( !_bittest(&v9, a2 - 513) )
        goto LABEL_5;
    }
    else
    {
      v7 = *(_QWORD *)(a3 + 16);
      if ( v7 > 0x28 || (unsigned int)v7 < 0x21 )
        goto LABEL_5;
      v10[6] = *(_QWORD *)(a3 + 16);
    }
    v6 = LpcRequestPort(Object, v10);
LABEL_5:
    ObfDereferenceObject(Object);
  }
  return v6;
}
